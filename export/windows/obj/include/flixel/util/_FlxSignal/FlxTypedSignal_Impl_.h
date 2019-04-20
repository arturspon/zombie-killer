// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_flixel_util__FlxSignal_FlxTypedSignal_Impl_
#define INCLUDED_flixel_util__FlxSignal_FlxTypedSignal_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal0)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal1)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal2)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal3)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal4)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxTypedSignal_Impl_)

namespace flixel{
namespace util{
namespace _FlxSignal{


class HXCPP_CLASS_ATTRIBUTES FlxTypedSignal_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxTypedSignal_Impl__obj OBJ_;
		FlxTypedSignal_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7646644d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util._FlxSignal.FlxTypedSignal_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.util._FlxSignal.FlxTypedSignal_Impl_"); }

		hx::ObjectPtr< FlxTypedSignal_Impl__obj > __new() {
			hx::ObjectPtr< FlxTypedSignal_Impl__obj > __this = new FlxTypedSignal_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< FlxTypedSignal_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			FlxTypedSignal_Impl__obj *__this = (FlxTypedSignal_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedSignal_Impl__obj), false, "flixel.util._FlxSignal.FlxTypedSignal_Impl_"));
			*(void **)__this = FlxTypedSignal_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTypedSignal_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTypedSignal_Impl_",e0,23,ff,ca); }

		static void add(::Dynamic this1, ::Dynamic listener);
		static ::Dynamic add_dyn();

		static void addOnce(::Dynamic this1, ::Dynamic listener);
		static ::Dynamic addOnce_dyn();

		static void remove(::Dynamic this1, ::Dynamic listener);
		static ::Dynamic remove_dyn();

		static bool has(::Dynamic this1, ::Dynamic listener);
		static ::Dynamic has_dyn();

		static void removeAll(::Dynamic this1);
		static ::Dynamic removeAll_dyn();

		static  ::Dynamic get_dispatch(::Dynamic this1);
		static ::Dynamic get_dispatch_dyn();

		static  ::flixel::util::_FlxSignal::FlxSignal0 toSignal0(::Dynamic signal);
		static ::Dynamic toSignal0_dyn();

		static  ::flixel::util::_FlxSignal::FlxSignal1 toSignal1(::Dynamic signal);
		static ::Dynamic toSignal1_dyn();

		static  ::flixel::util::_FlxSignal::FlxSignal2 toSignal2(::Dynamic signal);
		static ::Dynamic toSignal2_dyn();

		static  ::flixel::util::_FlxSignal::FlxSignal3 toSignal3(::Dynamic signal);
		static ::Dynamic toSignal3_dyn();

		static  ::flixel::util::_FlxSignal::FlxSignal4 toSignal4(::Dynamic signal);
		static ::Dynamic toSignal4_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal

#endif /* INCLUDED_flixel_util__FlxSignal_FlxTypedSignal_Impl_ */ 
