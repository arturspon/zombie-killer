// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#include <flixel/system/debug/FlxDebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleCommands
#include <flixel/system/debug/console/ConsoleCommands.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleHistory
#include <flixel/system/debug/console/ConsoleHistory.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d0e94f52257718c0_15_new,"flixel.system.debug.console.ConsoleCommands","new",0xbec7c572,"flixel.system.debug.console.ConsoleCommands.new","flixel/system/debug/console/ConsoleCommands.hx",15,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_77_help,"flixel.system.debug.console.ConsoleCommands","help",0x2c0dad6f,"flixel.system.debug.console.ConsoleCommands.help","flixel/system/debug/console/ConsoleCommands.hx",77,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_107_close,"flixel.system.debug.console.ConsoleCommands","close",0x838bf54a,"flixel.system.debug.console.ConsoleCommands.close","flixel/system/debug/console/ConsoleCommands.hx",107,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_111_create,"flixel.system.debug.console.ConsoleCommands","create",0x04a8692a,"flixel.system.debug.console.ConsoleCommands.create","flixel/system/debug/console/ConsoleCommands.hx",111,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_142_fields,"flixel.system.debug.console.ConsoleCommands","fields",0x092790a7,"flixel.system.debug.console.ConsoleCommands.fields","flixel/system/debug/console/ConsoleCommands.hx",142,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_148_listObjects,"flixel.system.debug.console.ConsoleCommands","listObjects",0x01393328,"flixel.system.debug.console.ConsoleCommands.listObjects","flixel/system/debug/console/ConsoleCommands.hx",148,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_153_listFunctions,"flixel.system.debug.console.ConsoleCommands","listFunctions",0x18b311af,"flixel.system.debug.console.ConsoleCommands.listFunctions","flixel/system/debug/console/ConsoleCommands.hx",153,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_157_watchMouse,"flixel.system.debug.console.ConsoleCommands","watchMouse",0x171fe284,"flixel.system.debug.console.ConsoleCommands.watchMouse","flixel/system/debug/console/ConsoleCommands.hx",157,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_174_pause,"flixel.system.debug.console.ConsoleCommands","pause",0xf880b488,"flixel.system.debug.console.ConsoleCommands.pause","flixel/system/debug/console/ConsoleCommands.hx",174,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_188_step,"flixel.system.debug.console.ConsoleCommands","step",0x335e61fa,"flixel.system.debug.console.ConsoleCommands.step","flixel/system/debug/console/ConsoleCommands.hx",188,0x8e0df1e0)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{

