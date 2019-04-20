// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_openfl_text_TextFormat
#define INCLUDED_openfl_text_TextFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c5f39c48023aa9de_256_new)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace openfl{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextFormat_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextFormat_obj OBJ_;
		TextFormat_obj();

	public:
		enum { _hx_ClassId = 0x08d025e9 };

		void __construct(::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.text.TextFormat")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.text.TextFormat"); }

		hx::ObjectPtr< TextFormat_obj > __new(::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading) {
			hx::ObjectPtr< TextFormat_obj > __this = new TextFormat_obj();
			__this->__construct(font,size,color,bold,italic,underline,url,target,align,leftMargin,rightMargin,indent,leading);
			return __this;
		}

		static hx::ObjectPtr< TextFormat_obj > __alloc(hx::Ctx *_hx_ctx,::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading) {
			TextFormat_obj *__this = (TextFormat_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextFormat_obj), true, "openfl.text.TextFormat"));
			*(void **)__this = TextFormat_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c5f39c48023aa9de_256_new)
HXLINE( 257)		( ( ::openfl::text::TextFormat)(__this) )->font = font;
HXLINE( 258)		( ( ::openfl::text::TextFormat)(__this) )->size = size;
HXLINE( 259)		( ( ::openfl::text::TextFormat)(__this) )->color = color;
HXLINE( 260)		( ( ::openfl::text::TextFormat)(__this) )->bold = bold;
HXLINE( 261)		( ( ::openfl::text::TextFormat)(__this) )->italic = italic;
HXLINE( 262)		( ( ::openfl::text::TextFormat)(__this) )->underline = underline;
HXLINE( 263)		( ( ::openfl::text::TextFormat)(__this) )->url = url;
HXLINE( 264)		( ( ::openfl::text::TextFormat)(__this) )->target = target;
HXLINE( 265)		( ( ::openfl::text::TextFormat)(__this) )->align = align;
HXLINE( 266)		( ( ::openfl::text::TextFormat)(__this) )->leftMargin = leftMargin;
HXLINE( 267)		( ( ::openfl::text::TextFormat)(__this) )->rightMargin = rightMargin;
HXLINE( 268)		( ( ::openfl::text::TextFormat)(__this) )->indent = indent;
HXLINE( 269)		( ( ::openfl::text::TextFormat)(__this) )->leading = leading;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFormat_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextFormat",e4,13,30,2b); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::Dynamic align;
		 ::Dynamic blockIndent;
		 ::Dynamic bold;
		 ::Dynamic bullet;
		 ::Dynamic color;
		::String font;
		 ::Dynamic indent;
		 ::Dynamic italic;
		 ::Dynamic kerning;
		 ::Dynamic leading;
		 ::Dynamic leftMargin;
		 ::Dynamic letterSpacing;
		 ::Dynamic rightMargin;
		 ::Dynamic size;
		::Array< int > tabStops;
		::String target;
		 ::Dynamic underline;
		::String url;
		 ::Dynamic _hx___ascent;
		 ::Dynamic _hx___descent;
		 ::openfl::text::TextFormat clone();
		::Dynamic clone_dyn();

		void _hx___merge( ::openfl::text::TextFormat format);
		::Dynamic _hx___merge_dyn();

};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_TextFormat */ 
