// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_lime__internal_format_Deflate
#define INCLUDED_lime__internal_format_Deflate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_internal,format,Deflate)

namespace lime{
namespace _internal{
namespace format{


class HXCPP_CLASS_ATTRIBUTES Deflate_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Deflate_obj OBJ_;
		Deflate_obj();

	public:
		enum { _hx_ClassId = 0x0f5e40ed };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.format.Deflate")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime._internal.format.Deflate"); }

		hx::ObjectPtr< Deflate_obj > __new() {
			hx::ObjectPtr< Deflate_obj > __this = new Deflate_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Deflate_obj > __alloc(hx::Ctx *_hx_ctx) {
			Deflate_obj *__this = (Deflate_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Deflate_obj), false, "lime._internal.format.Deflate"));
			*(void **)__this = Deflate_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Deflate_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Deflate",4b,33,4b,70); }

		static  ::haxe::io::Bytes compress( ::haxe::io::Bytes bytes);
		static ::Dynamic compress_dyn();

		static  ::haxe::io::Bytes decompress( ::haxe::io::Bytes bytes);
		static ::Dynamic decompress_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace format

#endif /* INCLUDED_lime__internal_format_Deflate */ 
