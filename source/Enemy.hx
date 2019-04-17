package;

import flixel.math.FlxVector;

class Enemy extends Entity {
    var _playerToChase:Entity;
    var _velocity:FlxVector = new FlxVector();
    var ENEMY_SPEED = 100;

    public function new(x:Int, y:Int, playerToChase:Entity) {
        super(x, y);
        makeGraphic(24,24,0xFFFF0000);
        _playerToChase = playerToChase;
        _velocity.x = 0;
        _velocity.y = 0;
    }

    override public function update(elapsed:Float):Void {
        super.update(elapsed);
        chasePlayer();
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