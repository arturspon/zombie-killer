// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_
#include <lime/graphics/_WebGL2RenderContext/WebGL2RenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_SamplerState
#include <openfl/_internal/renderer/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_574e9a3948a11606_31_new,"openfl.display3D.textures.RectangleTexture","new",0xcccbdd5b,"openfl.display3D.textures.RectangleTexture.new","openfl/display3D/textures/RectangleTexture.hx",31,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_56_uploadFromBitmapData,"openfl.display3D.textures.RectangleTexture","uploadFromBitmapData",0x711b2e49,"openfl.display3D.textures.RectangleTexture.uploadFromBitmapData","openfl/display3D/textures/RectangleTexture.hx",56,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_106_uploadFromByteArray,"openfl.display3D.textures.RectangleTexture","uploadFromByteArray",0xfd7a0ae1,"openfl.display3D.textures.RectangleTexture.uploadFromByteArray","openfl/display3D/textures/RectangleTexture.hx",106,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_118_uploadFromTypedArray,"openfl.display3D.textures.RectangleTexture","uploadFromTypedArray",0x35aa255f,"openfl.display3D.textures.RectangleTexture.uploadFromTypedArray","openfl/display3D/textures/RectangleTexture.hx",118,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_127___setSamplerState,"openfl.display3D.textures.RectangleTexture","__setSamplerState",0xea7a95c6,"openfl.display3D.textures.RectangleTexture.__setSamplerState","openfl/display3D/textures/RectangleTexture.hx",127,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_159___uploadFromImage,"openfl.display3D.textures.RectangleTexture","__uploadFromImage",0x4731366b,"openfl.display3D.textures.RectangleTexture.__uploadFromImage","openfl/display3D/textures/RectangleTexture.hx",159,0x83565556)
namespace openfl{
namespace display3D{
namespace textures{

void RectangleTexture_obj::__construct( ::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_31_new)
HXLINE(  32)		super::__construct(context);
HXLINE(  34)		this->_hx___width = width;
HXLINE(  35)		this->_hx___height = height;
HXLINE(  37)		this->_hx___optimizeForRenderToTexture = optimizeForRenderToTexture;
HXLINE(  39)		this->_hx___textureTarget = this->_hx___context->gl->TEXTURE_2D;
HXLINE(  40)		this->uploadFromTypedArray(null());
HXLINE(  42)		if (optimizeForRenderToTexture) {
HXLINE(  42)			this->_hx___getGLFramebuffer(true,0,0);
            		}
            	}

Dynamic RectangleTexture_obj::__CreateEmpty() { return new RectangleTexture_obj; }

void *RectangleTexture_obj::_hx_vtable = 0;

Dynamic RectangleTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RectangleTexture_obj > _hx_result = new RectangleTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool RectangleTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19affbf1) {
		if (inClassId<=(int)0x0b79cce7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b79cce7;
		} else {
			return inClassId==(int)0x19affbf1;
		}
	} else {
		return inClassId==(int)0x1b123bf8;
	}
}

void RectangleTexture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_56_uploadFromBitmapData)
HXLINE(  58)		if (hx::IsNull( source )) {
HXLINE(  58)			return;
            		}
HXLINE(  60)		 ::lime::graphics::Image image = this->_hx___getImage(source);
HXLINE(  61)		if (hx::IsNull( image )) {
HXLINE(  61)			return;
            		}
HXLINE(  75)		this->uploadFromTypedArray(image->get_data());
            	}


HX_DEFINE_DYNAMIC_FUNC1(RectangleTexture_obj,uploadFromBitmapData,(void))

void RectangleTexture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            	HX_GC_STACKFRAME(&_hx_pos_574e9a3948a11606_106_uploadFromByteArray)
HXDLIN( 106)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN( 106)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 106)		if (hx::IsNotNull( buffer )) {
HXDLIN( 106)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 106)			int in_byteOffset = byteArrayOffset;
HXDLIN( 106)			if ((in_byteOffset < 0)) {
HXDLIN( 106)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 106)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 106)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 106)			int bufferByteLength = buffer->length;
HXDLIN( 106)			int elementSize = _this->bytesPerElement;
HXDLIN( 106)			int newByteLength = bufferByteLength;
HXDLIN( 106)			{
HXDLIN( 106)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 106)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 106)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 106)				if ((newByteLength < 0)) {
HXDLIN( 106)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 106)			_this->buffer = buffer;
HXDLIN( 106)			_this->byteOffset = in_byteOffset;
HXDLIN( 106)			_this->byteLength = newByteLength;
HXDLIN( 106)			_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 106)			this1 = _this;
            		}
            		else {
HXDLIN( 106)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN( 106)		this->uploadFromTypedArray(this1);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RectangleTexture_obj,uploadFromByteArray,(void))

void RectangleTexture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_118_uploadFromTypedArray)
HXLINE( 119)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 121)		this->_hx___context->_hx___bindGLTexture2D(this->_hx___textureID);
HXLINE( 122)		{
HXLINE( 122)			int target = this->_hx___textureTarget;
HXDLIN( 122)			int internalformat = this->_hx___internalFormat;
HXDLIN( 122)			int width = this->_hx___width;
HXDLIN( 122)			int height = this->_hx___height;
HXDLIN( 122)			int format = this->_hx___format;
HXDLIN( 122)			int type = gl->UNSIGNED_BYTE;
HXDLIN( 122)			{
HXLINE( 122)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data,null(),0);
HXDLIN( 122)				gl->texImage2D(target,0,internalformat,width,height,0,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            			}
            		}
