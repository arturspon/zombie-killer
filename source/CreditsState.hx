package;

import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;

class CreditsState extends FlxState {
    var _creditsText:FlxText;
    var _btnBack:FlxButton;
    var _CREDITS_VELOCITY = -64;

    override public function create():Void{
        _creditsText = new FlxText(0, 0, 0, 
            "Created by:\nArtur Sponchiado\n\n\n\n" + 
            "Animated top down survivor player by Riley Gombart\navailable at https://opengameart.org/content/animated-top-down-survivor-player\n\n" +
            "Animated top down zombie by Riley Gombart\navailable at https://opengameart.org/content/animated-top-down-zombie\n\n" +
            "Gun fire sound by GoodSoundForYou\navailable at http://soundbible.com/1998-Gun-Fire.html\n\n" +
            "Cave tileset by MrBeast\navailable at https://opengameart.org/content/cave-tileset-0\n\n" +
            "\n\n\n\n" +
            "Special thanks:\nHaxeFlixel", 
            12);
        _creditsText.x = FlxG.width / 2 - _creditsText.width / 2;
        _creditsText.y = FlxG.height;
        _creditsText.moves = true;
        _creditsText.alignment = CENTER;
        _creditsText.velocity.y = _CREDITS_VELOCITY;
        _creditsText.color = 0xFFff6e00;

        _btnBack = new FlxButton(0, 0, "Back", gotoMenu);
        _btnBack.y = FlxG.height - _btnBack.height;

        add(_creditsText);
        add(_btnBack);

        super.create();
    }

    function gotoMenu():Void{
        FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {
            FlxG.switchState(new MenuState());
        });
    }

    override public function update(elapsed:Float):Void{
		super.update(elapsed);
        if(_creditsText.y + _creditsText.height <= 0){
            _creditsText.y = FlxG.height;
        }
    }
}