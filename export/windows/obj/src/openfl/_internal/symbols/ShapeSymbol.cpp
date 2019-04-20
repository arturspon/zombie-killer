// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_swf_SWFLite
#include <openfl/_internal/formats/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_swf_SWFLiteLibrary
#include <openfl/_internal/formats/swf/SWFLiteLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_swf_ShapeCommand
#include <openfl/_internal/formats/swf/ShapeCommand.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_BitmapSymbol
#include <openfl/_internal/symbols/BitmapSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_ShapeSymbol
#include <openfl/_internal/symbols/ShapeSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_934fde68ec639995_32_new,"openfl._internal.symbols.ShapeSymbol","new",0xf9be9628,"openfl._internal.symbols.ShapeSymbol.new","openfl/_internal/symbols/ShapeSymbol.hx",32,0x811972cb)
HX_LOCAL_STACK_FRAME(_hx_pos_934fde68ec639995_36___createObject,"openfl._internal.symbols.ShapeSymbol","__createObject",0x10144133,"openfl._internal.symbols.ShapeSymbol.__createObject","openfl/_internal/symbols/ShapeSymbol.hx",36,0x811972cb)
namespace openfl{
namespace _internal{
namespace symbols{

void ShapeSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_934fde68ec639995_32_new)
HXDLIN(  32)		super::__construct();
            	}

Dynamic ShapeSymbol_obj::__CreateEmpty() { return new ShapeSymbol_obj; }

void *ShapeSymbol_obj::_hx_vtable = 0;

Dynamic ShapeSymbol_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ShapeSymbol_obj > _hx_result = new ShapeSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShapeSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13ceedc2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x13ceedc2;
	} else {
		return inClassId==(int)0x5bdcc22b;
	}
}

 ::openfl::display::DisplayObject ShapeSymbol_obj::_hx___createObject( ::openfl::_internal::formats::swf::SWFLite swf){
            	HX_GC_STACKFRAME(&_hx_pos_934fde68ec639995_36___createObject)
HXLINE(  37)		 ::openfl::display::Shape shape =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
HXLINE(  38)		 ::openfl::display::Graphics graphics = shape->get_graphics();
HXLINE(  40)		if (hx::IsNotNull( this->rendered )) {
HXLINE(  42)			graphics->copyFrom(this->rendered->get_graphics());
HXLINE(  43)			return shape;
            		}
HXLINE(  46)		{
HXLINE(  46)			int _g = 0;
HXDLIN(  46)			::Array< ::Dynamic> _g1 = this->commands;
HXDLIN(  46)			while((_g < _g1->length)){
HXLINE(  46)				 ::openfl::_internal::formats::swf::ShapeCommand command = _g1->__get(_g).StaticCast<  ::openfl::_internal::formats::swf::ShapeCommand >();
HXDLIN(  46)				_g = (_g + 1);
HXLINE(  48)				switch((int)(command->_hx_getIndex())){
            					case (int)0: {
HXLINE(  53)						bool smooth = command->_hx_getBool(3);
HXDLIN(  53)						bool repeat = command->_hx_getBool(2);
HXDLIN(  53)						 ::openfl::geom::Matrix matrix = command->_hx_getObject(1).StaticCast<  ::openfl::geom::Matrix >();
HXDLIN(  53)						int bitmapID = command->_hx_getInt(0);
HXDLIN(  53)						{
HXLINE(  55)							 ::openfl::_internal::symbols::BitmapSymbol bitmapSymbol = ( ( ::openfl::_internal::symbols::BitmapSymbol)(swf->symbols->get(bitmapID)) );
HXLINE(  56)							 ::lime::graphics::Image bitmap = swf->library->getImage(bitmapSymbol->path);
HXLINE(  58)							if (hx::IsNotNull( bitmap )) {
HXLINE(  60)								graphics->beginBitmapFill(::openfl::display::BitmapData_obj::fromImage(bitmap,null()),matrix,repeat,smooth);
            							}
            						}
            					}
            					break;
            					case (int)1: {
HXLINE(  50)						Float alpha = command->_hx_getFloat(1);
HXDLIN(  50)						int color = command->_hx_getInt(0);
HXLINE(  51)						graphics->beginFill(color,alpha);
            					}
            					break;
            					case (int)2: {
HXLINE(  64)						Float focalPointRatio = command->_hx_getFloat(7);
HXDLIN(  64)						 ::Dynamic interpolationMethod = command->_hx_getObject(6);
HXDLIN(  64)						 ::Dynamic spreadMethod = command->_hx_getObject(5);
HXDLIN(  64)						 ::openfl::geom::Matrix matrix1 = command->_hx_getObject(4).StaticCast<  ::openfl::geom::Matrix >();
HXDLIN(  64)						::Array< int > ratios = command->_hx_getObject(3).StaticCast< ::Array< int > >();
HXDLIN(  64)						::Array< Float > alphas = command->_hx_getObject(2).StaticCast< ::Array< Float > >();
HXDLIN(  64)						::Array< int > colors = command->_hx_getObject(1).StaticCast< ::Array< int > >();
HXDLIN(  64)						 ::Dynamic fillType = command->_hx_getObject(0);
HXLINE(  65)						graphics->beginGradientFill(fillType,colors,alphas,ratios,matrix1,spreadMethod,interpolationMethod,focalPointRatio);
            					}
            					break;
            					case (int)3: {
HXLINE(  68)						Float anchorY = command->_hx_getFloat(3);
HXDLIN(  68)						Float anchorX = command->_hx_getFloat(2);
HXDLIN(  68)						Float controlY = command->_hx_getFloat(1);
HXDLIN(  68)						Float controlX = command->_hx_getFloat(0);
HXLINE(  69)						graphics->curveTo(controlX,controlY,anchorX,anchorY);
            					}
            					break;
            					case (int)4: {
HXLINE(  72)						graphics->endFill();
            					}
            					break;
            					case (int)5: {
HXLINE(  74)						 ::Dynamic miterLimit = command->_hx_getObject(7);
HXDLIN(  74)						 ::Dynamic joints = command->_hx_getObject(6);
HXDLIN(  74)						 ::Dynamic caps = command->_hx_getObject(5);
HXDLIN(  74)						 ::Dynamic scaleMode = command->_hx_getObject(4);
HXDLIN(  74)						 ::Dynamic pixelHinting = command->_hx_getObject(3);
HXDLIN(  74)						 ::Dynamic alpha1 = command->_hx_getObject(2);
HXDLIN(  74)						 ::Dynamic color1 = command->_hx_getObject(1);
HXDLIN(  74)						 ::Dynamic thickness = command->_hx_getObject(0);
HXLINE(  75)						if (hx::IsNotNull( thickness )) {
HXLINE(  77)							graphics->lineStyle(thickness,color1,alpha1,pixelHinting,scaleMode,caps,joints,miterLimit);
            						}
            						else {
HXLINE(  82)							graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
            						}
            					}
            					break;
            					case (int)6: {
HXLINE(  85)						Float y = command->_hx_getFloat(1);
HXDLIN(  85)						Float x = command->_hx_getFloat(0);
HXLINE(  86)						graphics->lineTo(x,y);
            					}
            					break;
            					case (int)7: {
HXLINE(  88)						Float y1 = command->_hx_getFloat(1);
HXDLIN(  88)						Float x1 = command->_hx_getFloat(0);
HXLINE(  89)						graphics->moveTo(x1,y1);
            					}
            					break;
            				}
            			}
            		}
HXLINE(  93)		this->commands = null();
HXLINE(  94)		this->rendered =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
HXLINE(  95)		 ::openfl::display::Graphics _hx_tmp = this->rendered->get_graphics();
HXDLIN(  95)		_hx_tmp->copyFrom(shape->get_graphics());
HXLINE(  97)		return shape;
            	}



