// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Entity)
HX_DECLARE_CLASS0(HUD)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Survivor)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxRandom)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(lime,math,Vector2)



class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x46c2835d };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"PlayState"); }
		static hx::ObjectPtr< PlayState_obj > __new( ::Dynamic MaxSize);
		static hx::ObjectPtr< PlayState_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayState",5d,83,c2,46); }

		static void __boot();
		static  ::HUD _hud;
		static  ::lime::math::Vector2 SURVIVOR_SPAWN_POINT;
		static ::Array< ::Dynamic> ENEMIES_SPAWN_POINT_LIST;
		static  ::haxe::ds::IntMap SPAWN_FREQUENCY_BY_WAVE_MAP;
		static  ::haxe::ds::IntMap SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP;
		static  ::haxe::ds::IntMap SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP;
		static int currentInventorySelectedItem;
		static ::Array< int > inventoryItemsList;
		static int WEAPON_PISTOL;
		static int WEAPON_RIFLE;
		 ::Survivor _survivor;
		 ::flixel::group::FlxTypedGroup _bullets;
		 ::flixel::group::FlxTypedGroup _enemies;
		int _enemies_in_this_wave;
		int _enemies_killed_in_this_wave;
		Float playerHealth;
		Float playerMoney;
		int currentWave;
		 ::flixel::tile::FlxTilemap _mapWalls;
		 ::flixel::tile::FlxTilemap _mapGround;
		int secondsRemainingUntilNextWave;
		 ::flixel::math::FlxRandom _random;
		void create();

		void update(Float elapsed);

		void checkIfWaveIsOver();
		::Dynamic checkIfWaveIsOver_dyn();

		void populateWave();
		::Dynamic populateWave_dyn();

		void enemySpawner( ::flixel::util::FlxTimer deltaTime);
		::Dynamic enemySpawner_dyn();

		void spawnEnemy( ::flixel::util::FlxTimer deltaTime);
		::Dynamic spawnEnemy_dyn();

		void onOverlap( ::flixel::FlxObject s1, ::flixel::FlxObject s2);
		::Dynamic onOverlap_dyn();

};


#endif /* INCLUDED_PlayState */ 