HXLINE( 123)		this->_hx___context->_hx___bindGLTexture2D(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(RectangleTexture_obj,uploadFromTypedArray,(void))

bool RectangleTexture_obj::_hx___setSamplerState( ::openfl::_internal::renderer::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_127___setSamplerState)
HXLINE( 128)		if (this->super::_hx___setSamplerState(state)) {
HXLINE( 130)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 132)			if ((::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy != 0)) {
HXLINE( 134)				int aniso;
HXDLIN( 134)				 ::Dynamic _hx_switch_0 = state->filter;
            				if (  (_hx_switch_0==0) ){
HXLINE( 134)					aniso = 16;
HXDLIN( 134)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==1) ){
HXLINE( 134)					aniso = 2;
HXDLIN( 134)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==2) ){
HXLINE( 134)					aniso = 4;
HXDLIN( 134)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==3) ){
HXLINE( 134)					aniso = 8;
HXDLIN( 134)					goto _hx_goto_4;
            				}
            				/* default */{
HXLINE( 134)					aniso = 1;
            				}
            				_hx_goto_4:;
HXLINE( 143)				if ((aniso > ::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy)) {
HXLINE( 145)					aniso = ::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy;
            				}
HXLINE( 148)				gl->texParameterf(gl->TEXTURE_2D,::openfl::display3D::Context3D_obj::_hx___glTextureMaxAnisotropy,( (Float)(aniso) ));
            			}
HXLINE( 151)			return true;
            		}
HXLINE( 154)		return false;
            	}


void RectangleTexture_obj::_hx___uploadFromImage( ::lime::graphics::Image image){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_159___uploadFromImage)
HXLINE( 160)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 161)		int internalFormat;
HXDLIN( 161)		int format;
HXLINE( 163)		if ((image->buffer->bitsPerPixel == 1)) {
HXLINE( 165)			internalFormat = gl->ALPHA;
HXLINE( 166)			format = gl->ALPHA;
            		}
            		else {
HXLINE( 170)			internalFormat = ::openfl::display3D::textures::TextureBase_obj::_hx___textureInternalFormat;
HXLINE( 171)			format = ::openfl::display3D::textures::TextureBase_obj::_hx___textureFormat;
            		}
HXLINE( 174)		this->_hx___context->_hx___bindGLTexture2D(this->_hx___textureID);
HXLINE( 198)		{
HXLINE( 198)			int target = gl->TEXTURE_2D;
HXDLIN( 198)			int width = image->buffer->width;
HXDLIN( 198)			int height = image->buffer->height;
HXDLIN( 198)			int type = gl->UNSIGNED_BYTE;
HXDLIN( 198)			 ::lime::utils::ArrayBufferView srcData = image->get_data();
HXDLIN( 198)			{
HXLINE( 198)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),srcData,null(),0);
HXDLIN( 198)				gl->texImage2D(target,0,internalFormat,width,height,0,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            			}
            		}
HXLINE( 201)		this->_hx___context->_hx___bindGLTexture2D(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(RectangleTexture_obj,_hx___uploadFromImage,(void))


hx::ObjectPtr< RectangleTexture_obj > RectangleTexture_obj::__new( ::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture) {
	hx::ObjectPtr< RectangleTexture_obj > __this = new RectangleTexture_obj();
	__this->__construct(context,width,height,format,optimizeForRenderToTexture);
	return __this;
}

hx::ObjectPtr< RectangleTexture_obj > RectangleTexture_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture) {
	RectangleTexture_obj *__this = (RectangleTexture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RectangleTexture_obj), true, "openfl.display3D.textures.RectangleTexture"));
	*(void **)__this = RectangleTexture_obj::_hx_vtable;
	__this->__construct(context,width,height,format,optimizeForRenderToTexture);
	return __this;
}

RectangleTexture_obj::RectangleTexture_obj()
{
}

hx::Val RectangleTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return hx::Val( _hx___setSamplerState_dyn() ); }
		if (HX_FIELD_EQ(inName,"__uploadFromImage") ) { return hx::Val( _hx___uploadFromImage_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return hx::Val( uploadFromTypedArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *RectangleTexture_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *RectangleTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String RectangleTexture_obj_sMemberFields[] = {
	HX_("uploadFromBitmapData",a4,85,65,0d),
	HX_("uploadFromByteArray",e6,17,1b,ee),
	HX_("uploadFromTypedArray",ba,7c,f4,d1),
	HX_("__setSamplerState",8b,e7,cf,5d),
	HX_("__uploadFromImage",30,88,86,ba),
	::String(null()) };

hx::Class RectangleTexture_obj::__mClass;

void RectangleTexture_obj::__register()
{
	RectangleTexture_obj _hx_dummy;
	RectangleTexture_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D.textures.RectangleTexture",e9,93,ed,a3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RectangleTexture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RectangleTexture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RectangleTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RectangleTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
