// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_lime__internal_unifill__Utf8_StringU8_Impl_
#define INCLUDED_lime__internal_unifill__Utf8_StringU8_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(lime,_internal,unifill,_Utf8,StringU8_Impl_)

namespace lime{
namespace _internal{
namespace unifill{
namespace _Utf8{


class HXCPP_CLASS_ATTRIBUTES StringU8_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StringU8_Impl__obj OBJ_;
		StringU8_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0d4a4048 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.unifill._Utf8.StringU8_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime._internal.unifill._Utf8.StringU8_Impl_"); }

		hx::ObjectPtr< StringU8_Impl__obj > __new() {
			hx::ObjectPtr< StringU8_Impl__obj > __this = new StringU8_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< StringU8_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			StringU8_Impl__obj *__this = (StringU8_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StringU8_Impl__obj), false, "lime._internal.unifill._Utf8.StringU8_Impl_"));
			*(void **)__this = StringU8_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StringU8_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringU8_Impl_",14,91,ff,bd); }

		static ::String fromString(::String s);
		static ::Dynamic fromString_dyn();

		static ::String ofBytes( ::haxe::io::Bytes b);
		static ::Dynamic ofBytes_dyn();

		static ::String fromBytes( ::haxe::io::Bytes b);
		static ::Dynamic fromBytes_dyn();

		static int codeUnitAt(::String this1,int index);
		static ::Dynamic codeUnitAt_dyn();

		static ::String substr(::String this1,int index, ::Dynamic len);
		static ::Dynamic substr_dyn();

		static ::String toString(::String this1);
		static ::Dynamic toString_dyn();

		static  ::haxe::io::Bytes toBytes(::String this1);
		static ::Dynamic toBytes_dyn();

		static ::String _new(::String s);
		static ::Dynamic _new_dyn();

		static int get_length(::String this1);
		static ::Dynamic get_length_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace unifill
} // end namespace _Utf8

#endif /* INCLUDED_lime__internal_unifill__Utf8_StringU8_Impl_ */ 
