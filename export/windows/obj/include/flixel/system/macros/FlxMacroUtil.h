// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_flixel_system_macros_FlxMacroUtil
#define INCLUDED_flixel_system_macros_FlxMacroUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,macros,FlxMacroUtil)

namespace flixel{
namespace _hx_system{
namespace macros{


class HXCPP_CLASS_ATTRIBUTES FlxMacroUtil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxMacroUtil_obj OBJ_;
		FlxMacroUtil_obj();

	public:
		enum { _hx_ClassId = 0x2514d26e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system.macros.FlxMacroUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.system.macros.FlxMacroUtil"); }

		hx::ObjectPtr< FlxMacroUtil_obj > __new() {
			hx::ObjectPtr< FlxMacroUtil_obj > __this = new FlxMacroUtil_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< FlxMacroUtil_obj > __alloc(hx::Ctx *_hx_ctx) {
			FlxMacroUtil_obj *__this = (FlxMacroUtil_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxMacroUtil_obj), false, "flixel.system.macros.FlxMacroUtil"));
			*(void **)__this = FlxMacroUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxMacroUtil_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxMacroUtil",7c,33,4d,65); }

};

} // end namespace flixel
} // end namespace system
} // end namespace macros

#endif /* INCLUDED_flixel_system_macros_FlxMacroUtil */ 
