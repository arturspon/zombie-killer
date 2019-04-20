package;

import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
using flixel.util.FlxSpriteUtil;

class HUD extends FlxTypedGroup<FlxSprite> {
    var _survivor:Survivor;

    var _health:FlxText;
    var _ammoForCurrentWeapon:FlxText;
    var _money:FlxText;
    var _wave:FlxText;
    var _timeUntilNextWave:FlxText;

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
    var _storePriceMap = [
        PlayState.WEAPON_RIFLE => 10.0
    ];
    var _itemSpriteMap = [
        PlayState.WEAPON_PISTOL => AssetPaths.Tokarev_TT_33__png,
        PlayState.WEAPON_RIFLE => AssetPaths.StG_44__png
    ];
    var _itemQtdToBuyMap = [ // Bullets, if the item is a weapon.
        PlayState.WEAPON_RIFLE => 100
    ];
    
    public function new(survivor:Survivor){
        super();

        _survivor = survivor;

        _health = new FlxText(5, 5, 0, "Health: ", 16);
        _ammoForCurrentWeapon = new FlxText(5, _health.y + _health.height + 8, 0, "Ammo: ", 16);
        _money = new FlxText(5, _ammoForCurrentWeapon.y + _ammoForCurrentWeapon.height + 8, 0, "$0", 16);

        _wave = new FlxText(0, 5, 0, "Wave A", 16);
        _wave.x = (FlxG.width - _wave.width) - 5;

        _timeUntilNextWave = new FlxText(0, 0, 0, "Next wave in ", 16);
        _timeUntilNextWave.x = FlxG.width / 2 - _timeUntilNextWave.width / 2;
        _timeUntilNextWave.y = (FlxG.height - _timeUntilNextWave.height) - 8;
        _timeUntilNextWave.kill();

        // Player's inventory
        inventoryBarTotalWidth = inventorySpaceSquareSize * inventorySpaces;
        drawInventorySpaces();
        updateInventory();

        add(_health);
        add(_ammoForCurrentWeapon);
        add(_money);
        add(_wave);
        add(_timeUntilNextWave);
    }

    override public function update(elapsed:Float):Void {
        var s:PlayState = cast FlxG.state;
        _health.text = "Health: " + s.playerHealth;
        _money.text = "$" + s.playerMoney;
        _wave.text = "Wave " + (s.currentWave + 1);

        var ammoForCurrentWeapon = _survivor._bulletsMap.get(PlayState.currentInventorySelectedItem) == null ? 0 : _survivor._bulletsMap.get(PlayState.currentInventorySelectedItem);
        _ammoForCurrentWeapon.text = "Ammo: " + ammoForCurrentWeapon;

        drawTimeUntilNextWave(s);
        
        if(FlxG.keys.justPressed.B) drawStore();

        super.update(elapsed);
    }

    function drawTimeUntilNextWave(s:PlayState) {
        if(s.secondsRemainingUntilNextWave > 0) {
            _timeUntilNextWave.revive();
            _timeUntilNextWave.text = "Next wave in " + s.secondsRemainingUntilNextWave;
        } else {
            _timeUntilNextWave.kill();
        }
    }

