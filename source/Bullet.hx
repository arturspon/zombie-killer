package;

import flixel.FlxSprite;

class Bullet extends FlxSprite {
    public function new() {
        super();
        makeGraphic(8, 8, 0xFFFF0000);
    }

    override public function update(elapsed:Float):Void {
        if(!isOnScreen()){
            kill();
        }
        super.update(elapsed);
    }
}