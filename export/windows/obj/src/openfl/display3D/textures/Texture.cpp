// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_
#include <lime/graphics/_WebGL2RenderContext/WebGL2RenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
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
#ifndef INCLUDED_openfl__internal_formats_atf_ATFReader
#include <openfl/_internal/formats/atf/ATFReader.h>
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
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_35_new,"openfl.display3D.textures.Texture","new",0xaee720f0,"openfl.display3D.textures.Texture.new","openfl/display3D/textures/Texture.hx",35,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_88_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",88,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_96_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",96,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_135_uploadFromBitmapData,"openfl.display3D.textures.Texture","uploadFromBitmapData",0x5c4e9314,"openfl.display3D.textures.Texture.uploadFromBitmapData","openfl/display3D/textures/Texture.hx",135,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_229_uploadFromByteArray,"openfl.display3D.textures.Texture","uploadFromByteArray",0x0d748876,"openfl.display3D.textures.Texture.uploadFromByteArray","openfl/display3D/textures/Texture.hx",229,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_243_uploadFromTypedArray,"openfl.display3D.textures.Texture","uploadFromTypedArray",0x20dd8a2a,"openfl.display3D.textures.Texture.uploadFromTypedArray","openfl/display3D/textures/Texture.hx",243,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_262___setSamplerState,"openfl.display3D.textures.Texture","__setSamplerState",0xb719141b,"openfl.display3D.textures.Texture.__setSamplerState","openfl/display3D/textures/Texture.hx",262,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_312___uploadCompressedTextureFromByteArray,"openfl.display3D.textures.Texture","__uploadCompressedTextureFromByteArray",0x1748d45e,"openfl.display3D.textures.Texture.__uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",312,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_299___uploadCompressedTextureFromByteArray,"openfl.display3D.textures.Texture","__uploadCompressedTextureFromByteArray",0x1748d45e,"openfl.display3D.textures.Texture.__uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",299,0x3ee19dbf)
static const bool _hx_array_data_f13028fe_10[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_31_boot,"openfl.display3D.textures.Texture","boot",0x536eb1a2,"openfl.display3D.textures.Texture.boot","openfl/display3D/textures/Texture.hx",31,0x3ee19dbf)
namespace openfl{
namespace display3D{
namespace textures{

void Texture_obj::__construct( ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels){
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_35_new)
HXLINE(  36)		super::__construct(context);
HXLINE(  38)		this->_hx___width = width;
HXLINE(  39)		this->_hx___height = height;
HXLINE(  41)		this->_hx___optimizeForRenderToTexture = optimizeForRenderToTexture;
HXLINE(  42)		this->_hx___streamingLevels = streamingLevels;
HXLINE(  44)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE(  46)		this->_hx___textureTarget = gl->TEXTURE_2D;
HXLINE(  48)		this->_hx___context->_hx___bindGLTexture2D(this->_hx___textureID);
HXLINE(  49)		{
HXLINE(  49)			int target = this->_hx___textureTarget;
HXDLIN(  49)			int internalformat = this->_hx___internalFormat;
HXDLIN(  49)			int width1 = this->_hx___width;
HXDLIN(  49)			int height1 = this->_hx___height;
HXDLIN(  49)			int format1 = this->_hx___format;
HXDLIN(  49)			int type = gl->UNSIGNED_BYTE;
HXDLIN(  49)			{
HXLINE(  49)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),null(),null(),0);
HXDLIN(  49)				gl->texImage2D(target,0,internalformat,width1,height1,0,format1,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            			}
            		}
HXLINE(  50)		this->_hx___context->_hx___bindGLTexture2D(null());
HXLINE(  52)		if (optimizeForRenderToTexture) {
HXLINE(  52)			this->_hx___getGLFramebuffer(true,0,0);
            		}
            	}

Dynamic Texture_obj::__CreateEmpty() { return new Texture_obj; }

void *Texture_obj::_hx_vtable = 0;

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Texture_obj > _hx_result = new Texture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Texture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19affbf1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19affbf1;
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x1fad1a24;
	}
}

