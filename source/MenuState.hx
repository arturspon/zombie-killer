package;

import flixel.util.FlxColor;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;

class MenuState extends FlxState {
    override public function create():Void {
        var gameTitle = new FlxText();
        gameTitle.text = "Zombie Killer";
        gameTitle.size = 64;
        gameTitle.x = FlxG.width / 2 - gameTitle.width / 2;
        gameTitle.y = FlxG.height / 2 - 128;

        var btnStart = new FlxButton(0, 0, "Start!", startGame);
        btnStart.x = FlxG.width / 2 - btnStart.width / 2;
        btnStart.y = gameTitle.y + 128;

        var btnTutorial = new FlxButton(0, 0, "Tutorial", gotoTutorial);
        btnTutorial.x = FlxG.width / 2 - btnTutorial.width / 2;
        btnTutorial.y = btnStart.y + btnStart.height + 4;

        var btnCredits = new FlxButton(0, 0, "Credits", gotoCredits);
        btnCredits.x = FlxG.width / 2 - btnCredits.width / 2;
        btnCredits.y = btnTutorial.y + btnTutorial.height + 4;

        add(gameTitle);
        add(btnStart);
        add(btnTutorial);
        add(btnCredits);

        super.create();
    }

    function startGame() {
        FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {
            FlxG.switchState(new PlayState());
        });
    }

    function gotoTutorial():Void{
        FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {
            FlxG.switchState(new TutorialState());
        });
    }

    function gotoCredits() {
        FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {
            FlxG.switchState(new CreditsState());
        });
    }
}