void ConsoleCommands_obj::__construct( ::flixel::_hx_system::debug::console::Console console){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_15_new)
HXLINE(  21)		this->_watchingMouse = false;
HXLINE(  25)		this->_console = console;
HXLINE(  27)		console->registerFunction(HX_("help",c1,32,0b,45),this->help_dyn(),HX_("Displays the help text of a registered object or function. See \"help\".",74,09,e6,6d));
HXLINE(  28)		console->registerFunction(HX_("close",b8,17,63,48),this->close_dyn(),HX_("Closes the debugger overlay.",09,dd,14,da));
HXLINE(  30)		console->registerFunction(HX_("clearHistory",47,e7,c5,3f),this->_console->history->clear_dyn(),HX_("Closes the debugger overlay.",09,dd,14,da));
HXLINE(  31)		console->registerFunction(HX_("clearLog",f7,50,0e,31),::flixel::FlxG_obj::log->clear_dyn(),HX_("Clears the command history.",58,c6,e5,46));
HXLINE(  33)		console->registerFunction(HX_("fields",79,8e,8e,80),this->fields_dyn(),HX_("Lists the fields of a class or instance",6f,dd,83,14));
HXLINE(  35)		console->registerFunction(HX_("listObjects",16,dc,4e,39),this->listObjects_dyn(),HX_("Lists the aliases of all registered objects.",6c,4a,89,e2));
HXLINE(  36)		console->registerFunction(HX_("listFunctions",1d,52,37,c0),this->listFunctions_dyn(),HX_("Lists the aliases of all registered functions.",85,07,62,7a));
HXLINE(  38)		console->registerFunction(HX_("step",4c,e7,5b,4c),this->step_dyn(),HX_("Steps the game forward one frame if currently paused. No effect if unpaused.",e3,b2,6b,29));
HXLINE(  39)		console->registerFunction(HX_("pause",f6,d6,57,bd),this->pause_dyn(),HX_("Toggles the game between paused and unpaused.",42,15,b4,fb));
HXLINE(  41)		console->registerFunction(HX_("clearBitmapLog",88,b0,e0,84),::flixel::FlxG_obj::bitmapLog->clear_dyn(),HX_("Clears the bitmapLog window.",4a,2e,fa,ed));
HXLINE(  42)		console->registerFunction(HX_("viewCache",9d,09,a9,81),::flixel::FlxG_obj::bitmapLog->viewCache_dyn(),HX_("Adds the cache to the bitmapLog window.",9a,4b,f4,ec));
HXLINE(  44)		console->registerFunction(HX_("create",fc,66,0f,7c),this->create_dyn(),HX_("Creates a new FlxObject and registers it - by default at the mouse position. \"create(ObjClass:Class<T>, PlaceAtMouse:Bool, ExtraParams:Array<Dynamic>)\" Ex: \"create(FlxSprite, false, [100, 100])\"",e1,71,2c,4a));
HXLINE(  46)		console->registerFunction(HX_("watch",4f,16,25,c5),::flixel::FlxG_obj::watch->add_dyn(),HX_("Adds the specified field of an object to the watch window.",3d,3d,b8,00));
HXLINE(  47)		console->registerFunction(HX_("watchExpression",c7,c4,8f,8c),::flixel::FlxG_obj::watch->addExpression_dyn(),HX_("Adds the specified expression to the watch window. Be sure any objects, functions, and classes used are registered!",28,72,30,fe));
HXLINE(  48)		console->registerFunction(HX_("watchMouse",56,31,6f,84),this->watchMouse_dyn(),HX_("Adds the mouse coordinates to the watch window.",16,85,0c,85));
HXLINE(  49)		console->registerFunction(HX_("track",8b,8e,1f,16),::flixel::FlxG_obj::debugger->track_dyn(),HX_("Adds a tracker window for the specified object or class.",a3,a1,e4,47));
HXLINE(  52)		{
HXLINE(  52)			hx::Class cl = hx::ClassOf< ::Math >();
HXDLIN(  52)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl,true),cl);
            		}
HXLINE(  53)		{
HXLINE(  53)			hx::Class cl1 = hx::ClassOf< ::Reflect >();
HXDLIN(  53)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl1,true),cl1);
            		}
HXLINE(  54)		{
HXLINE(  54)			hx::Class cl2 = hx::ClassOf< ::Std >();
HXDLIN(  54)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl2,true),cl2);
            		}
HXLINE(  55)		{
HXLINE(  55)			hx::Class cl3 = hx::ClassOf< ::StringTools >();
HXDLIN(  55)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl3,true),cl3);
            		}
HXLINE(  57)		{
HXLINE(  57)			hx::Class cl4 = hx::ClassOf< ::Sys >();
HXDLIN(  57)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl4,true),cl4);
            		}
HXLINE(  59)		{
HXLINE(  59)			hx::Class cl5 = hx::ClassOf< ::Type >();
HXDLIN(  59)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl5,true),cl5);
            		}
HXLINE(  61)		{
HXLINE(  61)			hx::Class cl6 = hx::ClassOf< ::flixel::FlxG >();
HXDLIN(  61)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl6,true),cl6);
            		}
HXLINE(  62)		{
HXLINE(  62)			hx::Class cl7 = hx::ClassOf< ::flixel::FlxObject >();
HXDLIN(  62)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl7,true),cl7);
            		}
HXLINE(  63)		{
HXLINE(  63)			hx::Class cl8 = hx::ClassOf< ::flixel::FlxSprite >();
HXDLIN(  63)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl8,true),cl8);
            		}
HXLINE(  64)		{
HXLINE(  64)			hx::Class cl9 = hx::ClassOf< ::flixel::math::FlxMath >();
HXDLIN(  64)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl9,true),cl9);
            		}
HXLINE(  65)		{
HXLINE(  65)			hx::Class cl10 = hx::ClassOf< ::flixel::tweens::FlxTween >();
HXDLIN(  65)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl10,true),cl10);
            		}
