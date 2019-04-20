package;

import flixel.group.FlxGroup;
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

    // Player's inventory
    var inventorySpaceSquareSize = 32;
    var inventorySpaces = 5;
    var inventoryBarTotalWidth:Int;
    var _inventoryItemSpritePadding = 8;
    var _inventoryRenderedItems:Array<Int> = new Array<Int>(); // Items that have already been rendered to HUD
    var _inventoryNumberTextList:Array<FlxText> = new Array<FlxText>();

    // Item store
    var _itemStore:FlxTypedGroup<FlxSprite> = new FlxTypedGroup<FlxSprite>();
    var _isItemStoreVisible = false;
    
    public function new(){
        super();

        _health = new FlxText(5, 5, 0, "Health: ", 16);
        _wave = new FlxText(0, 5, 0, "Wave A", 16);
        _wave.x = (FlxG.width - _wave.width) - 5;

        // Player's inventory
        inventoryBarTotalWidth = inventorySpaceSquareSize * inventorySpaces;
        drawInventorySpaces();
        updateInventory();

        add(_health);
        add(_wave);    

    }

    override public function update(elapsed:Float):Void {
        var s:PlayState = cast FlxG.state;
        _health.text = "Health: " + s.playerHealth;
        _wave.text = "Wave " + (s.currentWave + 1);
        
        if(FlxG.keys.justPressed.B) drawStore();

        super.update(elapsed);
    }

    function drawInventorySpaces() {
        for(i in 0...inventorySpaces) {
            var inventorySpaceX = FlxG.width / 2 - inventoryBarTotalWidth / 2 + i*inventorySpaceSquareSize;
            var inventorySpaceY = 4;

            var _inventoryItemSpace = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT, true);
            _inventoryItemSpace.drawRect(inventorySpaceX, inventorySpaceY, inventorySpaceSquareSize, inventorySpaceSquareSize, FlxColor.TRANSPARENT, lineStyle);
            add(_inventoryItemSpace);

            var _inventoryNumberText = new FlxText(inventorySpaceX, inventorySpaceSquareSize - 10, 0, Std.string(i + 1), 8);
            add(_inventoryNumberText);
            _inventoryNumberTextList.push(_inventoryNumberText); // Used to change color when item is selected
        }
    }

    public function updateInventory() {
        // Draw items in inventory bar
        for(item in PlayState.inventoryItemsList) {
            if(_inventoryRenderedItems.indexOf(item) < 0) {
                var xPositionToRenderItem = FlxG.width / 2 - inventoryBarTotalWidth / 2 + inventorySpaceSquareSize * _inventoryRenderedItems.length;


                switch(item) {
                    case PlayState.WEAPON_PISTOL:
                        var s = new FlxSprite(xPositionToRenderItem, 4);
                        s.loadGraphic(AssetPaths.Tokarev_TT_33__png, false);

                        // Resizing the sprite but keeping it's aspect ratio
                        var aspectRatio = s.width / s.height;
                        var adjustedHeight = cast(inventorySpaceSquareSize / aspectRatio, Int);
                        
                        s.setGraphicSize(inventorySpaceSquareSize - _inventoryItemSpritePadding, adjustedHeight - _inventoryItemSpritePadding);
                        add(s);
                    //case PlayState.WEAPON_RIFLE:
                }
            }
        }

        // Change the text color of the number of the selected item
        _inventoryNumberTextList[PlayState.currentInventorySelectedItem].color = 0xffff8c00;
        for(i in 0...inventorySpaces) {
            if(i != PlayState.currentInventorySelectedItem){
                _inventoryNumberTextList[i].color = 0xffbcbcbc;
            }
        }
    }

    function drawStore() {
        if(_isItemStoreVisible) {
            _itemStore.forEach(function(s:FlxSprite) {
                remove(s);
            }, false);
            _isItemStoreVisible = false;
            return;
        }

        if(_itemStore.length > 0) {
            _itemStore.forEach(function(s:FlxSprite) {
                add(s);
            }, false);
            _isItemStoreVisible = true;
            return;
        }

        var itemStoreWidth = FlxG.width - 128;
        var itemStoreHeight = FlxG.height - 128;

        var squareContainer = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT, true);
        squareContainer.drawRect(64, 64, itemStoreWidth, itemStoreHeight, 0xF03d3d3d, lineStyle);

        var storeTitle = new FlxText(5, 5, 0, "Item store", 16);
        storeTitle.x = itemStoreWidth / 2;
        storeTitle.y = 72;
        
        _itemStore.add(squareContainer);
        _itemStore.add(storeTitle);

        _itemStore.forEach(function(s:FlxSprite) {
            add(s);
        }, false);
        
        _isItemStoreVisible = true;

        //add(_itemStore);
    }
}