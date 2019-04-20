// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_flixel_system_debug_watch_Tracker
#define INCLUDED_flixel_system_debug_watch_Tracker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,Tracker)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,TrackerProfile)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,Watch)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{


class HXCPP_CLASS_ATTRIBUTES Tracker_obj : public  ::flixel::_hx_system::debug::watch::Watch_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::watch::Watch_obj super;
		typedef Tracker_obj OBJ_;
		Tracker_obj();

	public:
		enum { _hx_ClassId = 0x4fee5e51 };

		void __construct( ::flixel::_hx_system::debug::watch::TrackerProfile Profile, ::Dynamic ObjectOrClass,::String WindowTitle);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.watch.Tracker")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.watch.Tracker"); }
		static hx::ObjectPtr< Tracker_obj > __new( ::flixel::_hx_system::debug::watch::TrackerProfile Profile, ::Dynamic ObjectOrClass,::String WindowTitle);
		static hx::ObjectPtr< Tracker_obj > __alloc(hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::watch::TrackerProfile Profile, ::Dynamic ObjectOrClass,::String WindowTitle);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tracker_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tracker",98,07,5a,55); }

		static void __boot();
		static ::Array< ::Dynamic> profiles;
		static ::cpp::VirtualArray objectsBeingTracked;
		static int _numTrackerWindows;
		static void addProfile( ::flixel::_hx_system::debug::watch::TrackerProfile Profile);
		static ::Dynamic addProfile_dyn();

		static  ::flixel::_hx_system::debug::watch::TrackerProfile findProfile( ::Dynamic Object);
		static ::Dynamic findProfile_dyn();

		static void onStateSwitch();
		static ::Dynamic onStateSwitch_dyn();

		static void initProfiles();
		static ::Dynamic initProfiles_dyn();

		 ::Dynamic _object;
		void destroy();

		 ::flixel::_hx_system::debug::watch::TrackerProfile findProfileByClass(hx::Class ObjectClass);
		::Dynamic findProfileByClass_dyn();

		void initWatchEntries( ::flixel::_hx_system::debug::watch::TrackerProfile Profile);
		::Dynamic initWatchEntries_dyn();

		void addExtensions( ::flixel::_hx_system::debug::watch::TrackerProfile Profile);
		::Dynamic addExtensions_dyn();

		void addVariables(::Array< ::String > Variables);
		::Dynamic addVariables_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_Tracker */ 
