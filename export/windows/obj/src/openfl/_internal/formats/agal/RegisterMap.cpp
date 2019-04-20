// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_agal_AGALConverter
#include <openfl/_internal/formats/agal/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_agal_RegisterMap
#include <openfl/_internal/formats/agal/RegisterMap.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_agal__AGALConverter_DestRegister
#include <openfl/_internal/formats/agal/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_agal__AGALConverter_ProgramType
#include <openfl/_internal/formats/agal/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_agal__AGALConverter_RegisterMapEntry
#include <openfl/_internal/formats/agal/_AGALConverter/RegisterMapEntry.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_agal__AGALConverter_RegisterUsage
#include <openfl/_internal/formats/agal/_AGALConverter/RegisterUsage.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_agal__AGALConverter_SamplerRegister
#include <openfl/_internal/formats/agal/_AGALConverter/SamplerRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_formats_agal__AGALConverter_SourceRegister
#include <openfl/_internal/formats/agal/_AGALConverter/SourceRegister.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_efafc00810297e67_593_new,"openfl._internal.formats.agal.RegisterMap","new",0x3a681cb0,"openfl._internal.formats.agal.RegisterMap.new","openfl/_internal/formats/agal/AGALConverter.hx",593,0x323dd368)
HX_LOCAL_STACK_FRAME(_hx_pos_efafc00810297e67_601_add,"openfl._internal.formats.agal.RegisterMap","add",0x3a5e3e71,"openfl._internal.formats.agal.RegisterMap.add","openfl/_internal/formats/agal/AGALConverter.hx",601,0x323dd368)
HX_LOCAL_STACK_FRAME(_hx_pos_efafc00810297e67_625_addDR,"openfl._internal.formats.agal.RegisterMap","addDR",0x3d3fb83f,"openfl._internal.formats.agal.RegisterMap.addDR","openfl/_internal/formats/agal/AGALConverter.hx",625,0x323dd368)
HX_LOCAL_STACK_FRAME(_hx_pos_efafc00810297e67_630_addSaR,"openfl._internal.formats.agal.RegisterMap","addSaR",0x5a8cee13,"openfl._internal.formats.agal.RegisterMap.addSaR","openfl/_internal/formats/agal/AGALConverter.hx",630,0x323dd368)
HX_LOCAL_STACK_FRAME(_hx_pos_efafc00810297e67_634_addSR,"openfl._internal.formats.agal.RegisterMap","addSR",0x3d3fc550,"openfl._internal.formats.agal.RegisterMap.addSR","openfl/_internal/formats/agal/AGALConverter.hx",634,0x323dd368)
HX_LOCAL_STACK_FRAME(_hx_pos_efafc00810297e67_646_getRegisterUsage,"openfl._internal.formats.agal.RegisterMap","getRegisterUsage",0x5e0f0af8,"openfl._internal.formats.agal.RegisterMap.getRegisterUsage","openfl/_internal/formats/agal/AGALConverter.hx",646,0x323dd368)
HX_LOCAL_STACK_FRAME(_hx_pos_efafc00810297e67_656_getUsage,"openfl._internal.formats.agal.RegisterMap","getUsage",0xe36b7e5b,"openfl._internal.formats.agal.RegisterMap.getUsage","openfl/_internal/formats/agal/AGALConverter.hx",656,0x323dd368)
HX_LOCAL_STACK_FRAME(_hx_pos_efafc00810297e67_672_toGLSL,"openfl._internal.formats.agal.RegisterMap","toGLSL",0x358c9ea9,"openfl._internal.formats.agal.RegisterMap.toGLSL","openfl/_internal/formats/agal/AGALConverter.hx",672,0x323dd368)
HX_LOCAL_STACK_FRAME(_hx_pos_efafc00810297e67_679_toGLSL,"openfl._internal.formats.agal.RegisterMap","toGLSL",0x358c9ea9,"openfl._internal.formats.agal.RegisterMap.toGLSL","openfl/_internal/formats/agal/AGALConverter.hx",679,0x323dd368)
HX_LOCAL_STACK_FRAME(_hx_pos_efafc00810297e67_669_toGLSL,"openfl._internal.formats.agal.RegisterMap","toGLSL",0x358c9ea9,"openfl._internal.formats.agal.RegisterMap.toGLSL","openfl/_internal/formats/agal/AGALConverter.hx",669,0x323dd368)
static const ::String _hx_array_data_8a1844be_13[] = {
	HX_("attribute ",84,a8,71,97),
};
static const ::String _hx_array_data_8a1844be_14[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_8a1844be_15[] = {
	HX_("\t",09,00,00,00),
};
static const ::String _hx_array_data_8a1844be_16[] = {
	HX_("varying ",b0,25,c9,a4),
};
static const ::String _hx_array_data_8a1844be_17[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_8a1844be_18[] = {
	HX_("vec4 ",c0,4c,56,34),
};
static const ::String _hx_array_data_8a1844be_19[] = {
	HX_("mat4 ",0c,20,23,03),
};
static const ::String _hx_array_data_8a1844be_20[] = {
	HX_("sampler2D ",06,3c,4f,7c),
};
static const ::String _hx_array_data_8a1844be_21[] = {
	HX_("samplerCube ",63,87,00,86),
};
static const ::String _hx_array_data_8a1844be_22[] = {
	HX_("vec4 ",c0,4c,56,34),
};
static const ::String _hx_array_data_8a1844be_23[] = {
	HX_("sampler2D ",06,3c,4f,7c),
};
static const ::String _hx_array_data_8a1844be_24[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_8a1844be_25[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_8a1844be_26[] = {
	HX_("sampler2D ",06,3c,4f,7c),
};
static const ::String _hx_array_data_8a1844be_27[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_8a1844be_28[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_8a1844be_29[] = {
	HX_("bool ",b6,20,f8,b6),
};
static const ::String _hx_array_data_8a1844be_30[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_8a1844be_31[] = {
	HX_("samplerCube ",63,87,00,86),
};
static const ::String _hx_array_data_8a1844be_32[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_8a1844be_33[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_8a1844be_34[] = {
	HX_("samplerCube ",63,87,00,86),
};
static const ::String _hx_array_data_8a1844be_35[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_8a1844be_36[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_8a1844be_37[] = {
	HX_("bool ",b6,20,f8,b6),
};
static const ::String _hx_array_data_8a1844be_38[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_8a1844be_39[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_8a1844be_40[] = {
	HX_(";\n",6f,33,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_efafc00810297e67_591_boot,"openfl._internal.formats.agal.RegisterMap","boot",0xd8c9fde2,"openfl._internal.formats.agal.RegisterMap.boot","openfl/_internal/formats/agal/AGALConverter.hx",591,0x323dd368)
namespace openfl{
namespace _internal{
namespace formats{
namespace agal{

void RegisterMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_efafc00810297e67_593_new)
HXDLIN( 593)		this->mEntries = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic RegisterMap_obj::__CreateEmpty() { return new RegisterMap_obj; }

void *RegisterMap_obj::_hx_vtable = 0;

Dynamic RegisterMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RegisterMap_obj > _hx_result = new RegisterMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RegisterMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6c539f98;
}

void RegisterMap_obj::add(int type,::String name,int number, ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage usage){
            	HX_GC_STACKFRAME(&_hx_pos_efafc00810297e67_601_add)
HXLINE( 602)		{
HXLINE( 602)			int _g = 0;
HXDLIN( 602)			::Array< ::Dynamic> _g1 = this->mEntries;
HXDLIN( 602)			while((_g < _g1->length)){
HXLINE( 602)				 ::openfl::_internal::formats::agal::_AGALConverter::RegisterMapEntry entry = _g1->__get(_g).StaticCast<  ::openfl::_internal::formats::agal::_AGALConverter::RegisterMapEntry >();
HXDLIN( 602)				_g = (_g + 1);
HXLINE( 604)				bool _hx_tmp;
HXDLIN( 604)				bool _hx_tmp1;
HXDLIN( 604)				if ((entry->type == type)) {
HXLINE( 604)					_hx_tmp1 = (entry->name == name);
            				}
            				else {
HXLINE( 604)					_hx_tmp1 = false;
            				}
HXDLIN( 604)				if (_hx_tmp1) {
HXLINE( 604)					_hx_tmp = (entry->number == number);
            				}
            				else {
HXLINE( 604)					_hx_tmp = false;
            				}
HXDLIN( 604)				if (_hx_tmp) {
HXLINE( 606)					if (hx::IsNotEq( entry->usage,usage )) {
HXLINE( 608)						HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Cannot use register in multiple ways yet (mat4/vec4)",5e,30,e0,74)));
            					}
HXLINE( 611)					return;
            				}
            			}
            		}
HXLINE( 615)		 ::openfl::_internal::formats::agal::_AGALConverter::RegisterMapEntry entry1 =  ::openfl::_internal::formats::agal::_AGALConverter::RegisterMapEntry_obj::__alloc( HX_CTX );
HXLINE( 616)		entry1->type = type;
HXLINE( 617)		entry1->name = name;
HXLINE( 618)		entry1->number = number;
HXLINE( 619)		entry1->usage = usage;
HXLINE( 620)		this->mEntries->push(entry1);
            	}


HX_DEFINE_DYNAMIC_FUNC4(RegisterMap_obj,add,(void))

void RegisterMap_obj::addDR( ::openfl::_internal::formats::agal::_AGALConverter::DestRegister dr, ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage usage){
            	HX_STACKFRAME(&_hx_pos_efafc00810297e67_625_addDR)
HXDLIN( 625)		int dr1 = dr->type;
HXDLIN( 625)		::String _hx_tmp = dr->toGLSL(false);
HXDLIN( 625)		this->add(dr1,_hx_tmp,dr->n,usage);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,addDR,(void))

void RegisterMap_obj::addSaR( ::openfl::_internal::formats::agal::_AGALConverter::SamplerRegister sr, ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage usage){
            	HX_STACKFRAME(&_hx_pos_efafc00810297e67_630_addSaR)
HXDLIN( 630)		int sr1 = sr->type;
HXDLIN( 630)		::String _hx_tmp = sr->toGLSL();
HXDLIN( 630)		this->add(sr1,_hx_tmp,sr->n,usage);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,addSaR,(void))

void RegisterMap_obj::addSR( ::openfl::_internal::formats::agal::_AGALConverter::SourceRegister sr, ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage usage,hx::Null< int >  __o_offset){
            		int offset = __o_offset.Default(0);
            	HX_STACKFRAME(&_hx_pos_efafc00810297e67_634_addSR)
HXLINE( 635)		if ((sr->d != 0)) {
HXLINE( 637)			int sr1 = sr->itype;
HXDLIN( 637)			::String _hx_tmp = ::openfl::_internal::formats::agal::AGALConverter_obj::prefixFromType(sr->itype,sr->programType);
HXDLIN( 637)			this->add(sr1,(_hx_tmp + sr->n),sr->n,::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 638)			int sr2 = sr->type;
HXDLIN( 638)			::String _hx_tmp1 = ::openfl::_internal::formats::agal::AGALConverter_obj::prefixFromType(sr->type,sr->programType);
HXDLIN( 638)			this->add(sr2,(_hx_tmp1 + sr->o),sr->o,::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn());
HXLINE( 639)			return;
            		}
HXLINE( 642)		int sr3 = sr->type;
HXDLIN( 642)		::String _hx_tmp2 = sr->toGLSL(false,offset);
HXDLIN( 642)		this->add(sr3,_hx_tmp2,(sr->n + offset),usage);
            	}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,addSR,(void))

 ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage RegisterMap_obj::getRegisterUsage( ::openfl::_internal::formats::agal::_AGALConverter::SourceRegister sr){
            	HX_STACKFRAME(&_hx_pos_efafc00810297e67_646_getRegisterUsage)
HXLINE( 647)		if ((sr->d != 0)) {
HXLINE( 649)			return ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn();
            		}
HXLINE( 652)		int sr1 = sr->type;
HXDLIN( 652)		::String _hx_tmp = sr->toGLSL(false,null());
HXDLIN( 652)		return this->getUsage(sr1,_hx_tmp,sr->n);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,getRegisterUsage,return )

 ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage RegisterMap_obj::getUsage(int type,::String name,int number){
            	HX_STACKFRAME(&_hx_pos_efafc00810297e67_656_getUsage)
HXLINE( 657)		{
HXLINE( 657)			int _g = 0;
HXDLIN( 657)			::Array< ::Dynamic> _g1 = this->mEntries;
HXDLIN( 657)			while((_g < _g1->length)){
HXLINE( 657)				 ::openfl::_internal::formats::agal::_AGALConverter::RegisterMapEntry entry = _g1->__get(_g).StaticCast<  ::openfl::_internal::formats::agal::_AGALConverter::RegisterMapEntry >();
HXDLIN( 657)				_g = (_g + 1);
HXLINE( 659)				bool _hx_tmp;
HXDLIN( 659)				bool _hx_tmp1;
HXDLIN( 659)				if ((entry->type == type)) {
HXLINE( 659)					_hx_tmp1 = (entry->name == name);
            				}
            				else {
HXLINE( 659)					_hx_tmp1 = false;
            				}
HXDLIN( 659)				if (_hx_tmp1) {
HXLINE( 659)					_hx_tmp = (entry->number == number);
            				}
            				else {
HXLINE( 659)					_hx_tmp = false;
            				}
HXDLIN( 659)				if (_hx_tmp) {
HXLINE( 661)					return entry->usage;
            				}
            			}
            		}
HXLINE( 665)		return ::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage_obj::UNUSED_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,getUsage,return )

::String RegisterMap_obj::toGLSL(bool tempRegistersOnly){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::openfl::_internal::formats::agal::_AGALConverter::RegisterMapEntry a, ::openfl::_internal::formats::agal::_AGALConverter::RegisterMapEntry b){
            			HX_STACKFRAME(&_hx_pos_efafc00810297e67_672_toGLSL)
HXLINE( 672)			return (a->number - b->number);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_1) HXARGC(2)
            		int _hx_run( ::openfl::_internal::formats::agal::_AGALConverter::RegisterMapEntry a1, ::openfl::_internal::formats::agal::_AGALConverter::RegisterMapEntry b1){
            			HX_STACKFRAME(&_hx_pos_efafc00810297e67_679_toGLSL)
HXLINE( 679)			return (a1->type - b1->type);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_efafc00810297e67_669_toGLSL)
HXLINE( 670)		this->mEntries->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 675)		 ::openfl::_internal::formats::agal::_AGALConverter::RegisterMapEntry entry;
HXLINE( 677)		this->mEntries->sort( ::Dynamic(new _hx_Closure_1()));
HXLINE( 682)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 684)		{
HXLINE( 684)			int _g = 0;
HXDLIN( 684)			int _g1 = this->mEntries->length;
HXDLIN( 684)			while((_g < _g1)){
HXLINE( 684)				_g = (_g + 1);
HXDLIN( 684)				int i = (_g - 1);
HXLINE( 686)				entry = this->mEntries->__get(i).StaticCast<  ::openfl::_internal::formats::agal::_AGALConverter::RegisterMapEntry >();
HXLINE( 690)				bool _hx_tmp;
HXDLIN( 690)				bool _hx_tmp1;
HXDLIN( 690)				if (tempRegistersOnly) {
HXLINE( 690)					_hx_tmp1 = (entry->type != 2);
            				}
            				else {
HXLINE( 690)					_hx_tmp1 = false;
            				}
HXDLIN( 690)				if (!(_hx_tmp1)) {
HXLINE( 691)					if (!(tempRegistersOnly)) {
HXLINE( 690)						_hx_tmp = (entry->type == 2);
            					}
            					else {
HXLINE( 690)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 690)					_hx_tmp = true;
            				}
HXDLIN( 690)				if (_hx_tmp) {
HXLINE( 693)					continue;
            				}
HXLINE( 697)				if ((entry->type == 3)) {
HXLINE( 699)					continue;
            				}
HXLINE( 702)				switch((int)(entry->type)){
            					case (int)0: {
HXLINE( 706)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 706)							sb->flush();
            						}
HXDLIN( 706)						if (hx::IsNull( sb->b )) {
HXLINE( 706)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_13,1);
            						}
            						else {
HXLINE( 706)							sb->b->push(HX_("attribute ",84,a8,71,97));
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 710)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 710)							sb->flush();
            						}
HXDLIN( 710)						if (hx::IsNull( sb->b )) {
HXLINE( 710)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_14,1);
            						}
            						else {
HXLINE( 710)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 713)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 713)							sb->flush();
            						}
HXDLIN( 713)						if (hx::IsNull( sb->b )) {
HXLINE( 713)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_15,1);
            						}
            						else {
HXLINE( 713)							sb->b->push(HX_("\t",09,00,00,00));
            						}
            					}
            					break;
            					case (int)3: {
            					}
            					break;
            					case (int)4: {
HXLINE( 718)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 718)							sb->flush();
            						}
HXDLIN( 718)						if (hx::IsNull( sb->b )) {
HXLINE( 718)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_16,1);
            						}
            						else {
HXLINE( 718)							sb->b->push(HX_("varying ",b0,25,c9,a4));
            						}
            					}
            					break;
            					case (int)5: {
HXLINE( 721)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 721)							sb->flush();
            						}
HXDLIN( 721)						if (hx::IsNull( sb->b )) {
HXLINE( 721)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_17,1);
            						}
            						else {
HXLINE( 721)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            					}
            					break;
            					default:{
HXLINE( 724)						HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            					}
            				}
HXLINE( 727)				switch((int)(entry->usage->_hx_getIndex())){
            					case (int)0: {
HXLINE( 745)						::lime::utils::Log_obj::info(HX_("Missing switch patten: RegisterUsage.UNUSED",38,09,f6,02),hx::SourceInfo(HX_("openfl/_internal/formats/agal/AGALConverter.hx",68,d3,3d,32),745,HX_("openfl._internal.formats.agal.RegisterMap",be,44,18,8a),HX_("toGLSL",f9,58,08,7a)));
            					}
            					break;
            					case (int)1: {
HXLINE( 730)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 730)							sb->flush();
            						}
HXDLIN( 730)						if (hx::IsNull( sb->b )) {
HXLINE( 730)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_18,1);
            						}
            						else {
HXLINE( 730)							sb->b->push(HX_("vec4 ",c0,4c,56,34));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 736)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 736)							sb->flush();
            						}
