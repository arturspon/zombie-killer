// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_flixel_system_GraphicLogo
#define INCLUDED_flixel_system_GraphicLogo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS2(flixel,_hx_system,GraphicLogo)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES GraphicLogo_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicLogo_obj OBJ_;
		GraphicLogo_obj();

	public:
		enum { _hx_ClassId = 0x2ad6b468 };

		void __construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.GraphicLogo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.GraphicLogo"); }
		static hx::ObjectPtr< GraphicLogo_obj > __new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static hx::ObjectPtr< GraphicLogo_obj > __alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicLogo_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicLogo",13,32,d1,65); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_GraphicLogo */ 
