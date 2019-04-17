package;

import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.text.FlxText;

class HUD extends FlxGroup{
    var _health:FlxText;
    var _wave:FlxText;
    
    public function new(){
        super();

        _health = new FlxText(5, 5, 0, "Health: ", 16);
        _wave = new FlxText(0, 5, 0, "Wave A", 16);
        _wave.x = (FlxG.width - _wave.width) - 5;

        add(_health);
        add(_wave);
    }

    override public function update(elapsed:Float):Void {
        var s:PlayState = cast FlxG.state;
        _health.text = "Health: " + s.playerHealth;
        _wave.text = "Wave " + (s.currentWave + 1);

        super.update(elapsed);
    }
}