HXDLIN( 736)						if (hx::IsNull( sb->b )) {
HXLINE( 736)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_19,1);
            						}
            						else {
HXLINE( 736)							sb->b->push(HX_("mat4 ",0c,20,23,03));
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 739)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 739)							sb->flush();
            						}
HXDLIN( 739)						if (hx::IsNull( sb->b )) {
HXLINE( 739)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_20,1);
            						}
            						else {
HXLINE( 739)							sb->b->push(HX_("sampler2D ",06,3c,4f,7c));
            						}
            					}
            					break;
            					case (int)4: {
            					}
            					break;
            					case (int)5: {
HXLINE( 742)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 742)							sb->flush();
            						}
HXDLIN( 742)						if (hx::IsNull( sb->b )) {
HXLINE( 742)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_21,1);
            						}
            						else {
HXLINE( 742)							sb->b->push(HX_("samplerCube ",63,87,00,86));
            						}
            					}
            					break;
            					case (int)6: {
            					}
            					break;
            					case (int)7: {
HXLINE( 733)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 733)							sb->flush();
            						}
HXDLIN( 733)						if (hx::IsNull( sb->b )) {
HXLINE( 733)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_22,1);
            						}
            						else {
HXLINE( 733)							sb->b->push(HX_("vec4 ",c0,4c,56,34));
            						}
            					}
            					break;
            				}