HXLINE(  66)		{
HXLINE(  66)			hx::Class cl11 = hx::ClassOf< ::flixel::FlxCamera >();
HXDLIN(  66)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl11,true),cl11);
            		}
HXLINE(  67)		{
HXLINE(  67)			hx::Class cl12 = hx::ClassOf< ::flixel::math::FlxPoint >();
HXDLIN(  67)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl12,true),cl12);
            		}
HXLINE(  68)		{
HXLINE(  68)			hx::Class cl13 = hx::ClassOf< ::flixel::math::FlxRect >();
HXDLIN(  68)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl13,true),cl13);
            		}
HXLINE(  70)		{
HXLINE(  70)			hx::Class e = hx::ClassOf< ::flixel::_hx_system::debug::FlxDebuggerLayout >();
HXDLIN(  70)			console->registerObject(::flixel::util::FlxStringUtil_obj::getEnumName(e,true),e);
            		}
HXLINE(  72)		console->registerObject(HX_("selection",4c,f8,1a,8e),null());
            	}

Dynamic ConsoleCommands_obj::__CreateEmpty() { return new ConsoleCommands_obj; }

void *ConsoleCommands_obj::_hx_vtable = 0;

Dynamic ConsoleCommands_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConsoleCommands_obj > _hx_result = new ConsoleCommands_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ConsoleCommands_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ad50324;
}