void Texture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< bool >  __o_async){
            		bool async = __o_async.Default(false);
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_88_uploadCompressedTextureFromByteArray)
HXLINE(  87)		 ::openfl::display3D::textures::Texture _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  89)		if (!(async)) {
HXLINE(  91)			this->_hx___uploadCompressedTextureFromByteArray(data,byteArrayOffset);
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0, ::openfl::display3D::textures::Texture,_gthis, ::openfl::utils::ByteArrayData,data,int,byteArrayOffset) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_96_uploadCompressedTextureFromByteArray)
HXLINE(  97)				_gthis->_hx___uploadCompressedTextureFromByteArray(data,byteArrayOffset);
HXLINE(  99)				 ::openfl::events::Event event = null();
HXLINE( 104)				event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("textureReady",88,4d,5a,df),null(),null());
HXLINE( 107)				_gthis->dispatchEvent(event);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  95)			::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis,data,byteArrayOffset)),1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))

void Texture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source,hx::Null< int >  __o_miplevel,hx::Null< bool >  __o_generateMipmap){
            		int miplevel = __o_miplevel.Default(0);
            		bool generateMipmap = __o_generateMipmap.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_135_uploadFromBitmapData)
HXLINE( 147)		if (hx::IsNull( source )) {
HXLINE( 147)			return;
            		}
HXLINE( 149)		int width = (this->_hx___width >> miplevel);
HXLINE( 150)		int height = (this->_hx___height >> miplevel);
HXLINE( 152)		bool _hx_tmp;
HXDLIN( 152)		if ((width == 0)) {
HXLINE( 152)			_hx_tmp = (height == 0);
            		}
            		else {
HXLINE( 152)			_hx_tmp = false;
            		}
HXDLIN( 152)		if (_hx_tmp) {
HXLINE( 152)			return;
            		}
HXLINE( 154)		if ((width == 0)) {
HXLINE( 154)			width = 1;
            		}
HXLINE( 155)		if ((height == 0)) {
HXLINE( 155)			height = 1;
            		}
HXLINE( 157)		bool _hx_tmp1;
HXDLIN( 157)		if ((source->width == width)) {
HXLINE( 157)			_hx_tmp1 = (source->height != height);
            		}
            		else {
HXLINE( 157)			_hx_tmp1 = true;
            		}
HXDLIN( 157)		if (_hx_tmp1) {
HXLINE( 159)			 ::openfl::display::BitmapData copy =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,0);
HXLINE( 160)			copy->draw(source,null(),null(),null(),null(),null());
HXLINE( 161)			source = copy;
            		}
HXLINE( 164)		 ::lime::graphics::Image image = this->_hx___getImage(source);
HXLINE( 165)		if (hx::IsNull( image )) {
HXLINE( 165)			return;
            		}
HXLINE( 190)		this->uploadFromTypedArray(image->get_data(),miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromBitmapData,(void))

void Texture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< int >  __o_miplevel){
            		int miplevel = __o_miplevel.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_229_uploadFromByteArray)
HXDLIN( 229)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN( 229)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 229)		if (hx::IsNotNull( buffer )) {
HXDLIN( 229)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 229)			int in_byteOffset = byteArrayOffset;
HXDLIN( 229)			if ((in_byteOffset < 0)) {
HXDLIN( 229)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 229)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 229)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 229)			int bufferByteLength = buffer->length;
HXDLIN( 229)			int elementSize = _this->bytesPerElement;
HXDLIN( 229)			int newByteLength = bufferByteLength;
HXDLIN( 229)			{
HXDLIN( 229)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 229)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 229)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 229)				if ((newByteLength < 0)) {
HXDLIN( 229)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 229)			_this->buffer = buffer;
HXDLIN( 229)			_this->byteOffset = in_byteOffset;
HXDLIN( 229)			_this->byteLength = newByteLength;
HXDLIN( 229)			_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 229)			this1 = _this;
            		}
            		else {
HXDLIN( 229)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN( 229)		this->uploadFromTypedArray(this1,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

void Texture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data,hx::Null< int >  __o_miplevel){
            		int miplevel = __o_miplevel.Default(0);
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_243_uploadFromTypedArray)
HXLINE( 244)		if (hx::IsNull( data )) {
HXLINE( 244)			return;
            		}
HXLINE( 246)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 248)		int width = (this->_hx___width >> miplevel);
HXLINE( 249)		int height = (this->_hx___height >> miplevel);
HXLINE( 251)		bool _hx_tmp;
HXDLIN( 251)		if ((width == 0)) {
HXLINE( 251)			_hx_tmp = (height == 0);
            		}
            		else {
HXLINE( 251)			_hx_tmp = false;
            		}
