// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_unifill_Exception
#include <lime/_internal/unifill/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c0ec729e12cba978_9_new,"lime._internal.unifill.Exception","new",0x564d04bb,"lime._internal.unifill.Exception.new","lime/_internal/unifill/Exception.hx",9,0x1ae400d8)
HX_LOCAL_STACK_FRAME(_hx_pos_c0ec729e12cba978_13_toString,"lime._internal.unifill.Exception","toString",0x8d12f271,"lime._internal.unifill.Exception.toString","lime/_internal/unifill/Exception.hx",13,0x1ae400d8)
namespace lime{
namespace _internal{
namespace unifill{

void Exception_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c0ec729e12cba978_9_new)
            	}

Dynamic Exception_obj::__CreateEmpty() { return new Exception_obj; }

void *Exception_obj::_hx_vtable = 0;

Dynamic Exception_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Exception_obj > _hx_result = new Exception_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Exception_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0200bd3b;
}

::String Exception_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c0ec729e12cba978_13_toString)
HXDLIN(  13)		HX_STACK_DO_THROW(null());
HXDLIN(  13)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,toString,return )


Exception_obj::Exception_obj()
{
}

hx::Val Exception_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Exception_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Exception_obj_sStaticStorageInfo = 0;
#endif

static ::String Exception_obj_sMemberFields[] = {
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class Exception_obj::__mClass;

void Exception_obj::__register()
{
	Exception_obj _hx_dummy;
	Exception_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("lime._internal.unifill.Exception",49,8b,2f,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Exception_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Exception_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Exception_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Exception_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace unifill