::String ConsoleCommands_obj::help(::String Alias){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_77_help)
HXDLIN(  77)		bool _hx_tmp;
HXDLIN(  77)		if (hx::IsNotNull( Alias )) {
HXDLIN(  77)			_hx_tmp = (Alias.length == 0);
            		}
            		else {
HXDLIN(  77)			_hx_tmp = true;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  79)			::String output = HX_("System classes and commands: ",42,07,6a,e4);
HXLINE(  80)			{
HXLINE(  80)				 ::Dynamic obj = this->_console->registeredObjects->keys();
HXDLIN(  80)				while(( (bool)(obj->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  80)					::String obj1 = ( (::String)(obj->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  82)					output = (output + (obj1 + HX_(", ",74,26,00,00)));
            				}
            			}
HXLINE(  84)			{
HXLINE(  84)				 ::Dynamic func = this->_console->registeredFunctions->keys();
HXDLIN(  84)				while(( (bool)(func->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  84)					::String func1 = ( (::String)(func->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  86)					output = (output + (func1 + HX_("(), ",b5,cb,8f,1a)));
            				}
            			}
HXLINE(  88)			return (output + HX_("\nTry 'help(\"command\")' for more information about a specific command.",cf,42,2c,8a));
            		}
            		else {
HXLINE(  92)			if (this->_console->registeredHelp->exists(Alias)) {
HXLINE(  94)				::String _hx_tmp1;
HXDLIN(  94)				if (this->_console->registeredFunctions->exists(Alias)) {
HXLINE(  94)					_hx_tmp1 = HX_("()",01,23,00,00);
            				}
            				else {
HXLINE(  94)					_hx_tmp1 = HX_("",00,00,00,00);
            				}
HXDLIN(  94)				return (((Alias + _hx_tmp1) + HX_(": ",a6,32,00,00)) + this->_console->registeredHelp->get(Alias));
            			}
            			else {
HXLINE(  99)				::flixel::FlxG_obj::log->advanced(((HX_("Help: The command '",5c,dd,57,6e) + Alias) + HX_("' does not have help text.",1f,16,65,26)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE( 100)				return null();
            			}
            		}
HXLINE(  77)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,help,return )

void ConsoleCommands_obj::close(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_107_close)
HXDLIN( 107)		::flixel::FlxG_obj::debugger->set_visible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,close,(void))

void ConsoleCommands_obj::create(hx::Class ObjClass,hx::Null< bool >  __o_MousePos,::cpp::VirtualArray Params){
            		bool MousePos = __o_MousePos.Default(true);
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_111_create)
HXLINE( 112)		if (hx::IsNull( Params )) {
HXLINE( 113)			Params = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 115)		 ::flixel::FlxObject obj = ( ( ::flixel::FlxObject)(::Type_obj::createInstance(ObjClass,Params)) );
HXLINE( 117)		if (hx::IsNull( obj )) {
HXLINE( 117)			return;
            		}
HXLINE( 119)		if (MousePos) {
HXLINE( 121)			obj->set_x(::flixel::FlxG_obj::game->get_mouseX());
HXLINE( 122)			obj->set_y(::flixel::FlxG_obj::game->get_mouseY());
            		}
HXLINE( 125)		::flixel::FlxG_obj::game->_state->add(obj).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 127)		if ((Params->get_length() == 0)) {
HXLINE( 128)			::String Text = ((HX_("create: New ",82,f9,21,bf) + ::Std_obj::string(ObjClass)) + HX_(" created at X = ",00,f4,df,3b));
HXDLIN( 128)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,(((Text + obj->x) + HX_(" Y = ",ca,0a,bf,a7)) + obj->y)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            		else {
HXLINE( 130)			::String Text1 = ((HX_("create: New ",82,f9,21,bf) + ::Std_obj::string(ObjClass)) + HX_(" created at X = ",00,f4,df,3b));
HXDLIN( 130)			::String Text2 = ((((Text1 + obj->x) + HX_(" Y = ",ca,0a,bf,a7)) + obj->y) + HX_(" with params ",20,c2,85,fb));
HXDLIN( 130)			 ::Dynamic Text3 = (Text2 + ::Std_obj::string(Params));
HXDLIN( 130)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text3),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
HXLINE( 132)		this->_console->objectStack->push(obj);
HXLINE( 134)		::String name = (HX_("Object_",a0,90,a0,4f) + this->_console->objectStack->length);
HXLINE( 135)		this->_console->registerObject(name,obj);
HXLINE( 137)		{
HXLINE( 137)			 ::Dynamic Text4 = ((((HX_("create: ",a2,50,f4,2b) + ::Std_obj::string(ObjClass)) + HX_(" registered as '",b7,f0,b7,dc)) + name) + HX_("'",27,00,00,00));
HXDLIN( 137)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text4),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ConsoleCommands_obj,create,(void))

::String ConsoleCommands_obj::fields( ::Dynamic Object){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_142_fields)
HXDLIN( 142)		::String _hx_tmp = ((HX_("Fields of ",22,2a,96,7d) + ::Type_obj::getClassName(Object)) + HX_(":\n",90,32,00,00));
HXDLIN( 142)		return (_hx_tmp + ::StringTools_obj::trim(::flixel::_hx_system::debug::console::ConsoleUtil_obj::getFields(Object)->join(HX_("\n",0a,00,00,00))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,fields,return )

void ConsoleCommands_obj::listObjects(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_148_listObjects)
HXDLIN( 148)		 ::Dynamic Text = (HX_("Objects registered: \n",f6,ad,0c,d4) + ::flixel::util::FlxStringUtil_obj::formatStringMap(this->_console->registeredObjects));
HXDLIN( 148)		::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listObjects,(void))

void ConsoleCommands_obj::listFunctions(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_153_listFunctions)
HXDLIN( 153)		 ::Dynamic Text = (HX_("Functions registered: \n",bd,05,3d,78) + ::flixel::util::FlxStringUtil_obj::formatStringMap(this->_console->registeredFunctions));
HXDLIN( 153)		::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listFunctions,(void))

void ConsoleCommands_obj::watchMouse(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_157_watchMouse)
HXLINE( 158)		if (!(this->_watchingMouse)) {
HXLINE( 160)			{
HXLINE( 160)				 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this = ::flixel::FlxG_obj::watch;
HXDLIN( 160)				::flixel::FlxG_obj::game->debugger->watch->add(HX_("Mouse Position",44,8e,3a,9d),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(( ( ::Dynamic)(hx::ClassOf< ::flixel::FlxG >()) ),HX_("mouse",25,16,65,0c)));
            			}
HXLINE( 161)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("watchMouse: Mouse position added to watch window",86,9c,f8,24)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            		else {
HXLINE( 165)			{
HXLINE( 165)				 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this1 = ::flixel::FlxG_obj::watch;
HXDLIN( 165)				::flixel::FlxG_obj::game->debugger->watch->remove(null(),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(( ( ::Dynamic)(hx::ClassOf< ::flixel::FlxG >()) ),HX_("mouse",25,16,65,0c)));
            			}
HXLINE( 166)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("watchMouse: Mouse position removed from watch window",17,fe,23,1d)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
HXLINE( 169)		this->_watchingMouse = !(this->_watchingMouse);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,watchMouse,(void))

void ConsoleCommands_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_174_pause)
HXDLIN( 174)		if (::flixel::FlxG_obj::vcr->paused) {
HXLINE( 176)			::flixel::FlxG_obj::vcr->resume();
HXLINE( 177)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("pause: Game unpaused",f9,e8,d5,eb)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            		else {
HXLINE( 181)			::flixel::FlxG_obj::vcr->pause();
HXLINE( 182)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("pause: Game paused",60,a9,dd,91)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,pause,(void))

void ConsoleCommands_obj::step(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_188_step)
HXDLIN( 188)		if (::flixel::FlxG_obj::vcr->paused) {
HXLINE( 189)			::flixel::FlxG_obj::game->debugger->vcr->onStep();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,step,(void))


hx::ObjectPtr< ConsoleCommands_obj > ConsoleCommands_obj::__new( ::flixel::_hx_system::debug::console::Console console) {
	hx::ObjectPtr< ConsoleCommands_obj > __this = new ConsoleCommands_obj();
	__this->__construct(console);
	return __this;
}

hx::ObjectPtr< ConsoleCommands_obj > ConsoleCommands_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::console::Console console) {
	ConsoleCommands_obj *__this = (ConsoleCommands_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ConsoleCommands_obj), true, "flixel.system.debug.console.ConsoleCommands"));
	*(void **)__this = ConsoleCommands_obj::_hx_vtable;
	__this->__construct(console);
	return __this;
}

