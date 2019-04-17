package;

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
        makeGraphic(16, 16, 0xFFFF0000);
        
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
            speed = random.float(100, 400);
        }
        
        ENEMY_SPEED = speed;

        FlxG.log.add(wave + ' - ' + ENEMY_SPEED);
    }

    function chasePlayer(){
        _velocity.x = _playerToChase.x - x;
        _velocity.y = _playerToChase.y - y;
        _velocity.normalize();
        _velocity.scale(ENEMY_SPEED);
        
        velocity.x = _velocity.x;
        velocity.y = _velocity.y;
    }
}