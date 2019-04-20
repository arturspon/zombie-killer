// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters__DisplacementMapFilter_DisplacementMapShader
#include <openfl/filters/_DisplacementMapFilter/DisplacementMapShader.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_603da0a459dc1a0e_448_new,"openfl.filters._DisplacementMapFilter.DisplacementMapShader","new",0xcc3525dd,"openfl.filters._DisplacementMapFilter.DisplacementMapShader.new","openfl/filters/DisplacementMapFilter.hx",448,0x81237e14)
namespace openfl{
namespace filters{
namespace _DisplacementMapFilter{

void DisplacementMapShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_603da0a459dc1a0e_448_new)
HXLINE( 182)		if (hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\n\t\tuniform sampler2D openfl_Texture;\n\t\tuniform sampler2D mapTexture;\n\n\t\tuniform mat4 openfl_Matrix;\n\n\t\tuniform vec4 uOffsets;\n\t\tuniform mat4 uDisplacements;\n\n\t\tvarying vec2 openfl_TextureCoordV;\n\t\tvarying vec2 mapTextureCoords;\n\n\t\tvoid main(void) {\n\n\t\t\tvec4 map_color = texture2D(mapTexture, mapTextureCoords);\n\t\t\tvec4 map_color_mod = map_color - uOffsets;\n\n\t\t\tmap_color_mod = map_color_mod * vec4(map_color.w, map_color.w, 1.0, 1.0);\n\n\t\t\tvec4 displacements_multiplied = map_color_mod * uDisplacements;\n\t\t\tvec4 result = vec4(openfl_TextureCoordV.x, openfl_TextureCoordV.y, 0.0, 1.0) + displacements_multiplied;\n\n\t\t\tgl_FragColor = texture2D(openfl_Texture, vec2(result));\n\n\t\t}\n\n\t",7f,6e,c3,b7);
            		}
HXLINE( 174)		if (hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\n\t\tuniform mat4 openfl_Matrix;\n\n\t\tuniform vec2 mapTextureCoordsOffset;\n\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying vec2 openfl_TextureCoordV;\n\n\t\tvarying vec2 mapTextureCoords;\n\n\t\tvoid main(void) {\n\n\t\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\topenfl_TextureCoordV = openfl_TextureCoord;\n\t\t\tmapTextureCoords = openfl_TextureCoord - mapTextureCoordsOffset;\n\n\t\t}\n\n\t",37,0a,78,ec);
            		}
HXLINE( 449)		super::__construct(null());
HXLINE( 394)		this->_hx___isGenerated = true;
HXDLIN( 394)		this->_hx___initGL();
            	}

Dynamic DisplacementMapShader_obj::__CreateEmpty() { return new DisplacementMapShader_obj; }

void *DisplacementMapShader_obj::_hx_vtable = 0;

Dynamic DisplacementMapShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DisplacementMapShader_obj > _hx_result = new DisplacementMapShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplacementMapShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x676ab1f7) {
		if (inClassId<=(int)0x03978973) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03978973;
		} else {
			return inClassId==(int)0x676ab1f7;
		}
	} else {
		return inClassId==(int)0x72485ac5;
	}
}


hx::ObjectPtr< DisplacementMapShader_obj > DisplacementMapShader_obj::__new() {
	hx::ObjectPtr< DisplacementMapShader_obj > __this = new DisplacementMapShader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DisplacementMapShader_obj > DisplacementMapShader_obj::__alloc(hx::Ctx *_hx_ctx) {
	DisplacementMapShader_obj *__this = (DisplacementMapShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DisplacementMapShader_obj), true, "openfl.filters._DisplacementMapFilter.DisplacementMapShader"));
	*(void **)__this = DisplacementMapShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DisplacementMapShader_obj::DisplacementMapShader_obj()
{
}

void DisplacementMapShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplacementMapShader);
	HX_MARK_MEMBER_NAME(mapTextureCoordsOffset,"mapTextureCoordsOffset");
	HX_MARK_MEMBER_NAME(mapTexture,"mapTexture");
	HX_MARK_MEMBER_NAME(uOffsets,"uOffsets");
	HX_MARK_MEMBER_NAME(uDisplacements,"uDisplacements");
	 ::openfl::filters::BitmapFilterShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplacementMapShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mapTextureCoordsOffset,"mapTextureCoordsOffset");
	HX_VISIT_MEMBER_NAME(mapTexture,"mapTexture");
	HX_VISIT_MEMBER_NAME(uOffsets,"uOffsets");
	HX_VISIT_MEMBER_NAME(uDisplacements,"uDisplacements");
	 ::openfl::filters::BitmapFilterShader_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DisplacementMapShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"uOffsets") ) { return hx::Val( uOffsets ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mapTexture") ) { return hx::Val( mapTexture ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"uDisplacements") ) { return hx::Val( uDisplacements ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"mapTextureCoordsOffset") ) { return hx::Val( mapTextureCoordsOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DisplacementMapShader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"uOffsets") ) { uOffsets=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mapTexture") ) { mapTexture=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"uDisplacements") ) { uDisplacements=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"mapTextureCoordsOffset") ) { mapTextureCoordsOffset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplacementMapShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mapTextureCoordsOffset",90,0a,47,8e));
	outFields->push(HX_("mapTexture",9f,b1,71,3f));
	outFields->push(HX_("uOffsets",8b,59,c4,c8));
	outFields->push(HX_("uDisplacements",07,94,ec,a2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo DisplacementMapShader_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DisplacementMapShader_obj,mapTextureCoordsOffset),HX_("mapTextureCoordsOffset",90,0a,47,8e)},
	{hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(DisplacementMapShader_obj,mapTexture),HX_("mapTexture",9f,b1,71,3f)},
	{hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DisplacementMapShader_obj,uOffsets),HX_("uOffsets",8b,59,c4,c8)},
	{hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DisplacementMapShader_obj,uDisplacements),HX_("uDisplacements",07,94,ec,a2)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DisplacementMapShader_obj_sStaticStorageInfo = 0;
#endif

static ::String DisplacementMapShader_obj_sMemberFields[] = {
	HX_("mapTextureCoordsOffset",90,0a,47,8e),
	HX_("mapTexture",9f,b1,71,3f),
	HX_("uOffsets",8b,59,c4,c8),
	HX_("uDisplacements",07,94,ec,a2),
	::String(null()) };

hx::Class DisplacementMapShader_obj::__mClass;

void DisplacementMapShader_obj::__register()
{
	DisplacementMapShader_obj _hx_dummy;
	DisplacementMapShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.filters._DisplacementMapFilter.DisplacementMapShader",6b,f3,23,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DisplacementMapShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplacementMapShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplacementMapShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplacementMapShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters
} // end namespace _DisplacementMapFilter
