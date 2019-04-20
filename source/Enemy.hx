package;

import flixel.math.FlxAngle;
import flixel.FlxG;
import flixel.math.FlxVector;
import flixel.math.FlxRandom;

class Enemy extends Entity {
    var _playerToChase:Entity;
    var _velocity:FlxVector = new FlxVector();
    var ENEMY_SPEED:Float;
    var random = new FlxRandom();

    public function new(wave:Int, playerToChase:Entity) {
        super();
        //makeGraphic(16, 16, 0xFFFF0000);
        loadGraphic(AssetPaths.zombie_running__png, true, 288, 311);
        animation.add("move", [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16], 16, true);
        animation.play("move");

        setGraphicSize(24, 24);
        updateHitbox();
        
        _playerToChase = playerToChase;

        setHealthByWave(wave);
        setRandomVelocityVariedByWave(wave);

        _velocity.x = 0;
        _velocity.y = 0;
    }

    override public function update(elapsed:Float):Void {
        super.update(elapsed);
        chasePlayer();
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
            speed = random.float(100, 350);
        }
        
        ENEMY_SPEED = speed;
    }

    function chasePlayer(){
        _velocity.x = _playerToChase.x - x;
        _velocity.y = _playerToChase.y - y;
        _velocity.normalize();
        _velocity.scale(ENEMY_SPEED);
        
        velocity.x = _velocity.x;
        velocity.y = _velocity.y;

        angle = FlxAngle.angleBetween(_playerToChase, this, true) - 180;
    }
}