HXDLIN( 251)		if (_hx_tmp) {
HXLINE( 251)			return;
            		}
HXLINE( 253)		if ((width == 0)) {
HXLINE( 253)			width = 1;
            		}
HXLINE( 254)		if ((height == 0)) {
HXLINE( 254)			height = 1;
            		}
HXLINE( 256)		this->_hx___context->_hx___bindGLTexture2D(this->_hx___textureID);
HXLINE( 257)		{
HXLINE( 257)			int target = this->_hx___textureTarget;
HXDLIN( 257)			int internalformat = this->_hx___internalFormat;
HXDLIN( 257)			int format = this->_hx___format;
HXDLIN( 257)			int type = gl->UNSIGNED_BYTE;
HXDLIN( 257)			{
HXLINE( 257)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data,null(),0);
HXDLIN( 257)				gl->texImage2D(target,miplevel,internalformat,width,height,0,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            			}
            		}
HXLINE( 258)		this->_hx___context->_hx___bindGLTexture2D(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromTypedArray,(void))

bool Texture_obj::_hx___setSamplerState( ::openfl::_internal::renderer::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_262___setSamplerState)
HXLINE( 263)		if (this->super::_hx___setSamplerState(state)) {
HXLINE( 265)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 267)			bool _hx_tmp;
HXDLIN( 267)			if (hx::IsNotEq( state->mipfilter,2 )) {
HXLINE( 267)				_hx_tmp = !(this->_hx___samplerState->mipmapGenerated);
            			}
            			else {
HXLINE( 267)				_hx_tmp = false;
            			}
HXDLIN( 267)			if (_hx_tmp) {
HXLINE( 269)				gl->generateMipmap(gl->TEXTURE_2D);
HXLINE( 270)				this->_hx___samplerState->mipmapGenerated = true;
            			}
HXLINE( 273)			if ((::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy != 0)) {
HXLINE( 275)				int aniso;
HXDLIN( 275)				 ::Dynamic _hx_switch_0 = state->filter;
            				if (  (_hx_switch_0==0) ){
HXLINE( 275)					aniso = 16;
HXDLIN( 275)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==1) ){
HXLINE( 275)					aniso = 2;
HXDLIN( 275)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==2) ){
HXLINE( 275)					aniso = 4;
HXDLIN( 275)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==3) ){
HXLINE( 275)					aniso = 8;
HXDLIN( 275)					goto _hx_goto_6;
            				}
            				/* default */{
HXLINE( 275)					aniso = 1;
            				}
            				_hx_goto_6:;
HXLINE( 284)				if ((aniso > ::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy)) {
HXLINE( 286)					aniso = ::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy;
            				}
HXLINE( 289)				gl->texParameterf(gl->TEXTURE_2D,::openfl::display3D::Context3D_obj::_hx___glTextureMaxAnisotropy,( (Float)(aniso) ));
            			}
HXLINE( 292)			return true;
            		}
HXLINE( 295)		return false;
            	}


void Texture_obj::_hx___uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_hx_Closure_0, ::openfl::display3D::textures::Texture,_gthis,::Array< bool >,hasTexture,bool,alpha, ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) HXARGC(7)
            		void _hx_run(int target,int level,int gpuFormat,int width,int height,int blockLength, ::haxe::io::Bytes bytes){
            			HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_312___uploadCompressedTextureFromByteArray)