HXLINE( 754)				if (hx::IsEq( entry->usage,::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage_obj::SAMPLER_2D_ALPHA_dyn() )) {
HXLINE( 756)					{
HXLINE( 756)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 756)							sb->flush();
            						}
HXDLIN( 756)						if (hx::IsNull( sb->b )) {
HXLINE( 756)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_23,1);
            						}
            						else {
HXLINE( 756)							sb->b->push(HX_("sampler2D ",06,3c,4f,7c));
            						}
            					}
HXLINE( 757)					{
HXLINE( 757)						::String x = entry->name;
HXDLIN( 757)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 757)							sb->flush();
            						}
HXDLIN( 757)						if (hx::IsNull( sb->b )) {
HXLINE( 757)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 757)							::Array< ::String > sb1 = sb->b;
HXDLIN( 757)							sb1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 758)					{
HXLINE( 758)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 758)							sb->flush();
            						}
HXDLIN( 758)						if (hx::IsNull( sb->b )) {
HXLINE( 758)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_24,1);
            						}
            						else {
HXLINE( 758)							sb->b->push(HX_(";\n",6f,33,00,00));
            						}
            					}
HXLINE( 760)					{
HXLINE( 760)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 760)							sb->flush();
            						}
HXDLIN( 760)						if (hx::IsNull( sb->b )) {
HXLINE( 760)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_25,1);
            						}
            						else {
HXLINE( 760)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            					}
HXLINE( 761)					{
HXLINE( 761)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 761)							sb->flush();
            						}
