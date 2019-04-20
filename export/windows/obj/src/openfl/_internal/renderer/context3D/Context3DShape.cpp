// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DGraphics
#include <openfl/_internal/renderer/context3D/Context3DGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DMaskShader
#include <openfl/_internal/renderer/context3D/Context3DMaskShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DShape
#include <openfl/_internal/renderer/context3D/Context3DShape.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_41639727e8ecbcfa_26_render,"openfl._internal.renderer.context3D.Context3DShape","render",0xd076fdda,"openfl._internal.renderer.context3D.Context3DShape.render","openfl/_internal/renderer/context3D/Context3DShape.hx",26,0x5ed8a254)
HX_LOCAL_STACK_FRAME(_hx_pos_41639727e8ecbcfa_73_renderMask,"openfl._internal.renderer.context3D.Context3DShape","renderMask",0x5cc35fe6,"openfl._internal.renderer.context3D.Context3DShape.renderMask","openfl/_internal/renderer/context3D/Context3DShape.hx",73,0x5ed8a254)
HX_LOCAL_STACK_FRAME(_hx_pos_41639727e8ecbcfa_23_boot,"openfl._internal.renderer.context3D.Context3DShape","boot",0x6fa8adb6,"openfl._internal.renderer.context3D.Context3DShape.boot","openfl/_internal/renderer/context3D/Context3DShape.hx",23,0x5ed8a254)
namespace openfl{
namespace _internal{
namespace renderer{
namespace context3D{

void Context3DShape_obj::__construct() { }

Dynamic Context3DShape_obj::__CreateEmpty() { return new Context3DShape_obj; }

void *Context3DShape_obj::_hx_vtable = 0;

Dynamic Context3DShape_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DShape_obj > _hx_result = new Context3DShape_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DShape_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07fb96fa;
}

void Context3DShape_obj::render( ::openfl::display::DisplayObject shape, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_41639727e8ecbcfa_26_render)
HXLINE(  27)		bool _hx_tmp;
HXDLIN(  27)		if (!(!(shape->_hx___renderable))) {
HXLINE(  27)			_hx_tmp = (shape->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE(  27)			_hx_tmp = true;
            		}
HXDLIN(  27)		if (_hx_tmp) {
HXLINE(  27)			return;
            		}
HXLINE(  29)		 ::openfl::display::Graphics graphics = shape->_hx___graphics;
HXLINE(  31)		if (hx::IsNotNull( graphics )) {
HXLINE(  33)			renderer->_hx___setBlendMode(shape->_hx___worldBlendMode);
HXLINE(  34)			renderer->_hx___pushMaskObject(shape,null());
HXLINE(  37)			::openfl::_internal::renderer::context3D::Context3DGraphics_obj::render(graphics,renderer);
HXLINE(  39)			bool _hx_tmp1;
HXDLIN(  39)			if (hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE(  39)				_hx_tmp1 = graphics->_hx___visible;
            			}
            			else {
HXLINE(  39)				_hx_tmp1 = false;
            			}
HXDLIN(  39)			if (_hx_tmp1) {
HXLINE(  41)				 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  42)				 ::openfl::geom::Rectangle scale9Grid = shape->_hx___worldScale9Grid;
HXLINE(  44)				 ::openfl::display::Shader shader = renderer->_hx___initDisplayShader(shape->_hx___worldShader);
HXLINE(  45)				renderer->setShader(shader);
HXLINE(  46)				renderer->applyBitmapData(graphics->_hx___bitmap,true,null());
HXLINE(  47)				renderer->applyMatrix(renderer->_hx___getMatrix(graphics->_hx___worldTransform,1));
HXLINE(  48)				renderer->applyAlpha(shape->_hx___worldAlpha);
HXLINE(  49)				renderer->applyColorTransform(shape->_hx___worldColorTransform);
HXLINE(  50)				renderer->updateShader();
HXLINE(  54)				 ::openfl::display3D::VertexBuffer3D vertexBuffer = graphics->_hx___bitmap->getVertexBuffer(context,null(),null());
HXLINE(  55)				if (hx::IsNotNull( shader->_hx___position )) {
HXLINE(  55)					context->setVertexBufferAt(shader->_hx___position->index,vertexBuffer,0,3);
            				}
HXLINE(  56)				if (hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE(  56)					context->setVertexBufferAt(shader->_hx___textureCoord->index,vertexBuffer,3,2);
            				}
HXLINE(  57)				 ::openfl::display3D::IndexBuffer3D indexBuffer = graphics->_hx___bitmap->getIndexBuffer(context,null());
HXLINE(  58)				context->drawTriangles(indexBuffer,null(),null());
HXLINE(  64)				renderer->_hx___clearShader();
            			}
HXLINE(  68)			renderer->_hx___popMaskObject(shape,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DShape_obj,render,(void))

void Context3DShape_obj::renderMask( ::openfl::display::DisplayObject shape, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_41639727e8ecbcfa_73_renderMask)
HXLINE(  74)		 ::openfl::display::Graphics graphics = shape->_hx___graphics;
HXLINE(  76)		if (hx::IsNotNull( graphics )) {
HXLINE(  80)			::openfl::_internal::renderer::context3D::Context3DGraphics_obj::renderMask(graphics,renderer);
HXLINE(  82)			if (hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE(  84)				 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  86)				 ::openfl::_internal::renderer::context3D::Context3DMaskShader shader = renderer->_hx___maskShader;
HXLINE(  87)				renderer->setShader(shader);
HXLINE(  88)				renderer->applyBitmapData(graphics->_hx___bitmap,true,null());
HXLINE(  89)				renderer->applyMatrix(renderer->_hx___getMatrix(graphics->_hx___worldTransform,1));
HXLINE(  90)				renderer->updateShader();
HXLINE(  92)				 ::openfl::display3D::VertexBuffer3D vertexBuffer = graphics->_hx___bitmap->getVertexBuffer(context,null(),null());
HXLINE(  93)				if (hx::IsNotNull( shader->_hx___position )) {
HXLINE(  93)					context->setVertexBufferAt(shader->_hx___position->index,vertexBuffer,0,3);
            				}
HXLINE(  94)				if (hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE(  94)					context->setVertexBufferAt(shader->_hx___textureCoord->index,vertexBuffer,3,2);
            				}
HXLINE(  95)				 ::openfl::display3D::IndexBuffer3D indexBuffer = graphics->_hx___bitmap->getIndexBuffer(context,null());
HXLINE(  96)				context->drawTriangles(indexBuffer,null(),null());
HXLINE( 102)				renderer->_hx___clearShader();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DShape_obj,renderMask,(void))


Context3DShape_obj::Context3DShape_obj()
{
}

bool Context3DShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Context3DShape_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Context3DShape_obj_sStaticStorageInfo = 0;
#endif

hx::Class Context3DShape_obj::__mClass;

static ::String Context3DShape_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderMask",62,3b,60,e5),
	::String(null())
};

void Context3DShape_obj::__register()
{
	Context3DShape_obj _hx_dummy;
	Context3DShape_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer.context3D.Context3DShape",6a,a5,df,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DShape_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DShape_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DShape_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DShape_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_41639727e8ecbcfa_23_boot)
HXDLIN(  23)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace context3D