ConsoleCommands_obj::ConsoleCommands_obj()
{
}

void ConsoleCommands_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConsoleCommands);
	HX_MARK_MEMBER_NAME(_console,"_console");
	HX_MARK_MEMBER_NAME(_watchingMouse,"_watchingMouse");
	HX_MARK_END_CLASS();
}

void ConsoleCommands_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_console,"_console");
	HX_VISIT_MEMBER_NAME(_watchingMouse,"_watchingMouse");
}

hx::Val ConsoleCommands_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"help") ) { return hx::Val( help_dyn() ); }
		if (HX_FIELD_EQ(inName,"step") ) { return hx::Val( step_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"fields") ) { return hx::Val( fields_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { return hx::Val( _console ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"watchMouse") ) { return hx::Val( watchMouse_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listObjects") ) { return hx::Val( listObjects_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listFunctions") ) { return hx::Val( listFunctions_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { return hx::Val( _watchingMouse ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ConsoleCommands_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast<  ::flixel::_hx_system::debug::console::Console >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { _watchingMouse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleCommands_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_console",d8,44,8e,52));
	outFields->push(HX_("_watchingMouse",73,f3,3a,2a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ConsoleCommands_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::flixel::_hx_system::debug::console::Console */ ,(int)offsetof(ConsoleCommands_obj,_console),HX_("_console",d8,44,8e,52)},
	{hx::fsBool,(int)offsetof(ConsoleCommands_obj,_watchingMouse),HX_("_watchingMouse",73,f3,3a,2a)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ConsoleCommands_obj_sStaticStorageInfo = 0;
#endif

static ::String ConsoleCommands_obj_sMemberFields[] = {
	HX_("_console",d8,44,8e,52),
	HX_("_watchingMouse",73,f3,3a,2a),
	HX_("help",c1,32,0b,45),
	HX_("close",b8,17,63,48),
	HX_("create",fc,66,0f,7c),
	HX_("fields",79,8e,8e,80),
	HX_("listObjects",16,dc,4e,39),
	HX_("listFunctions",1d,52,37,c0),
	HX_("watchMouse",56,31,6f,84),
	HX_("pause",f6,d6,57,bd),
	HX_("step",4c,e7,5b,4c),
	::String(null()) };

hx::Class ConsoleCommands_obj::__mClass;

void ConsoleCommands_obj::__register()
{
	ConsoleCommands_obj _hx_dummy;
	ConsoleCommands_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.console.ConsoleCommands",80,e4,ff,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ConsoleCommands_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConsoleCommands_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConsoleCommands_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConsoleCommands_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
