// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_openfl_events_TextEvent
#define INCLUDED_openfl_events_TextEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,TextEvent)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES TextEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef TextEvent_obj OBJ_;
		TextEvent_obj();

	public:
		enum { _hx_ClassId = 0x70c909a0 };

		void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.TextEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.events.TextEvent"); }
		static hx::ObjectPtr< TextEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text);
		static hx::ObjectPtr< TextEvent_obj > __alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextEvent",0d,38,85,b0); }

		static void __boot();
		static ::String LINK;
		static ::String TEXT_INPUT;
		::String text;
		virtual  ::openfl::events::Event clone();

		virtual ::String toString();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_TextEvent */ 
