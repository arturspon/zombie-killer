// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_texture_max_level
#define INCLUDED_lime_graphics_opengl_ext_APPLE_texture_max_level

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_2b1cc31c43c675de_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,APPLE_texture_max_level)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES APPLE_texture_max_level_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef APPLE_texture_max_level_obj OBJ_;
		APPLE_texture_max_level_obj();

	public:
		enum { _hx_ClassId = 0x1e0d43fa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.APPLE_texture_max_level")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.APPLE_texture_max_level"); }

		hx::ObjectPtr< APPLE_texture_max_level_obj > __new() {
			hx::ObjectPtr< APPLE_texture_max_level_obj > __this = new APPLE_texture_max_level_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< APPLE_texture_max_level_obj > __alloc(hx::Ctx *_hx_ctx) {
			APPLE_texture_max_level_obj *__this = (APPLE_texture_max_level_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(APPLE_texture_max_level_obj), false, "lime.graphics.opengl.ext.APPLE_texture_max_level"));
			*(void **)__this = APPLE_texture_max_level_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_2b1cc31c43c675de_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::APPLE_texture_max_level)(__this) )->TEXTURE_MAX_LEVEL_APPLE = 33085;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~APPLE_texture_max_level_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("APPLE_texture_max_level",40,37,3d,be); }

		int TEXTURE_MAX_LEVEL_APPLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_APPLE_texture_max_level */ 
