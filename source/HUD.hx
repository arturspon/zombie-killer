package;

import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
using flixel.util.FlxSpriteUtil;

class HUD extends FlxTypedGroup<FlxSprite> {
    var _health:FlxText;
    var _wave:FlxText;

    var lineStyle:LineStyle = { color: FlxColor.GRAY, thickness: 1 };
    var drawStyle:DrawStyle = { smoothing: true };
    
    public function new(){
        super();

        _health = new FlxText(5, 5, 0, "Health: ", 16);
        _wave = new FlxText(0, 5, 0, "Wave A", 16);
        _wave.x = (FlxG.width - _wave.width) - 5;
        drawInventorySpaces();

        add(_health);
        add(_wave);    

    }

    override public function update(elapsed:Float):Void {
        var s:PlayState = cast FlxG.state;
        _health.text = "Health: " + s.playerHealth;
        _wave.text = "Wave " + (s.currentWave + 1);

        super.update(elapsed);
    }

    function drawInventorySpaces() {
        var inventorySpaceSquareSize = 32;
        var inventorySpaces = 5;
        var inventoryBarTotalWidth = inventorySpaceSquareSize * inventorySpaces;
        for(i in 0...inventorySpaces) {
            var inventorySpaceX = FlxG.width / 2 - inventoryBarTotalWidth / 2 + i*inventorySpaceSquareSize;
            var inventorySpaceY = 4;

            var _inventoryItemSpace = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT, true);
            _inventoryItemSpace.drawRect(inventorySpaceX, inventorySpaceY, inventorySpaceSquareSize, inventorySpaceSquareSize, FlxColor.TRANSPARENT, lineStyle);
            add(_inventoryItemSpace);

            var _inventoryNumberText = new FlxText(inventorySpaceX, inventorySpaceSquareSize - 10, 0, Std.string(i + 1), 8);
            add(_inventoryNumberText);
        }
    }
}