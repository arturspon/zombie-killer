// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_openfl__internal_symbols_FontSymbol
#define INCLUDED_openfl__internal_symbols_FontSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
HX_DECLARE_CLASS4(openfl,_internal,formats,swf,ShapeCommand)
HX_DECLARE_CLASS3(openfl,_internal,symbols,FontSymbol)
HX_DECLARE_CLASS3(openfl,_internal,symbols,SWFSymbol)

namespace openfl{
namespace _internal{
namespace symbols{


class HXCPP_CLASS_ATTRIBUTES FontSymbol_obj : public  ::openfl::_internal::symbols::SWFSymbol_obj
{
	public:
		typedef  ::openfl::_internal::symbols::SWFSymbol_obj super;
		typedef FontSymbol_obj OBJ_;
		FontSymbol_obj();

	public:
		enum { _hx_ClassId = 0x12c7c776 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.symbols.FontSymbol")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.symbols.FontSymbol"); }
		static hx::ObjectPtr< FontSymbol_obj > __new();
		static hx::ObjectPtr< FontSymbol_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontSymbol_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FontSymbol",a7,4a,e2,99); }

		::Array< int > advances;
		int ascent;
		bool bold;
		::Array< int > codes;
		int descent;
		::Array< ::Dynamic> glyphs;
		bool italic;
		int leading;
		::String name;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols

#endif /* INCLUDED_openfl__internal_symbols_FontSymbol */ 
