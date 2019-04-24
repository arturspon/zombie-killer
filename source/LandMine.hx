package;

import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.effects.particles.FlxEmitter.FlxTypedEmitter;

class LandMine extends Entity {
    var _currentState:String = "armed";
    static var _DAMAGE:Float = 5;

    public function new(x:Int, y:Int) {
        super(x, y);

        loadGraphic(AssetPaths.land_mine__png, true, 32, 32);

        setGraphicSize(16, 16);
        updateHitbox();
        updateFramePixels();

        animation.add("armed", [0, 1], 2, true);
        animation.play("armed");

        //explode();
    }

    override public function update(elapsed:Float):Void	{
        FlxG.overlap(this, PlayState.enemies, dealDamage);
		super.update(elapsed);
	}

    public function explode() {
        var particles = new FlxTypedEmitter(100, 100, 100);
		particles.makeParticles(2, 2, FlxColor.ORANGE, 200);
        FlxG.state.add(particles);
		particles.start();
    }

    public function dealDamage(s1:FlxObject, s2:FlxObject) {
        var m:Message = new Message();
        m.from = this;
        m.to = cast(s2, Entity);
        m.op = Message.OP_DAMAGE;
        m.data = _DAMAGE;
        PlayState.MAIL.send(m);
    }
}