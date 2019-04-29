package;


import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#elseif (sys && windows && !cs)
			rootPath = FileSystem.absolutePath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
			#else
			rootPath = "";
			#end

		}

		Assets.defaultRootPath = rootPath;

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:pathy25:assets%2Fdata%2Fcave.jsony4:sizei12760y4:typey4:TEXTy2:idR1y7:preloadtgoR0y31:assets%2Fdata%2Fcave_ground.csvR2i3994R3R4R5R7R6tgoR0y30:assets%2Fdata%2Fcave_walls.csvR2i3835R3R4R5R8R6tgoR0y28:assets%2Fimages%2Fbullet.pngR2i660R3y5:IMAGER5R9R6tgoR0y33:assets%2Fimages%2Fbullet_icon.pngR2i9545R3R10R5R11R6tgoR0y34:assets%2Fimages%2Fbullet_icon1.pngR2i1892R3R10R5R12R6tgoR0y34:assets%2Fimages%2Fcave_tileset.pngR2i44054R3R10R5R13R6tgoR0y35:assets%2Fimages%2Fdungeon_tiles.pngR2i20013R3R10R5R14R6tgoR0y31:assets%2Fimages%2Fland_mine.pngR2i657R3R10R5R15R6tgoR0y36:assets%2Fimages%2Fland_mine_icon.pngR2i1275R3R10R5R16R6tgoR0y34:assets%2Fimages%2Fsimple_heart.pngR2i249R3R10R5R17R6tgoR0y41:assets%2Fimages%2Fsurvivor%2Fsurvivor.pngR2i2037091R3R10R5R18R6tgoR0y54:assets%2Fimages%2Fsurvivor%2Fsurvivor_idle_handgun.pngR2i429494R3R10R5R19R6tgoR0y52:assets%2Fimages%2Fsurvivor%2Fsurvivor_move_rifle.pngR2i464995R3R10R5R20R6tgoR0y55:assets%2Fimages%2Fsurvivor%2Fsurvivor_shoot_handgun.pngR2i89597R3R10R5R21R6tgoR0y53:assets%2Fimages%2Fsurvivor%2Fsurvivor_shoot_rifle.pngR2i115173R3R10R5R22R6tgoR0y35:assets%2Fimages%2Fweapons%2FBAR.pngR2i500R3R10R5R23R6tgoR0y39:assets%2Fimages%2Fweapons%2FBazooka.pngR2i510R3R10R5R24R6tgoR0y42:assets%2Fimages%2Fweapons%2FBren%20LMG.pngR2i672R3R10R5R25R6tgoR0y44:assets%2Fimages%2Fweapons%2FColt%20M1911.pngR2i518R3R10R5R26R6tgoR0y39:assets%2Fimages%2Fweapons%2FDP%2028.pngR2i546R3R10R5R27R6tgoR0y49:assets%2Fimages%2Fweapons%2FEnfield%20No.%202.pngR2i419R3R10R5R28R6tgoR0y43:assets%2Fimages%2Fweapons%2FGewehr%2043.pngR2i455R3R10R5R29R6tgoR0y47:assets%2Fimages%2Fweapons%2FKarabiner%2098k.pngR2i454R3R10R5R30R6tgoR0y43:assets%2Fimages%2Fweapons%2FM1%20Garand.pngR2i458R3R10R5R31R6tgoR0y39:assets%2Fimages%2Fweapons%2FMG%2042.pngR2i673R3R10R5R32R6tgoR0y48:assets%2Fimages%2Fweapons%2FMk%202%20grenade.pngR2i554R3R10R5R33R6tgoR0y46:assets%2Fimages%2Fweapons%2FMosin%20Nagant.pngR2i486R3R10R5R34R6tgoR0y39:assets%2Fimages%2Fweapons%2FMP%2040.pngR2i520R3R10R5R35R6tgoR0y45:assets%2Fimages%2Fweapons%2FPanzerschreck.pngR2i486R3R10R5R36R6tgoR0y41:assets%2Fimages%2Fweapons%2FPPSh%2041.pngR2i445R3R10R5R37R6tgoR0y51:assets%2Fimages%2Fweapons%2FSpringfield%20M1903.pngR2i437R3R10R5R38R6tgoR0y36:assets%2Fimages%2Fweapons%2FSten.pngR2i453R3R10R5R39R6tgoR0y38:assets%2Fimages%2Fweapons%2FStG_44.pngR2i789R3R10R5R40R6tgoR0y47:assets%2Fimages%2Fweapons%2FStick%20grenade.pngR2i301R3R10R5R41R6tgoR0y38:assets%2Fimages%2Fweapons%2FSVT-40.pngR2i508R3R10R5R42R6tgoR0y40:assets%2Fimages%2Fweapons%2FThompson.pngR2i519R3R10R5R43R6tgoR0y45:assets%2Fimages%2Fweapons%2FTokarev_TT-33.pngR2i454R3R10R5R44R6tgoR0y51:assets%2Fimages%2Fweapons%2FType%2097%20grenade.pngR2i396R3R10R5R45R6tgoR0y51:assets%2Fimages%2Fweapons%2FType%2099%20Arisaka.pngR2i460R3R10R5R46R6tgoR0y47:assets%2Fimages%2Fweapons%2FType%2099%20LMG.pngR2i799R3R10R5R47R6tgoR0y45:assets%2Fimages%2Fweapons%2FWalther%20P38.pngR2i440R3R10R5R48R6tgoR0y44:assets%2Fimages%2Fzombie%2Fzombie_attack.pngR2i374892R3R10R5R49R6tgoR0y45:assets%2Fimages%2Fzombie%2Fzombie_running.pngR2i617531R3R10R5R50R6tgoR0y36:assets%2Fmusic%2Fmusic-goes-here.txtR2zR3R4R5R51R6tgoR2i713270R3y5:SOUNDR5y33:assets%2Fsounds%2Fpistol_shot.wavy9:pathGroupaR53hR6tgoR0y36:assets%2Fsounds%2Fsounds-go-here.txtR2zR3R4R5R55R6tgoR2i2114R3y5:MUSICR5y26:flixel%2Fsounds%2Fbeep.mp3R54aR57y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR2i39706R3R56R5y28:flixel%2Fsounds%2Fflixel.mp3R54aR59y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR2i5794R3R52R5R58R54aR57R58hgoR2i33629R3R52R5R60R54aR59R60hgoR2i15744R3y4:FONTy9:classNamey35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR2i29724R3R61R62y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR0y33:flixel%2Fimages%2Fui%2Fbutton.pngR2i519R3R10R5R67R6tgoR0y36:flixel%2Fimages%2Flogo%2Fdefault.pngR2i3280R3R10R5R68R6tgoR0y34:flixel%2Fflixel-ui%2Fimg%2Fbox.pngR2i912R3R10R5R69R6tgoR0y37:flixel%2Fflixel-ui%2Fimg%2Fbutton.pngR2i433R3R10R5R70R6tgoR0y48:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_down.pngR2i446R3R10R5R71R6tgoR0y48:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_left.pngR2i459R3R10R5R72R6tgoR0y49:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_right.pngR2i511R3R10R5R73R6tgoR0y46:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_up.pngR2i493R3R10R5R74R6tgoR0y42:flixel%2Fflixel-ui%2Fimg%2Fbutton_thin.pngR2i247R3R10R5R75R6tgoR0y44:flixel%2Fflixel-ui%2Fimg%2Fbutton_toggle.pngR2i534R3R10R5R76R6tgoR0y40:flixel%2Fflixel-ui%2Fimg%2Fcheck_box.pngR2i922R3R10R5R77R6tgoR0y41:flixel%2Fflixel-ui%2Fimg%2Fcheck_mark.pngR2i946R3R10R5R78R6tgoR0y37:flixel%2Fflixel-ui%2Fimg%2Fchrome.pngR2i253R3R10R5R79R6tgoR0y42:flixel%2Fflixel-ui%2Fimg%2Fchrome_flat.pngR2i212R3R10R5R80R6tgoR0y43:flixel%2Fflixel-ui%2Fimg%2Fchrome_inset.pngR2i192R3R10R5R81R6tgoR0y43:flixel%2Fflixel-ui%2Fimg%2Fchrome_light.pngR2i214R3R10R5R82R6tgoR0y44:flixel%2Fflixel-ui%2Fimg%2Fdropdown_mark.pngR2i156R3R10R5R83R6tgoR0y41:flixel%2Fflixel-ui%2Fimg%2Ffinger_big.pngR2i1724R3R10R5R84R6tgoR0y43:flixel%2Fflixel-ui%2Fimg%2Ffinger_small.pngR2i294R3R10R5R85R6tgoR0y38:flixel%2Fflixel-ui%2Fimg%2Fhilight.pngR2i129R3R10R5R86R6tgoR0y36:flixel%2Fflixel-ui%2Fimg%2Finvis.pngR2i128R3R10R5R87R6tgoR0y41:flixel%2Fflixel-ui%2Fimg%2Fminus_mark.pngR2i136R3R10R5R88R6tgoR0y40:flixel%2Fflixel-ui%2Fimg%2Fplus_mark.pngR2i147R3R10R5R89R6tgoR0y36:flixel%2Fflixel-ui%2Fimg%2Fradio.pngR2i191R3R10R5R90R6tgoR0y40:flixel%2Fflixel-ui%2Fimg%2Fradio_dot.pngR2i153R3R10R5R91R6tgoR0y37:flixel%2Fflixel-ui%2Fimg%2Fswatch.pngR2i185R3R10R5R92R6tgoR0y34:flixel%2Fflixel-ui%2Fimg%2Ftab.pngR2i201R3R10R5R93R6tgoR0y39:flixel%2Fflixel-ui%2Fimg%2Ftab_back.pngR2i210R3R10R5R94R6tgoR0y44:flixel%2Fflixel-ui%2Fimg%2Ftooltip_arrow.pngR2i18509R3R10R5R95R6tgoR0y39:flixel%2Fflixel-ui%2Fxml%2Fdefaults.xmlR2i1263R3R4R5R96R6tgoR0y53:flixel%2Fflixel-ui%2Fxml%2Fdefault_loading_screen.xmlR2i1953R3R4R5R97R6tgoR0y44:flixel%2Fflixel-ui%2Fxml%2Fdefault_popup.xmlR2i1848R3R4R5R98R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_data_cave_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_cave_ground_csv extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_cave_walls_csv extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_bullet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bullet_icon_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bullet_icon1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_cave_tileset_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_dungeon_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_land_mine_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_land_mine_icon_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_simple_heart_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_survivor_survivor_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_survivor_survivor_idle_handgun_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_survivor_survivor_move_rifle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_survivor_survivor_shoot_handgun_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_survivor_survivor_shoot_rifle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_bar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_bazooka_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_bren_lmg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_colt_m1911_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_dp_28_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_enfield_no__2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_gewehr_43_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_karabiner_98k_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_m1_garand_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_mg_42_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_mk_2_grenade_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_mosin_nagant_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_mp_40_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_panzerschreck_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_ppsh_41_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_springfield_m1903_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_sten_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_stg_44_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_stick_grenade_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_svt_40_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_thompson_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_tokarev_tt_33_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_type_97_grenade_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_type_99_arisaka_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_type_99_lmg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_weapons_walther_p38_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_zombie_zombie_attack_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_zombie_zombie_running_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_pistol_shot_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_box_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_down_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_up_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_button_thin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_button_toggle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_check_box_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_check_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_flat_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_inset_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_light_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_dropdown_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_finger_big_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_finger_small_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_hilight_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_invis_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_minus_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_plus_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_radio_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_radio_dot_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_swatch_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_tab_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_tab_back_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_img_tooltip_arrow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_xml_defaults_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_xml_default_loading_screen_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_flixel_ui_xml_default_popup_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/data/cave.json") #if display private #end class __ASSET__assets_data_cave_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/cave_ground.csv") #if display private #end class __ASSET__assets_data_cave_ground_csv extends haxe.io.Bytes {}
@:keep @:file("assets/data/cave_walls.csv") #if display private #end class __ASSET__assets_data_cave_walls_csv extends haxe.io.Bytes {}
@:keep @:image("assets/images/bullet.png") #if display private #end class __ASSET__assets_images_bullet_png extends lime.graphics.Image {}
@:keep @:image("assets/images/bullet_icon.png") #if display private #end class __ASSET__assets_images_bullet_icon_png extends lime.graphics.Image {}
@:keep @:image("assets/images/bullet_icon1.png") #if display private #end class __ASSET__assets_images_bullet_icon1_png extends lime.graphics.Image {}
@:keep @:image("assets/images/cave_tileset.png") #if display private #end class __ASSET__assets_images_cave_tileset_png extends lime.graphics.Image {}
@:keep @:image("assets/images/dungeon_tiles.png") #if display private #end class __ASSET__assets_images_dungeon_tiles_png extends lime.graphics.Image {}
@:keep @:image("assets/images/land_mine.png") #if display private #end class __ASSET__assets_images_land_mine_png extends lime.graphics.Image {}
@:keep @:image("assets/images/land_mine_icon.png") #if display private #end class __ASSET__assets_images_land_mine_icon_png extends lime.graphics.Image {}
@:keep @:image("assets/images/simple_heart.png") #if display private #end class __ASSET__assets_images_simple_heart_png extends lime.graphics.Image {}
@:keep @:image("assets/images/survivor/survivor.png") #if display private #end class __ASSET__assets_images_survivor_survivor_png extends lime.graphics.Image {}
@:keep @:image("assets/images/survivor/survivor_idle_handgun.png") #if display private #end class __ASSET__assets_images_survivor_survivor_idle_handgun_png extends lime.graphics.Image {}
@:keep @:image("assets/images/survivor/survivor_move_rifle.png") #if display private #end class __ASSET__assets_images_survivor_survivor_move_rifle_png extends lime.graphics.Image {}
@:keep @:image("assets/images/survivor/survivor_shoot_handgun.png") #if display private #end class __ASSET__assets_images_survivor_survivor_shoot_handgun_png extends lime.graphics.Image {}
@:keep @:image("assets/images/survivor/survivor_shoot_rifle.png") #if display private #end class __ASSET__assets_images_survivor_survivor_shoot_rifle_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/BAR.png") #if display private #end class __ASSET__assets_images_weapons_bar_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Bazooka.png") #if display private #end class __ASSET__assets_images_weapons_bazooka_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Bren LMG.png") #if display private #end class __ASSET__assets_images_weapons_bren_lmg_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Colt M1911.png") #if display private #end class __ASSET__assets_images_weapons_colt_m1911_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/DP 28.png") #if display private #end class __ASSET__assets_images_weapons_dp_28_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Enfield No. 2.png") #if display private #end class __ASSET__assets_images_weapons_enfield_no__2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Gewehr 43.png") #if display private #end class __ASSET__assets_images_weapons_gewehr_43_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Karabiner 98k.png") #if display private #end class __ASSET__assets_images_weapons_karabiner_98k_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/M1 Garand.png") #if display private #end class __ASSET__assets_images_weapons_m1_garand_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/MG 42.png") #if display private #end class __ASSET__assets_images_weapons_mg_42_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Mk 2 grenade.png") #if display private #end class __ASSET__assets_images_weapons_mk_2_grenade_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Mosin Nagant.png") #if display private #end class __ASSET__assets_images_weapons_mosin_nagant_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/MP 40.png") #if display private #end class __ASSET__assets_images_weapons_mp_40_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Panzerschreck.png") #if display private #end class __ASSET__assets_images_weapons_panzerschreck_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/PPSh 41.png") #if display private #end class __ASSET__assets_images_weapons_ppsh_41_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Springfield M1903.png") #if display private #end class __ASSET__assets_images_weapons_springfield_m1903_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Sten.png") #if display private #end class __ASSET__assets_images_weapons_sten_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/StG_44.png") #if display private #end class __ASSET__assets_images_weapons_stg_44_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Stick grenade.png") #if display private #end class __ASSET__assets_images_weapons_stick_grenade_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/SVT-40.png") #if display private #end class __ASSET__assets_images_weapons_svt_40_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Thompson.png") #if display private #end class __ASSET__assets_images_weapons_thompson_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Tokarev_TT-33.png") #if display private #end class __ASSET__assets_images_weapons_tokarev_tt_33_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Type 97 grenade.png") #if display private #end class __ASSET__assets_images_weapons_type_97_grenade_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Type 99 Arisaka.png") #if display private #end class __ASSET__assets_images_weapons_type_99_arisaka_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Type 99 LMG.png") #if display private #end class __ASSET__assets_images_weapons_type_99_lmg_png extends lime.graphics.Image {}
@:keep @:image("assets/images/weapons/Walther P38.png") #if display private #end class __ASSET__assets_images_weapons_walther_p38_png extends lime.graphics.Image {}
@:keep @:image("assets/images/zombie/zombie_attack.png") #if display private #end class __ASSET__assets_images_zombie_zombie_attack_png extends lime.graphics.Image {}
@:keep @:image("assets/images/zombie/zombie_running.png") #if display private #end class __ASSET__assets_images_zombie_zombie_running_png extends lime.graphics.Image {}
@:keep @:file("assets/music/music-goes-here.txt") #if display private #end class __ASSET__assets_music_music_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/pistol_shot.wav") #if display private #end class __ASSET__assets_sounds_pistol_shot_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/sounds-go-here.txt") #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,6,0/assets/sounds/beep.mp3") #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,6,0/assets/sounds/flixel.mp3") #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,6,0/assets/sounds/beep.ogg") #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,6,0/assets/sounds/flixel.ogg") #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/nokiafc22.ttf") #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/monsterrat.ttf") #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,6,0/assets/images/ui/button.png") #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,6,0/assets/images/logo/default.png") #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/box.png") #if display private #end class __ASSET__flixel_flixel_ui_img_box_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/button.png") #if display private #end class __ASSET__flixel_flixel_ui_img_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/button_arrow_down.png") #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_down_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/button_arrow_left.png") #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_left_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/button_arrow_right.png") #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_right_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/button_arrow_up.png") #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_up_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/button_thin.png") #if display private #end class __ASSET__flixel_flixel_ui_img_button_thin_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/button_toggle.png") #if display private #end class __ASSET__flixel_flixel_ui_img_button_toggle_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/check_box.png") #if display private #end class __ASSET__flixel_flixel_ui_img_check_box_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/check_mark.png") #if display private #end class __ASSET__flixel_flixel_ui_img_check_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/chrome.png") #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/chrome_flat.png") #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_flat_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/chrome_inset.png") #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_inset_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/chrome_light.png") #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_light_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/dropdown_mark.png") #if display private #end class __ASSET__flixel_flixel_ui_img_dropdown_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/finger_big.png") #if display private #end class __ASSET__flixel_flixel_ui_img_finger_big_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/finger_small.png") #if display private #end class __ASSET__flixel_flixel_ui_img_finger_small_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/hilight.png") #if display private #end class __ASSET__flixel_flixel_ui_img_hilight_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/invis.png") #if display private #end class __ASSET__flixel_flixel_ui_img_invis_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/minus_mark.png") #if display private #end class __ASSET__flixel_flixel_ui_img_minus_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/plus_mark.png") #if display private #end class __ASSET__flixel_flixel_ui_img_plus_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/radio.png") #if display private #end class __ASSET__flixel_flixel_ui_img_radio_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/radio_dot.png") #if display private #end class __ASSET__flixel_flixel_ui_img_radio_dot_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/swatch.png") #if display private #end class __ASSET__flixel_flixel_ui_img_swatch_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/tab.png") #if display private #end class __ASSET__flixel_flixel_ui_img_tab_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/tab_back.png") #if display private #end class __ASSET__flixel_flixel_ui_img_tab_back_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/images/tooltip_arrow.png") #if display private #end class __ASSET__flixel_flixel_ui_img_tooltip_arrow_png extends lime.graphics.Image {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/xml/defaults.xml") #if display private #end class __ASSET__flixel_flixel_ui_xml_defaults_xml extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/xml/default_loading_screen.xml") #if display private #end class __ASSET__flixel_flixel_ui_xml_default_loading_screen_xml extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel-ui/2,3,2/assets/xml/default_popup.xml") #if display private #end class __ASSET__flixel_flixel_ui_xml_default_popup_xml extends haxe.io.Bytes {}
@:keep @:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end