HXDLIN( 761)						if (hx::IsNull( sb->b )) {
HXLINE( 761)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_26,1);
            						}
            						else {
HXLINE( 761)							sb->b->push(HX_("sampler2D ",06,3c,4f,7c));
            						}
            					}
HXLINE( 762)					{
HXLINE( 762)						::String x1 = (entry->name + HX_("_alpha",9f,ee,7d,1d));
HXDLIN( 762)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 762)							sb->flush();
            						}
HXDLIN( 762)						if (hx::IsNull( sb->b )) {
HXLINE( 762)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 762)							::Array< ::String > sb2 = sb->b;
HXDLIN( 762)							sb2->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 763)					{
HXLINE( 763)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 763)							sb->flush();
            						}
HXDLIN( 763)						if (hx::IsNull( sb->b )) {
HXLINE( 763)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_27,1);
            						}
            						else {
HXLINE( 763)							sb->b->push(HX_(";\n",6f,33,00,00));
            						}
            					}
HXLINE( 765)					{
HXLINE( 765)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 765)							sb->flush();
            						}
HXDLIN( 765)						if (hx::IsNull( sb->b )) {
HXLINE( 765)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_28,1);
            						}
            						else {
HXLINE( 765)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            					}
HXLINE( 766)					{
HXLINE( 766)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 766)							sb->flush();
            						}
