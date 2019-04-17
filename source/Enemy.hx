package;

import flixel.math.FlxVector;

class Enemy extends Entity {
    var _playerToChase:Entity;
    var _velocity:FlxVector = new FlxVector();
    var ENEMY_SPEED = 100;

    public function new(wave:Int, playerToChase:Entity) {
        super();
        makeGraphic(24,24,0xFFFF0000);
        
        _playerToChase = playerToChase;

        setHealthByWave(wave);

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

    function chasePlayer(){
        _velocity.x = _playerToChase.x - x;
        _velocity.y = _playerToChase.y - y;
        _velocity.normalize();
        _velocity.scale(ENEMY_SPEED);
        
        velocity.x = _velocity.x;
        velocity.y = _velocity.y;
    }
}