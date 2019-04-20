// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_lime_graphics__OpenGLES2RenderContext_OpenGLES2RenderContext_Impl_
#define INCLUDED_lime_graphics__OpenGLES2RenderContext_OpenGLES2RenderContext_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeOpenGLRenderContext)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS3(lime,graphics,_OpenGLES2RenderContext,OpenGLES2RenderContext_Impl_)

namespace lime{
namespace graphics{
namespace _OpenGLES2RenderContext{


class HXCPP_CLASS_ATTRIBUTES OpenGLES2RenderContext_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef OpenGLES2RenderContext_Impl__obj OBJ_;
		OpenGLES2RenderContext_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5abd63e7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics._OpenGLES2RenderContext.OpenGLES2RenderContext_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics._OpenGLES2RenderContext.OpenGLES2RenderContext_Impl_"); }

		hx::ObjectPtr< OpenGLES2RenderContext_Impl__obj > __new() {
			hx::ObjectPtr< OpenGLES2RenderContext_Impl__obj > __this = new OpenGLES2RenderContext_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< OpenGLES2RenderContext_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			OpenGLES2RenderContext_Impl__obj *__this = (OpenGLES2RenderContext_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OpenGLES2RenderContext_Impl__obj), false, "lime.graphics._OpenGLES2RenderContext.OpenGLES2RenderContext_Impl_"));
			*(void **)__this = OpenGLES2RenderContext_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OpenGLES2RenderContext_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OpenGLES2RenderContext_Impl_",c4,3c,c8,7c); }

		static  ::lime::_internal::backend::native::NativeOpenGLRenderContext fromGL(hx::Class gl);
		static ::Dynamic fromGL_dyn();

		static  ::lime::_internal::backend::native::NativeOpenGLRenderContext fromRenderContext( ::lime::graphics::RenderContext context);
		static ::Dynamic fromRenderContext_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace _OpenGLES2RenderContext

#endif /* INCLUDED_lime_graphics__OpenGLES2RenderContext_OpenGLES2RenderContext_Impl_ */ 
