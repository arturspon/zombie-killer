// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DBuffer
#include <openfl/_internal/renderer/context3D/Context3DBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DElementType
#include <openfl/_internal/renderer/context3D/Context3DElementType.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b4e1347513889d4b_29_new,"openfl._internal.renderer.context3D.Context3DBuffer","new",0xe3fe3309,"openfl._internal.renderer.context3D.Context3DBuffer.new","openfl/_internal/renderer/context3D/Context3DBuffer.hx",29,0x815d61c7)
HX_LOCAL_STACK_FRAME(_hx_pos_b4e1347513889d4b_41_drawElements,"openfl._internal.renderer.context3D.Context3DBuffer","drawElements",0x23da4292,"openfl._internal.renderer.context3D.Context3DBuffer.drawElements","openfl/_internal/renderer/context3D/Context3DBuffer.hx",41,0x815d61c7)
HX_LOCAL_STACK_FRAME(_hx_pos_b4e1347513889d4b_76_flushVertexBufferData,"openfl._internal.renderer.context3D.Context3DBuffer","flushVertexBufferData",0x10028b9b,"openfl._internal.renderer.context3D.Context3DBuffer.flushVertexBufferData","openfl/_internal/renderer/context3D/Context3DBuffer.hx",76,0x815d61c7)
HX_LOCAL_STACK_FRAME(_hx_pos_b4e1347513889d4b_87_resize,"openfl._internal.renderer.context3D.Context3DBuffer","resize",0x81af46eb,"openfl._internal.renderer.context3D.Context3DBuffer.resize","openfl/_internal/renderer/context3D/Context3DBuffer.hx",87,0x815d61c7)
HX_LOCAL_STACK_FRAME(_hx_pos_b4e1347513889d4b_10_boot,"openfl._internal.renderer.context3D.Context3DBuffer","boot",0x92877569,"openfl._internal.renderer.context3D.Context3DBuffer.boot","openfl/_internal/renderer/context3D/Context3DBuffer.hx",10,0x815d61c7)
HX_LOCAL_STACK_FRAME(_hx_pos_b4e1347513889d4b_12_boot,"openfl._internal.renderer.context3D.Context3DBuffer","boot",0x92877569,"openfl._internal.renderer.context3D.Context3DBuffer.boot","openfl/_internal/renderer/context3D/Context3DBuffer.hx",12,0x815d61c7)
HX_LOCAL_STACK_FRAME(_hx_pos_b4e1347513889d4b_13_boot,"openfl._internal.renderer.context3D.Context3DBuffer","boot",0x92877569,"openfl._internal.renderer.context3D.Context3DBuffer.boot","openfl/_internal/renderer/context3D/Context3DBuffer.hx",13,0x815d61c7)
HX_LOCAL_STACK_FRAME(_hx_pos_b4e1347513889d4b_14_boot,"openfl._internal.renderer.context3D.Context3DBuffer","boot",0x92877569,"openfl._internal.renderer.context3D.Context3DBuffer.boot","openfl/_internal/renderer/context3D/Context3DBuffer.hx",14,0x815d61c7)
namespace openfl{
namespace _internal{
namespace renderer{
namespace context3D{

void Context3DBuffer_obj::__construct( ::openfl::display3D::Context3D context3D, ::openfl::_internal::renderer::context3D::Context3DElementType elementType,int elementCount,int dataPerVertex){
            	HX_STACKFRAME(&_hx_pos_b4e1347513889d4b_29_new)
HXLINE(  30)		this->context3D = context3D;
HXLINE(  31)		this->elementType = elementType;
HXLINE(  32)		this->dataPerVertex = dataPerVertex;
HXLINE(  34)		this->indexCount = 0;
HXLINE(  35)		this->vertexCount = 0;
HXLINE(  37)		this->resize(elementCount,null());
            	}

Dynamic Context3DBuffer_obj::__CreateEmpty() { return new Context3DBuffer_obj; }

void *Context3DBuffer_obj::_hx_vtable = 0;

Dynamic Context3DBuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DBuffer_obj > _hx_result = new Context3DBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Context3DBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x724bdb5b;
}

void Context3DBuffer_obj::drawElements(int start,hx::Null< int >  __o_length){
            		int length = __o_length.Default(-1);
            	HX_STACKFRAME(&_hx_pos_b4e1347513889d4b_41_drawElements)
HXLINE(  42)		bool _hx_tmp;
HXDLIN(  42)		if ((this->indexCount != 0)) {
HXLINE(  42)			_hx_tmp = (this->vertexCount == 0);
            		}
            		else {
HXLINE(  42)			_hx_tmp = true;
            		}
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  42)			return;
            		}
HXLINE(  44)		if ((this->elementType->_hx_getIndex() == 0)) {
HXLINE(  47)			if ((length == -1)) {
HXLINE(  47)				length = (this->elementCount * 2);
            			}
HXLINE(  49)			bool _hx_tmp1;
HXDLIN(  49)			if ((start < 10922)) {
HXLINE(  49)				_hx_tmp1 = ((length - start) < 10922);
            			}
            			else {
HXLINE(  49)				_hx_tmp1 = false;
            			}
HXDLIN(  49)			if (_hx_tmp1) {
HXLINE(  51)				this->context3D->drawTriangles(this->indexBuffers->__get(0).StaticCast<  ::openfl::display3D::IndexBuffer3D >(),start,(length * 2));
            			}
            			else {
HXLINE(  55)				int end = (start + length);
HXLINE(  57)				while((start < end)){
HXLINE(  59)					int arrayBufferIndex = ::Math_obj::floor((( (Float)(start) ) / ( (Float)(10922) )));
HXLINE(  61)					length = ::Std_obj::_hx_int(::Math_obj::min(( (Float)((end - start)) ),( (Float)(10922) )));
HXLINE(  62)					if ((length <= 0)) {
HXLINE(  62)						goto _hx_goto_1;
            					}
HXLINE(  66)					this->context3D->drawTriangles(this->indexBuffers->__get(arrayBufferIndex).StaticCast<  ::openfl::display3D::IndexBuffer3D >(),((start - (arrayBufferIndex * 10922)) * 3),(length * 2));
HXLINE(  67)					start = (start + length);
            				}
            				_hx_goto_1:;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Context3DBuffer_obj,drawElements,(void))

void Context3DBuffer_obj::flushVertexBufferData(){
            	HX_STACKFRAME(&_hx_pos_b4e1347513889d4b_76_flushVertexBufferData)
HXLINE(  77)		if ((this->vertexBufferData->length > this->vertexCount)) {
HXLINE(  79)			this->vertexCount = this->vertexBufferData->length;
HXLINE(  80)			this->vertexBuffer = this->context3D->createVertexBuffer(this->vertexCount,this->dataPerVertex,0);
            		}
HXLINE(  83)		this->vertexBuffer->uploadFromTypedArray(this->vertexBufferData,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Context3DBuffer_obj,flushVertexBufferData,(void))

void Context3DBuffer_obj::resize(int elementCount,hx::Null< int >  __o_dataPerVertex){
            		int dataPerVertex = __o_dataPerVertex.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_b4e1347513889d4b_87_resize)
HXLINE(  88)		this->elementCount = elementCount;
HXLINE(  90)		if ((dataPerVertex == -1)) {
HXLINE(  90)			dataPerVertex = this->dataPerVertex;
            		}
HXLINE(  92)		if ((dataPerVertex != this->dataPerVertex)) {
HXLINE(  94)			this->vertexBuffer = null();
HXLINE(  95)			this->vertexCount = 0;
HXLINE(  97)			this->dataPerVertex = dataPerVertex;
            		}
HXLINE( 100)		int numVertices = 0;
HXLINE( 102)		switch((int)(this->elementType->_hx_getIndex())){
            			case (int)0: {
HXLINE( 105)				numVertices = (elementCount * 4);
            			}
            			break;
            			case (int)1: {
HXLINE( 108)				numVertices = (elementCount * 3);
            			}
            			break;
            			case (int)2: {
HXLINE( 112)				numVertices = (elementCount * 3);
            			}
            			break;
            		}
HXLINE( 117)		int vertexLength = (numVertices * dataPerVertex);
HXLINE( 120)		if (hx::IsNull( this->vertexBufferData )) {
HXLINE( 122)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 122)			if (hx::IsNotNull( vertexLength )) {
HXLINE( 122)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,vertexLength,8);
            			}
            			else {
HXLINE( 122)				HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4));
            			}
HXDLIN( 122)			this->vertexBufferData = this1;
            		}
            		else {
HXLINE( 124)			if ((vertexLength > this->vertexBufferData->length)) {
HXLINE( 126)				 ::lime::utils::ArrayBufferView cacheBufferData = this->vertexBufferData;
HXLINE( 127)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 127)				if (hx::IsNotNull( vertexLength )) {
HXLINE( 127)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,vertexLength,8);
            				}
            				else {
HXLINE( 127)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4));
            				}
