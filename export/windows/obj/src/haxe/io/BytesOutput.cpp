// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4d06a39eba40d940_40_new,"haxe.io.BytesOutput","new",0x130b775e,"haxe.io.BytesOutput.new","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesOutput.hx",40,0xe8d8730b)
HX_LOCAL_STACK_FRAME(_hx_pos_4d06a39eba40d940_55_writeByte,"haxe.io.BytesOutput","writeByte",0xed1b0d05,"haxe.io.BytesOutput.writeByte","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesOutput.hx",55,0xe8d8730b)
HX_LOCAL_STACK_FRAME(_hx_pos_4d06a39eba40d940_59_writeBytes,"haxe.io.BytesOutput","writeBytes",0x8a9057ce,"haxe.io.BytesOutput.writeBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesOutput.hx",59,0xe8d8730b)
HX_LOCAL_STACK_FRAME(_hx_pos_4d06a39eba40d940_140_getBytes,"haxe.io.BytesOutput","getBytes",0x9fe35837,"haxe.io.BytesOutput.getBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesOutput.hx",140,0xe8d8730b)
namespace haxe{
namespace io{

void BytesOutput_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4d06a39eba40d940_40_new)
HXDLIN(  40)		this->b =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
            	}

Dynamic BytesOutput_obj::__CreateEmpty() { return new BytesOutput_obj; }

void *BytesOutput_obj::_hx_vtable = 0;

Dynamic BytesOutput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BytesOutput_obj > _hx_result = new BytesOutput_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BytesOutput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3473efad) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3473efad;
	} else {
		return inClassId==(int)0x7d746abc;
	}
}

void BytesOutput_obj::writeByte(int c){
            	HX_STACKFRAME(&_hx_pos_4d06a39eba40d940_55_writeByte)
HXDLIN(  55)		this->b->b->push(c);
            	}


int BytesOutput_obj::writeBytes( ::haxe::io::Bytes buf,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_4d06a39eba40d940_59_writeBytes)
HXLINE(  64)		{
HXLINE(  64)			 ::haxe::io::BytesBuffer _this = this->b;
HXDLIN(  64)			bool _hx_tmp;
HXDLIN(  64)			bool _hx_tmp1;
HXDLIN(  64)			if ((pos >= 0)) {
HXLINE(  64)				_hx_tmp1 = (len < 0);
            			}
            			else {
HXLINE(  64)				_hx_tmp1 = true;
            			}
HXDLIN(  64)			if (!(_hx_tmp1)) {
HXLINE(  64)				_hx_tmp = ((pos + len) > buf->length);
            			}
            			else {
HXLINE(  64)				_hx_tmp = true;
            			}
HXDLIN(  64)			if (_hx_tmp) {
HXLINE(  64)				HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            			}
HXDLIN(  64)			::Array< unsigned char > b1 = _this->b;
HXDLIN(  64)			::Array< unsigned char > b2 = buf->b;
HXDLIN(  64)			{
HXLINE(  64)				int _g = pos;
HXDLIN(  64)				int _g1 = (pos + len);
HXDLIN(  64)				while((_g < _g1)){
HXLINE(  64)					_g = (_g + 1);
HXDLIN(  64)					int i = (_g - 1);
HXDLIN(  64)					_this->b->push(b2->__get(i));
            				}
            			}
            		}
HXLINE(  66)		return len;
            	}


 ::haxe::io::Bytes BytesOutput_obj::getBytes(){
            	HX_STACKFRAME(&_hx_pos_4d06a39eba40d940_140_getBytes)
HXDLIN( 140)		return this->b->getBytes();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BytesOutput_obj,getBytes,return )


hx::ObjectPtr< BytesOutput_obj > BytesOutput_obj::__new() {
	hx::ObjectPtr< BytesOutput_obj > __this = new BytesOutput_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BytesOutput_obj > BytesOutput_obj::__alloc(hx::Ctx *_hx_ctx) {
	BytesOutput_obj *__this = (BytesOutput_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BytesOutput_obj), true, "haxe.io.BytesOutput"));
	*(void **)__this = BytesOutput_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BytesOutput_obj::BytesOutput_obj()
{
}

void BytesOutput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesOutput);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void BytesOutput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
}

hx::Val BytesOutput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return hx::Val( getBytes_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return hx::Val( writeByte_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return hx::Val( writeBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BytesOutput_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast<  ::haxe::io::BytesBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BytesOutput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo BytesOutput_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::haxe::io::BytesBuffer */ ,(int)offsetof(BytesOutput_obj,b),HX_("b",62,00,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BytesOutput_obj_sStaticStorageInfo = 0;
#endif

static ::String BytesOutput_obj_sMemberFields[] = {
	HX_("b",62,00,00,00),
	HX_("writeByte",87,13,d7,49),
	HX_("writeBytes",0c,03,5a,52),
	HX_("getBytes",f5,17,6f,1d),
	::String(null()) };

hx::Class BytesOutput_obj::__mClass;

void BytesOutput_obj::__register()
{
	BytesOutput_obj _hx_dummy;
	BytesOutput_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.io.BytesOutput",6c,30,b1,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BytesOutput_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BytesOutput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BytesOutput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BytesOutput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
