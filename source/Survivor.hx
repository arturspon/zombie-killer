package;

import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.math.FlxVector;
import flixel.util.FlxTimer;
import flixel.system.FlxSound;

class Survivor extends Entity {
    var _bullets:FlxTypedGroup<Bullet>;
    var _velocity:FlxVector = new FlxVector();
    var _shootTimer = new FlxTimer();
    static var PLAYER_SPEED = 1.5;
    static var BULLET_SPEED = 2048;
    static var FIRE_RATE_MAP = [
        PlayState.WEAPON_PISTOL => 1 / 5,
        PlayState.WEAPON_RIFLE => 1 / 11.1
    ];

    public var money:Float = 100.0;
    
	 // Sound effects
	 var _sndPistolShot:FlxSound;

    public function new(x:Int, y:Int, bullets:FlxTypedGroup<Bullet>) {
        super(x, y);
        health = 10;
        makeGraphic(12, 12, 0xFFFFFFFF);
        /*loadGraphic(AssetPaths.kkkk__png, true, 258, 220);
        animation.add("move", [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19], 15, true);
        animation.play("move");*/

        setSize(12, 12);

        _bullets = bullets;
        giveInitialBullets();
        
		_sndPistolShot = FlxG.sound.load(AssetPaths.pistol_shot__wav);

        _velocity.x = 0;
        _velocity.y = 0;
    }

    override public function update(elapsed:Float):Void	{
		super.update(elapsed);
        checkInputs();
	}

    function giveInitialBullets() {
        for(i in 0...200){
            var s = new Bullet();
            s.kill();
            _bullets.add(s);
        }
    }

    function checkInputs() {
        // Movement and combat
        if(FlxG.mouse.justPressed) {
            shoot();
        }
        if(FlxG.mouse.pressed) {
            if(PlayState.currentInventorySelectedItem == PlayState.WEAPON_RIFLE) shoot();
        }
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

        // Inventory
        updateInventorySelectedItem();
    }

    function shoot() {
        if (_shootTimer.active) return;

        if(PlayState.inventoryItemsList.indexOf(PlayState.currentInventorySelectedItem) >= 0) {
            if(PlayState.currentInventorySelectedItem == PlayState.WEAPON_PISTOL ||
                PlayState.currentInventorySelectedItem == PlayState.WEAPON_RIFLE) {
                    _shootTimer.start(FIRE_RATE_MAP.get(PlayState.currentInventorySelectedItem));

                    _velocity.x = FlxG.mouse.x - x;
                    _velocity.y = FlxG.mouse.y - y;
                    _velocity.normalize();
                    _velocity.scale(BULLET_SPEED);
                    
                    var bullet = _bullets.getFirstAvailable();
                    bullet.reset(x + width / 2, y - height / 2);
                    //bullet.angularVelocity = 1024;
                    bullet.velocity.x = _velocity.x;
                    bullet.velocity.y = _velocity.y;

                    _sndPistolShot.play(true);                
                }
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
}