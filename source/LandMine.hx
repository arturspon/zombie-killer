package;

import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.effects.particles.FlxEmitter;

class LandMine extends Entity {
    var _currentState:String = "armed";
    var _explosionParticles:FlxEmitter;
    static var _DAMAGE:Float = 5;

    public function new(x:Int, y:Int) {
        super(x, y);

        loadGraphic(AssetPaths.land_mine__png, true, 32, 32);

        setGraphicSize(16, 16);
        updateHitbox();
        updateFramePixels();

        animation.add("armed", [0, 1], 2, true);
        animation.play("armed");
        
        _explosionParticles = new FlxEmitter(x, y, 100);
        _explosionParticles.lifespan.set(1, 3);
        _explosionParticles.color.set(FlxColor.WHITE, FlxColor.ORANGE, FlxColor.RED);
        _explosionParticles.solid = true;
        _explosionParticles.alpha.set(1, 1, 0, 0);
        _explosionParticles.launchMode = FlxEmitterMode.CIRCLE;
		_explosionParticles.makeParticles(2, 2, FlxColor.ORANGE, 200);
        FlxG.state.add(_explosionParticles);
    }

    override public function update(elapsed:Float):Void	{
        FlxG.overlap(this, PlayState.enemies, explode);
        FlxG.collide(_explosionParticles, PlayState.enemies, dealDamage);

        if(_currentState != "armed" && !_explosionParticles.emitting) kill();

		super.update(elapsed);
	}

    public function explode(s1:FlxObject, s2:FlxObject) {
        if(_currentState == "armed") {
            _currentState = "exploding";
            _explosionParticles.start(true, 0.01, 0);
        }
        alpha = 0;
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