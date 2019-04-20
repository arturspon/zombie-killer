// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_openfl__internal_formats_agal_RegisterMap
#define INCLUDED_openfl__internal_formats_agal_RegisterMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,formats,agal,RegisterMap)
HX_DECLARE_CLASS5(openfl,_internal,formats,agal,_AGALConverter,DestRegister)
HX_DECLARE_CLASS5(openfl,_internal,formats,agal,_AGALConverter,RegisterMapEntry)
HX_DECLARE_CLASS5(openfl,_internal,formats,agal,_AGALConverter,RegisterUsage)
HX_DECLARE_CLASS5(openfl,_internal,formats,agal,_AGALConverter,SamplerRegister)
HX_DECLARE_CLASS5(openfl,_internal,formats,agal,_AGALConverter,SourceRegister)

namespace openfl{
namespace _internal{
namespace formats{
namespace agal{


class HXCPP_CLASS_ATTRIBUTES RegisterMap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef RegisterMap_obj OBJ_;
		RegisterMap_obj();

	public:
		enum { _hx_ClassId = 0x6c539f98 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.formats.agal.RegisterMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.formats.agal.RegisterMap"); }
		static hx::ObjectPtr< RegisterMap_obj > __new();
		static hx::ObjectPtr< RegisterMap_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RegisterMap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RegisterMap",d9,93,09,fc); }

		static void __boot();
		static  ::Dynamic __meta__;
		::Array< ::Dynamic> mEntries;
		void add(int type,::String name,int number, ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage usage);
		::Dynamic add_dyn();

		void addDR( ::openfl::_internal::formats::agal::_AGALConverter::DestRegister dr, ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage usage);
		::Dynamic addDR_dyn();

		void addSaR( ::openfl::_internal::formats::agal::_AGALConverter::SamplerRegister sr, ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage usage);
		::Dynamic addSaR_dyn();

		void addSR( ::openfl::_internal::formats::agal::_AGALConverter::SourceRegister sr, ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage usage,hx::Null< int >  offset);
		::Dynamic addSR_dyn();

		 ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage getRegisterUsage( ::openfl::_internal::formats::agal::_AGALConverter::SourceRegister sr);
		::Dynamic getRegisterUsage_dyn();

		 ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage getUsage(int type,::String name,int number);
		::Dynamic getUsage_dyn();

		::String toGLSL(bool tempRegistersOnly);
		::Dynamic toGLSL_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace agal

#endif /* INCLUDED_openfl__internal_formats_agal_RegisterMap */ 
