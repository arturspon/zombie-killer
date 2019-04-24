package;

import flixel.util.FlxPath;
import flixel.math.FlxRandom;
import flixel.math.FlxPoint;
import flixel.math.FlxVector;

class Enemy extends Entity {
    var _velocity:FlxVector = new FlxVector();
    var ENEMY_SPEED:Float;
    var random = new FlxRandom();
    public var playerPos:FlxPoint;

    public function new(wave:Int) {
        super();
        loadGraphic(AssetPaths.zombie_running__png, true, 288, 311);
        animation.add("move", [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16], 16, true);
        animation.play("move");

        setGraphicSize(24, 24);
        updateHitbox();

        setHealthByWave(wave);
        setRandomVelocityVariedByWave(wave);

        playerPos = FlxPoint.get();
        path = new FlxPath();

        _velocity.x = 0;
        _velocity.y = 0;
    }

    override public function update(elapsed:Float):Void {
        chasePlayer();
        super.update(elapsed);
    }

    function setHealthByWave(wave:Int) {
        health = 2 + wave;
    }

    function setRandomVelocityVariedByWave(wave:Int) {
        var speed:Float;

        if(wave == 0) {
            speed = random.float(20, 40);
        } else if (wave == 1) { 
            speed = random.float(40, 80);
        } else if (wave == 2) { 
            speed = random.float(40, 100);
        } else if (wave == 3) { 
            speed = random.float(80, 100);
        } else if (wave == 4) { 
            speed = random.float(100, 150);
        } else {
            speed = random.float(80, 200);
        }
        
        ENEMY_SPEED = speed;
    }

    function chasePlayer(){
        if(isOnScreen()) {
            _velocity.x = playerPos.x - x;
            _velocity.y = playerPos.y - y;
            _velocity.normalize();
            _velocity.scale(ENEMY_SPEED);
            
            velocity.x = _velocity.x;
            velocity.y = _velocity.y;
        } else {
            velocity.x = 0;
            velocity.y = 0;
        }

        //angle = FlxAngle.angleBetweenPoint(this, playerPos, true) - 180;
        //FlxVelocity.moveTowardsPoint(this, new FlxPoint(300,300), Std.int(ENEMY_SPEED));
    }

    public function chasePlayerM() {
        path = null;

        _velocity.x = playerPos.x - x;
        _velocity.y = playerPos.y - y;
        _velocity.normalize();
        _velocity.scale(ENEMY_SPEED);
        
        velocity.x = _velocity.x;
        velocity.y = _velocity.y;
    }

    public function stopChasingPlayer() {
        if(velocity.x > 0) velocity.x = 0;
        if(velocity.y > 0) velocity.y = 0;
    }

    public function attack(mail:Mail, player:Survivor) {
        var m:Message = new Message();
        m.from = this;
        m.to = player;
        m.op = Message.OP_DAMAGE;
        m.data = 1;
        mail.send(m);
    }
}