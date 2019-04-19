package;

import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxTimer;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.math.FlxRandom;
import flixel.addons.editors.ogmo.FlxOgmoLoader;
import flixel.tile.FlxTilemap;

class PlayState extends FlxState {
	var _survivor:Survivor;
    var _bullets:FlxTypedGroup<Bullet> = new FlxTypedGroup<Bullet>();
    var _enemies:FlxTypedGroup<Enemy>;
	var _enemies_in_this_wave:Int;
	var _enemies_killed_in_this_wave:Int = 0;

	var _hud:HUD = new HUD();

	public var playerHealth:Float;
	public var currentWave = 0;

	// Tilemap
	/*var _map:FlxOgmoLoader;
 	var _mWalls:FlxTilemap;
 	var _mGround:FlxTilemap;*/
	var _mapWalls:FlxTilemap;
	var _mapGround:FlxTilemap;

	override public function create():Void {
		/*_map = new FlxOgmoLoader(AssetPaths.level0__oel);
		_mWalls = _map.loadTilemap(AssetPaths.dungeon_tiles__png, 8, 8, "walls");
		_mWalls.follow();
		_mWalls.setTileProperties(1, FlxObject.NONE);
		_mWalls.setTileProperties(2, FlxObject.ANY);
		
		_mGround = _map.loadTilemap(AssetPaths.dungeon_tiles__png, 8, 8, "ground");
		//add(_mWalls);
		//add(_mGround);		

		_map.loadEntities(placeEntities, "entities");*/

		_mapWalls = new FlxTilemap();
		_mapWalls.loadMapFromCSV("assets/data/cave_walls.txt", "assets/images/cave_tileset.png", 16, 16, 0, 1);
		add(_mapWalls);
		_mapGround = new FlxTilemap();
		_mapGround.loadMapFromCSV("assets/data/cave_ground.txt", "assets/images/cave_tileset.png", 16, 16, 0, 1);
		add(_mapGround);

		_survivor = new Survivor(200, 200, _bullets);
		_survivor.x = FlxG.width / 2 - _survivor.width;
		_survivor.y = FlxG.height / 2 - 16;
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
		FlxG.overlap(_bullets, _enemies, onOverlap);
		FlxG.collide(_enemies, _enemies);
		playerHealth = _survivor.health;
		checkIfWaveIsOver();
		//FlxG.collide(_survivor, _mWalls);
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

	function onOverlap(s1:FlxObject, s2:FlxObject):Void {
		if (Std.is(s1, Survivor))
			s1.hurt(1);
		if(Std.is(s1, Bullet)){
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