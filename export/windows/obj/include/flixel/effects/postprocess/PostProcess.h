// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_flixel_effects_postprocess_PostProcess
#define INCLUDED_flixel_effects_postprocess_PostProcess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,effects,postprocess,PostProcess)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace effects{
namespace postprocess{


class HXCPP_CLASS_ATTRIBUTES PostProcess_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef PostProcess_obj OBJ_;
		PostProcess_obj();

	public:
		enum { _hx_ClassId = 0x6f451122 };

		void __construct(::String shader);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.effects.postprocess.PostProcess")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.effects.postprocess.PostProcess"); }
		static hx::ObjectPtr< PostProcess_obj > __new(::String shader);
		static hx::ObjectPtr< PostProcess_obj > __alloc(hx::Ctx *_hx_ctx,::String shader);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PostProcess_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PostProcess",cf,29,b5,11); }

		void enable( ::flixel::effects::postprocess::PostProcess to);
		::Dynamic enable_dyn();

		void capture();
		::Dynamic capture_dyn();

		void rebuild();
		::Dynamic rebuild_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		void render( ::openfl::geom::Rectangle rect);
		::Dynamic render_dyn();

		void setUniform(::String uniform,Float value);
		::Dynamic setUniform_dyn();

		 ::flixel::effects::postprocess::PostProcess set_to( ::flixel::effects::postprocess::PostProcess value);
		::Dynamic set_to_dyn();

};

} // end namespace flixel
} // end namespace effects
} // end namespace postprocess

#endif /* INCLUDED_flixel_effects_postprocess_PostProcess */ 