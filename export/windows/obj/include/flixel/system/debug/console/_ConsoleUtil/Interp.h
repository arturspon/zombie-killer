// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_flixel_system_debug_console__ConsoleUtil_Interp
#define INCLUDED_flixel_system_debug_console__ConsoleUtil_Interp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
HX_DECLARE_CLASS5(flixel,_hx_system,debug,console,_ConsoleUtil,Interp)
HX_DECLARE_CLASS1(hscript,Interp)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{
namespace _ConsoleUtil{


class HXCPP_CLASS_ATTRIBUTES Interp_obj : public  ::hscript::Interp_obj
{
	public:
		typedef  ::hscript::Interp_obj super;
		typedef Interp_obj OBJ_;
		Interp_obj();

	public:
		enum { _hx_ClassId = 0x044ad23d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.console._ConsoleUtil.Interp")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.console._ConsoleUtil.Interp"); }
		static hx::ObjectPtr< Interp_obj > __new();
		static hx::ObjectPtr< Interp_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Interp_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Interp",f4,ed,1a,d3); }

		::Array< ::String > getGlobals();
		::Dynamic getGlobals_dyn();

		::cpp::VirtualArray toArray( ::Dynamic iterator);
		::Dynamic toArray_dyn();

		 ::Dynamic get( ::Dynamic o,::String f);

		 ::Dynamic set( ::Dynamic o,::String f, ::Dynamic v);

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
} // end namespace _ConsoleUtil

#endif /* INCLUDED_flixel_system_debug_console__ConsoleUtil_Interp */ 
