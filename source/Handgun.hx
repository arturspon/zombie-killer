package;

import flixel.FlxObject;
import flixel.group.FlxGroup;

class Handgun extends FlxObject {
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
}