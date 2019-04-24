package;

import flixel.util.FlxColor;
import flixel.util.FlxPath;
import flixel.math.FlxPoint;
import haxe.ds.HashMap;
import flixel.math.FlxMath;
import lime.math.Vector2;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxTimer;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.math.FlxRandom;
import flixel.tile.FlxTilemap;
import flixel.effects.particles.FlxEmitter;

class PlayState extends FlxState {
	public static var _hud:HUD;
	var _survivor:Survivor;
    var _bullets:FlxTypedGroup<Bullet> = new FlxTypedGroup<Bullet>();
	var _enemies_in_this_wave:Int;
	var _enemies_killed_in_this_wave:Int = 0;
    public static var enemies:FlxTypedGroup<Enemy> = new FlxTypedGroup<Enemy>();

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
	static var SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP:Map<Int, Int> = [ // If the requested key is null, the number of enemies vary by wave.
		4 => 25
	];
	static var SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP:Map<Int, Int> = [ // If the requested key is null, them time is 5 seconds.
		4 => 15
	];
	public var secondsRemainingUntilNextWave:Int = 0;

	// Player's inventory
	public static var currentInventorySelectedItem:Int = 0;

	// Items	
	public static inline var WEAPON_PISTOL = 0;
	public static inline var WEAPON_RIFLE = 1;
	public static inline var LAND_MINE = 2;

	// Misc
	var _random:FlxRandom = new FlxRandom();

	// Pathfinding
	var _lastPlayerPos:FlxPoint = new FlxPoint(0, 0);

	// Mail	
    public static var MAIL:Mail;

	override public function create():Void {
		// Mail
        MAIL = new Mail();

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
		
		_survivor.path = new FlxPath();

        add(MAIL);
		add(_survivor);
		add(_bullets);
		add(enemies);

		_hud = new HUD(_survivor);
		add(_hud);

		populateWave();
		enemySpawner(null);	

		super.create();
	}

	override public function update(elapsed:Float):Void	{
		super.update(elapsed);

		FlxG.overlap(_survivor, enemies, onOverlap);
		FlxG.overlap(_bullets, enemies, onOverlap);
		FlxG.collide(enemies, enemies);
		FlxG.collide(_survivor, _mapWalls);
		FlxG.collide(enemies, _mapWalls);
		enemies.forEachAlive(findPathAndChasePlayer);
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
		enemies = new FlxTypedGroup<Enemy>();
		_enemies_in_this_wave = SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP.get(currentWave) == null ? (currentWave * 2 + 5) : SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP.get(currentWave);
		for(i in 0..._enemies_in_this_wave){
			var enemy = new Enemy(currentWave);
			enemy.kill();
			enemies.add(enemy);
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
		
		var enemy:Enemy = enemies.getFirstAvailable();
		enemy.reset(pointToSpawn.x, pointToSpawn.y);
		add(enemy);
	}

	function spawnEnemyAt(x:Int, y:Int) {
		var enemy:Enemy = enemies.getFirstAvailable();
		enemy.reset(x, y);
		add(enemy);
		findPathAndChasePlayer(enemy);
	}

	function onOverlap(s1:FlxObject, s2:FlxObject):Void {
		if (Std.is(s1, Survivor) && Std.is(s2, Enemy)){
			cast(s2, Enemy).attack(MAIL, cast(s1, Survivor));
		}
		if(Std.is(s1, Bullet)){
			s1.kill();
			s2.hurt(1);
			if(!s2.alive){
				_enemies_killed_in_this_wave++;
				_survivor.money += FlxMath.roundDecimal(_random.float(0.2, 1.2), 2);
			}
		}
	}

	function updatePlayerMidPoint(e:Enemy):Void {
		e.playerPos.copyFrom(_survivor.getMidpoint());
	}

	function findPathAndChasePlayer(enemy:Enemy):Void {
		updatePlayerMidPoint(enemy);

		if(!_mapWalls.ray(enemy.getMidpoint(), _survivor.getMidpoint())) {
			enemy.stopChasingPlayer();

			if(enemy.path == null) enemy.path = new FlxPath();

			var pathPoints:Array<FlxPoint> = _mapWalls.findPath(
				FlxPoint.get(enemy.x, enemy.y),
				FlxPoint.get(_survivor.x, _survivor.y));

			if(enemy.path.active && pathPoints != null &&
				(_lastPlayerPos.x != _survivor.x || _lastPlayerPos.y != _survivor.y)) {
				enemy.path.addPoint(pathPoints[pathPoints.length-1]);
				return;
			}
			
			// Tell unit to follow path
			if (pathPoints != null && enemy.isOnScreen()) {
				enemy.path.start(pathPoints, 50, FlxPath.FORWARD, true);
				//_survivor.path.start(pathPoints);
			}
		} else {
			enemy.chasePlayerM();
		}
	}
}