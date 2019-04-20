// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_unifill_Unicode
#include <lime/_internal/unifill/Unicode.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a0663e9d051a0537_17_decodeSurrogate,"lime._internal.unifill.Unicode","decodeSurrogate",0x4f9cddf3,"lime._internal.unifill.Unicode.decodeSurrogate","lime/_internal/unifill/Unicode.hx",17,0xd21f708a)
HX_LOCAL_STACK_FRAME(_hx_pos_a0663e9d051a0537_20_encodeHighSurrogate,"lime._internal.unifill.Unicode","encodeHighSurrogate",0x5afaadc9,"lime._internal.unifill.Unicode.encodeHighSurrogate","lime/_internal/unifill/Unicode.hx",20,0xd21f708a)
HX_LOCAL_STACK_FRAME(_hx_pos_a0663e9d051a0537_23_encodeLowSurrogate,"lime._internal.unifill.Unicode","encodeLowSurrogate",0x2dadfa51,"lime._internal.unifill.Unicode.encodeLowSurrogate","lime/_internal/unifill/Unicode.hx",23,0xd21f708a)
HX_LOCAL_STACK_FRAME(_hx_pos_a0663e9d051a0537_27_isScalar,"lime._internal.unifill.Unicode","isScalar",0xd48e7c6d,"lime._internal.unifill.Unicode.isScalar","lime/_internal/unifill/Unicode.hx",27,0xd21f708a)
HX_LOCAL_STACK_FRAME(_hx_pos_a0663e9d051a0537_32_isHighSurrogate,"lime._internal.unifill.Unicode","isHighSurrogate",0xbbb266f5,"lime._internal.unifill.Unicode.isHighSurrogate","lime/_internal/unifill/Unicode.hx",32,0xd21f708a)
HX_LOCAL_STACK_FRAME(_hx_pos_a0663e9d051a0537_37_isLowSurrogate,"lime._internal.unifill.Unicode","isLowSurrogate",0x32b48aa5,"lime._internal.unifill.Unicode.isLowSurrogate","lime/_internal/unifill/Unicode.hx",37,0xd21f708a)
HX_LOCAL_STACK_FRAME(_hx_pos_a0663e9d051a0537_9_boot,"lime._internal.unifill.Unicode","boot",0x0d9f9669,"lime._internal.unifill.Unicode.boot","lime/_internal/unifill/Unicode.hx",9,0xd21f708a)
HX_LOCAL_STACK_FRAME(_hx_pos_a0663e9d051a0537_10_boot,"lime._internal.unifill.Unicode","boot",0x0d9f9669,"lime._internal.unifill.Unicode.boot","lime/_internal/unifill/Unicode.hx",10,0xd21f708a)
HX_LOCAL_STACK_FRAME(_hx_pos_a0663e9d051a0537_11_boot,"lime._internal.unifill.Unicode","boot",0x0d9f9669,"lime._internal.unifill.Unicode.boot","lime/_internal/unifill/Unicode.hx",11,0xd21f708a)
HX_LOCAL_STACK_FRAME(_hx_pos_a0663e9d051a0537_12_boot,"lime._internal.unifill.Unicode","boot",0x0d9f9669,"lime._internal.unifill.Unicode.boot","lime/_internal/unifill/Unicode.hx",12,0xd21f708a)
HX_LOCAL_STACK_FRAME(_hx_pos_a0663e9d051a0537_13_boot,"lime._internal.unifill.Unicode","boot",0x0d9f9669,"lime._internal.unifill.Unicode.boot","lime/_internal/unifill/Unicode.hx",13,0xd21f708a)
HX_LOCAL_STACK_FRAME(_hx_pos_a0663e9d051a0537_14_boot,"lime._internal.unifill.Unicode","boot",0x0d9f9669,"lime._internal.unifill.Unicode.boot","lime/_internal/unifill/Unicode.hx",14,0xd21f708a)
namespace lime{
namespace _internal{
namespace unifill{

void Unicode_obj::__construct() { }

Dynamic Unicode_obj::__CreateEmpty() { return new Unicode_obj; }

void *Unicode_obj::_hx_vtable = 0;

Dynamic Unicode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Unicode_obj > _hx_result = new Unicode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Unicode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1551a3ed;
}

int Unicode_obj::minCodePoint;

int Unicode_obj::maxCodePoint;

int Unicode_obj::minHighSurrogate;

int Unicode_obj::maxHighSurrogate;

int Unicode_obj::minLowSurrogate;

int Unicode_obj::maxLowSurrogate;

int Unicode_obj::decodeSurrogate(int hi,int lo){
            	HX_STACKFRAME(&_hx_pos_a0663e9d051a0537_17_decodeSurrogate)
HXDLIN(  17)		return (((hi - 55232) << 10) | (lo & 1023));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unicode_obj,decodeSurrogate,return )

int Unicode_obj::encodeHighSurrogate(int c){
            	HX_STACKFRAME(&_hx_pos_a0663e9d051a0537_20_encodeHighSurrogate)
HXDLIN(  20)		return ((c >> 10) + 55232);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,encodeHighSurrogate,return )

int Unicode_obj::encodeLowSurrogate(int c){
            	HX_STACKFRAME(&_hx_pos_a0663e9d051a0537_23_encodeLowSurrogate)
HXDLIN(  23)		return ((c & 1023) | 56320);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,encodeLowSurrogate,return )

bool Unicode_obj::isScalar(int code){
            	HX_STACKFRAME(&_hx_pos_a0663e9d051a0537_27_isScalar)
HXDLIN(  27)		bool _hx_tmp;
HXDLIN(  27)		bool _hx_tmp1;
HXDLIN(  27)		if ((0 <= code)) {
HXDLIN(  27)			_hx_tmp1 = (code <= 1114111);
            		}
            		else {
HXDLIN(  27)			_hx_tmp1 = false;
            		}
HXDLIN(  27)		if (_hx_tmp1) {
HXDLIN(  27)			bool _hx_tmp2;
HXDLIN(  27)			if ((55296 <= code)) {
HXDLIN(  27)				_hx_tmp2 = (code <= 56319);
            			}
            			else {
HXDLIN(  27)				_hx_tmp2 = false;
            			}
HXDLIN(  27)			_hx_tmp = !(_hx_tmp2);
            		}
            		else {
HXDLIN(  27)			_hx_tmp = false;
            		}
HXDLIN(  27)		if (_hx_tmp) {
HXDLIN(  27)			bool _hx_tmp3;
HXDLIN(  27)			if ((56320 <= code)) {
HXDLIN(  27)				_hx_tmp3 = (code <= 57343);
            			}
            			else {
HXDLIN(  27)				_hx_tmp3 = false;
            			}
HXDLIN(  27)			return !(_hx_tmp3);
            		}
            		else {
HXDLIN(  27)			return false;
            		}
HXDLIN(  27)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,isScalar,return )

bool Unicode_obj::isHighSurrogate(int code){
            	HX_STACKFRAME(&_hx_pos_a0663e9d051a0537_32_isHighSurrogate)
HXDLIN(  32)		if ((55296 <= code)) {
HXDLIN(  32)			return (code <= 56319);
            		}
            		else {
HXDLIN(  32)			return false;
            		}
HXDLIN(  32)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,isHighSurrogate,return )

bool Unicode_obj::isLowSurrogate(int code){
            	HX_STACKFRAME(&_hx_pos_a0663e9d051a0537_37_isLowSurrogate)
HXDLIN(  37)		if ((56320 <= code)) {
HXDLIN(  37)			return (code <= 57343);
            		}
            		else {
HXDLIN(  37)			return false;
            		}
HXDLIN(  37)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,isLowSurrogate,return )


Unicode_obj::Unicode_obj()
{
}

bool Unicode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isScalar") ) { outValue = isScalar_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isLowSurrogate") ) { outValue = isLowSurrogate_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"decodeSurrogate") ) { outValue = decodeSurrogate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isHighSurrogate") ) { outValue = isHighSurrogate_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"encodeLowSurrogate") ) { outValue = encodeLowSurrogate_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"encodeHighSurrogate") ) { outValue = encodeHighSurrogate_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Unicode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Unicode_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Unicode_obj::minCodePoint,HX_("minCodePoint",f1,1b,f4,75)},
	{hx::fsInt,(void *) &Unicode_obj::maxCodePoint,HX_("maxCodePoint",9f,70,e9,f1)},
	{hx::fsInt,(void *) &Unicode_obj::minHighSurrogate,HX_("minHighSurrogate",24,8d,ff,ed)},
	{hx::fsInt,(void *) &Unicode_obj::maxHighSurrogate,HX_("maxHighSurrogate",d2,d0,e7,e0)},
	{hx::fsInt,(void *) &Unicode_obj::minLowSurrogate,HX_("minLowSurrogate",56,7f,3d,d8)},
	{hx::fsInt,(void *) &Unicode_obj::maxLowSurrogate,HX_("maxLowSurrogate",68,cb,57,7c)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Unicode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Unicode_obj::minCodePoint,"minCodePoint");
	HX_MARK_MEMBER_NAME(Unicode_obj::maxCodePoint,"maxCodePoint");
	HX_MARK_MEMBER_NAME(Unicode_obj::minHighSurrogate,"minHighSurrogate");
	HX_MARK_MEMBER_NAME(Unicode_obj::maxHighSurrogate,"maxHighSurrogate");
	HX_MARK_MEMBER_NAME(Unicode_obj::minLowSurrogate,"minLowSurrogate");
	HX_MARK_MEMBER_NAME(Unicode_obj::maxLowSurrogate,"maxLowSurrogate");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Unicode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Unicode_obj::minCodePoint,"minCodePoint");
	HX_VISIT_MEMBER_NAME(Unicode_obj::maxCodePoint,"maxCodePoint");
	HX_VISIT_MEMBER_NAME(Unicode_obj::minHighSurrogate,"minHighSurrogate");
	HX_VISIT_MEMBER_NAME(Unicode_obj::maxHighSurrogate,"maxHighSurrogate");
	HX_VISIT_MEMBER_NAME(Unicode_obj::minLowSurrogate,"minLowSurrogate");
	HX_VISIT_MEMBER_NAME(Unicode_obj::maxLowSurrogate,"maxLowSurrogate");
};

