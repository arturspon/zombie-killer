package;

import flixel.FlxSprite;

class Bullet extends FlxSprite {
    var bulletSize = 2;

    public function new() {
        super();
        loadGraphic(AssetPaths.bullet__png, false, 32, 32);
        setGraphicSize(bulletSize);
        updateHitbox();
        updateFramePixels();
    }

    override public function update(elapsed:Float):Void {
        if(!isOnScreen()){
            kill();
        }
        super.update(elapsed);
    }
}