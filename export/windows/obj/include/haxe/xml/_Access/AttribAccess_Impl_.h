// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#define INCLUDED_haxe_xml__Access_AttribAccess_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(haxe,xml,_Access,AttribAccess_Impl_)

namespace haxe{
namespace xml{
namespace _Access{


class HXCPP_CLASS_ATTRIBUTES AttribAccess_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AttribAccess_Impl__obj OBJ_;
		AttribAccess_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7b4a98e0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.xml._Access.AttribAccess_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.xml._Access.AttribAccess_Impl_"); }

		hx::ObjectPtr< AttribAccess_Impl__obj > __new() {
			hx::ObjectPtr< AttribAccess_Impl__obj > __this = new AttribAccess_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< AttribAccess_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			AttribAccess_Impl__obj *__this = (AttribAccess_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AttribAccess_Impl__obj), false, "haxe.xml._Access.AttribAccess_Impl_"));
			*(void **)__this = AttribAccess_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AttribAccess_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AttribAccess_Impl_",ce,c3,81,f2); }

		static ::String resolve( ::Xml this1,::String name);
		static ::Dynamic resolve_dyn();

};

} // end namespace haxe
} // end namespace xml
} // end namespace _Access

#endif /* INCLUDED_haxe_xml__Access_AttribAccess_Impl_ */ 
