// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_unifill_InternalEncodingIter
#include <lime/_internal/unifill/InternalEncodingIter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60025502df6d376a_7_new,"lime._internal.unifill.InternalEncodingIter","new",0xab03e1a0,"lime._internal.unifill.InternalEncodingIter.new","lime/_internal/unifill/InternalEncodingIter.hx",7,0xc0cbfced)
HX_LOCAL_STACK_FRAME(_hx_pos_60025502df6d376a_22_hasNext,"lime._internal.unifill.InternalEncodingIter","hasNext",0x847856ad,"lime._internal.unifill.InternalEncodingIter.hasNext","lime/_internal/unifill/InternalEncodingIter.hx",22,0xc0cbfced)
HX_LOCAL_STACK_FRAME(_hx_pos_60025502df6d376a_28_next,"lime._internal.unifill.InternalEncodingIter","next",0xf8618bb3,"lime._internal.unifill.InternalEncodingIter.next","lime/_internal/unifill/InternalEncodingIter.hx",28,0xc0cbfced)
namespace lime{
namespace _internal{
namespace unifill{

void InternalEncodingIter_obj::__construct(::String s,int beginIndex,int endIndex){
            	HX_STACKFRAME(&_hx_pos_60025502df6d376a_7_new)
HXLINE(  25)		this->i = 0;
HXLINE(  15)		this->string = s;
HXLINE(  16)		this->index = beginIndex;
HXLINE(  17)		this->endIndex = endIndex;
            	}

Dynamic InternalEncodingIter_obj::__CreateEmpty() { return new InternalEncodingIter_obj; }

void *InternalEncodingIter_obj::_hx_vtable = 0;

Dynamic InternalEncodingIter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InternalEncodingIter_obj > _hx_result = new InternalEncodingIter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool InternalEncodingIter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x296df234;
}

bool InternalEncodingIter_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_60025502df6d376a_22_hasNext)
HXDLIN(  22)		return (this->index < this->endIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC0(InternalEncodingIter_obj,hasNext,return )

int InternalEncodingIter_obj::next(){
            	HX_STACKFRAME(&_hx_pos_60025502df6d376a_28_next)
HXLINE(  29)		this->i = this->index;
HXLINE(  30)		 ::lime::_internal::unifill::InternalEncodingIter _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  30)		int _hx_tmp1 = _hx_tmp->index;
HXDLIN(  30)		::String this1 = this->string;
HXDLIN(  30)		::String this2 = this1;
HXDLIN(  30)		int c = this2.cca(this->index);
HXDLIN(  30)		int _hx_tmp2;
HXDLIN(  30)		if ((c < 192)) {
HXLINE(  30)			_hx_tmp2 = 1;
            		}
            		else {
HXLINE(  30)			if ((c < 224)) {
HXLINE(  30)				_hx_tmp2 = 2;
            			}
            			else {
HXLINE(  30)				if ((c < 240)) {
HXLINE(  30)					_hx_tmp2 = 3;
            				}
            				else {
HXLINE(  30)					if ((c < 248)) {
HXLINE(  30)						_hx_tmp2 = 4;
            					}
            					else {
HXLINE(  30)						_hx_tmp2 = 1;
            					}
            				}
            			}
            		}
HXDLIN(  30)		_hx_tmp->index = (_hx_tmp1 + _hx_tmp2);
HXLINE(  31)		return this->i;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InternalEncodingIter_obj,next,return )


InternalEncodingIter_obj::InternalEncodingIter_obj()
{
}

void InternalEncodingIter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InternalEncodingIter);
	HX_MARK_MEMBER_NAME(string,"string");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(endIndex,"endIndex");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_END_CLASS();
}

void InternalEncodingIter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(string,"string");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(endIndex,"endIndex");
	HX_VISIT_MEMBER_NAME(i,"i");
}

hx::Val InternalEncodingIter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return hx::Val( i ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return hx::Val( index ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { return hx::Val( string ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hx::Val( hasNext_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { return hx::Val( endIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val InternalEncodingIter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { string=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { endIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InternalEncodingIter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("string",d1,28,30,11));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("endIndex",37,2d,12,bc));
	outFields->push(HX_("i",69,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo InternalEncodingIter_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(InternalEncodingIter_obj,string),HX_("string",d1,28,30,11)},
	{hx::fsInt,(int)offsetof(InternalEncodingIter_obj,index),HX_("index",12,9b,14,be)},
	{hx::fsInt,(int)offsetof(InternalEncodingIter_obj,endIndex),HX_("endIndex",37,2d,12,bc)},
	{hx::fsInt,(int)offsetof(InternalEncodingIter_obj,i),HX_("i",69,00,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *InternalEncodingIter_obj_sStaticStorageInfo = 0;
#endif

static ::String InternalEncodingIter_obj_sMemberFields[] = {
	HX_("string",d1,28,30,11),
	HX_("index",12,9b,14,be),
	HX_("endIndex",37,2d,12,bc),
	HX_("hasNext",6d,a5,46,18),
	HX_("i",69,00,00,00),
	HX_("next",f3,84,02,49),
	::String(null()) };

hx::Class InternalEncodingIter_obj::__mClass;

void InternalEncodingIter_obj::__register()
{
	InternalEncodingIter_obj _hx_dummy;
	InternalEncodingIter_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("lime._internal.unifill.InternalEncodingIter",ae,d1,52,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(InternalEncodingIter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InternalEncodingIter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InternalEncodingIter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InternalEncodingIter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace unifill