HXDLIN( 766)						if (hx::IsNull( sb->b )) {
HXLINE( 766)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_29,1);
            						}
            						else {
HXLINE( 766)							sb->b->push(HX_("bool ",b6,20,f8,b6));
            						}
            					}
HXLINE( 767)					{
HXLINE( 767)						::String x2 = (entry->name + HX_("_alphaEnabled",a2,df,12,f4));
HXDLIN( 767)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 767)							sb->flush();
            						}
HXDLIN( 767)						if (hx::IsNull( sb->b )) {
HXLINE( 767)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 767)							::Array< ::String > sb3 = sb->b;
HXDLIN( 767)							sb3->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 768)					{
HXLINE( 768)						if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 768)							sb->flush();
            						}
HXDLIN( 768)						if (hx::IsNull( sb->b )) {
HXLINE( 768)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_30,1);
            						}
            						else {
HXLINE( 768)							sb->b->push(HX_(";\n",6f,33,00,00));
            						}
            					}
            				}
            				else {
HXLINE( 770)					if (hx::IsEq( entry->usage,::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage_obj::SAMPLER_CUBE_ALPHA_dyn() )) {
HXLINE( 772)						{
HXLINE( 772)							if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 772)								sb->flush();
            							}
HXDLIN( 772)							if (hx::IsNull( sb->b )) {
HXLINE( 772)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_31,1);
            							}
            							else {
HXLINE( 772)								sb->b->push(HX_("samplerCube ",63,87,00,86));
            							}
            						}
