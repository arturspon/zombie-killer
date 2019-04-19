package;

import flixel.FlxSprite;
import lime.math.Vector2;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxTimer;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.math.FlxRandom;
import flixel.tile.FlxTilemap;

class PlayState extends FlxState {
	var _hud:HUD;
	var _survivor:Survivor;
    var _bullets:FlxTypedGroup<Bullet> = new FlxTypedGroup<Bullet>();
    var _enemies:FlxTypedGroup<Enemy> = new FlxTypedGroup<Enemy>();
	var _enemies_in_this_wave:Int;
	var _enemies_killed_in_this_wave:Int = 0;

	public var playerHealth:Float;
	public var currentWave = 0;

	// Tilemap
	var _mapWalls:FlxTilemap;
	var _mapGround:FlxTilemap;

	// Spawn points
	static var SURVIVOR_SPAWN_POINT:Vector2 = new Vector2(317, 89);
	static var ENEMIES_SPAWN_POINT_LIST:Array<Vector2>;

	// Player's inventory
	public static var currentInventorySelectedItem:Int = 0;
	public var inventoryItemsList:Array<Int>;

	// Items
	public static inline var WEAPON_PISTOL = 0;
	public static inline var WEAPON_RIFLE = 1;

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

		_hud = new HUD();
		add(_hud);

		populateWave();
		enemySpawner();

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
	}

	function checkIfWaveIsOver() {
		if(_enemies_in_this_wave == _enemies_killed_in_this_wave) {
			_enemies_killed_in_this_wave = 0;
			currentWave++;
			populateWave();
			enemySpawner();
		}
	}

	function populateWave() {
		_enemies = new FlxTypedGroup<Enemy>();
		_enemies_in_this_wave = currentWave * 2 + 5;
		for(i in 0..._enemies_in_this_wave){
			var enemy = new Enemy(currentWave, _survivor);
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
			}
		}
	}

	function placeEntities(entityName:String, entityData:Xml):Void {
     var x:Int = Std.parseInt(entityData.get("x"));
     var y:Int = Std.parseInt(entityData.get("y"));
     if (entityName == "player") {
         _survivor.x = x;
         _survivor.y = y;
     }
 }
}