// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_HUD
#include <HUD.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Survivor
#include <Survivor.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_14_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",14,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_59_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",59,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_90_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",90,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_102_checkIfWaveIsOver,"PlayState","checkIfWaveIsOver",0x7bd9f2cb,"PlayState.checkIfWaveIsOver","PlayState.hx",102,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_111_checkIfWaveIsOver,"PlayState","checkIfWaveIsOver",0x7bd9f2cb,"PlayState.checkIfWaveIsOver","PlayState.hx",111,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_117_populateWave,"PlayState","populateWave",0xede38174,"PlayState.populateWave","PlayState.hx",117,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_127_enemySpawner,"PlayState","enemySpawner",0x8e991db1,"PlayState.enemySpawner","PlayState.hx",127,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_135_spawnEnemy,"PlayState","spawnEnemy",0x36abe37e,"PlayState.spawnEnemy","PlayState.hx",135,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_144_onOverlap,"PlayState","onOverlap",0xbd0dbfd7,"PlayState.onOverlap","PlayState.hx",144,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_31_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",31,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_33_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",33,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_40_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",40,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_43_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",43,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_49_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",49,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_53_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",53,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_54_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",54,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_14_new)
HXLINE(  57)		this->_random =  ::flixel::math::FlxRandom_obj::__alloc( HX_CTX ,null());
HXLINE(  46)		this->secondsRemainingUntilNextWave = 0;
HXLINE(  24)		this->currentWave = 0;
HXLINE(  20)		this->_enemies_killed_in_this_wave = 0;
HXLINE(  18)		this->_enemies =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  17)		this->_bullets =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  14)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x2335d9a7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2335d9a7;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x3634c52c || inClassId==(int)0x46c2835d;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_59_create)
HXLINE(  61)		 ::lime::math::Vector2 _hx_tmp =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,-8,238);
HXDLIN(  61)		 ::lime::math::Vector2 _hx_tmp1 =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,::flixel::FlxG_obj::width,134);
HXDLIN(  61)		 ::lime::math::Vector2 _hx_tmp2 =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,::flixel::FlxG_obj::width,213);
HXDLIN(  61)		::PlayState_obj::ENEMIES_SPAWN_POINT_LIST = ::Array_obj< ::Dynamic>::__new(4)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3, ::lime::math::Vector2_obj::__alloc( HX_CTX ,475,::flixel::FlxG_obj::height));
HXLINE(  63)		this->_mapWalls =  ::flixel::tile::FlxTilemap_obj::__alloc( HX_CTX );
HXLINE(  64)		this->_mapWalls->loadMapFromCSV(HX_("assets/data/cave_walls.csv",08,bb,b9,08),HX_("assets/images/cave_tileset.png",e8,f4,38,2b),16,16,null(),0,1,null());
HXLINE(  65)		this->add(this->_mapWalls);
HXLINE(  66)		this->_mapGround =  ::flixel::tile::FlxTilemap_obj::__alloc( HX_CTX );
HXLINE(  67)		this->_mapGround->loadMapFromCSV(HX_("assets/data/cave_ground.csv",78,fa,c8,ad),HX_("assets/images/cave_tileset.png",e8,f4,38,2b),16,16,null(),0,1,null());
HXLINE(  68)		this->add(this->_mapGround);
HXLINE(  70)		this->_survivor =  ::Survivor_obj::__alloc( HX_CTX ,hx::TCast< int >::cast(::PlayState_obj::SURVIVOR_SPAWN_POINT->x),hx::TCast< int >::cast(::PlayState_obj::SURVIVOR_SPAWN_POINT->y),this->_bullets);
HXLINE(  71)		this->playerHealth = this->_survivor->health;
HXLINE(  74)		::PlayState_obj::inventoryItemsList = ::Array_obj< int >::__new();
HXLINE(  75)		::PlayState_obj::inventoryItemsList->push(0);
HXLINE(  77)		this->add(this->_survivor);
HXLINE(  78)		this->add(this->_bullets);
HXLINE(  79)		this->add(this->_enemies);
HXLINE(  81)		::PlayState_obj::_hud =  ::HUD_obj::__alloc( HX_CTX ,this->_survivor);
HXLINE(  82)		this->add(::PlayState_obj::_hud);
HXLINE(  84)		this->populateWave();
HXLINE(  85)		this->enemySpawner(null());
HXLINE(  87)		this->super::create();
            	}


