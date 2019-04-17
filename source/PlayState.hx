package;

import flixel.FlxG;
import flixel.util.FlxTimer;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.math.FlxRandom;

class PlayState extends FlxState {
	var _survivor:Survivor;
    var _bullets:FlxTypedGroup<Bullet> = new FlxTypedGroup<Bullet>();

	override public function create():Void {
		_survivor = new Survivor(200, 200, _bullets);

		add(_survivor);
		add(_bullets);

		enemySpawner();

		super.create();
	}

	override public function update(elapsed:Float):Void	{
		super.update(elapsed);
	}
	
	function enemySpawner() {
		var timer:FlxTimer = new FlxTimer();
		timer.start(1, spawnEnemy, 0);
	}

	function spawnEnemy(deltaTime:FlxTimer) {
		var random = new FlxRandom();

		var enemy:Enemy = null;

		// Spawn side
		switch(random.int(0, 3)) {
			case 0:	enemy = new Enemy(-10, random.int(0, FlxG.height), _survivor);
			case 1:	enemy = new Enemy(random.int(0, FlxG.width), FlxG.height + 10, _survivor);
			case 2:	enemy = new Enemy(FlxG.width + 10, random.int(0, FlxG.height), _survivor);
			case 3:	enemy = new Enemy(random.int(0, FlxG.width), -10, _survivor);
		}
		
		add(enemy);
	}

}