HXDLIN( 127)				this->vertexBufferData = this2;
HXLINE( 128)				{
HXLINE( 128)					 ::lime::utils::ArrayBufferView _this = this->vertexBufferData;
HXDLIN( 128)					int offset = 0;
HXDLIN( 128)					if (hx::IsNotNull( cacheBufferData )) {
HXLINE( 128)						_this->buffer->blit((offset * _this->bytesPerElement),cacheBufferData->buffer,cacheBufferData->byteOffset,cacheBufferData->byteLength);
            					}
            					else {
HXLINE( 128)						HX_STACK_DO_THROW(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Context3DBuffer_obj,resize,(void))

int Context3DBuffer_obj::MAX_INDEX_BUFFER_LENGTH;

int Context3DBuffer_obj::MAX_QUADS_PER_INDEX_BUFFER;

int Context3DBuffer_obj::MAX_QUAD_INDEX_BUFFER_LENGTH;


hx::ObjectPtr< Context3DBuffer_obj > Context3DBuffer_obj::__new( ::openfl::display3D::Context3D context3D, ::openfl::_internal::renderer::context3D::Context3DElementType elementType,int elementCount,int dataPerVertex) {
	hx::ObjectPtr< Context3DBuffer_obj > __this = new Context3DBuffer_obj();
	__this->__construct(context3D,elementType,elementCount,dataPerVertex);
	return __this;
}

hx::ObjectPtr< Context3DBuffer_obj > Context3DBuffer_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context3D, ::openfl::_internal::renderer::context3D::Context3DElementType elementType,int elementCount,int dataPerVertex) {
	Context3DBuffer_obj *__this = (Context3DBuffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Context3DBuffer_obj), true, "openfl._internal.renderer.context3D.Context3DBuffer"));
	*(void **)__this = Context3DBuffer_obj::_hx_vtable;
	__this->__construct(context3D,elementType,elementCount,dataPerVertex);
	return __this;
}

