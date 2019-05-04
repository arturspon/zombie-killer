package;

import flixel.util.FlxColor;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.FlxState;

class GameOverState extends FlxState {
    override public function create():Void {
        var gameOverText = new FlxText(0, 0, "GAME OVER", 48);
        gameOverText.x = FlxG.width / 2 - gameOverText.width / 2;
        gameOverText.y = FlxG.height / 2 - gameOverText.height;
        
        var mainMenuBtn = new FlxButton(0, 0, "Main menu", gotoMenu);
        mainMenuBtn.y = gameOverText.y + gameOverText.height + 64;
        mainMenuBtn.x = FlxG.width / 2 - mainMenuBtn.width;

        var playAgainBtn = new FlxButton(0, 0, "Play again", startGame);
        playAgainBtn.y = mainMenuBtn.y;
        playAgainBtn.x = mainMenuBtn.x + mainMenuBtn.width + 4;

        add(gameOverText);
        add(mainMenuBtn);
        add(playAgainBtn);

        super.create();
    }

    function startGame() {
        FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {
            FlxG.switchState(new PlayState());
        });
    }

    function gotoMenu():Void{
        FlxG.camera.fade(FlxColor.BLACK, .33, false, function() {
            FlxG.switchState(new MenuState());
        });
    }
}