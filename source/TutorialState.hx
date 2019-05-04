package;

import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.ui.FlxButton;
import flixel.FlxState;
import flixel.text.FlxText;

class TutorialState extends FlxState {
    static var _TUTORIAL_TEXTS:Array<String> = [
		"Use the keys W A S D to move your character",
		"You can boost your speed by holding SHIFT",
		"Choose between your inventory items by pressing the corresponding number",
		"Buy new items by pressing B",
		"The game ends when you die!"
	];
	var _tutorialText:FlxText = new FlxText(0, 0, "", 12);
    var _btnBack:FlxButton;

    override public function create():Void {
        var tutorialTextString:String = "";
        for(s in _TUTORIAL_TEXTS) {
            tutorialTextString += s + "\n";
        }

        _tutorialText.alignment = CENTER;
        _tutorialText.text = tutorialTextString;
        _tutorialText.x = FlxG.width / 2 - _tutorialText.width / 2;
        _tutorialText.y = FlxG.height / 2 - _tutorialText.height / 2;

        _btnBack = new FlxButton(0, 0, "Back", gotoMenu);
        _btnBack.y = FlxG.height - _btnBack.height;

        add(_tutorialText);
        add(_btnBack);

        super.create();
    }

    function gotoMenu():Void{
        FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {
            FlxG.switchState(new MenuState());
        });
    }
}