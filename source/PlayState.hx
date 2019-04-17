package;

import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxTimer;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.math.FlxRandom;

class PlayState extends FlxState {
	var _survivor:Survivor;
    var _bullets:FlxTypedGroup<Bullet> = new FlxTypedGroup<Bullet>();
    var _enemies:FlxTypedGroup<Enemy> = new FlxTypedGroup<Enemy>();
	var _currentWave = 0;
	var _enemies_in_this_wave:Int;

	var _hud:HUD = new HUD();

	public var playerHealth:Float;

	override public function create():Void {
		_survivor = new Survivor(200, 200, _bullets);
		playerHealth = _survivor.health;

		add(_survivor);
		add(_bullets);
		add(_enemies);
		add(_hud);

		populateWave();
		enemySpawner();

		super.create();
	}

	override public function update(elapsed:Float):Void	{
		super.update(elapsed);
		FlxG.overlap(_survivor, _enemies, onOverlap);
		playerHealth = _survivor.health;
	}

	function populateWave() {
		_enemies_in_this_wave = _currentWave * 2 + 5;
		for(i in 0..._enemies_in_this_wave){
			var enemy = new Enemy(_currentWave, _survivor);
			enemy.kill();
			_enemies.add(enemy);
		}
	}
	
	function enemySpawner() {
		var timer:FlxTimer = new FlxTimer();
		timer.start(1, spawnEnemy, _enemies_in_this_wave);
	}

	function spawnEnemy(deltaTime:FlxTimer) {
		var random = new FlxRandom();

		var xToSpawn:Int = 0;
		var yToSpawn:Int = 0;

		// Spawn side
		switch(random.int(0, 3)) {
			case 0:
				xToSpawn = -10;
				yToSpawn = random.int(0, FlxG.height);
			case 1:
				xToSpawn = random.int(0, FlxG.width);
				yToSpawn = FlxG.height + 10;
			case 2:	
				xToSpawn = FlxG.width + 10;
				yToSpawn = random.int(0, FlxG.height);
			case 3:
				xToSpawn = random.int(0, FlxG.width);
				yToSpawn = -10;
		}
		
		var enemy:Enemy = _enemies.getFirstAvailable();
		enemy.reset(xToSpawn, yToSpawn);
		add(enemy);
	}

	function onOverlap(Sprite1:FlxObject, Sprite2:FlxObject):Void {
		if (Std.is(Sprite1, Survivor))
			Sprite1.hurt(1);
	}

}