void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_90_update)
HXLINE(  91)		this->super::update(elapsed);
HXLINE(  92)		::flixel::FlxG_obj::overlap(this->_survivor,this->_enemies,this->onOverlap_dyn(),null());
HXLINE(  93)		::flixel::FlxG_obj::overlap(this->_bullets,this->_enemies,this->onOverlap_dyn(),null());
HXLINE(  94)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_enemies) ),( ( ::flixel::FlxBasic)(this->_enemies) ),null(),::flixel::FlxObject_obj::separate_dyn());
HXLINE(  95)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_survivor) ),( ( ::flixel::FlxBasic)(this->_mapWalls) ),null(),::flixel::FlxObject_obj::separate_dyn());
HXLINE(  96)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_enemies) ),( ( ::flixel::FlxBasic)(this->_mapWalls) ),null(),::flixel::FlxObject_obj::separate_dyn());
HXLINE(  97)		this->checkIfWaveIsOver();
HXLINE(  98)		this->playerHealth = this->_survivor->health;
HXLINE(  99)		this->playerMoney = this->_survivor->money;
            	}


void PlayState_obj::checkIfWaveIsOver(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_102_checkIfWaveIsOver)
HXDLIN( 102)		 ::PlayState _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 103)		if ((this->_enemies_in_this_wave == this->_enemies_killed_in_this_wave)) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::PlayState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer deltaTime){
            				HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_111_checkIfWaveIsOver)
HXLINE( 111)				_gthis->secondsRemainingUntilNextWave--;
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 104)			this->_enemies_killed_in_this_wave = 0;
HXLINE( 105)			this->currentWave++;
HXLINE( 106)			this->populateWave();
HXLINE( 108)			 ::Dynamic timeUntilNextWave;
HXDLIN( 108)			if (hx::IsNull( ::PlayState_obj::SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP->get(this->currentWave) )) {
HXLINE( 108)				timeUntilNextWave = 5;
            			}
            			else {
HXLINE( 108)				timeUntilNextWave = ::PlayState_obj::SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP->get(this->currentWave);
            			}
HXLINE( 109)			this->secondsRemainingUntilNextWave = ( (int)(timeUntilNextWave) );
HXLINE( 110)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0(_gthis)),timeUntilNextWave);
HXLINE( 113)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(timeUntilNextWave,this->enemySpawner_dyn(),1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,checkIfWaveIsOver,(void))

void PlayState_obj::populateWave(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_117_populateWave)
HXLINE( 118)		this->_enemies =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 119)		int _hx_tmp;
HXDLIN( 119)		if (hx::IsNull( ::PlayState_obj::SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP->get(this->currentWave) )) {
HXLINE( 119)			_hx_tmp = ((this->currentWave * 2) + 5);
            		}
            		else {
HXLINE( 119)			_hx_tmp = ::PlayState_obj::SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP->get_int(this->currentWave);
            		}
