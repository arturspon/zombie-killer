// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoGlyph
#include <lime/graphics/cairo/CairoGlyph.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#include <lime/graphics/cairo/_CairoFTFontFace/CairoFTFontFace_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text__UTF8String_UTF8String_Impl_
#include <lime/text/_UTF8String/UTF8String_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_text_GlyphPosition
#include <openfl/_internal/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0e9241bd5d873906_32_render,"openfl._internal.renderer.cairo.CairoTextField","render",0xabb9797e,"openfl._internal.renderer.cairo.CairoTextField.render","openfl/_internal/renderer/cairo/CairoTextField.hx",32,0xfadfb778)
HX_LOCAL_STACK_FRAME(_hx_pos_0e9241bd5d873906_29_boot,"openfl._internal.renderer.cairo.CairoTextField","boot",0xeff8385a,"openfl._internal.renderer.cairo.CairoTextField.boot","openfl/_internal/renderer/cairo/CairoTextField.hx",29,0xfadfb778)
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

void CairoTextField_obj::__construct() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return new CairoTextField_obj; }

void *CairoTextField_obj::_hx_vtable = 0;

Dynamic CairoTextField_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoTextField_obj > _hx_result = new CairoTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoTextField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76dbe9c2;
}

void CairoTextField_obj::render( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer, ::openfl::geom::Matrix transform){
            	HX_GC_STACKFRAME(&_hx_pos_0e9241bd5d873906_32_render)
HXLINE(  34)		 ::openfl::_internal::text::TextEngine textEngine = textField->_hx___textEngine;
HXLINE(  35)		 ::openfl::geom::Rectangle bounds;
HXDLIN(  35)		bool bounds1;
HXDLIN(  35)		if (!(textEngine->background)) {
HXLINE(  35)			bounds1 = textEngine->border;
            		}
            		else {
HXLINE(  35)			bounds1 = true;
            		}
HXDLIN(  35)		if (bounds1) {
HXLINE(  35)			bounds = textEngine->bounds;
            		}
            		else {
HXLINE(  35)			bounds = textEngine->textBounds;
            		}
HXLINE(  36)		 ::openfl::display::Graphics graphics = textField->_hx___graphics;
HXLINE(  37)		 ::lime::graphics::cairo::Cairo cairo = graphics->_hx___cairo;
HXLINE(  39)		if (textField->_hx___dirty) {
HXLINE(  41)			textField->_hx___updateLayout();
HXLINE(  43)			if (hx::IsNull( graphics->_hx___bounds )) {
HXLINE(  45)				graphics->_hx___bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXLINE(  48)			graphics->_hx___bounds->copyFrom(bounds);
            		}
HXLINE(  54)		graphics->_hx___update(renderer->_hx___worldTransform);
HXLINE(  56)		int width = graphics->_hx___width;
HXLINE(  57)		int height = graphics->_hx___height;
HXLINE(  59)		bool renderable;
HXDLIN(  59)		bool renderable1;
HXDLIN(  59)		if (!(textEngine->border)) {
HXLINE(  59)			renderable1 = textEngine->background;
            		}
            		else {
HXLINE(  59)			renderable1 = true;
            		}
HXDLIN(  59)		if (!(renderable1)) {
HXLINE(  59)			renderable = hx::IsNotNull( textEngine->text );
            		}
            		else {
HXLINE(  59)			renderable = true;
            		}
HXLINE(  60)		bool needsUpscaling = false;
HXLINE(  62)		if (hx::IsNotNull( cairo )) {
HXLINE(  65)			 ::Dynamic surface = graphics->_hx___bitmap->getSurface();
HXLINE(  67)			bool _hx_tmp;
HXDLIN(  67)			if (graphics->_hx___softwareDirty) {
HXLINE(  67)				if ((width <= ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(surface))) {
HXLINE(  67)					_hx_tmp = (height > ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(surface));
            				}
            				else {
HXLINE(  67)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  67)				_hx_tmp = false;
            			}
HXDLIN(  67)			if (_hx_tmp) {
HXLINE(  69)				needsUpscaling = true;
            			}
HXLINE(  72)			bool _hx_tmp1;
HXDLIN(  72)			if (!(!(renderable))) {
HXLINE(  72)				_hx_tmp1 = needsUpscaling;
            			}
            			else {
HXLINE(  72)				_hx_tmp1 = true;
            			}
HXDLIN(  72)			if (_hx_tmp1) {
HXLINE(  74)				graphics->_hx___cairo = null();
HXLINE(  75)				graphics->_hx___bitmap = null();
HXLINE(  76)				graphics->_hx___visible = false;
HXLINE(  77)				cairo = null();
            			}
            		}
HXLINE(  81)		bool _hx_tmp2;
HXDLIN(  81)		bool _hx_tmp3;
HXDLIN(  81)		bool _hx_tmp4;
HXDLIN(  81)		if ((width > 0)) {
HXLINE(  81)			_hx_tmp4 = (height <= 0);
            		}
            		else {
HXLINE(  81)			_hx_tmp4 = true;
            		}
HXDLIN(  81)		if (!(_hx_tmp4)) {
HXLINE(  83)			bool _hx_tmp5;
HXDLIN(  83)			if (!(textField->_hx___dirty)) {
HXLINE(  83)				_hx_tmp5 = !(graphics->_hx___softwareDirty);
            			}
            			else {
HXLINE(  83)				_hx_tmp5 = false;
            			}
HXDLIN(  83)			if (_hx_tmp5) {
HXLINE(  83)				if (!(!(graphics->_hx___visible))) {
HXLINE(  81)					_hx_tmp3 = hx::IsNotNull( graphics->_hx___bitmap );
            				}
            				else {
HXLINE(  81)					_hx_tmp3 = true;
            				}
            			}
            			else {
HXLINE(  81)				_hx_tmp3 = false;
            			}
            		}
            		else {
HXLINE(  81)			_hx_tmp3 = true;
            		}
HXDLIN(  81)		if (!(_hx_tmp3)) {
HXLINE(  81)			_hx_tmp2 = !(renderable);
            		}
            		else {
HXLINE(  81)			_hx_tmp2 = true;
            		}
HXDLIN(  81)		if (_hx_tmp2) {
HXLINE(  86)			textField->_hx___dirty = false;
HXLINE(  87)			return;
            		}
HXLINE(  90)		if (hx::IsNull( cairo )) {
HXLINE(  92)			int bitmapWidth;
HXDLIN(  92)			if (needsUpscaling) {
HXLINE(  92)				bitmapWidth = ::Std_obj::_hx_int((( (Float)(width) ) * ((Float)1.25)));
            			}
            			else {
HXLINE(  92)				bitmapWidth = width;
            			}
HXLINE(  93)			int bitmapHeight;
HXDLIN(  93)			if (needsUpscaling) {
HXLINE(  93)				bitmapHeight = ::Std_obj::_hx_int((( (Float)(height) ) * ((Float)1.25)));
            			}
            			else {
HXLINE(  93)				bitmapHeight = height;
            			}
HXLINE(  95)			bool _hx_tmp6;
HXDLIN(  95)			if (hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureWidth )) {
HXLINE(  95)				_hx_tmp6 = hx::IsGreater( bitmapWidth,::openfl::display::Graphics_obj::maxTextureWidth );
            			}
            			else {
HXLINE(  95)				_hx_tmp6 = false;
            			}
HXDLIN(  95)			if (_hx_tmp6) {
HXLINE(  97)				bitmapWidth = ( (int)(::openfl::display::Graphics_obj::maxTextureWidth) );
            			}
HXLINE( 100)			bool _hx_tmp7;
HXDLIN( 100)			if (hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureHeight )) {
HXLINE( 100)				_hx_tmp7 = hx::IsGreater( bitmapHeight,::openfl::display::Graphics_obj::maxTextureHeight );
            			}
            			else {
HXLINE( 100)				_hx_tmp7 = false;
            			}
HXDLIN( 100)			if (_hx_tmp7) {
HXLINE( 102)				bitmapHeight = ( (int)(::openfl::display::Graphics_obj::maxTextureHeight) );
            			}
HXLINE( 105)			 ::openfl::display::BitmapData bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,0);
HXLINE( 106)			 ::Dynamic surface1 = bitmap->getSurface();
HXLINE( 107)			graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface1);
HXLINE( 108)			graphics->_hx___visible = true;
HXLINE( 109)			graphics->_hx___managed = true;
HXLINE( 111)			graphics->_hx___bitmap = bitmap;
HXLINE( 113)			cairo = graphics->_hx___cairo;
HXLINE( 115)			 ::Dynamic options = ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::_new();
HXLINE( 117)			bool _hx_tmp8;
HXDLIN( 117)			if (hx::IsEq( textEngine->antiAliasType,0 )) {
HXLINE( 117)				_hx_tmp8 = (textEngine->sharpness == 400);
            			}
            			else {
HXLINE( 117)				_hx_tmp8 = false;
            			}