HXLINE( 773)						{
HXLINE( 773)							::String x3 = entry->name;
HXDLIN( 773)							if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 773)								sb->flush();
            							}
HXDLIN( 773)							if (hx::IsNull( sb->b )) {
HXLINE( 773)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            							}
            							else {
HXLINE( 773)								::Array< ::String > sb4 = sb->b;
HXDLIN( 773)								sb4->push(::Std_obj::string(x3));
            							}
            						}
HXLINE( 774)						{
HXLINE( 774)							if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 774)								sb->flush();
            							}
HXDLIN( 774)							if (hx::IsNull( sb->b )) {
HXLINE( 774)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_32,1);
            							}
            							else {
HXLINE( 774)								sb->b->push(HX_(";\n",6f,33,00,00));
            							}
            						}
HXLINE( 776)						{
HXLINE( 776)							if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 776)								sb->flush();
            							}
HXDLIN( 776)							if (hx::IsNull( sb->b )) {
HXLINE( 776)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_33,1);
            							}
            							else {
HXLINE( 776)								sb->b->push(HX_("uniform ",6c,cc,54,02));
            							}
            						}
HXLINE( 777)						{
HXLINE( 777)							if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 777)								sb->flush();
            							}
HXDLIN( 777)							if (hx::IsNull( sb->b )) {
HXLINE( 777)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_34,1);
            							}
            							else {
HXLINE( 777)								sb->b->push(HX_("samplerCube ",63,87,00,86));
            							}
            						}
