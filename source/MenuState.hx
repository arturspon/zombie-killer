package;

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

        var btnCredits = new FlxButton(0, 0, "Credits", gotoCredits);
        btnCredits.x = FlxG.width / 2 - btnCredits.width / 2;
        btnCredits.y = btnStart.y + btnStart.height + 4;

        add(gameTitle);
        add(btnStart);
        add(btnCredits);

        super.create();
    }

    function startGame() {
        FlxG.switchState(new PlayState());
    }

    function gotoCredits() {
        FlxG.switchState(new CreditsState());
    }
}