// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_Entity
#include <Entity.h>
#endif
#ifndef INCLUDED_Message
#include <Message.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_172c530a2b587c83_12_new,"Message","new",0x4afb5e19,"Message.new","Message.hx",12,0xc93ba777)
HX_LOCAL_STACK_FRAME(_hx_pos_172c530a2b587c83_4_boot,"Message","boot",0x490ff859,"Message.boot","Message.hx",4,0xc93ba777)
HX_LOCAL_STACK_FRAME(_hx_pos_172c530a2b587c83_5_boot,"Message","boot",0x490ff859,"Message.boot","Message.hx",5,0xc93ba777)

void Message_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_172c530a2b587c83_12_new)
            	}

Dynamic Message_obj::__CreateEmpty() { return new Message_obj; }

void *Message_obj::_hx_vtable = 0;

Dynamic Message_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Message_obj > _hx_result = new Message_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Message_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x67625da7;
}

int Message_obj::OP_DAMAGE;

int Message_obj::OP_HEAL;


Message_obj::Message_obj()
{
}

void Message_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Message);
	HX_MARK_MEMBER_NAME(from,"from");
	HX_MARK_MEMBER_NAME(to,"to");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(op,"op");
	HX_MARK_END_CLASS();
}

void Message_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(from,"from");
	HX_VISIT_MEMBER_NAME(to,"to");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(op,"op");
}

hx::Val Message_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { return hx::Val( to ); }
		if (HX_FIELD_EQ(inName,"op") ) { return hx::Val( op ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"from") ) { return hx::Val( from ); }
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Message_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { to=inValue.Cast<  ::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"op") ) { op=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"from") ) { from=inValue.Cast<  ::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Message_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("from",6a,a5,c2,43));
	outFields->push(HX_("to",7b,65,00,00));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("op",21,61,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Message_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::Entity */ ,(int)offsetof(Message_obj,from),HX_("from",6a,a5,c2,43)},
	{hx::fsObject /*  ::Entity */ ,(int)offsetof(Message_obj,to),HX_("to",7b,65,00,00)},
	{hx::fsFloat,(int)offsetof(Message_obj,data),HX_("data",2a,56,63,42)},
	{hx::fsInt,(int)offsetof(Message_obj,op),HX_("op",21,61,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Message_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Message_obj::OP_DAMAGE,HX_("OP_DAMAGE",0d,5f,21,37)},
	{hx::fsInt,(void *) &Message_obj::OP_HEAL,HX_("OP_HEAL",46,90,89,b4)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Message_obj_sMemberFields[] = {
	HX_("from",6a,a5,c2,43),
	HX_("to",7b,65,00,00),
	HX_("data",2a,56,63,42),
	HX_("op",21,61,00,00),
	::String(null()) };

static void Message_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Message_obj::OP_DAMAGE,"OP_DAMAGE");
	HX_MARK_MEMBER_NAME(Message_obj::OP_HEAL,"OP_HEAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Message_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Message_obj::OP_DAMAGE,"OP_DAMAGE");
	HX_VISIT_MEMBER_NAME(Message_obj::OP_HEAL,"OP_HEAL");
};

#endif

hx::Class Message_obj::__mClass;

static ::String Message_obj_sStaticFields[] = {
	HX_("OP_DAMAGE",0d,5f,21,37),
	HX_("OP_HEAL",46,90,89,b4),
	::String(null())
};

void Message_obj::__register()
{
	Message_obj _hx_dummy;
	Message_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("Message",a7,5d,62,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Message_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Message_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Message_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Message_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Message_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Message_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Message_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Message_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_172c530a2b587c83_4_boot)
HXDLIN(   4)		OP_DAMAGE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_172c530a2b587c83_5_boot)
HXDLIN(   5)		OP_HEAL = 1;
            	}
}