    function drawInventorySpaces() {
        for(i in 0...inventorySpaces) {
            var inventorySpaceX = (FlxG.width / 2 - inventoryBarTotalWidth / 2) + i*inventorySpaceSquareSize;
            var inventorySpaceY = 4;

            var _inventoryItemSpace = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT, true);
            _inventoryItemSpace.drawRect(inventorySpaceX, inventorySpaceY, inventorySpaceSquareSize, inventorySpaceSquareSize, FlxColor.TRANSPARENT, lineStyle);
            add(_inventoryItemSpace);

            var _inventoryNumberText = new FlxText(inventorySpaceX + inventorySpaceSquareSize - 12, inventorySpaceSquareSize - 10, 0, Std.string(i + 1), 8);
            add(_inventoryNumberText);
            _inventoryNumberTextList.push(_inventoryNumberText); // Used to change color when item is selected
        }
    }

    public function updateInventory() {
        // Draw items in inventory bar
        for(item in PlayState.inventoryItemsList) {
            if(_inventoryRenderedItems.indexOf(item) < 0) {
                var xPositionToRenderItem = (FlxG.width / 2 - inventoryBarTotalWidth / 2) + inventorySpaceSquareSize * _inventoryRenderedItems.length;

                var s = new FlxSprite(xPositionToRenderItem, inventorySpaceSquareSize / 2 - 4);
                s.loadGraphic(_itemSpriteMap.get(item), false);
                
                s.setGraphicSize(32);
                s.updateHitbox();
                s.updateSpriteGraphic();
                s.angle = -32;
                s.x = ((FlxG.width / 2 - inventoryBarTotalWidth / 2) + inventorySpaceSquareSize * _inventoryRenderedItems.length);
                add(s);
                _inventoryRenderedItems.push(item);
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
        var itemStoreStartX = 64;
        var itemStoreStartY = 64;
        var itemStoreSpaceSize = 128;
        var itemStoreSpacePadding = 24;

        var squareContainer = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT, true);
        squareContainer.drawRect(itemStoreStartX, itemStoreStartY, itemStoreWidth, itemStoreHeight, 0xF03d3d3d, lineStyle);

        var storeTitle = new FlxText(5, 5, 0, "Item store", 16);
        storeTitle.x = itemStoreWidth / 2;
        storeTitle.y = 72;

        
        _itemStore.add(squareContainer);
        _itemStore.add(storeTitle);

        var aux:Int = 0;
        for (itemKey in _storePriceMap.keys()) {
            var itemX = itemStoreStartX + aux*itemStoreSpaceSize + itemStoreSpacePadding;
            var itemY = itemStoreStartY + storeTitle.height + itemStoreSpacePadding;

            var itemSpace = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT, true);
            itemSpace.drawRect(itemX, itemY, itemStoreSpaceSize, itemStoreSpaceSize, FlxColor.TRANSPARENT, lineStyle);
            _itemStore.add(itemSpace);

            var itemToSell = new FlxSprite();
            itemToSell.loadGraphic(_itemSpriteMap.get(itemKey), false);                       
            itemToSell.setGraphicSize(itemStoreSpaceSize - itemStoreSpacePadding);
            itemToSell.angle = -24;
            itemToSell.x = itemStoreSpaceSize / 2 + itemToSell.width - 8;
            itemToSell.y = itemY + 32;
            _itemStore.add(itemToSell);

            var btnBuy = new FlxButton(0, 0, "", function(){
                buyItem(itemKey);
            });
            btnBuy.text = "Buy!";
            btnBuy.x = itemStoreSpaceSize / 2 + btnBuy.width / 2 + 10;
            btnBuy.y = itemToSell.y + 64;
            _itemStore.add(btnBuy);

            var priceText = new FlxText();
            priceText.text = "$" + Std.string(_storePriceMap.get(itemKey));
            priceText.x = itemX + itemStoreSpaceSize / 2 - priceText.width / 2;
            priceText.y = btnBuy.y - 16;
            _itemStore.add(priceText);

            aux++;
        }

        _itemStore.forEach(function(s:FlxSprite) {
            add(s);
        }, false);
        
        _isItemStoreVisible = true;
    }

    function buyItem(itemId:Int) {
        var itemPrice = _storePriceMap.get(itemId);
        if((_survivor.money - itemPrice) >= 0) {
            _survivor.money -= itemPrice;
            PlayState.inventoryItemsList.push(itemId);

            var qtdToBuy =  _survivor._bulletsMap.get(itemId) == null ? _itemQtdToBuyMap.get(itemId) : (_itemQtdToBuyMap.get(itemId) + _survivor._bulletsMap.get(itemId));
            _survivor._bulletsMap.set(itemId, qtdToBuy);

            updateInventory();
        }
    }
}