hx::ObjectPtr< ShapeSymbol_obj > ShapeSymbol_obj::__new() {
	hx::ObjectPtr< ShapeSymbol_obj > __this = new ShapeSymbol_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ShapeSymbol_obj > ShapeSymbol_obj::__alloc(hx::Ctx *_hx_ctx) {
	ShapeSymbol_obj *__this = (ShapeSymbol_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ShapeSymbol_obj), true, "openfl._internal.symbols.ShapeSymbol"));
	*(void **)__this = ShapeSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShapeSymbol_obj::ShapeSymbol_obj()
{
}

void ShapeSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeSymbol);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(rendered,"rendered");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShapeSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(rendered,"rendered");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ShapeSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return hx::Val( commands ); }
		if (HX_FIELD_EQ(inName,"rendered") ) { return hx::Val( rendered ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ShapeSymbol_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rendered") ) { rendered=inValue.Cast<  ::openfl::display::Shape >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("commands",c8,b0,55,be));
	outFields->push(HX_("rendered",35,c5,db,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ShapeSymbol_obj_sMemberStorageInfo[] = {
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ShapeSymbol_obj,commands),HX_("commands",c8,b0,55,be)},
	{hx::fsObject /*  ::openfl::display::Shape */ ,(int)offsetof(ShapeSymbol_obj,rendered),HX_("rendered",35,c5,db,b2)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ShapeSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String ShapeSymbol_obj_sMemberFields[] = {
	HX_("commands",c8,b0,55,be),
	HX_("rendered",35,c5,db,b2),
	HX_("__createObject",fb,41,55,58),
	::String(null()) };

hx::Class ShapeSymbol_obj::__mClass;

void ShapeSymbol_obj::__register()
{
	ShapeSymbol_obj _hx_dummy;
	ShapeSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.symbols.ShapeSymbol",36,a2,66,ae);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ShapeSymbol_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShapeSymbol_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShapeSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShapeSymbol_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
