package;

import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.text.FlxText;

class HUD extends FlxGroup{
    var _health:FlxText;
    
    public function new(){
        super();

        _health = new FlxText(5, 5, 0, "Health: ", 16);

        add(_health);
    }

    override public function update(elapsed:Float):Void {
        var s:PlayState = cast FlxG.state;
        _health.text = "Health: " + s.playerHealth;

        super.update(elapsed);
    }
}