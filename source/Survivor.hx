package;

import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.math.FlxVector;

class Survivor extends Entity {
    var _bullets:FlxTypedGroup<Bullet>;
    var _velocity:FlxVector = new FlxVector(); 

    public function new(x:Int, y:Int, bullets:FlxTypedGroup<Bullet>) {
        super(x, y);
        makeGraphic(24,24,0xFFFFFFFF);
        /*loadGraphic(AssetPaths.kkkk__png, true, 258, 220);
        animation.add("move", [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19], 15, true);
        animation.play("move");*/

        _bullets = bullets;
        giveInitialBullets();

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
        if(FlxG.mouse.justPressed) {
            shoot();
        }
    }

    function shoot() {
        var bullet = _bullets.getFirstAvailable();

        _velocity.x = FlxG.mouse.x - x;
        _velocity.y = FlxG.mouse.y - y;
        _velocity.normalize();
        _velocity.scale(512);
        
        bullet.reset(x + width / 2, y - height / 2);
        bullet.angularVelocity = 1024;
        bullet.velocity.x = _velocity.x;
        bullet.velocity.y = _velocity.y;
    }
}