HXDLIN( 119)		this->_enemies_in_this_wave = _hx_tmp;
HXLINE( 120)		{
HXLINE( 120)			int _g = 0;
HXDLIN( 120)			int _g1 = this->_enemies_in_this_wave;
HXDLIN( 120)			while((_g < _g1)){
HXLINE( 120)				_g = (_g + 1);
HXDLIN( 120)				int i = (_g - 1);
HXLINE( 121)				 ::Enemy enemy =  ::Enemy_obj::__alloc( HX_CTX ,this->currentWave,this->_survivor);
HXLINE( 122)				enemy->kill();
HXLINE( 123)				this->_enemies->add(enemy).StaticCast<  ::Enemy >();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,populateWave,(void))

void PlayState_obj::enemySpawner( ::flixel::util::FlxTimer deltaTime){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_127_enemySpawner)
HXLINE( 128)		 ::flixel::util::FlxTimer timer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE( 129)		 ::Dynamic spawnFrequency;
HXDLIN( 129)		if (hx::IsNull( ::PlayState_obj::SPAWN_FREQUENCY_BY_WAVE_MAP->get(this->currentWave) )) {
HXLINE( 129)			spawnFrequency = 1;
            		}
            		else {
HXLINE( 129)			spawnFrequency = ::PlayState_obj::SPAWN_FREQUENCY_BY_WAVE_MAP->get(this->currentWave);
            		}
HXLINE( 130)		timer->start(spawnFrequency,this->spawnEnemy_dyn(),this->_enemies_in_this_wave);
HXLINE( 132)		if ((this->currentWave == 4)) {
HXLINE( 132)			::flixel::FlxG_obj::cameras->shake(((Float)0.015),((Float)1.5),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,enemySpawner,(void))

void PlayState_obj::spawnEnemy( ::flixel::util::FlxTimer deltaTime){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_135_spawnEnemy)
HXLINE( 136)		 ::flixel::math::FlxRandom random =  ::flixel::math::FlxRandom_obj::__alloc( HX_CTX ,null());
HXLINE( 137)		 ::lime::math::Vector2 pointToSpawn = ::PlayState_obj::ENEMIES_SPAWN_POINT_LIST->__get(random->_hx_int(0,(::PlayState_obj::ENEMIES_SPAWN_POINT_LIST->length - 1),null())).StaticCast<  ::lime::math::Vector2 >();
HXLINE( 139)		 ::Enemy enemy = this->_enemies->getFirstAvailable(null(),null()).StaticCast<  ::Enemy >();
HXLINE( 140)		enemy->reset(pointToSpawn->x,pointToSpawn->y);
HXLINE( 141)		this->add(enemy);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,spawnEnemy,(void))

void PlayState_obj::onOverlap( ::flixel::FlxObject s1, ::flixel::FlxObject s2){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_144_onOverlap)
HXLINE( 145)		if (::Std_obj::is(s1,hx::ClassOf< ::Survivor >())) {
HXLINE( 146)			s1->hurt(( (Float)(1) ));
            		}
HXLINE( 147)		if (::Std_obj::is(s1,hx::ClassOf< ::Bullet >())) {
HXLINE( 148)			s1->kill();
HXLINE( 149)			s2->hurt(( (Float)(1) ));
HXLINE( 150)			if (!(s2->alive)) {
HXLINE( 151)				this->_enemies_killed_in_this_wave++;
HXLINE( 152)				 ::Survivor _hx_tmp = this->_survivor;
HXDLIN( 152)				Float _hx_tmp1 = _hx_tmp->money;
HXDLIN( 152)				_hx_tmp->money = (_hx_tmp1 + ::flixel::math::FlxMath_obj::roundDecimal(this->_random->_hx_float(((Float)0.2),((Float)1.2),null()),2));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,onOverlap,(void))

 ::HUD PlayState_obj::_hud;

 ::lime::math::Vector2 PlayState_obj::SURVIVOR_SPAWN_POINT;

::Array< ::Dynamic> PlayState_obj::ENEMIES_SPAWN_POINT_LIST;

 ::haxe::ds::IntMap PlayState_obj::SPAWN_FREQUENCY_BY_WAVE_MAP;

 ::haxe::ds::IntMap PlayState_obj::SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP;

 ::haxe::ds::IntMap PlayState_obj::SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP;

int PlayState_obj::currentInventorySelectedItem;

::Array< int > PlayState_obj::inventoryItemsList;

int PlayState_obj::WEAPON_PISTOL;

int PlayState_obj::WEAPON_RIFLE;


hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_survivor,"_survivor");
	HX_MARK_MEMBER_NAME(_bullets,"_bullets");
	HX_MARK_MEMBER_NAME(_enemies,"_enemies");
	HX_MARK_MEMBER_NAME(_enemies_in_this_wave,"_enemies_in_this_wave");
	HX_MARK_MEMBER_NAME(_enemies_killed_in_this_wave,"_enemies_killed_in_this_wave");
	HX_MARK_MEMBER_NAME(playerHealth,"playerHealth");
	HX_MARK_MEMBER_NAME(playerMoney,"playerMoney");
	HX_MARK_MEMBER_NAME(currentWave,"currentWave");
	HX_MARK_MEMBER_NAME(_mapWalls,"_mapWalls");
	HX_MARK_MEMBER_NAME(_mapGround,"_mapGround");
	HX_MARK_MEMBER_NAME(secondsRemainingUntilNextWave,"secondsRemainingUntilNextWave");
	HX_MARK_MEMBER_NAME(_random,"_random");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_survivor,"_survivor");
	HX_VISIT_MEMBER_NAME(_bullets,"_bullets");
	HX_VISIT_MEMBER_NAME(_enemies,"_enemies");
	HX_VISIT_MEMBER_NAME(_enemies_in_this_wave,"_enemies_in_this_wave");
	HX_VISIT_MEMBER_NAME(_enemies_killed_in_this_wave,"_enemies_killed_in_this_wave");
	HX_VISIT_MEMBER_NAME(playerHealth,"playerHealth");
	HX_VISIT_MEMBER_NAME(playerMoney,"playerMoney");
	HX_VISIT_MEMBER_NAME(currentWave,"currentWave");
	HX_VISIT_MEMBER_NAME(_mapWalls,"_mapWalls");
	HX_VISIT_MEMBER_NAME(_mapGround,"_mapGround");
	HX_VISIT_MEMBER_NAME(secondsRemainingUntilNextWave,"secondsRemainingUntilNextWave");
	HX_VISIT_MEMBER_NAME(_random,"_random");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_random") ) { return hx::Val( _random ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_bullets") ) { return hx::Val( _bullets ); }
		if (HX_FIELD_EQ(inName,"_enemies") ) { return hx::Val( _enemies ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_survivor") ) { return hx::Val( _survivor ); }
		if (HX_FIELD_EQ(inName,"_mapWalls") ) { return hx::Val( _mapWalls ); }
		if (HX_FIELD_EQ(inName,"onOverlap") ) { return hx::Val( onOverlap_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_mapGround") ) { return hx::Val( _mapGround ); }
		if (HX_FIELD_EQ(inName,"spawnEnemy") ) { return hx::Val( spawnEnemy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"playerMoney") ) { return hx::Val( playerMoney ); }
		if (HX_FIELD_EQ(inName,"currentWave") ) { return hx::Val( currentWave ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"playerHealth") ) { return hx::Val( playerHealth ); }
		if (HX_FIELD_EQ(inName,"populateWave") ) { return hx::Val( populateWave_dyn() ); }
		if (HX_FIELD_EQ(inName,"enemySpawner") ) { return hx::Val( enemySpawner_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkIfWaveIsOver") ) { return hx::Val( checkIfWaveIsOver_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_enemies_in_this_wave") ) { return hx::Val( _enemies_in_this_wave ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_enemies_killed_in_this_wave") ) { return hx::Val( _enemies_killed_in_this_wave ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"secondsRemainingUntilNextWave") ) { return hx::Val( secondsRemainingUntilNextWave ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PlayState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_hud") ) { outValue = ( _hud ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inventoryItemsList") ) { outValue = ( inventoryItemsList ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SURVIVOR_SPAWN_POINT") ) { outValue = ( SURVIVOR_SPAWN_POINT ); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ENEMIES_SPAWN_POINT_LIST") ) { outValue = ( ENEMIES_SPAWN_POINT_LIST ); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"SPAWN_FREQUENCY_BY_WAVE_MAP") ) { outValue = ( SPAWN_FREQUENCY_BY_WAVE_MAP ); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"currentInventorySelectedItem") ) { outValue = ( currentInventorySelectedItem ); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP") ) { outValue = ( SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP ); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP") ) { outValue = ( SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP ); return true; }
	}
	return false;
}

hx::Val PlayState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_random") ) { _random=inValue.Cast<  ::flixel::math::FlxRandom >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_bullets") ) { _bullets=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enemies") ) { _enemies=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_survivor") ) { _survivor=inValue.Cast<  ::Survivor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mapWalls") ) { _mapWalls=inValue.Cast<  ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_mapGround") ) { _mapGround=inValue.Cast<  ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"playerMoney") ) { playerMoney=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentWave") ) { currentWave=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"playerHealth") ) { playerHealth=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_enemies_in_this_wave") ) { _enemies_in_this_wave=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_enemies_killed_in_this_wave") ) { _enemies_killed_in_this_wave=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"secondsRemainingUntilNextWave") ) { secondsRemainingUntilNextWave=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PlayState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_hud") ) { _hud=ioValue.Cast<  ::HUD >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inventoryItemsList") ) { inventoryItemsList=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SURVIVOR_SPAWN_POINT") ) { SURVIVOR_SPAWN_POINT=ioValue.Cast<  ::lime::math::Vector2 >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ENEMIES_SPAWN_POINT_LIST") ) { ENEMIES_SPAWN_POINT_LIST=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"SPAWN_FREQUENCY_BY_WAVE_MAP") ) { SPAWN_FREQUENCY_BY_WAVE_MAP=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"currentInventorySelectedItem") ) { currentInventorySelectedItem=ioValue.Cast< int >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP") ) { SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP") ) { SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
	}
	return false;
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_survivor",95,69,47,c6));
	outFields->push(HX_("_bullets",72,c1,a7,63));
	outFields->push(HX_("_enemies",27,c2,c6,0c));
	outFields->push(HX_("_enemies_in_this_wave",b8,72,74,63));
	outFields->push(HX_("_enemies_killed_in_this_wave",4a,32,eb,fb));
	outFields->push(HX_("playerHealth",dd,c6,f7,f8));
	outFields->push(HX_("playerMoney",1f,5f,3e,13));
	outFields->push(HX_("currentWave",92,3e,84,87));
	outFields->push(HX_("_mapWalls",4c,73,f7,83));
	outFields->push(HX_("_mapGround",04,fa,a9,5a));
	outFields->push(HX_("secondsRemainingUntilNextWave",13,b8,de,75));
	outFields->push(HX_("_random",a2,33,06,26));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::Survivor */ ,(int)offsetof(PlayState_obj,_survivor),HX_("_survivor",95,69,47,c6)},
	{hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,_bullets),HX_("_bullets",72,c1,a7,63)},
	{hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,_enemies),HX_("_enemies",27,c2,c6,0c)},
	{hx::fsInt,(int)offsetof(PlayState_obj,_enemies_in_this_wave),HX_("_enemies_in_this_wave",b8,72,74,63)},
	{hx::fsInt,(int)offsetof(PlayState_obj,_enemies_killed_in_this_wave),HX_("_enemies_killed_in_this_wave",4a,32,eb,fb)},
	{hx::fsFloat,(int)offsetof(PlayState_obj,playerHealth),HX_("playerHealth",dd,c6,f7,f8)},
	{hx::fsFloat,(int)offsetof(PlayState_obj,playerMoney),HX_("playerMoney",1f,5f,3e,13)},
	{hx::fsInt,(int)offsetof(PlayState_obj,currentWave),HX_("currentWave",92,3e,84,87)},
	{hx::fsObject /*  ::flixel::tile::FlxTilemap */ ,(int)offsetof(PlayState_obj,_mapWalls),HX_("_mapWalls",4c,73,f7,83)},
	{hx::fsObject /*  ::flixel::tile::FlxTilemap */ ,(int)offsetof(PlayState_obj,_mapGround),HX_("_mapGround",04,fa,a9,5a)},
	{hx::fsInt,(int)offsetof(PlayState_obj,secondsRemainingUntilNextWave),HX_("secondsRemainingUntilNextWave",13,b8,de,75)},
	{hx::fsObject /*  ::flixel::math::FlxRandom */ ,(int)offsetof(PlayState_obj,_random),HX_("_random",a2,33,06,26)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo PlayState_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::HUD */ ,(void *) &PlayState_obj::_hud,HX_("_hud",b8,95,1a,3f)},
	{hx::fsObject /*  ::lime::math::Vector2 */ ,(void *) &PlayState_obj::SURVIVOR_SPAWN_POINT,HX_("SURVIVOR_SPAWN_POINT",03,39,18,37)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &PlayState_obj::ENEMIES_SPAWN_POINT_LIST,HX_("ENEMIES_SPAWN_POINT_LIST",0a,68,5e,ba)},
	{hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &PlayState_obj::SPAWN_FREQUENCY_BY_WAVE_MAP,HX_("SPAWN_FREQUENCY_BY_WAVE_MAP",77,ba,00,df)},
	{hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &PlayState_obj::SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP,HX_("SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP",8d,13,39,9c)},
	{hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &PlayState_obj::SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP,HX_("SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP",b5,08,2d,d6)},
	{hx::fsInt,(void *) &PlayState_obj::currentInventorySelectedItem,HX_("currentInventorySelectedItem",d1,c4,d8,57)},
	{hx::fsObject /* ::Array< int > */ ,(void *) &PlayState_obj::inventoryItemsList,HX_("inventoryItemsList",42,aa,5d,e9)},
	{hx::fsInt,(void *) &PlayState_obj::WEAPON_PISTOL,HX_("WEAPON_PISTOL",ba,10,01,6d)},
	{hx::fsInt,(void *) &PlayState_obj::WEAPON_RIFLE,HX_("WEAPON_RIFLE",05,9c,ae,87)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("_survivor",95,69,47,c6),
	HX_("_bullets",72,c1,a7,63),
	HX_("_enemies",27,c2,c6,0c),
	HX_("_enemies_in_this_wave",b8,72,74,63),
	HX_("_enemies_killed_in_this_wave",4a,32,eb,fb),
	HX_("playerHealth",dd,c6,f7,f8),
	HX_("playerMoney",1f,5f,3e,13),
	HX_("currentWave",92,3e,84,87),
	HX_("_mapWalls",4c,73,f7,83),
	HX_("_mapGround",04,fa,a9,5a),
	HX_("secondsRemainingUntilNextWave",13,b8,de,75),
	HX_("_random",a2,33,06,26),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("checkIfWaveIsOver",1c,68,85,87),
	HX_("populateWave",c3,0d,ae,d2),
	HX_("enemySpawner",00,aa,63,73),
	HX_("spawnEnemy",0d,6e,93,aa),
	HX_("onOverlap",28,fc,ba,80),
	::String(null()) };