HXLINE( 313)			 ::Dynamic format;
HXDLIN( 313)			if (alpha) {
HXLINE( 313)				format = ::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormatsAlpha->get(gpuFormat);
            			}
            			else {
HXLINE( 313)				format = ::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormats->get(gpuFormat);
            			}
HXLINE( 314)			if (hx::IsEq( format,0 )) {
HXLINE( 314)				return;
            			}
HXLINE( 316)			hasTexture[0] = true;
HXLINE( 317)			_gthis->_hx___format = ( (int)(format) );
HXLINE( 318)			_gthis->_hx___internalFormat = ( (int)(format) );
HXLINE( 320)			bool _hx_tmp;
HXDLIN( 320)			if (alpha) {
HXLINE( 320)				_hx_tmp = (gpuFormat == 2);
            			}
            			else {
HXLINE( 320)				_hx_tmp = false;
            			}
HXDLIN( 320)			if (_hx_tmp) {
HXLINE( 322)				int size = ::Std_obj::_hx_int((( (Float)(blockLength) ) / ( (Float)(2) )));
HXLINE( 324)				int _gthis1 = _gthis->_hx___textureTarget;
HXDLIN( 324)				int _gthis2 = _gthis->_hx___internalFormat;
HXLINE( 325)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 325)				if (hx::IsNotNull( bytes )) {
HXLINE( 325)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 325)					int in_byteOffset = 0;
HXDLIN( 325)					if ((in_byteOffset < 0)) {
HXLINE( 325)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 325)					if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 325)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 325)					int bufferByteLength = bytes->length;
HXDLIN( 325)					int elementSize = _this->bytesPerElement;
HXDLIN( 325)					int newByteLength = bufferByteLength;
HXDLIN( 325)					if (hx::IsNull( size )) {
HXLINE( 325)						newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 325)						if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 325)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 325)						if ((newByteLength < 0)) {
HXLINE( 325)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE( 325)						newByteLength = (size * _this->bytesPerElement);
HXDLIN( 325)						int newRange = (in_byteOffset + newByteLength);
HXDLIN( 325)						if ((newRange > bufferByteLength)) {
HXLINE( 325)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 325)					_this->buffer = bytes;
HXDLIN( 325)					_this->byteOffset = in_byteOffset;
HXDLIN( 325)					_this->byteLength = newByteLength;
HXDLIN( 325)					_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 325)					this1 = _this;
            				}
            				else {
HXLINE( 325)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            				}
HXLINE( 324)				::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::compressedTexImage2D(gl,_gthis1,level,_gthis2,width,height,0,this1);
HXLINE( 327)				 ::openfl::display3D::textures::Texture alphaTexture =  ::openfl::display3D::textures::Texture_obj::__alloc( HX_CTX ,_gthis->_hx___context,_gthis->_hx___width,_gthis->_hx___height,3,_gthis->_hx___optimizeForRenderToTexture,_gthis->_hx___streamingLevels);
HXLINE( 329)				alphaTexture->_hx___format = ( (int)(format) );
HXLINE( 330)				alphaTexture->_hx___internalFormat = ( (int)(format) );
HXLINE( 332)				_gthis->_hx___context->_hx___bindGLTexture2D(alphaTexture->_hx___textureID);
HXLINE( 333)				int alphaTexture1 = alphaTexture->_hx___textureTarget;
HXDLIN( 333)				int alphaTexture2 = alphaTexture->_hx___internalFormat;
HXLINE( 334)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 334)				if (hx::IsNotNull( bytes )) {
HXLINE( 334)					 ::lime::utils::ArrayBufferView _this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 334)					int in_byteOffset1 = size;
HXDLIN( 334)					if ((in_byteOffset1 < 0)) {
HXLINE( 334)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 334)					if ((hx::Mod(in_byteOffset1,_this1->bytesPerElement) != 0)) {
HXLINE( 334)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 334)					int bufferByteLength1 = bytes->length;
HXDLIN( 334)					int elementSize1 = _this1->bytesPerElement;
HXDLIN( 334)					int newByteLength1 = bufferByteLength1;
HXDLIN( 334)					if (hx::IsNull( size )) {
HXLINE( 334)						newByteLength1 = (bufferByteLength1 - in_byteOffset1);
HXDLIN( 334)						if ((hx::Mod(bufferByteLength1,_this1->bytesPerElement) != 0)) {
HXLINE( 334)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 334)						if ((newByteLength1 < 0)) {
HXLINE( 334)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE( 334)						newByteLength1 = (size * _this1->bytesPerElement);
HXDLIN( 334)						int newRange1 = (in_byteOffset1 + newByteLength1);
HXDLIN( 334)						if ((newRange1 > bufferByteLength1)) {
HXLINE( 334)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 334)					_this1->buffer = bytes;
HXDLIN( 334)					_this1->byteOffset = in_byteOffset1;
HXDLIN( 334)					_this1->byteLength = newByteLength1;
HXDLIN( 334)					_this1->length = ::Std_obj::_hx_int((( (Float)(newByteLength1) ) / ( (Float)(_this1->bytesPerElement) )));
HXDLIN( 334)					this2 = _this1;
            				}
            				else {
HXLINE( 334)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            				}
HXLINE( 333)				::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::compressedTexImage2D(gl,alphaTexture1,level,alphaTexture2,width,height,0,this2);
HXLINE( 336)				_gthis->_hx___alphaTexture = alphaTexture;
            			}
            			else {
HXLINE( 340)				int _gthis3 = _gthis->_hx___textureTarget;
HXDLIN( 340)				int _gthis4 = _gthis->_hx___internalFormat;
HXLINE( 341)				 ::lime::utils::ArrayBufferView this3;
HXDLIN( 341)				if (hx::IsNotNull( bytes )) {
HXLINE( 341)					 ::lime::utils::ArrayBufferView _this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 341)					int in_byteOffset2 = 0;
HXDLIN( 341)					if ((in_byteOffset2 < 0)) {
HXLINE( 341)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 341)					if ((hx::Mod(in_byteOffset2,_this2->bytesPerElement) != 0)) {
HXLINE( 341)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 341)					int bufferByteLength2 = bytes->length;
HXDLIN( 341)					int elementSize2 = _this2->bytesPerElement;
HXDLIN( 341)					int newByteLength2 = bufferByteLength2;
HXDLIN( 341)					if (hx::IsNull( blockLength )) {
HXLINE( 341)						newByteLength2 = (bufferByteLength2 - in_byteOffset2);
HXDLIN( 341)						if ((hx::Mod(bufferByteLength2,_this2->bytesPerElement) != 0)) {
HXLINE( 341)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 341)						if ((newByteLength2 < 0)) {
HXLINE( 341)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE( 341)						newByteLength2 = (blockLength * _this2->bytesPerElement);
HXDLIN( 341)						int newRange2 = (in_byteOffset2 + newByteLength2);
HXDLIN( 341)						if ((newRange2 > bufferByteLength2)) {
HXLINE( 341)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 341)					_this2->buffer = bytes;
HXDLIN( 341)					_this2->byteOffset = in_byteOffset2;
HXDLIN( 341)					_this2->byteLength = newByteLength2;
HXDLIN( 341)					_this2->length = ::Std_obj::_hx_int((( (Float)(newByteLength2) ) / ( (Float)(_this2->bytesPerElement) )));
HXDLIN( 341)					this3 = _this2;
            				}
            				else {
HXLINE( 341)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            				}
HXLINE( 340)				::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::compressedTexImage2D(gl,_gthis3,level,_gthis4,width,height,0,this3);
            			}
            		}
            		HX_END_LOCAL_FUNC7((void))

            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_299___uploadCompressedTextureFromByteArray)