HXDLIN( 117)			if (_hx_tmp8) {
HXLINE( 119)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,1);
HXLINE( 120)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,1);
HXLINE( 121)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,1);
            			}
            			else {
HXLINE( 125)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,2);
HXLINE( 126)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,1);
HXLINE( 127)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,5);
            			}
HXLINE( 130)			cairo->set_fontOptions(options);
            		}
            		else {
HXLINE( 134)			cairo->identityMatrix();
HXLINE( 135)			cairo->resetClip();
HXLINE( 137)			cairo->setOperator(0);
HXLINE( 138)			cairo->paint();
HXLINE( 139)			cairo->setOperator(2);
            		}
HXLINE( 142)		renderer->applyMatrix(graphics->_hx___renderTransform,cairo);
HXLINE( 144)		if (textEngine->border) {
HXLINE( 146)			int _hx_tmp9 = ::Std_obj::_hx_int((bounds->width - ( (Float)(1) )));
HXDLIN( 146)			cairo->rectangle(((Float)0.5),((Float)0.5),( (Float)(_hx_tmp9) ),( (Float)(::Std_obj::_hx_int((bounds->height - ( (Float)(1) )))) ));
            		}
            		else {
HXLINE( 150)			cairo->rectangle(( (Float)(0) ),( (Float)(0) ),bounds->width,bounds->height);
            		}
