// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginGradientFillView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/BeginGradientFillView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_228ded7c7fd0289d_392__new,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_","_new",0x54ed6f36,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",392,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_228ded7c7fd0289d_401_get_type,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_","get_type",0x2f8c1698,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_.get_type","openfl/_internal/renderer/DrawCommandReader.hx",401,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_228ded7c7fd0289d_408_get_colors,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_","get_colors",0xab011d0e,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_.get_colors","openfl/_internal/renderer/DrawCommandReader.hx",408,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_228ded7c7fd0289d_415_get_alphas,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_","get_alphas",0x26b622b3,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_.get_alphas","openfl/_internal/renderer/DrawCommandReader.hx",415,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_228ded7c7fd0289d_422_get_ratios,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_","get_ratios",0xa0048c66,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_.get_ratios","openfl/_internal/renderer/DrawCommandReader.hx",422,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_228ded7c7fd0289d_429_get_matrix,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_","get_matrix",0xa0428d9f,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_.get_matrix","openfl/_internal/renderer/DrawCommandReader.hx",429,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_228ded7c7fd0289d_436_get_spreadMethod,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_","get_spreadMethod",0x795b3792,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_.get_spreadMethod","openfl/_internal/renderer/DrawCommandReader.hx",436,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_228ded7c7fd0289d_443_get_interpolationMethod,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_","get_interpolationMethod",0x83347507,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_.get_interpolationMethod","openfl/_internal/renderer/DrawCommandReader.hx",443,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_228ded7c7fd0289d_450_get_focalPointRatio,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_","get_focalPointRatio",0x67253e42,"openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_.get_focalPointRatio","openfl/_internal/renderer/DrawCommandReader.hx",450,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void BeginGradientFillView_Impl__obj::__construct() { }

Dynamic BeginGradientFillView_Impl__obj::__CreateEmpty() { return new BeginGradientFillView_Impl__obj; }

void *BeginGradientFillView_Impl__obj::_hx_vtable = 0;

Dynamic BeginGradientFillView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BeginGradientFillView_Impl__obj > _hx_result = new BeginGradientFillView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BeginGradientFillView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60b3870b;
}

 ::openfl::_internal::renderer::DrawCommandReader BeginGradientFillView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_228ded7c7fd0289d_392__new)
HXDLIN( 392)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 392)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginGradientFillView_Impl__obj,_new,return )

 ::Dynamic BeginGradientFillView_Impl__obj::get_type( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_228ded7c7fd0289d_401_get_type)
HXDLIN( 401)		return this1->buffer->o->__get(this1->oPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginGradientFillView_Impl__obj,get_type,return )

::Array< int > BeginGradientFillView_Impl__obj::get_colors( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_228ded7c7fd0289d_408_get_colors)
HXDLIN( 408)		return this1->buffer->ii->__get(this1->iiPos).StaticCast< ::Array< int > >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginGradientFillView_Impl__obj,get_colors,return )

::Array< Float > BeginGradientFillView_Impl__obj::get_alphas( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_228ded7c7fd0289d_415_get_alphas)
HXDLIN( 415)		return this1->buffer->ff->__get(this1->ffPos).StaticCast< ::Array< Float > >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginGradientFillView_Impl__obj,get_alphas,return )

::Array< int > BeginGradientFillView_Impl__obj::get_ratios( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_228ded7c7fd0289d_422_get_ratios)
HXDLIN( 422)		return this1->buffer->ii->__get((this1->iiPos + 1)).StaticCast< ::Array< int > >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginGradientFillView_Impl__obj,get_ratios,return )

 ::openfl::geom::Matrix BeginGradientFillView_Impl__obj::get_matrix( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_228ded7c7fd0289d_429_get_matrix)
HXDLIN( 429)		return ( ( ::openfl::geom::Matrix)(this1->buffer->o->__get((this1->oPos + 1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginGradientFillView_Impl__obj,get_matrix,return )

 ::Dynamic BeginGradientFillView_Impl__obj::get_spreadMethod( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_228ded7c7fd0289d_436_get_spreadMethod)
HXDLIN( 436)		return this1->buffer->o->__get((this1->oPos + 2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginGradientFillView_Impl__obj,get_spreadMethod,return )

 ::Dynamic BeginGradientFillView_Impl__obj::get_interpolationMethod( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_228ded7c7fd0289d_443_get_interpolationMethod)
HXDLIN( 443)		return this1->buffer->o->__get((this1->oPos + 3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginGradientFillView_Impl__obj,get_interpolationMethod,return )

Float BeginGradientFillView_Impl__obj::get_focalPointRatio( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_228ded7c7fd0289d_450_get_focalPointRatio)
HXDLIN( 450)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginGradientFillView_Impl__obj,get_focalPointRatio,return )


BeginGradientFillView_Impl__obj::BeginGradientFillView_Impl__obj()
{
}

bool BeginGradientFillView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { outValue = get_type_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_colors") ) { outValue = get_colors_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_alphas") ) { outValue = get_alphas_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_ratios") ) { outValue = get_ratios_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_spreadMethod") ) { outValue = get_spreadMethod_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_focalPointRatio") ) { outValue = get_focalPointRatio_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_interpolationMethod") ) { outValue = get_interpolationMethod_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *BeginGradientFillView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BeginGradientFillView_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class BeginGradientFillView_Impl__obj::__mClass;

static ::String BeginGradientFillView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_type",43,ae,c3,cc),
	HX_("get_colors",79,35,0e,b7),
	HX_("get_alphas",1e,3b,c3,32),
	HX_("get_ratios",d1,a4,11,ac),
	HX_("get_matrix",0a,a6,4f,ac),
	HX_("get_spreadMethod",3d,f2,c2,f1),
	HX_("get_interpolationMethod",bc,35,4a,d1),
	HX_("get_focalPointRatio",77,40,d5,4b),
	::String(null())
};

void BeginGradientFillView_Impl__obj::__register()
{
	BeginGradientFillView_Impl__obj _hx_dummy;
	BeginGradientFillView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_",b9,56,ee,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BeginGradientFillView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BeginGradientFillView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BeginGradientFillView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BeginGradientFillView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BeginGradientFillView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader