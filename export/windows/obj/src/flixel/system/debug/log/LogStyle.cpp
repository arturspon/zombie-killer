// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4946e010770d7497_52_new,"flixel.system.debug.log.LogStyle","new",0xce018851,"flixel.system.debug.log.LogStyle.new","flixel/system/debug/log/LogStyle.hx",52,0x39dedcdd)
HX_LOCAL_STACK_FRAME(_hx_pos_4946e010770d7497_9_boot,"flixel.system.debug.log.LogStyle","boot",0x6b6ebf21,"flixel.system.debug.log.LogStyle.boot","flixel/system/debug/log/LogStyle.hx",9,0x39dedcdd)
HX_LOCAL_STACK_FRAME(_hx_pos_4946e010770d7497_10_boot,"flixel.system.debug.log.LogStyle","boot",0x6b6ebf21,"flixel.system.debug.log.LogStyle.boot","flixel/system/debug/log/LogStyle.hx",10,0x39dedcdd)
HX_LOCAL_STACK_FRAME(_hx_pos_4946e010770d7497_11_boot,"flixel.system.debug.log.LogStyle","boot",0x6b6ebf21,"flixel.system.debug.log.LogStyle.boot","flixel/system/debug/log/LogStyle.hx",11,0x39dedcdd)
HX_LOCAL_STACK_FRAME(_hx_pos_4946e010770d7497_12_boot,"flixel.system.debug.log.LogStyle","boot",0x6b6ebf21,"flixel.system.debug.log.LogStyle.boot","flixel/system/debug/log/LogStyle.hx",12,0x39dedcdd)
HX_LOCAL_STACK_FRAME(_hx_pos_4946e010770d7497_13_boot,"flixel.system.debug.log.LogStyle","boot",0x6b6ebf21,"flixel.system.debug.log.LogStyle.boot","flixel/system/debug/log/LogStyle.hx",13,0x39dedcdd)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace log{

void LogStyle_obj::__construct(::String __o_Prefix,::String __o_Color,hx::Null< int >  __o_Size,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined,::String ErrorSound,hx::Null< bool >  __o_OpenConsole, ::Dynamic CallbackFunction){
            		::String Prefix = __o_Prefix;
            		if (hx::IsNull(__o_Prefix)) Prefix = HX_("",00,00,00,00);
            		::String Color = __o_Color;
            		if (hx::IsNull(__o_Color)) Color = HX_("FFFFFF",c0,27,82,79);
            		int Size = __o_Size.Default(12);
            		bool Bold = __o_Bold.Default(false);
            		bool Italic = __o_Italic.Default(false);
            		bool Underlined = __o_Underlined.Default(false);
            		bool OpenConsole = __o_OpenConsole.Default(false);
            	HX_STACKFRAME(&_hx_pos_4946e010770d7497_52_new)
HXLINE(  53)		this->prefix = Prefix;
HXLINE(  54)		this->color = Color;
HXLINE(  55)		this->size = Size;
HXLINE(  56)		this->bold = Bold;
HXLINE(  57)		this->italic = Italic;
HXLINE(  58)		this->underlined = Underlined;
HXLINE(  59)		this->errorSound = ErrorSound;
HXLINE(  60)		this->openConsole = OpenConsole;
HXLINE(  61)		this->callbackFunction = CallbackFunction;
            	}

Dynamic LogStyle_obj::__CreateEmpty() { return new LogStyle_obj; }

void *LogStyle_obj::_hx_vtable = 0;

Dynamic LogStyle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LogStyle_obj > _hx_result = new LogStyle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _hx_result;
}

bool LogStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2744a82d;
}

 ::flixel::_hx_system::debug::log::LogStyle LogStyle_obj::NORMAL;

 ::flixel::_hx_system::debug::log::LogStyle LogStyle_obj::WARNING;

 ::flixel::_hx_system::debug::log::LogStyle LogStyle_obj::ERROR;

 ::flixel::_hx_system::debug::log::LogStyle LogStyle_obj::NOTICE;

 ::flixel::_hx_system::debug::log::LogStyle LogStyle_obj::CONSOLE;


LogStyle_obj::LogStyle_obj()
{
}

void LogStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogStyle);
	HX_MARK_MEMBER_NAME(prefix,"prefix");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(underlined,"underlined");
	HX_MARK_MEMBER_NAME(errorSound,"errorSound");
	HX_MARK_MEMBER_NAME(openConsole,"openConsole");
	HX_MARK_MEMBER_NAME(callbackFunction,"callbackFunction");
	HX_MARK_END_CLASS();
}

void LogStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prefix,"prefix");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(underlined,"underlined");
	HX_VISIT_MEMBER_NAME(errorSound,"errorSound");
	HX_VISIT_MEMBER_NAME(openConsole,"openConsole");
	HX_VISIT_MEMBER_NAME(callbackFunction,"callbackFunction");
}

hx::Val LogStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"bold") ) { return hx::Val( bold ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { return hx::Val( prefix ); }
		if (HX_FIELD_EQ(inName,"italic") ) { return hx::Val( italic ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"underlined") ) { return hx::Val( underlined ); }
		if (HX_FIELD_EQ(inName,"errorSound") ) { return hx::Val( errorSound ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"openConsole") ) { return hx::Val( openConsole ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { return hx::Val( callbackFunction ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LogStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { outValue = ( ERROR ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"NORMAL") ) { outValue = ( NORMAL ); return true; }
		if (HX_FIELD_EQ(inName,"NOTICE") ) { outValue = ( NOTICE ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"WARNING") ) { outValue = ( WARNING ); return true; }
		if (HX_FIELD_EQ(inName,"CONSOLE") ) { outValue = ( CONSOLE ); return true; }
	}
	return false;
}

hx::Val LogStyle_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { prefix=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"underlined") ) { underlined=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"errorSound") ) { errorSound=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"openConsole") ) { openConsole=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { callbackFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LogStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { ERROR=ioValue.Cast<  ::flixel::_hx_system::debug::log::LogStyle >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"NORMAL") ) { NORMAL=ioValue.Cast<  ::flixel::_hx_system::debug::log::LogStyle >(); return true; }
		if (HX_FIELD_EQ(inName,"NOTICE") ) { NOTICE=ioValue.Cast<  ::flixel::_hx_system::debug::log::LogStyle >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"WARNING") ) { WARNING=ioValue.Cast<  ::flixel::_hx_system::debug::log::LogStyle >(); return true; }
		if (HX_FIELD_EQ(inName,"CONSOLE") ) { CONSOLE=ioValue.Cast<  ::flixel::_hx_system::debug::log::LogStyle >(); return true; }
	}
	return false;
}

void LogStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("prefix",92,d9,b6,ae));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("italic",f0,2e,64,06));
	outFields->push(HX_("underlined",d8,55,21,4f));
	outFields->push(HX_("errorSound",e7,7b,d0,f5));
	outFields->push(HX_("openConsole",ad,7c,17,b4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo LogStyle_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(LogStyle_obj,prefix),HX_("prefix",92,d9,b6,ae)},
	{hx::fsString,(int)offsetof(LogStyle_obj,color),HX_("color",63,71,5c,4a)},
	{hx::fsInt,(int)offsetof(LogStyle_obj,size),HX_("size",c1,a0,53,4c)},
	{hx::fsBool,(int)offsetof(LogStyle_obj,bold),HX_("bold",85,81,1b,41)},
	{hx::fsBool,(int)offsetof(LogStyle_obj,italic),HX_("italic",f0,2e,64,06)},
	{hx::fsBool,(int)offsetof(LogStyle_obj,underlined),HX_("underlined",d8,55,21,4f)},
	{hx::fsString,(int)offsetof(LogStyle_obj,errorSound),HX_("errorSound",e7,7b,d0,f5)},
	{hx::fsBool,(int)offsetof(LogStyle_obj,openConsole),HX_("openConsole",ad,7c,17,b4)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LogStyle_obj,callbackFunction),HX_("callbackFunction",fd,cd,91,7e)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo LogStyle_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::flixel::_hx_system::debug::log::LogStyle */ ,(void *) &LogStyle_obj::NORMAL,HX_("NORMAL",27,1e,ec,e2)},
	{hx::fsObject /*  ::flixel::_hx_system::debug::log::LogStyle */ ,(void *) &LogStyle_obj::WARNING,HX_("WARNING",3c,ae,9f,89)},
	{hx::fsObject /*  ::flixel::_hx_system::debug::log::LogStyle */ ,(void *) &LogStyle_obj::ERROR,HX_("ERROR",a8,03,18,f1)},
	{hx::fsObject /*  ::flixel::_hx_system::debug::log::LogStyle */ ,(void *) &LogStyle_obj::NOTICE,HX_("NOTICE",18,84,3b,e4)},
	{hx::fsObject /*  ::flixel::_hx_system::debug::log::LogStyle */ ,(void *) &LogStyle_obj::CONSOLE,HX_("CONSOLE",37,bf,a9,98)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String LogStyle_obj_sMemberFields[] = {
	HX_("prefix",92,d9,b6,ae),
	HX_("color",63,71,5c,4a),
	HX_("size",c1,a0,53,4c),
	HX_("bold",85,81,1b,41),
	HX_("italic",f0,2e,64,06),
	HX_("underlined",d8,55,21,4f),
	HX_("errorSound",e7,7b,d0,f5),
	HX_("openConsole",ad,7c,17,b4),
	HX_("callbackFunction",fd,cd,91,7e),
	::String(null()) };

static void LogStyle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogStyle_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(LogStyle_obj::WARNING,"WARNING");
	HX_MARK_MEMBER_NAME(LogStyle_obj::ERROR,"ERROR");
	HX_MARK_MEMBER_NAME(LogStyle_obj::NOTICE,"NOTICE");
	HX_MARK_MEMBER_NAME(LogStyle_obj::CONSOLE,"CONSOLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LogStyle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogStyle_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::WARNING,"WARNING");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::ERROR,"ERROR");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::NOTICE,"NOTICE");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::CONSOLE,"CONSOLE");
};

#endif

hx::Class LogStyle_obj::__mClass;

static ::String LogStyle_obj_sStaticFields[] = {
	HX_("NORMAL",27,1e,ec,e2),
	HX_("WARNING",3c,ae,9f,89),
	HX_("ERROR",a8,03,18,f1),
	HX_("NOTICE",18,84,3b,e4),
	HX_("CONSOLE",37,bf,a9,98),
	::String(null())
};

void LogStyle_obj::__register()
{
	LogStyle_obj _hx_dummy;
	LogStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.log.LogStyle",df,0b,09,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LogStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &LogStyle_obj::__SetStatic;
	__mClass->mMarkFunc = LogStyle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LogStyle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LogStyle_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LogStyle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LogStyle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogStyle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LogStyle_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_4946e010770d7497_9_boot)
HXDLIN(   9)		NORMAL =  ::flixel::_hx_system::debug::log::LogStyle_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4946e010770d7497_10_boot)
HXDLIN(  10)		WARNING =  ::flixel::_hx_system::debug::log::LogStyle_obj::__alloc( HX_CTX ,HX_("[WARNING] ",a4,a2,0d,4e),HX_("D9F85C",15,36,8b,30),12,false,false,false,HX_("flixel/sounds/beep",e6,b5,a9,33),true,null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4946e010770d7497_11_boot)
HXDLIN(  11)		ERROR =  ::flixel::_hx_system::debug::log::LogStyle_obj::__alloc( HX_CTX ,HX_("[ERROR] ",d0,1f,cd,be),HX_("FF8888",40,7f,36,70),12,false,false,false,HX_("flixel/sounds/beep",e6,b5,a9,33),true,null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4946e010770d7497_12_boot)
HXDLIN(  12)		NOTICE =  ::flixel::_hx_system::debug::log::LogStyle_obj::__alloc( HX_CTX ,HX_("[NOTICE] ",96,5e,07,09),HX_("5CF878",41,9b,32,f3),12,false,null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4946e010770d7497_13_boot)
HXDLIN(  13)		CONSOLE =  ::flixel::_hx_system::debug::log::LogStyle_obj::__alloc( HX_CTX ,HX_("> ",22,36,00,00),HX_("5A96FA",c4,34,cc,c3),12,false,null(),null(),null(),null(),null());
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log
