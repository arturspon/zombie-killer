// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#define INCLUDED_flixel_system_frontEnds_LogFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_hx_system,debug,log,LogStyle)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,LogFrontEnd)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES LogFrontEnd_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef LogFrontEnd_obj OBJ_;
		LogFrontEnd_obj();

	public:
		enum { _hx_ClassId = 0x5f2a1584 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.LogFrontEnd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.frontEnds.LogFrontEnd"); }
		static hx::ObjectPtr< LogFrontEnd_obj > __new();
		static hx::ObjectPtr< LogFrontEnd_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LogFrontEnd_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LogFrontEnd",36,7f,5f,ae); }

		bool redirectTraces;
		 ::Dynamic _standardTraceFunction;
		Dynamic _standardTraceFunction_dyn() { return _standardTraceFunction;}
		void add( ::Dynamic Data);
		::Dynamic add_dyn();

		void warn( ::Dynamic Data);
		::Dynamic warn_dyn();

		void error( ::Dynamic Data);
		::Dynamic error_dyn();

		void notice( ::Dynamic Data);
		::Dynamic notice_dyn();

		void advanced( ::Dynamic Data, ::flixel::_hx_system::debug::log::LogStyle Style,hx::Null< bool >  FireOnce);
		::Dynamic advanced_dyn();

		void clear();
		::Dynamic clear_dyn();

		bool set_redirectTraces(bool Redirect);
		::Dynamic set_redirectTraces_dyn();

		void processTraceData( ::Dynamic Data, ::Dynamic Info);
		::Dynamic processTraceData_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_LogFrontEnd */ 
