// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DCompareMode_Context3DCompareMode_Impl_
#include <openfl/display3D/_Context3DCompareMode/Context3DCompareMode_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_57_fromString,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","fromString",0x9ed2cd41,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.fromString","openfl/display3D/Context3DCompareMode.hx",57,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_73_toString,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","toString",0xbdb6aa92,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.toString","openfl/display3D/Context3DCompareMode.hx",73,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_18_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",18,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_23_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",23,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_28_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",28,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_33_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",33,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_38_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",38,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_43_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",43,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_48_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",48,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_53_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",53,0x9103941b)
namespace openfl{
namespace display3D{
namespace _Context3DCompareMode{

void Context3DCompareMode_Impl__obj::__construct() { }

Dynamic Context3DCompareMode_Impl__obj::__CreateEmpty() { return new Context3DCompareMode_Impl__obj; }

void *Context3DCompareMode_Impl__obj::_hx_vtable = 0;

Dynamic Context3DCompareMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DCompareMode_Impl__obj > _hx_result = new Context3DCompareMode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DCompareMode_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ebd56b0;
}

 ::Dynamic Context3DCompareMode_Impl__obj::ALWAYS;

 ::Dynamic Context3DCompareMode_Impl__obj::EQUAL;

 ::Dynamic Context3DCompareMode_Impl__obj::GREATER;

 ::Dynamic Context3DCompareMode_Impl__obj::GREATER_EQUAL;

 ::Dynamic Context3DCompareMode_Impl__obj::LESS;

 ::Dynamic Context3DCompareMode_Impl__obj::LESS_EQUAL;

 ::Dynamic Context3DCompareMode_Impl__obj::NEVER;

 ::Dynamic Context3DCompareMode_Impl__obj::NOT_EQUAL;

 ::Dynamic Context3DCompareMode_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_57_fromString)
HXDLIN(  57)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("always",cf,0e,d7,46)) ){
HXLINE(  59)			return 0;
HXDLIN(  59)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("equal",b4,cf,82,72)) ){
HXLINE(  60)			return 1;
HXDLIN(  60)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("greater",fa,90,c0,b7)) ){
HXLINE(  61)			return 2;
HXDLIN(  61)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("greaterEqual",5a,e4,1d,8f)) ){
HXLINE(  62)			return 3;
HXDLIN(  62)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("less",59,13,b0,47)) ){
HXLINE(  63)			return 4;
HXDLIN(  63)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lessEqual",9b,69,9e,3d)) ){
HXLINE(  64)			return 5;
HXDLIN(  64)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("never",8c,3e,30,99)) ){
HXLINE(  65)			return 6;
HXDLIN(  65)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("notEqual",a1,a1,91,02)) ){
HXLINE(  66)			return 7;
HXDLIN(  66)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  67)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  57)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DCompareMode_Impl__obj,fromString,return )

::String Context3DCompareMode_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_73_toString)
HXDLIN(  73)		switch((int)(value)){
            			case (int)0: {
HXLINE(  75)				return HX_("always",cf,0e,d7,46);
            			}
            			break;
            			case (int)1: {
HXLINE(  76)				return HX_("equal",b4,cf,82,72);
            			}
            			break;
            			case (int)2: {
HXLINE(  77)				return HX_("greater",fa,90,c0,b7);
            			}
            			break;
            			case (int)3: {
HXLINE(  78)				return HX_("greaterEqual",5a,e4,1d,8f);
            			}
            			break;
            			case (int)4: {
HXLINE(  79)				return HX_("less",59,13,b0,47);
            			}
            			break;
            			case (int)5: {
HXLINE(  80)				return HX_("lessEqual",9b,69,9e,3d);
            			}
            			break;
            			case (int)6: {
HXLINE(  81)				return HX_("never",8c,3e,30,99);
            			}
            			break;
            			case (int)7: {
HXLINE(  82)				return HX_("notEqual",a1,a1,91,02);
            			}
            			break;
            			default:{
HXLINE(  83)				return null();
            			}
            		}
HXLINE(  73)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DCompareMode_Impl__obj,toString,return )


Context3DCompareMode_Impl__obj::Context3DCompareMode_Impl__obj()
{
}

bool Context3DCompareMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Context3DCompareMode_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Context3DCompareMode_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DCompareMode_Impl__obj::ALWAYS,HX_("ALWAYS",cf,ba,59,f9)},
	{hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DCompareMode_Impl__obj::EQUAL,HX_("EQUAL",94,07,71,f0)},
	{hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DCompareMode_Impl__obj::GREATER,HX_("GREATER",da,64,94,37)},
	{hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DCompareMode_Impl__obj::GREATER_EQUAL,HX_("GREATER_EQUAL",2f,d3,96,d6)},
	{hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DCompareMode_Impl__obj::LESS,HX_("LESS",59,db,70,32)},
	{hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DCompareMode_Impl__obj::LESS_EQUAL,HX_("LESS_EQUAL",ee,b2,55,e4)},
	{hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DCompareMode_Impl__obj::NEVER,HX_("NEVER",6c,76,1e,17)},
	{hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DCompareMode_Impl__obj::NOT_EQUAL,HX_("NOT_EQUAL",08,7c,82,7d)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Context3DCompareMode_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER_EQUAL,"GREATER_EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS,"LESS");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS_EQUAL,"LESS_EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::NOT_EQUAL,"NOT_EQUAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DCompareMode_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER,"GREATER");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER_EQUAL,"GREATER_EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS,"LESS");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS_EQUAL,"LESS_EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::NEVER,"NEVER");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::NOT_EQUAL,"NOT_EQUAL");
};

#endif

hx::Class Context3DCompareMode_Impl__obj::__mClass;

static ::String Context3DCompareMode_Impl__obj_sStaticFields[] = {
	HX_("ALWAYS",cf,ba,59,f9),
	HX_("EQUAL",94,07,71,f0),
	HX_("GREATER",da,64,94,37),
	HX_("GREATER_EQUAL",2f,d3,96,d6),
	HX_("LESS",59,db,70,32),
	HX_("LESS_EQUAL",ee,b2,55,e4),
	HX_("NEVER",6c,76,1e,17),
	HX_("NOT_EQUAL",08,7c,82,7d),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Context3DCompareMode_Impl__obj::__register()
{
	Context3DCompareMode_Impl__obj _hx_dummy;
	Context3DCompareMode_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_",48,5b,c7,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DCompareMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DCompareMode_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DCompareMode_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DCompareMode_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DCompareMode_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DCompareMode_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DCompareMode_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DCompareMode_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_18_boot)
HXDLIN(  18)		ALWAYS = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_23_boot)
HXDLIN(  23)		EQUAL = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_28_boot)
HXDLIN(  28)		GREATER = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_33_boot)
HXDLIN(  33)		GREATER_EQUAL = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_38_boot)
HXDLIN(  38)		LESS = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_43_boot)
HXDLIN(  43)		LESS_EQUAL = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_48_boot)
HXDLIN(  48)		NEVER = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_53_boot)
HXDLIN(  53)		NOT_EQUAL = 7;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DCompareMode
