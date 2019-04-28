package;

import flixel.math.FlxMath;
import flixel.math.FlxAngle;
import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.math.FlxVector;
import flixel.util.FlxTimer;
import flixel.system.FlxSound;

class Survivor extends Entity {
    var _bullets:FlxTypedGroup<Bullet>;
    var _velocity:FlxVector = new FlxVector();
    var _shootTimer = new FlxTimer();
    static var PLAYER_SPEED = 1.25;
    static var BULLET_SPEED = 2048;
    static var FIRE_RATE_MAP = [
        PlayState.WEAPON_PISTOL => 1 / 7,
        PlayState.WEAPON_RIFLE => 1 / 11.1
    ];
    public var itemQtdMap:Map<Int, Int> = [
        PlayState.WEAPON_PISTOL => 30
    ];

    // Stamina (for running)
    var _stamina:Int = 10;
    var _staminaTimer = new FlxTimer();

    // Inventory
    public var money:Float = 0.0;
    public var inventoryList:Array<Int> = [PlayState.WEAPON_PISTOL];    
    
	 // Sound effects
	 var _sndPistolShot:FlxSound;

    public function new(x:Int, y:Int, bullets:FlxTypedGroup<Bullet>) {
        super(x, y);
        health = 10;
        
        loadGraphic(AssetPaths.survivor__png, true, 258, 220);

        setGraphicSize(24, 24);
        updateHitbox();

        animation.add("movingHandgun", [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19], 16, true);
        animation.play("movingHandgun");

        _bullets = bullets;
        giveInitialBullets();
        
		_sndPistolShot = FlxG.sound.load(AssetPaths.pistol_shot__wav);

        _velocity.x = 0;
        _velocity.y = 0;

        givePistolAmmoPeriodically();
        restoreHealthPeriodically();
        restoreStaminaPeriodically();
    }

    override public function update(elapsed:Float):Void	{
		super.update(elapsed);
        checkInputs();
        lookAtMousePointer();
	}

    override public function onMessage(m:Message):Void {
        if(m.op == Message.OP_DAMAGE){
            hurt(m.data);
        }
    }

    function giveInitialBullets() {
        for(i in 0...100){
            var s = new Bullet();
            s.kill();
            _bullets.add(s);
        }
    }

    function lookAtMousePointer() {
        angle = FlxAngle.angleBetweenMouse(this, true);
    }

    function checkInputs() {
        // Movement
        playerMovementInput();

        // Combat
        if(FlxG.mouse.justPressed) {
            shoot();
        }
        if(FlxG.mouse.pressed) {
            if(inventoryList[PlayState.currentInventorySelectedItem] == PlayState.WEAPON_RIFLE) shoot();
        }

        // Inventory
        updateInventorySelectedItem();
    }

    function playerMovementInput() {
        if(FlxG.keys.pressed.A && x > 0){
            x -= PLAYER_SPEED;
        }
        if(FlxG.keys.pressed.D && x < FlxG.width - width){
            x += PLAYER_SPEED;
        }
        if(FlxG.keys.pressed.W && y > 0){
            y -= PLAYER_SPEED;
        }
        if(FlxG.keys.pressed.S && y < FlxG.height - height){
            y += PLAYER_SPEED;
        }
        if(FlxG.keys.pressed.SHIFT) {
            run();
        } else {
            PLAYER_SPEED = 1.25;
        }
    }

    function run() {
        if(_stamina > 0) PLAYER_SPEED = 2;
        else PLAYER_SPEED = 1.25;

        if(_staminaTimer.active) return;
        _staminaTimer.start(0.25);
        if(_stamina > 0) _stamina--;
    }

    function shoot() {
        if(_shootTimer.active) return;
        if(HUD.isItemStoreOpen) return;
        
        if(inventoryList[PlayState.currentInventorySelectedItem] == PlayState.WEAPON_PISTOL ||
            inventoryList[PlayState.currentInventorySelectedItem] == PlayState.WEAPON_RIFLE) {
                if(itemQtdMap.get(inventoryList[PlayState.currentInventorySelectedItem]) <= 0) return;
                itemQtdMap.set(inventoryList[PlayState.currentInventorySelectedItem], itemQtdMap.get(inventoryList[PlayState.currentInventorySelectedItem])-1);

                _shootTimer.start(FIRE_RATE_MAP.get(inventoryList[PlayState.currentInventorySelectedItem]));

                _velocity.x = FlxG.mouse.x - x;
                _velocity.y = FlxG.mouse.y - y;
                _velocity.normalize();
                _velocity.scale(BULLET_SPEED);
                
                var bullet = _bullets.getFirstAvailable();
                bullet.reset(getMidpoint().x, getMidpoint().y);
                bullet.velocity.x = _velocity.x;
                bullet.velocity.y = _velocity.y;

                _sndPistolShot.volume = 0.4;
                _sndPistolShot.play(true);
                
                return;
            }
            
        if(inventoryList[PlayState.currentInventorySelectedItem] == PlayState.LAND_MINE) {
            if(itemQtdMap.get(inventoryList[PlayState.currentInventorySelectedItem]) <= 0) return;
            itemQtdMap.set(inventoryList[PlayState.currentInventorySelectedItem], itemQtdMap.get(inventoryList[PlayState.currentInventorySelectedItem])-1);
            FlxG.state.add(new LandMine(FlxG.mouse.x, FlxG.mouse.y));
            return;
        }
    }
    
    function updateInventorySelectedItem() {
        if(FlxG.keys.justPressed.ONE) {
            PlayState.currentInventorySelectedItem = 0;
            PlayState._hud.updateInventory();
        }
        if(FlxG.keys.justPressed.TWO) {
            PlayState.currentInventorySelectedItem = 1;
            PlayState._hud.updateInventory();
        }
        if(FlxG.keys.justPressed.THREE) {
            PlayState.currentInventorySelectedItem = 2;
            PlayState._hud.updateInventory();
        }
        if(FlxG.keys.justPressed.FOUR) {
            PlayState.currentInventorySelectedItem = 3;
            PlayState._hud.updateInventory();
        }
        if(FlxG.keys.justPressed.FIVE) {
            PlayState.currentInventorySelectedItem = 4;
            PlayState._hud.updateInventory();
        }
    }

    function givePistolAmmoPeriodically() {
		new FlxTimer().start(1.5, function(deltaTime:FlxTimer){
            if(itemQtdMap.get(PlayState.WEAPON_PISTOL) < 30 && alive){
                itemQtdMap.set(PlayState.WEAPON_PISTOL, itemQtdMap.get(PlayState.WEAPON_PISTOL) + 1);
            }
        }, 0);
    }

    function restoreHealthPeriodically() {
		new FlxTimer().start(5, function(deltaTime:FlxTimer){
            if(health < 10 && alive) health++;
        }, 0);
    }

    function restoreStaminaPeriodically() {
		new FlxTimer().start(2.5, function(deltaTime:FlxTimer){
            if(_stamina < 10 && alive) _stamina++;
        }, 0);
    }
}