HXLINE( 778)						{
HXLINE( 778)							::String x4 = (entry->name + HX_("_alpha",9f,ee,7d,1d));
HXDLIN( 778)							if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 778)								sb->flush();
            							}
HXDLIN( 778)							if (hx::IsNull( sb->b )) {
HXLINE( 778)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x4));
            							}
            							else {
HXLINE( 778)								::Array< ::String > sb5 = sb->b;
HXDLIN( 778)								sb5->push(::Std_obj::string(x4));
            							}
            						}
HXLINE( 779)						{
HXLINE( 779)							if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 779)								sb->flush();
            							}
HXDLIN( 779)							if (hx::IsNull( sb->b )) {
HXLINE( 779)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_35,1);
            							}
            							else {
HXLINE( 779)								sb->b->push(HX_(";\n",6f,33,00,00));
            							}
            						}
HXLINE( 781)						{
HXLINE( 781)							if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 781)								sb->flush();
            							}
HXDLIN( 781)							if (hx::IsNull( sb->b )) {
HXLINE( 781)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_36,1);
            							}
            							else {
HXLINE( 781)								sb->b->push(HX_("uniform ",6c,cc,54,02));
            							}
            						}
HXLINE( 782)						{
HXLINE( 782)							if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 782)								sb->flush();
            							}
HXDLIN( 782)							if (hx::IsNull( sb->b )) {
HXLINE( 782)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_37,1);
            							}
            							else {
HXLINE( 782)								sb->b->push(HX_("bool ",b6,20,f8,b6));
            							}
            						}
HXLINE( 783)						{
HXLINE( 783)							::String x5 = (entry->name + HX_("_alphaEnabled",a2,df,12,f4));
HXDLIN( 783)							if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 783)								sb->flush();
            							}
HXDLIN( 783)							if (hx::IsNull( sb->b )) {
HXLINE( 783)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x5));
            							}
            							else {
HXLINE( 783)								::Array< ::String > sb6 = sb->b;
HXDLIN( 783)								sb6->push(::Std_obj::string(x5));
            							}
            						}
HXLINE( 784)						{
HXLINE( 784)							if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 784)								sb->flush();
            							}
HXDLIN( 784)							if (hx::IsNull( sb->b )) {
HXLINE( 784)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_38,1);
            							}
            							else {
HXLINE( 784)								sb->b->push(HX_(";\n",6f,33,00,00));
            							}
            						}
            					}
            					else {
HXLINE( 786)						if (hx::IsEq( entry->usage,::openfl::_internal::formats::agal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn() )) {
HXLINE( 788)							{
HXLINE( 788)								::String x6 = (entry->name + HX_("[128]",21,60,00,86));
HXDLIN( 788)								if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 788)									sb->flush();
            								}
HXDLIN( 788)								if (hx::IsNull( sb->b )) {
HXLINE( 788)									sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x6));
            								}
            								else {
HXLINE( 788)									::Array< ::String > sb7 = sb->b;
HXDLIN( 788)									sb7->push(::Std_obj::string(x6));
            								}
            							}
