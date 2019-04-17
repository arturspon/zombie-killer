package;

import flixel.FlxObject;
import flixel.group.FlxGroup;

class Handgun extends FlxObject {
    public var PLAYER_OWNER_OBJ:Entity;
    var _INITIAL_BULLETS = 200;
    var _bullets:FlxTypedGroup<Bullet>;

    public function new() {
        super();
        giveInitialBullets();
    }

    function giveInitialBullets() {
        for(i in 0..._INITIAL_BULLETS){
            var s = new Bullet();
            s.kill();
            _bullets.add(s);
        }
    }

    override public function update(elapsed:Float):Void {
        if(PLAYER_OWNER_OBJ != null) {
            x = PLAYER_OWNER_OBJ.x;
            y = PLAYER_OWNER_OBJ.y;
        }
        
        super.update(elapsed);
    }
}