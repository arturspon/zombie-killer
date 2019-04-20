// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_openfl_filters__ConvolutionFilter_ConvolutionShader
#define INCLUDED_openfl_filters__ConvolutionFilter_ConvolutionShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Bool)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)
HX_DECLARE_CLASS3(openfl,filters,_ConvolutionFilter,ConvolutionShader)

namespace openfl{
namespace filters{
namespace _ConvolutionFilter{


class HXCPP_CLASS_ATTRIBUTES ConvolutionShader_obj : public  ::openfl::filters::BitmapFilterShader_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilterShader_obj super;
		typedef ConvolutionShader_obj OBJ_;
		ConvolutionShader_obj();

	public:
		enum { _hx_ClassId = 0x2df4abed };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters._ConvolutionFilter.ConvolutionShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.filters._ConvolutionFilter.ConvolutionShader"); }
		static hx::ObjectPtr< ConvolutionShader_obj > __new();
		static hx::ObjectPtr< ConvolutionShader_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConvolutionShader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ConvolutionShader",3d,a4,24,e8); }

		 ::openfl::display::ShaderParameter_Float uBias;
		 ::openfl::display::ShaderParameter_Float uConvoMatrix;
		 ::openfl::display::ShaderParameter_Float uDivisor;
		 ::openfl::display::ShaderParameter_Bool uPreserveAlpha;
};

} // end namespace openfl
} // end namespace filters
} // end namespace _ConvolutionFilter

#endif /* INCLUDED_openfl_filters__ConvolutionFilter_ConvolutionShader */ 