HXLINE( 789)							{
HXLINE( 789)								if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 789)									sb->flush();
            								}
HXDLIN( 789)								if (hx::IsNull( sb->b )) {
HXLINE( 789)									sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_39,1);
            								}
            								else {
HXLINE( 789)									sb->b->push(HX_(";\n",6f,33,00,00));
            								}
            							}
            						}
            						else {
HXLINE( 793)							{
HXLINE( 793)								::String x7 = entry->name;
HXDLIN( 793)								if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 793)									sb->flush();
            								}
HXDLIN( 793)								if (hx::IsNull( sb->b )) {
HXLINE( 793)									sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x7));
            								}
            								else {
HXLINE( 793)									::Array< ::String > sb8 = sb->b;
HXDLIN( 793)									sb8->push(::Std_obj::string(x7));
            								}
            							}
HXLINE( 794)							{
HXLINE( 794)								if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 794)									sb->flush();
            								}
HXDLIN( 794)								if (hx::IsNull( sb->b )) {
HXLINE( 794)									sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_8a1844be_40,1);
            								}
            								else {
HXLINE( 794)									sb->b->push(HX_(";\n",6f,33,00,00));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 798)		return sb->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,toGLSL,return )


hx::ObjectPtr< RegisterMap_obj > RegisterMap_obj::__new() {
	hx::ObjectPtr< RegisterMap_obj > __this = new RegisterMap_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< RegisterMap_obj > RegisterMap_obj::__alloc(hx::Ctx *_hx_ctx) {
	RegisterMap_obj *__this = (RegisterMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RegisterMap_obj), true, "openfl._internal.formats.agal.RegisterMap"));
	*(void **)__this = RegisterMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RegisterMap_obj::RegisterMap_obj()
{
}

void RegisterMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegisterMap);
	HX_MARK_MEMBER_NAME(mEntries,"mEntries");
	HX_MARK_END_CLASS();
}

void RegisterMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mEntries,"mEntries");
}

hx::Val RegisterMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"addDR") ) { return hx::Val( addDR_dyn() ); }
		if (HX_FIELD_EQ(inName,"addSR") ) { return hx::Val( addSR_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addSaR") ) { return hx::Val( addSaR_dyn() ); }
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return hx::Val( toGLSL_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mEntries") ) { return hx::Val( mEntries ); }
		if (HX_FIELD_EQ(inName,"getUsage") ) { return hx::Val( getUsage_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getRegisterUsage") ) { return hx::Val( getRegisterUsage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RegisterMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mEntries") ) { mEntries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegisterMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mEntries",63,ec,2a,a1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo RegisterMap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(RegisterMap_obj,mEntries),HX_("mEntries",63,ec,2a,a1)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RegisterMap_obj_sStaticStorageInfo = 0;
#endif

static ::String RegisterMap_obj_sMemberFields[] = {
	HX_("mEntries",63,ec,2a,a1),
	HX_("add",21,f2,49,00),
	HX_("addDR",ef,b7,43,1c),
	HX_("addSaR",63,a8,08,9f),
	HX_("addSR",00,c5,43,1c),
	HX_("getRegisterUsage",48,c9,b8,09),
	HX_("getUsage",ab,6c,06,0a),
	HX_("toGLSL",f9,58,08,7a),
	::String(null()) };

hx::Class RegisterMap_obj::__mClass;

void RegisterMap_obj::__register()
{
	RegisterMap_obj _hx_dummy;
	RegisterMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.formats.agal.RegisterMap",be,44,18,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RegisterMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RegisterMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RegisterMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RegisterMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RegisterMap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_efafc00810297e67_591_boot)
HXDLIN( 591)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace agal