Context3DBuffer_obj::Context3DBuffer_obj()
{
}

void Context3DBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DBuffer);
	HX_MARK_MEMBER_NAME(dataPerVertex,"dataPerVertex");
	HX_MARK_MEMBER_NAME(elementCount,"elementCount");
	HX_MARK_MEMBER_NAME(elementType,"elementType");
	HX_MARK_MEMBER_NAME(indexBufferData,"indexBufferData");
	HX_MARK_MEMBER_NAME(indexBuffers,"indexBuffers");
	HX_MARK_MEMBER_NAME(indexCount,"indexCount");
	HX_MARK_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_MARK_MEMBER_NAME(vertexBufferData,"vertexBufferData");
	HX_MARK_MEMBER_NAME(vertexCount,"vertexCount");
	HX_MARK_MEMBER_NAME(context3D,"context3D");
	HX_MARK_END_CLASS();
}

void Context3DBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dataPerVertex,"dataPerVertex");
	HX_VISIT_MEMBER_NAME(elementCount,"elementCount");
	HX_VISIT_MEMBER_NAME(elementType,"elementType");
	HX_VISIT_MEMBER_NAME(indexBufferData,"indexBufferData");
	HX_VISIT_MEMBER_NAME(indexBuffers,"indexBuffers");
	HX_VISIT_MEMBER_NAME(indexCount,"indexCount");
	HX_VISIT_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_VISIT_MEMBER_NAME(vertexBufferData,"vertexBufferData");
	HX_VISIT_MEMBER_NAME(vertexCount,"vertexCount");
	HX_VISIT_MEMBER_NAME(context3D,"context3D");
}

