// Generated by Haxe 4.0.0-rc.2+77068e10c
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#define INCLUDED_flixel_graphics_tile_FlxDrawBaseItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawBaseItem)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawItemType)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace flixel{
namespace graphics{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxDrawBaseItem_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxDrawBaseItem_obj OBJ_;
		FlxDrawBaseItem_obj();

	public:
		enum { _hx_ClassId = 0x18d0451d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.tile.FlxDrawBaseItem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.graphics.tile.FlxDrawBaseItem"); }
		static hx::ObjectPtr< FlxDrawBaseItem_obj > __new();
		static hx::ObjectPtr< FlxDrawBaseItem_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxDrawBaseItem_obj();

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
		::String __ToString() const { return HX_("FlxDrawBaseItem",5a,3d,3b,28); }

		static void __boot();
		static int drawCalls;
		static int blendToInt( ::Dynamic blend);
		static ::Dynamic blendToInt_dyn();

		 ::Dynamic nextTyped;
		 ::flixel::graphics::tile::FlxDrawBaseItem next;
		 ::flixel::graphics::FlxGraphic graphics;
		bool antialiasing;
		bool colored;
		bool hasColorOffsets;
		int blending;
		 ::Dynamic blend;
		 ::flixel::graphics::tile::FlxDrawItemType type;
		virtual void reset();
		::Dynamic reset_dyn();

		virtual void dispose();
		::Dynamic dispose_dyn();

		virtual void render( ::flixel::FlxCamera camera);
		::Dynamic render_dyn();

		virtual void addQuad( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxMatrix matrix, ::openfl::geom::ColorTransform transform);
		::Dynamic addQuad_dyn();

		virtual int get_numVertices();
		::Dynamic get_numVertices_dyn();

		virtual int get_numTriangles();
		::Dynamic get_numTriangles_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace tile

#endif /* INCLUDED_flixel_graphics_tile_FlxDrawBaseItem */ 