static void PlayState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::_hud,"_hud");
	HX_MARK_MEMBER_NAME(PlayState_obj::SURVIVOR_SPAWN_POINT,"SURVIVOR_SPAWN_POINT");
	HX_MARK_MEMBER_NAME(PlayState_obj::ENEMIES_SPAWN_POINT_LIST,"ENEMIES_SPAWN_POINT_LIST");
	HX_MARK_MEMBER_NAME(PlayState_obj::SPAWN_FREQUENCY_BY_WAVE_MAP,"SPAWN_FREQUENCY_BY_WAVE_MAP");
	HX_MARK_MEMBER_NAME(PlayState_obj::SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP,"SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP");
	HX_MARK_MEMBER_NAME(PlayState_obj::SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP,"SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP");
	HX_MARK_MEMBER_NAME(PlayState_obj::currentInventorySelectedItem,"currentInventorySelectedItem");
	HX_MARK_MEMBER_NAME(PlayState_obj::inventoryItemsList,"inventoryItemsList");
	HX_MARK_MEMBER_NAME(PlayState_obj::WEAPON_PISTOL,"WEAPON_PISTOL");
	HX_MARK_MEMBER_NAME(PlayState_obj::WEAPON_RIFLE,"WEAPON_RIFLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlayState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::_hud,"_hud");
	HX_VISIT_MEMBER_NAME(PlayState_obj::SURVIVOR_SPAWN_POINT,"SURVIVOR_SPAWN_POINT");
	HX_VISIT_MEMBER_NAME(PlayState_obj::ENEMIES_SPAWN_POINT_LIST,"ENEMIES_SPAWN_POINT_LIST");
	HX_VISIT_MEMBER_NAME(PlayState_obj::SPAWN_FREQUENCY_BY_WAVE_MAP,"SPAWN_FREQUENCY_BY_WAVE_MAP");
	HX_VISIT_MEMBER_NAME(PlayState_obj::SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP,"SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP");
	HX_VISIT_MEMBER_NAME(PlayState_obj::SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP,"SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP");
	HX_VISIT_MEMBER_NAME(PlayState_obj::currentInventorySelectedItem,"currentInventorySelectedItem");
	HX_VISIT_MEMBER_NAME(PlayState_obj::inventoryItemsList,"inventoryItemsList");
	HX_VISIT_MEMBER_NAME(PlayState_obj::WEAPON_PISTOL,"WEAPON_PISTOL");
	HX_VISIT_MEMBER_NAME(PlayState_obj::WEAPON_RIFLE,"WEAPON_RIFLE");
};

