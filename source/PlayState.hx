package;

import flixel.FlxState;

class PlayState extends FlxState {
	var _survivor:Survivor;

	override public function create():Void {
		_survivor = new Survivor();

		add(_survivor);

		super.create();
	}

	override public function update(elapsed:Float):Void	{
		super.update(elapsed);
	}
}