HXLINE( 298)		 ::openfl::display3D::textures::Texture _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 300)		 ::openfl::_internal::formats::atf::ATFReader reader =  ::openfl::_internal::formats::atf::ATFReader_obj::__alloc( HX_CTX ,data,byteArrayOffset);
HXLINE( 301)		bool alpha = reader->readHeader(this->_hx___width,this->_hx___height,false);
HXLINE( 303)		 ::openfl::display3D::Context3D context = this->_hx___context;
HXLINE( 304)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE( 306)		this->_hx___context->_hx___bindGLTexture2D(this->_hx___textureID);
HXLINE( 308)		::Array< bool > hasTexture = ::Array_obj< bool >::fromData( _hx_array_data_f13028fe_10,1);
HXLINE( 311)		reader->readTextures( ::Dynamic(new _hx_Closure_0(_gthis,hasTexture,alpha,gl)));
HXLINE( 345)		if (!(hasTexture->__get(0))) {
HXLINE( 347)			 ::Dynamic elements = ((this->_hx___width * this->_hx___height) * 4);
HXDLIN( 347)			 ::lime::utils::ArrayBufferView this4;
HXDLIN( 347)			if (hx::IsNotNull( elements )) {
HXLINE( 347)				this4 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            			}
            			else {
HXLINE( 347)				HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            			}
HXDLIN( 347)			 ::lime::utils::ArrayBufferView data1 = this4;
HXLINE( 348)			{
HXLINE( 348)				int target1 = this->_hx___textureTarget;
HXDLIN( 348)				int internalformat = this->_hx___internalFormat;
HXDLIN( 348)				int width1 = this->_hx___width;
HXDLIN( 348)				int height1 = this->_hx___height;
HXDLIN( 348)				int format1 = this->_hx___format;
HXDLIN( 348)				int type = gl->UNSIGNED_BYTE;
HXDLIN( 348)				{
HXLINE( 348)					::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data1,null(),0);
HXDLIN( 348)					gl->texImage2D(target1,0,internalformat,width1,height1,0,format1,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            				}
            			}
            		}