#endif

hx::Class PlayState_obj::__mClass;

static ::String PlayState_obj_sStaticFields[] = {
	HX_("_hud",b8,95,1a,3f),
	HX_("SURVIVOR_SPAWN_POINT",03,39,18,37),
	HX_("ENEMIES_SPAWN_POINT_LIST",0a,68,5e,ba),
	HX_("SPAWN_FREQUENCY_BY_WAVE_MAP",77,ba,00,df),
	HX_("SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP",8d,13,39,9c),
	HX_("SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP",b5,08,2d,d6),
	HX_("currentInventorySelectedItem",d1,c4,d8,57),
	HX_("inventoryItemsList",42,aa,5d,e9),
	HX_("WEAPON_PISTOL",ba,10,01,6d),
	HX_("WEAPON_RIFLE",05,9c,ae,87),
	::String(null())
};

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PlayState_obj::__GetStatic;
	__mClass->mSetStaticField = &PlayState_obj::__SetStatic;
	__mClass->mMarkFunc = PlayState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(PlayState_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlayState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PlayState_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_31_boot)
HXDLIN(  31)		SURVIVOR_SPAWN_POINT =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,317,89);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::IntMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_33_boot)
HXDLIN(  33)			 ::haxe::ds::IntMap _g =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN(  33)			_g->set(0,1);
HXDLIN(  33)			_g->set(1,((Float)0.9));
HXDLIN(  33)			_g->set(2,((Float)0.7));
HXDLIN(  33)			_g->set(3,((Float)0.5));
HXDLIN(  33)			_g->set(4,((Float)0.1));
HXDLIN(  33)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_33_boot)
HXDLIN(  33)		SPAWN_FREQUENCY_BY_WAVE_MAP = ( ( ::haxe::ds::IntMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::IntMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_40_boot)
HXDLIN(  40)			 ::haxe::ds::IntMap _g =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN(  40)			_g->set(4,25);
HXDLIN(  40)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_40_boot)
HXDLIN(  40)		SPECIAL_NUMBER_OF_ENEMIES_BY_WAVE_MAP = ( ( ::haxe::ds::IntMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::IntMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_43_boot)
HXDLIN(  43)			 ::haxe::ds::IntMap _g =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN(  43)			_g->set(4,15);
HXDLIN(  43)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_43_boot)
HXDLIN(  43)		SPECIAL_TIME_UNTIL_NEXT_WAVE_MAP = ( ( ::haxe::ds::IntMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_49_boot)
HXDLIN(  49)		currentInventorySelectedItem = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_53_boot)
HXDLIN(  53)		WEAPON_PISTOL = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_54_boot)
HXDLIN(  54)		WEAPON_RIFLE = 1;
            	}
}

