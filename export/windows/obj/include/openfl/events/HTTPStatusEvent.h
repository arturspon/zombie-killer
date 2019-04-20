// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_openfl_events_HTTPStatusEvent
#define INCLUDED_openfl_events_HTTPStatusEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,HTTPStatusEvent)
HX_DECLARE_CLASS2(openfl,net,URLRequestHeader)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES HTTPStatusEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef HTTPStatusEvent_obj OBJ_;
		HTTPStatusEvent_obj();

	public:
		enum { _hx_ClassId = 0x7ed4634b };

		void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status,hx::Null< bool >  __o_redirected);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.HTTPStatusEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.events.HTTPStatusEvent"); }
		static hx::ObjectPtr< HTTPStatusEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status,hx::Null< bool >  __o_redirected);
		static hx::ObjectPtr< HTTPStatusEvent_obj > __alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status,hx::Null< bool >  __o_redirected);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HTTPStatusEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HTTPStatusEvent",e0,4c,1b,fe); }

		static void __boot();
		static ::String HTTP_RESPONSE_STATUS;
		static ::String HTTP_STATUS;
		bool redirected;
		::Array< ::Dynamic> responseHeaders;
		::String responseURL;
		int status;
		 ::openfl::events::Event clone();

		virtual ::String toString();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_HTTPStatusEvent */ 
