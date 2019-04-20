package;

import haxe.ds.Map;
import flixel.math.FlxMath;
import lime.math.Vector2;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxTimer;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.math.FlxRandom;
import flixel.tile.FlxTilemap;

class PlayState extends FlxState {
	public static var _hud:HUD;
	var _survivor:Survivor;
    var _bullets:FlxTypedGroup<Bullet> = new FlxTypedGroup<Bullet>();
    var _enemies:FlxTypedGroup<Enemy> = new FlxTypedGroup<Enemy>();
	var _enemies_in_this_wave:Int;
	var _enemies_killed_in_this_wave:Int = 0;

	public var playerHealth:Float;
	public var playerMoney:Float;
	public var currentWave = 0;

	// Tilemap
	var _mapWalls:FlxTilemap;
	var _mapGround:FlxTilemap;

	// Spawn points
	static var SURVIVOR_SPAWN_POINT:Vector2 = new Vector2(317, 89);
	static var ENEMIES_SPAWN_POINT_LIST:Array<Vector2>;
	static var SPAWN_FREQUENCY_BY_WAVE_MAP:Map<Int, Float> = [
		0 => 1,
		1 => 0.9,
		2 => 0.7,
		3 => 0.5,
		4 => 0.1
	];
	static var SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP:Map<Int, Int> = [
		4 => 25
	];
	static var SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP:Map<Int, Int> = [ // If null, them time is 5 secons.
		4 => 15
	];
	public var secondsRemainingUntilNextWave:Int = 0;

	// Player's inventory
	public static var currentInventorySelectedItem:Int = 0;
	public static var inventoryItemsList:Array<Int>;

	// WEAPONS	
	public static inline var WEAPON_PISTOL = 0;
	public static inline var WEAPON_RIFLE = 1;

	// Misc
	var _random:FlxRandom = new FlxRandom();

	override public function create():Void {
		// Spawn points
		ENEMIES_SPAWN_POINT_LIST = [new Vector2(-8, 238), new Vector2(FlxG.width, 134), new Vector2(FlxG.width, 213), new Vector2(475, FlxG.height)];

		_mapWalls = new FlxTilemap();
		_mapWalls.loadMapFromCSV("assets/data/cave_walls.csv", "assets/images/cave_tileset.png", 16, 16, 0, 1);
		add(_mapWalls);
		_mapGround = new FlxTilemap();
		_mapGround.loadMapFromCSV("assets/data/cave_ground.csv", "assets/images/cave_tileset.png", 16, 16, 0, 1);
		add(_mapGround);

		_survivor = new Survivor(cast(SURVIVOR_SPAWN_POINT.x, Int), cast(SURVIVOR_SPAWN_POINT.y, Int), _bullets);
		playerHealth = _survivor.health;

		// Start inventory with a weapon
 		inventoryItemsList = new Array<Int>();
		inventoryItemsList.push(WEAPON_PISTOL);

		add(_survivor);
		add(_bullets);
		add(_enemies);

		_hud = new HUD(_survivor);
		add(_hud);

		populateWave();
		enemySpawner(null);

		super.create();
	}

	override public function update(elapsed:Float):Void	{
		super.update(elapsed);
		FlxG.overlap(_survivor, _enemies, onOverlap);
		FlxG.overlap(_bullets, _enemies, onOverlap);
		FlxG.collide(_enemies, _enemies);
		FlxG.collide(_survivor, _mapWalls);
		FlxG.collide(_enemies, _mapWalls);
		checkIfWaveIsOver();
		playerHealth = _survivor.health;
		playerMoney = _survivor.money;
	}

	function checkIfWaveIsOver() {
		if(_enemies_in_this_wave == _enemies_killed_in_this_wave) {
			_enemies_killed_in_this_wave = 0;
			currentWave++;
			populateWave();

			var timeUntilNextWave = SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP.get(currentWave) == null ? 5 : SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP.get(currentWave);
			secondsRemainingUntilNextWave = timeUntilNextWave;
			new FlxTimer().start(1, 
				function(deltaTime:FlxTimer){secondsRemainingUntilNextWave--;}, 
				timeUntilNextWave);
			new FlxTimer().start(timeUntilNextWave, enemySpawner, 1);
		}
	}

	function populateWave() {
		_enemies = new FlxTypedGroup<Enemy>();
		_enemies_in_this_wave = SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP.get(currentWave) == null ? (currentWave * 2 + 5) : SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP.get(currentWave);
		for(i in 0..._enemies_in_this_wave){
			var enemy = new Enemy(currentWave, _survivor);
			enemy.kill();
			_enemies.add(enemy);
		}
	}
	
	function enemySpawner(deltaTime:FlxTimer) {
		var timer:FlxTimer = new FlxTimer();
		var spawnFrequency = SPAWN_FREQUENCY_BY_WAVE_MAP.get(currentWave) == null ? 1 : SPAWN_FREQUENCY_BY_WAVE_MAP.get(currentWave);
		timer.start(spawnFrequency, spawnEnemy, _enemies_in_this_wave);

		if(currentWave == 4) FlxG.cameras.shake(0.015, 1.5);
	}

	function spawnEnemy(deltaTime:FlxTimer) {
		var random = new FlxRandom();
		var pointToSpawn:Vector2 = ENEMIES_SPAWN_POINT_LIST[random.int(0, ENEMIES_SPAWN_POINT_LIST.length - 1)];
		
		var enemy:Enemy = _enemies.getFirstAvailable();
		enemy.reset(pointToSpawn.x, pointToSpawn.y);
		add(enemy);
	}

	function onOverlap(s1:FlxObject, s2:FlxObject):Void {
		if (Std.is(s1, Survivor))
			s1.hurt(1);
		if(Std.is(s1, Bullet)){
			s1.kill();
			s2.hurt(1);
			if(!s2.alive){
				_enemies_killed_in_this_wave++;
				_survivor.money += FlxMath.roundDecimal(_random.float(0.2, 1.2), 2);
			}
		}
	}
}