HXLINE( 352)		this->_hx___context->_hx___bindGLTexture2D(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,_hx___uploadCompressedTextureFromByteArray,(void))

bool Texture_obj::_hx___lowMemoryMode;


hx::ObjectPtr< Texture_obj > Texture_obj::__new( ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	hx::ObjectPtr< Texture_obj > __this = new Texture_obj();
	__this->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

hx::ObjectPtr< Texture_obj > Texture_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	Texture_obj *__this = (Texture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Texture_obj), true, "openfl.display3D.textures.Texture"));
	*(void **)__this = Texture_obj::_hx_vtable;
	__this->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

Texture_obj::Texture_obj()
{
}

hx::Val Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return hx::Val( _hx___setSamplerState_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return hx::Val( uploadFromTypedArray_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return hx::Val( uploadCompressedTextureFromByteArray_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"__uploadCompressedTextureFromByteArray") ) { return hx::Val( _hx___uploadCompressedTextureFromByteArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { outValue = ( _hx___lowMemoryMode ); return true; }
	}
	return false;
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { _hx___lowMemoryMode=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Texture_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Texture_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Texture_obj::_hx___lowMemoryMode,HX_("__lowMemoryMode",98,71,9e,43)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Texture_obj_sMemberFields[] = {
	HX_("uploadCompressedTextureFromByteArray",ce,c7,86,c5),
	HX_("uploadFromBitmapData",a4,85,65,0d),
	HX_("uploadFromByteArray",e6,17,1b,ee),
	HX_("uploadFromTypedArray",ba,7c,f4,d1),
	HX_("__setSamplerState",8b,e7,cf,5d),
	HX_("__uploadCompressedTextureFromByteArray",ee,aa,5f,fa),
	::String(null()) };

static void Texture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::_hx___lowMemoryMode,"__lowMemoryMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Texture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::_hx___lowMemoryMode,"__lowMemoryMode");
};

#endif

hx::Class Texture_obj::__mClass;

static ::String Texture_obj_sStaticFields[] = {
	HX_("__lowMemoryMode",98,71,9e,43),
	::String(null())
};

void Texture_obj::__register()
{
	Texture_obj _hx_dummy;
	Texture_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D.textures.Texture",fe,28,30,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = Texture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Texture_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Texture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Texture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Texture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Texture_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_31_boot)
HXDLIN(  31)		_hx___lowMemoryMode = false;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
