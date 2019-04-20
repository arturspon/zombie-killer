// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_map_buffer_range
#define INCLUDED_lime_graphics_opengl_ext_EXT_map_buffer_range

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_267ae1770c737ebc_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_map_buffer_range)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_map_buffer_range_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef EXT_map_buffer_range_obj OBJ_;
		EXT_map_buffer_range_obj();

	public:
		enum { _hx_ClassId = 0x25308331 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_map_buffer_range")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_map_buffer_range"); }

		hx::ObjectPtr< EXT_map_buffer_range_obj > __new() {
			hx::ObjectPtr< EXT_map_buffer_range_obj > __this = new EXT_map_buffer_range_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< EXT_map_buffer_range_obj > __alloc(hx::Ctx *_hx_ctx) {
			EXT_map_buffer_range_obj *__this = (EXT_map_buffer_range_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EXT_map_buffer_range_obj), false, "lime.graphics.opengl.ext.EXT_map_buffer_range"));
			*(void **)__this = EXT_map_buffer_range_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_267ae1770c737ebc_4_new)
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::EXT_map_buffer_range)(__this) )->MAP_UNSYNCHRONIZED_BIT_EXT = 32;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::EXT_map_buffer_range)(__this) )->MAP_FLUSH_EXPLICIT_BIT_EXT = 16;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::EXT_map_buffer_range)(__this) )->MAP_INVALIDATE_BUFFER_BIT_EXT = 8;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_map_buffer_range)(__this) )->MAP_INVALIDATE_RANGE_BIT_EXT = 4;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_map_buffer_range)(__this) )->MAP_WRITE_BIT_EXT = 2;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_map_buffer_range)(__this) )->MAP_READ_BIT_EXT = 1;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_map_buffer_range_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_map_buffer_range",7f,25,48,f8); }

		int MAP_READ_BIT_EXT;
		int MAP_WRITE_BIT_EXT;
		int MAP_INVALIDATE_RANGE_BIT_EXT;
		int MAP_INVALIDATE_BUFFER_BIT_EXT;
		int MAP_FLUSH_EXPLICIT_BIT_EXT;
		int MAP_UNSYNCHRONIZED_BIT_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_map_buffer_range */ 