#endif

hx::Class Unicode_obj::__mClass;

static ::String Unicode_obj_sStaticFields[] = {
	HX_("minCodePoint",f1,1b,f4,75),
	HX_("maxCodePoint",9f,70,e9,f1),
	HX_("minHighSurrogate",24,8d,ff,ed),
	HX_("maxHighSurrogate",d2,d0,e7,e0),
	HX_("minLowSurrogate",56,7f,3d,d8),
	HX_("maxLowSurrogate",68,cb,57,7c),
	HX_("decodeSurrogate",ca,22,cb,7f),
	HX_("encodeHighSurrogate",20,aa,c1,44),
	HX_("encodeLowSurrogate",da,15,df,4e),
	HX_("isScalar",b6,82,8f,94),
	HX_("isHighSurrogate",cc,ab,e0,eb),
	HX_("isLowSurrogate",ae,ed,dc,c5),
	::String(null())
};

void Unicode_obj::__register()
{
	Unicode_obj _hx_dummy;
	Unicode_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("lime._internal.unifill.Unicode",97,79,17,ab);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Unicode_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Unicode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Unicode_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Unicode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Unicode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Unicode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Unicode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Unicode_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a0663e9d051a0537_9_boot)
HXDLIN(   9)		minCodePoint = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a0663e9d051a0537_10_boot)
HXDLIN(  10)		maxCodePoint = 1114111;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a0663e9d051a0537_11_boot)
HXDLIN(  11)		minHighSurrogate = 55296;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a0663e9d051a0537_12_boot)
HXDLIN(  12)		maxHighSurrogate = 56319;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a0663e9d051a0537_13_boot)
HXDLIN(  13)		minLowSurrogate = 56320;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a0663e9d051a0537_14_boot)
HXDLIN(  14)		maxLowSurrogate = 57343;
            	}
}

} // end namespace lime
} // end namespace _internal
} // end namespace unifill
