package;

import flixel.FlxState;
import flixel.group.FlxGroup;

class PlayState extends FlxState {
	var _survivor:Survivor;
    var _bullets:FlxTypedGroup<Bullet> = new FlxTypedGroup<Bullet>();

	override public function create():Void {
		_survivor = new Survivor(200, 200, _bullets);

		add(_survivor);
		add(_bullets);

		super.create();
	}

	override public function update(elapsed:Float):Void	{
		super.update(elapsed);
	}
	
}