HXLINE( 153)		if (textEngine->background) {
HXLINE( 155)			int color = textEngine->backgroundColor;
HXLINE( 156)			Float r = (( (Float)(hx::UShr((color & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 157)			Float g = (( (Float)(hx::UShr((color & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 158)			Float b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE( 160)			cairo->setSourceRGB(r,g,b);
HXLINE( 161)			cairo->fillPreserve();
            		}
HXLINE( 164)		if (textEngine->border) {
HXLINE( 166)			int color1 = textEngine->borderColor;
HXLINE( 167)			Float r1 = (( (Float)(hx::UShr((color1 & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 168)			Float g1 = (( (Float)(hx::UShr((color1 & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 169)			Float b1 = (( (Float)((color1 & 255)) ) / ( (Float)(255) ));
HXLINE( 171)			cairo->setSourceRGB(r1,g1,b1);
HXLINE( 172)			cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 173)			cairo->stroke();
            		}
HXLINE( 176)		bool _hx_tmp10;
HXDLIN( 176)		if (hx::IsNotNull( textEngine->text )) {
HXLINE( 176)			_hx_tmp10 = (textEngine->text != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 176)			_hx_tmp10 = false;
            		}
HXDLIN( 176)		if (_hx_tmp10) {
HXLINE( 178)			Float bounds2 = bounds->width;
HXDLIN( 178)			int _hx_tmp11;
HXDLIN( 178)			if (textField->get_border()) {
HXLINE( 178)				_hx_tmp11 = 1;
            			}
            			else {
HXLINE( 178)				_hx_tmp11 = 0;
            			}
HXDLIN( 178)			Float bounds3 = bounds->height;
HXDLIN( 178)			int _hx_tmp12;
HXDLIN( 178)			if (textField->get_border()) {
HXLINE( 178)				_hx_tmp12 = 1;
            			}
            			else {
HXLINE( 178)				_hx_tmp12 = 0;
            			}
HXDLIN( 178)			cairo->rectangle(( (Float)(0) ),( (Float)(0) ),(bounds2 - ( (Float)(_hx_tmp11) )),(bounds3 - ( (Float)(_hx_tmp12) )));
HXLINE( 179)			cairo->clip();
HXLINE( 181)			::String text = textEngine->text;
HXLINE( 183)			int scrollX = -(textField->get_scrollH());
HXLINE( 184)			Float scrollY = ((Float)0.0);
HXLINE( 186)			{
HXLINE( 186)				int _g = 0;
HXDLIN( 186)				int _g1 = (textField->get_scrollV() - 1);
HXDLIN( 186)				while((_g < _g1)){
HXLINE( 186)					_g = (_g + 1);
HXDLIN( 186)					int i = (_g - 1);
HXLINE( 188)					scrollY = (scrollY - textEngine->lineHeights->get(i));
            				}
            			}
HXLINE( 191)			 ::Dynamic color2;
HXDLIN( 191)			Float r2;
HXDLIN( 191)			Float g2;
HXDLIN( 191)			Float b2;
HXDLIN( 191)			 ::openfl::text::Font font;
HXDLIN( 191)			int size;
HXDLIN( 191)			Float advance;
HXLINE( 193)			{
HXLINE( 193)				 ::Dynamic group = textEngine->layoutGroups->iterator();
HXDLIN( 193)				while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 193)					 ::openfl::_internal::text::TextLayoutGroup group1 = ( ( ::openfl::_internal::text::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 195)					int group2 = group1->lineIndex;
HXDLIN( 195)					if ((group2 < (textField->get_scrollV() - 1))) {
HXLINE( 195)						continue;
            					}
HXLINE( 196)					int group3 = group1->lineIndex;
HXDLIN( 196)					int _hx_tmp13 = textField->get_scrollV();
HXDLIN( 196)					if ((group3 > ((_hx_tmp13 + textEngine->bottomScrollV) - 2))) {
HXLINE( 196)						goto _hx_goto_1;
            					}
HXLINE( 198)					color2 = group1->format->color;
HXLINE( 199)					r2 = (( (Float)(hx::UShr((( (int)(color2) ) & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 200)					g2 = (( (Float)(hx::UShr((( (int)(color2) ) & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 201)					b2 = (( (Float)((( (int)(color2) ) & 255)) ) / ( (Float)(255) ));
HXLINE( 203)					cairo->setSourceRGB(r2,g2,b2);
HXLINE( 205)					font = ::openfl::_internal::text::TextEngine_obj::getFontInstance(group1->format);
HXLINE( 207)					bool _hx_tmp14;
HXDLIN( 207)					if (hx::IsNotNull( font )) {
HXLINE( 207)						_hx_tmp14 = hx::IsNotNull( group1->format->size );
            					}
            					else {
HXLINE( 207)						_hx_tmp14 = false;
            					}
HXDLIN( 207)					if (_hx_tmp14) {
HXLINE( 209)						if (hx::IsNotNull( textEngine->_hx___cairoFont )) {
HXLINE( 211)							if (hx::IsNotEq( textEngine->_hx___font,font )) {
HXLINE( 213)								textEngine->_hx___cairoFont = null();
            							}
            						}
HXLINE( 217)						if (hx::IsNull( textEngine->_hx___cairoFont )) {
HXLINE( 219)							textEngine->_hx___font = font;
HXLINE( 220)							textEngine->_hx___cairoFont = ::lime::graphics::cairo::_CairoFTFontFace::CairoFTFontFace_Impl__obj::create(font,0);
            						}
HXLINE( 223)						cairo->set_fontFace(textEngine->_hx___cairoFont);
HXLINE( 225)						size = ::Std_obj::_hx_int(( (Float)(group1->format->size) ));
HXLINE( 226)						cairo->setFontSize(( (Float)(size) ));
HXLINE( 228)						cairo->moveTo(((group1->offsetX + scrollX) - bounds->x),(((group1->offsetY + group1->ascent) + scrollY) - bounds->y));
HXLINE( 235)						cairo->translate(( (Float)(0) ),( (Float)(0) ));
HXLINE( 237)						::Array< ::Dynamic> glyphs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 238)						Float x = ((group1->offsetX + scrollX) - bounds->x);
HXLINE( 239)						Float y = (((group1->offsetY + group1->ascent) + scrollY) - bounds->y);
HXLINE( 241)						{
HXLINE( 241)							int _g3 = 0;
HXDLIN( 241)							::Array< ::Dynamic> _g4 = group1->positions;
HXDLIN( 241)							while((_g3 < _g4->length)){
HXLINE( 241)								 ::openfl::_internal::text::GlyphPosition position = _g4->__get(_g3).StaticCast<  ::openfl::_internal::text::GlyphPosition >();
HXDLIN( 241)								_g3 = (_g3 + 1);
HXLINE( 243)								bool _hx_tmp15;
HXDLIN( 243)								if (hx::IsNotNull( position )) {
HXLINE( 243)									_hx_tmp15 = (position->glyph == 0);
            								}
            								else {
HXLINE( 243)									_hx_tmp15 = true;
            								}
HXDLIN( 243)								if (_hx_tmp15) {
HXLINE( 243)									continue;
            								}
HXLINE( 244)								glyphs->push( ::lime::graphics::cairo::CairoGlyph_obj::__alloc( HX_CTX ,position->glyph,((x + position->offset->x) + ((Float)0.5)),((y - position->offset->y) + ((Float)0.5))));
HXLINE( 245)								x = (x + position->advance->x);
HXLINE( 246)								y = (y - position->advance->y);
            							}
            						}
HXLINE( 249)						cairo->showGlyphs(glyphs);
HXLINE( 252)						bool _hx_tmp16;
HXDLIN( 252)						if ((textField->_hx___caretIndex > -1)) {
HXLINE( 252)							_hx_tmp16 = textEngine->selectable;
            						}
            						else {
HXLINE( 252)							_hx_tmp16 = false;
            						}
HXDLIN( 252)						if (_hx_tmp16) {
HXLINE( 254)							if ((textField->_hx___selectionIndex == textField->_hx___caretIndex)) {
HXLINE( 256)								bool _hx_tmp17;
HXDLIN( 256)								bool _hx_tmp18;
HXDLIN( 256)								if (textField->_hx___showCursor) {
HXLINE( 256)									_hx_tmp18 = (group1->startIndex <= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 256)									_hx_tmp18 = false;
            								}
HXDLIN( 256)								if (_hx_tmp18) {
HXLINE( 256)									_hx_tmp17 = (group1->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 256)									_hx_tmp17 = false;
            								}
HXDLIN( 256)								if (_hx_tmp17) {
HXLINE( 260)									advance = ((Float)0.0);
HXLINE( 262)									{
HXLINE( 262)										int _g5 = 0;
HXDLIN( 262)										int _g6 = (textField->_hx___caretIndex - group1->startIndex);
HXDLIN( 262)										while((_g5 < _g6)){
HXLINE( 262)											_g5 = (_g5 + 1);
HXDLIN( 262)											int i1 = (_g5 - 1);
HXLINE( 264)											if ((group1->positions->length <= i1)) {
HXLINE( 264)												goto _hx_goto_3;
            											}
HXLINE( 265)											Float advance1;
HXDLIN( 265)											bool advance2;
HXDLIN( 265)											if ((i1 >= 0)) {
HXLINE( 265)												advance2 = (i1 < group1->positions->length);
            											}
            											else {
HXLINE( 265)												advance2 = false;
            											}
HXDLIN( 265)											if (advance2) {
HXLINE( 265)												advance1 = group1->positions->__get(i1).StaticCast<  ::openfl::_internal::text::GlyphPosition >()->advance->x;
            											}
            											else {
HXLINE( 265)												advance1 = ( (Float)(0) );
            											}
HXDLIN( 265)											advance = (advance + advance1);
            										}
            										_hx_goto_3:;
            									}
HXLINE( 268)									Float scrollY1 = ((Float)0.0);
HXLINE( 270)									{
HXLINE( 270)										int _g7 = textField->get_scrollV();
HXDLIN( 270)										int _g8 = (group1->lineIndex + 1);
HXDLIN( 270)										while((_g7 < _g8)){
HXLINE( 270)											_g7 = (_g7 + 1);
HXDLIN( 270)											int i2 = (_g7 - 1);
HXLINE( 272)											scrollY1 = (scrollY1 + textEngine->lineHeights->get((i2 - 1)));
            										}
            									}
HXLINE( 275)									Float _hx_tmp19 = (::Math_obj::floor((group1->offsetX + advance)) + ((Float)0.5));
HXDLIN( 275)									Float _hx_tmp20 = (_hx_tmp19 - ( (Float)(textField->get_scrollH()) ));
HXDLIN( 275)									cairo->moveTo((_hx_tmp20 - bounds->x),((scrollY1 + ((Float)2.5)) - bounds->y));
HXLINE( 276)									cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 277)									Float _hx_tmp21 = (::Math_obj::floor((group1->offsetX + advance)) + ((Float)0.5));
HXDLIN( 277)									Float _hx_tmp22 = (_hx_tmp21 - ( (Float)(textField->get_scrollH()) ));
HXDLIN( 277)									Float _hx_tmp23 = (_hx_tmp22 - bounds->x);
HXLINE( 280)									Float _hx_tmp24 = ((scrollY1 + ::openfl::_internal::text::TextEngine_obj::getFormatHeight(textField->get_defaultTextFormat())) - ( (Float)(1) ));
HXLINE( 277)									cairo->lineTo(_hx_tmp23,(_hx_tmp24 - bounds->y));
HXLINE( 284)									cairo->stroke();
            								}
            							}
            							else {
HXLINE( 287)								bool _hx_tmp25;
HXDLIN( 287)								bool _hx_tmp26;
HXDLIN( 287)								bool _hx_tmp27;
HXDLIN( 287)								bool _hx_tmp28;
HXDLIN( 287)								if ((group1->startIndex <= textField->_hx___caretIndex)) {
HXLINE( 287)									_hx_tmp28 = (group1->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 287)									_hx_tmp28 = false;
            								}
HXDLIN( 287)								if (!(_hx_tmp28)) {
HXLINE( 288)									if ((group1->startIndex <= textField->_hx___selectionIndex)) {
HXLINE( 287)										_hx_tmp27 = (group1->endIndex >= textField->_hx___selectionIndex);
            									}
            									else {
HXLINE( 287)										_hx_tmp27 = false;
            									}
            								}
            								else {
HXLINE( 287)									_hx_tmp27 = true;
            								}
HXDLIN( 287)								if (!(_hx_tmp27)) {
HXLINE( 289)									if ((group1->startIndex > textField->_hx___caretIndex)) {
HXLINE( 287)										_hx_tmp26 = (group1->endIndex < textField->_hx___selectionIndex);
            									}
            									else {
HXLINE( 287)										_hx_tmp26 = false;
            									}
            								}
            								else {
HXLINE( 287)									_hx_tmp26 = true;
            								}
HXDLIN( 287)								if (!(_hx_tmp26)) {
HXLINE( 290)									if ((group1->startIndex > textField->_hx___selectionIndex)) {
HXLINE( 287)										_hx_tmp25 = (group1->endIndex < textField->_hx___caretIndex);
            									}
            									else {
HXLINE( 287)										_hx_tmp25 = false;
            									}
            								}
            								else {
HXLINE( 287)									_hx_tmp25 = true;
            								}
HXDLIN( 287)								if (_hx_tmp25) {
HXLINE( 292)									int selectionStart = ::Std_obj::_hx_int(::Math_obj::min(( (Float)(textField->_hx___selectionIndex) ),( (Float)(textField->_hx___caretIndex) )));
HXLINE( 293)									int selectionEnd = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(textField->_hx___selectionIndex) ),( (Float)(textField->_hx___caretIndex) )));
HXLINE( 295)									if ((group1->startIndex > selectionStart)) {
HXLINE( 297)										selectionStart = group1->startIndex;
            									}
HXLINE( 300)									if ((group1->endIndex < selectionEnd)) {
HXLINE( 302)										selectionEnd = group1->endIndex;
            									}
HXLINE( 305)									 ::openfl::geom::Rectangle end;
HXDLIN( 305)									 ::openfl::geom::Rectangle start = textField->getCharBoundaries(selectionStart);
HXLINE( 309)									if ((selectionEnd >= ::lime::text::_UTF8String::UTF8String_Impl__obj::get_length(textEngine->text))) {
HXLINE( 311)										end = textField->getCharBoundaries((::lime::text::_UTF8String::UTF8String_Impl__obj::get_length(textEngine->text) - 1));
HXLINE( 312)										 ::openfl::geom::Rectangle end1 = end;
HXDLIN( 312)										end1->x = (end1->x + (end->width + 2));
            									}
            									else {
HXLINE( 316)										end = textField->getCharBoundaries(selectionEnd);
            									}
HXLINE( 319)									bool _hx_tmp29;
HXDLIN( 319)									if (hx::IsNotNull( start )) {
HXLINE( 319)										_hx_tmp29 = hx::IsNotNull( end );
            									}
            									else {
HXLINE( 319)										_hx_tmp29 = false;
            									}
HXDLIN( 319)									if (_hx_tmp29) {
HXLINE( 321)										cairo->setSourceRGB(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 322)										cairo->rectangle((scrollX + start->x),(start->y + scrollY),(end->x - start->x),group1->height);
HXLINE( 323)										cairo->fill();
HXLINE( 324)										cairo->setSourceRGB(( (Float)(1) ),( (Float)(1) ),( (Float)(1) ));
HXLINE( 328)										cairo->moveTo((scrollX + start->x),((group1->offsetY + group1->ascent) + scrollY));
HXLINE( 331)										cairo->showText(::lime::text::_UTF8String::UTF8String_Impl__obj::substring(text,selectionStart,selectionEnd));
            									}
            								}
            							}
            						}
HXLINE( 336)						if (( (bool)(group1->format->underline) )) {
HXLINE( 340)							cairo->newPath();
HXLINE( 341)							cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 342)							Float x1 = ((group1->offsetX + scrollX) - bounds->x);
HXLINE( 343)							Float y1 = (::Math_obj::floor((((group1->offsetY + scrollY) + group1->ascent) - bounds->y)) + ((Float)0.5));
HXLINE( 344)							cairo->moveTo(x1,y1);
HXLINE( 345)							cairo->lineTo((x1 + group1->width),y1);
HXLINE( 346)							cairo->stroke();
HXLINE( 347)							cairo->closePath();
            						}
            					}
            				}
            				_hx_goto_1:;
            			}
            		}
            		else {
HXLINE( 352)			bool _hx_tmp30;
HXDLIN( 352)			bool _hx_tmp31;
HXDLIN( 352)			if ((textField->_hx___caretIndex > -1)) {
HXLINE( 352)				_hx_tmp31 = textEngine->selectable;
            			}
            			else {
HXLINE( 352)				_hx_tmp31 = false;
            			}
HXDLIN( 352)			if (_hx_tmp31) {
HXLINE( 352)				_hx_tmp30 = textField->_hx___showCursor;
            			}
            			else {
HXLINE( 352)				_hx_tmp30 = false;
            			}
HXDLIN( 352)			if (_hx_tmp30) {
HXLINE( 354)				int scrollX1 = -(textField->get_scrollH());
HXLINE( 355)				Float scrollY2 = ((Float)0.0);
HXLINE( 357)				{
HXLINE( 357)					int _g2 = 0;
HXDLIN( 357)					int _g11 = (textField->get_scrollV() - 1);
HXDLIN( 357)					while((_g2 < _g11)){
HXLINE( 357)						_g2 = (_g2 + 1);
HXDLIN( 357)						int i3 = (_g2 - 1);
HXLINE( 359)						scrollY2 = (scrollY2 + textEngine->lineHeights->get(i3));
            					}
            				}
HXLINE( 362)				 ::Dynamic color3 = textField->get_defaultTextFormat()->color;
HXLINE( 363)				Float r3 = (( (Float)(hx::UShr((( (int)(color3) ) & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 364)				Float g3 = (( (Float)(hx::UShr((( (int)(color3) ) & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 365)				Float b3 = (( (Float)((( (int)(color3) ) & 255)) ) / ( (Float)(255) ));
HXLINE( 367)				cairo->setSourceRGB(r3,g3,b3);
HXLINE( 369)				cairo->newPath();
HXLINE( 370)				cairo->moveTo((scrollX1 + ((Float)2.5)),(scrollY2 + ((Float)2.5)));
HXLINE( 371)				cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 372)				cairo->lineTo((scrollX1 + ((Float)2.5)),((scrollY2 + ::openfl::_internal::text::TextEngine_obj::getFormatHeight(textField->get_defaultTextFormat())) - ( (Float)(1) )));
HXLINE( 373)				cairo->stroke();
HXLINE( 374)				cairo->closePath();
            			}
            		}
HXLINE( 377)		graphics->_hx___bitmap->image->dirty = true;
HXLINE( 378)		graphics->_hx___bitmap->image->version++;
HXLINE( 379)		textField->_hx___dirty = false;
HXLINE( 380)		graphics->_hx___softwareDirty = false;
HXLINE( 381)		graphics->set___dirty(false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,render,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

bool CairoTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoTextField_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CairoTextField_obj_sStaticStorageInfo = 0;
#endif

hx::Class CairoTextField_obj::__mClass;

static ::String CairoTextField_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	::String(null())
};

void CairoTextField_obj::__register()
{
	CairoTextField_obj _hx_dummy;
	CairoTextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer.cairo.CairoTextField",46,1d,84,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CairoTextField_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoTextField_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoTextField_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoTextField_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0e9241bd5d873906_29_boot)
HXDLIN(  29)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