hx::Val Context3DBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { return hx::Val( context3D ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"indexCount") ) { return hx::Val( indexCount ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elementType") ) { return hx::Val( elementType ); }
		if (HX_FIELD_EQ(inName,"vertexCount") ) { return hx::Val( vertexCount ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elementCount") ) { return hx::Val( elementCount ); }
		if (HX_FIELD_EQ(inName,"indexBuffers") ) { return hx::Val( indexBuffers ); }
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { return hx::Val( vertexBuffer ); }
		if (HX_FIELD_EQ(inName,"drawElements") ) { return hx::Val( drawElements_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dataPerVertex") ) { return hx::Val( dataPerVertex ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indexBufferData") ) { return hx::Val( indexBufferData ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"vertexBufferData") ) { return hx::Val( vertexBufferData ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"flushVertexBufferData") ) { return hx::Val( flushVertexBufferData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Context3DBuffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { context3D=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"indexCount") ) { indexCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elementType") ) { elementType=inValue.Cast<  ::openfl::_internal::renderer::context3D::Context3DElementType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexCount") ) { vertexCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elementCount") ) { elementCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffers") ) { indexBuffers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { vertexBuffer=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dataPerVertex") ) { dataPerVertex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indexBufferData") ) { indexBufferData=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"vertexBufferData") ) { vertexBufferData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dataPerVertex",97,9c,7c,40));
	outFields->push(HX_("elementCount",73,1c,9d,aa));
	outFields->push(HX_("elementType",96,db,7a,f0));
	outFields->push(HX_("indexBufferData",fc,a8,cc,e3));
	outFields->push(HX_("indexBuffers",81,96,f2,fb));
	outFields->push(HX_("indexCount",5d,b8,56,1a));
	outFields->push(HX_("vertexBuffer",84,af,a9,70));
	outFields->push(HX_("vertexBufferData",ce,43,ce,c6));
	outFields->push(HX_("vertexCount",cb,0e,9f,5e));
	outFields->push(HX_("context3D",60,5c,fc,16));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Context3DBuffer_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Context3DBuffer_obj,dataPerVertex),HX_("dataPerVertex",97,9c,7c,40)},
	{hx::fsInt,(int)offsetof(Context3DBuffer_obj,elementCount),HX_("elementCount",73,1c,9d,aa)},
	{hx::fsObject /*  ::openfl::_internal::renderer::context3D::Context3DElementType */ ,(int)offsetof(Context3DBuffer_obj,elementType),HX_("elementType",96,db,7a,f0)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Context3DBuffer_obj,indexBufferData),HX_("indexBufferData",fc,a8,cc,e3)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Context3DBuffer_obj,indexBuffers),HX_("indexBuffers",81,96,f2,fb)},
	{hx::fsInt,(int)offsetof(Context3DBuffer_obj,indexCount),HX_("indexCount",5d,b8,56,1a)},
	{hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(Context3DBuffer_obj,vertexBuffer),HX_("vertexBuffer",84,af,a9,70)},
	{hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Context3DBuffer_obj,vertexBufferData),HX_("vertexBufferData",ce,43,ce,c6)},
	{hx::fsInt,(int)offsetof(Context3DBuffer_obj,vertexCount),HX_("vertexCount",cb,0e,9f,5e)},
	{hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(Context3DBuffer_obj,context3D),HX_("context3D",60,5c,fc,16)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Context3DBuffer_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Context3DBuffer_obj::MAX_INDEX_BUFFER_LENGTH,HX_("MAX_INDEX_BUFFER_LENGTH",bd,e7,c1,80)},
	{hx::fsInt,(void *) &Context3DBuffer_obj::MAX_QUADS_PER_INDEX_BUFFER,HX_("MAX_QUADS_PER_INDEX_BUFFER",bd,42,19,d5)},
	{hx::fsInt,(void *) &Context3DBuffer_obj::MAX_QUAD_INDEX_BUFFER_LENGTH,HX_("MAX_QUAD_INDEX_BUFFER_LENGTH",db,1b,df,33)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Context3DBuffer_obj_sMemberFields[] = {
	HX_("dataPerVertex",97,9c,7c,40),
	HX_("elementCount",73,1c,9d,aa),
	HX_("elementType",96,db,7a,f0),
	HX_("indexBufferData",fc,a8,cc,e3),
	HX_("indexBuffers",81,96,f2,fb),
	HX_("indexCount",5d,b8,56,1a),
	HX_("vertexBuffer",84,af,a9,70),
	HX_("vertexBufferData",ce,43,ce,c6),
	HX_("vertexCount",cb,0e,9f,5e),
	HX_("context3D",60,5c,fc,16),
	HX_("drawElements",5b,c2,b7,59),
	HX_("flushVertexBufferData",b2,4a,75,a2),
	HX_("resize",f4,59,7b,08),
	::String(null()) };

static void Context3DBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DBuffer_obj::MAX_INDEX_BUFFER_LENGTH,"MAX_INDEX_BUFFER_LENGTH");
	HX_MARK_MEMBER_NAME(Context3DBuffer_obj::MAX_QUADS_PER_INDEX_BUFFER,"MAX_QUADS_PER_INDEX_BUFFER");
	HX_MARK_MEMBER_NAME(Context3DBuffer_obj::MAX_QUAD_INDEX_BUFFER_LENGTH,"MAX_QUAD_INDEX_BUFFER_LENGTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DBuffer_obj::MAX_INDEX_BUFFER_LENGTH,"MAX_INDEX_BUFFER_LENGTH");
	HX_VISIT_MEMBER_NAME(Context3DBuffer_obj::MAX_QUADS_PER_INDEX_BUFFER,"MAX_QUADS_PER_INDEX_BUFFER");
	HX_VISIT_MEMBER_NAME(Context3DBuffer_obj::MAX_QUAD_INDEX_BUFFER_LENGTH,"MAX_QUAD_INDEX_BUFFER_LENGTH");
};

#endif

hx::Class Context3DBuffer_obj::__mClass;

static ::String Context3DBuffer_obj_sStaticFields[] = {
	HX_("MAX_INDEX_BUFFER_LENGTH",bd,e7,c1,80),
	HX_("MAX_QUADS_PER_INDEX_BUFFER",bd,42,19,d5),
	HX_("MAX_QUAD_INDEX_BUFFER_LENGTH",db,1b,df,33),
	::String(null())
};

void Context3DBuffer_obj::__register()
{
	Context3DBuffer_obj _hx_dummy;
	Context3DBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer.context3D.Context3DBuffer",97,fa,3b,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DBuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DBuffer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Context3DBuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Context3DBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DBuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DBuffer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b4e1347513889d4b_10_boot)
HXDLIN(  10)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4e1347513889d4b_12_boot)
HXDLIN(  12)		MAX_INDEX_BUFFER_LENGTH = 65535;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4e1347513889d4b_13_boot)
HXDLIN(  13)		MAX_QUADS_PER_INDEX_BUFFER = 10922;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4e1347513889d4b_14_boot)
HXDLIN(  14)		MAX_QUAD_INDEX_BUFFER_LENGTH = 65532;
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace context3D