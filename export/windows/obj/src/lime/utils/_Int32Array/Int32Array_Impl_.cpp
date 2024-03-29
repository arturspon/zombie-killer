// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__Int32Array_Int32Array_Impl_
#include <lime/utils/_Int32Array/Int32Array_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_120_subarray,"lime.utils._Int32Array.Int32Array_Impl_","subarray",0x0650d8e2,"lime.utils._Int32Array.Int32Array_Impl_.subarray","lime/utils/Int32Array.hx",120,0x9a557d3b)
HX_LOCAL_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_125_fromBytes,"lime.utils._Int32Array.Int32Array_Impl_","fromBytes",0x68e59db8,"lime.utils._Int32Array.Int32Array_Impl_.fromBytes","lime/utils/Int32Array.hx",125,0x9a557d3b)
HX_LOCAL_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_130_toBytes,"lime.utils._Int32Array.Int32Array_Impl_","toBytes",0xaed73c47,"lime.utils._Int32Array.Int32Array_Impl_.toBytes","lime/utils/Int32Array.hx",130,0x9a557d3b)
HX_LOCAL_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_135_get_length,"lime.utils._Int32Array.Int32Array_Impl_","get_length",0x84e00db8,"lime.utils._Int32Array.Int32Array_Impl_.get_length","lime/utils/Int32Array.hx",135,0x9a557d3b)
HX_LOCAL_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_153_toString,"lime.utils._Int32Array.Int32Array_Impl_","toString",0x373e5575,"lime.utils._Int32Array.Int32Array_Impl_.toString","lime/utils/Int32Array.hx",153,0x9a557d3b)
HX_LOCAL_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_84_boot,"lime.utils._Int32Array.Int32Array_Impl_","boot",0x1da4b07b,"lime.utils._Int32Array.Int32Array_Impl_.boot","lime/utils/Int32Array.hx",84,0x9a557d3b)
namespace lime{
namespace utils{
namespace _Int32Array{

void Int32Array_Impl__obj::__construct() { }

Dynamic Int32Array_Impl__obj::__CreateEmpty() { return new Int32Array_Impl__obj; }

void *Int32Array_Impl__obj::_hx_vtable = 0;

Dynamic Int32Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Int32Array_Impl__obj > _hx_result = new Int32Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Int32Array_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x304c4419;
}

int Int32Array_Impl__obj::BYTES_PER_ELEMENT;

 ::lime::utils::ArrayBufferView Int32Array_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_120_subarray)
HXDLIN( 120)		 ::Dynamic end1 = end;
HXDLIN( 120)		if (hx::IsNull( end1 )) {
HXDLIN( 120)			end1 = this1->length;
            		}
HXDLIN( 120)		int len = (( (int)(end1) ) - begin);
HXDLIN( 120)		int byte_offset = ((begin * this1->bytesPerElement) + this1->byteOffset);
HXDLIN( 120)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 120)		switch((int)(this1->type)){
            			case (int)0: {
HXDLIN( 120)				HX_STACK_DO_THROW(HX_("subarray on a blank ArrayBufferView",39,87,fd,19));
            			}
            			break;
            			case (int)1: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 120)				if (hx::IsNotNull( buffer )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 120)					int in_byteOffset = byte_offset;
HXDLIN( 120)					if ((in_byteOffset < 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength = buffer->length;
HXDLIN( 120)					int elementSize = _this->bytesPerElement;
HXDLIN( 120)					int newByteLength = bufferByteLength;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength < 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength = (len * _this->bytesPerElement);
HXDLIN( 120)						int newRange = (in_byteOffset + newByteLength);
HXDLIN( 120)						if ((newRange > bufferByteLength)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this->buffer = buffer;
HXDLIN( 120)					_this->byteOffset = in_byteOffset;
HXDLIN( 120)					_this->byteLength = newByteLength;
HXDLIN( 120)					_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 120)					this2 = _this;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int8Array",40,53,da,77));
            				}
HXDLIN( 120)				view = this2;
            			}
            			break;
            			case (int)2: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer1 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this3;
HXDLIN( 120)				if (hx::IsNotNull( buffer1 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 120)					int in_byteOffset1 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset1 < 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset1,_this1->bytesPerElement) != 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength1 = buffer1->length;
HXDLIN( 120)					int elementSize1 = _this1->bytesPerElement;
HXDLIN( 120)					int newByteLength1 = bufferByteLength1;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength1 = (bufferByteLength1 - in_byteOffset1);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength1,_this1->bytesPerElement) != 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength1 < 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength1 = (len * _this1->bytesPerElement);
HXDLIN( 120)						int newRange1 = (in_byteOffset1 + newByteLength1);
HXDLIN( 120)						if ((newRange1 > bufferByteLength1)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this1->buffer = buffer1;
HXDLIN( 120)					_this1->byteOffset = in_byteOffset1;
HXDLIN( 120)					_this1->byteLength = newByteLength1;
HXDLIN( 120)					_this1->length = ::Std_obj::_hx_int((( (Float)(newByteLength1) ) / ( (Float)(_this1->bytesPerElement) )));
HXDLIN( 120)					this3 = _this1;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7));
            				}
HXDLIN( 120)				view = this3;
            			}
            			break;
            			case (int)3: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer2 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this4;
HXDLIN( 120)				if (hx::IsNotNull( buffer2 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 120)					int in_byteOffset2 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset2 < 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset2,_this2->bytesPerElement) != 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength2 = buffer2->length;
HXDLIN( 120)					int elementSize2 = _this2->bytesPerElement;
HXDLIN( 120)					int newByteLength2 = bufferByteLength2;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength2 = (bufferByteLength2 - in_byteOffset2);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength2,_this2->bytesPerElement) != 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength2 < 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength2 = (len * _this2->bytesPerElement);
HXDLIN( 120)						int newRange2 = (in_byteOffset2 + newByteLength2);
HXDLIN( 120)						if ((newRange2 > bufferByteLength2)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this2->buffer = buffer2;
HXDLIN( 120)					_this2->byteOffset = in_byteOffset2;
HXDLIN( 120)					_this2->byteLength = newByteLength2;
HXDLIN( 120)					_this2->length = ::Std_obj::_hx_int((( (Float)(newByteLength2) ) / ( (Float)(_this2->bytesPerElement) )));
HXDLIN( 120)					this4 = _this2;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61));
            				}
HXDLIN( 120)				view = this4;
            			}
            			break;
            			case (int)4: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer3 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this5;
HXDLIN( 120)				if (hx::IsNotNull( buffer3 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this3 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 120)					int in_byteOffset3 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset3 < 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset3,_this3->bytesPerElement) != 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength3 = buffer3->length;
HXDLIN( 120)					int elementSize3 = _this3->bytesPerElement;
HXDLIN( 120)					int newByteLength3 = bufferByteLength3;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength3 = (bufferByteLength3 - in_byteOffset3);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength3,_this3->bytesPerElement) != 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength3 < 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength3 = (len * _this3->bytesPerElement);
HXDLIN( 120)						int newRange3 = (in_byteOffset3 + newByteLength3);
HXDLIN( 120)						if ((newRange3 > bufferByteLength3)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this3->buffer = buffer3;
HXDLIN( 120)					_this3->byteOffset = in_byteOffset3;
HXDLIN( 120)					_this3->byteLength = newByteLength3;
HXDLIN( 120)					_this3->length = ::Std_obj::_hx_int((( (Float)(newByteLength3) ) / ( (Float)(_this3->bytesPerElement) )));
HXDLIN( 120)					this5 = _this3;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            				}
HXDLIN( 120)				view = this5;
            			}
            			break;
            			case (int)5: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer4 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this6;
HXDLIN( 120)				if (hx::IsNotNull( buffer4 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this4 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 120)					int in_byteOffset4 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset4 < 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset4,_this4->bytesPerElement) != 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength4 = buffer4->length;
HXDLIN( 120)					int elementSize4 = _this4->bytesPerElement;
HXDLIN( 120)					int newByteLength4 = bufferByteLength4;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength4 = (bufferByteLength4 - in_byteOffset4);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength4,_this4->bytesPerElement) != 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength4 < 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength4 = (len * _this4->bytesPerElement);
HXDLIN( 120)						int newRange4 = (in_byteOffset4 + newByteLength4);
HXDLIN( 120)						if ((newRange4 > bufferByteLength4)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this4->buffer = buffer4;
HXDLIN( 120)					_this4->byteOffset = in_byteOffset4;
HXDLIN( 120)					_this4->byteLength = newByteLength4;
HXDLIN( 120)					_this4->length = ::Std_obj::_hx_int((( (Float)(newByteLength4) ) / ( (Float)(_this4->bytesPerElement) )));
HXDLIN( 120)					this6 = _this4;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13));
            				}
HXDLIN( 120)				view = this6;
            			}
            			break;
            			case (int)6: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer5 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this7;
HXDLIN( 120)				if (hx::IsNotNull( buffer5 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this5 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 120)					int in_byteOffset5 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset5 < 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset5,_this5->bytesPerElement) != 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength5 = buffer5->length;
HXDLIN( 120)					int elementSize5 = _this5->bytesPerElement;
HXDLIN( 120)					int newByteLength5 = bufferByteLength5;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength5 = (bufferByteLength5 - in_byteOffset5);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength5,_this5->bytesPerElement) != 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength5 < 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength5 = (len * _this5->bytesPerElement);
HXDLIN( 120)						int newRange5 = (in_byteOffset5 + newByteLength5);
HXDLIN( 120)						if ((newRange5 > bufferByteLength5)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this5->buffer = buffer5;
HXDLIN( 120)					_this5->byteOffset = in_byteOffset5;
HXDLIN( 120)					_this5->byteLength = newByteLength5;
HXDLIN( 120)					_this5->length = ::Std_obj::_hx_int((( (Float)(newByteLength5) ) / ( (Float)(_this5->bytesPerElement) )));
HXDLIN( 120)					this7 = _this5;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5));
            				}
HXDLIN( 120)				view = this7;
            			}
            			break;
            			case (int)7: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer6 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this8;
HXDLIN( 120)				if (hx::IsNotNull( buffer6 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this6 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 120)					int in_byteOffset6 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset6 < 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset6,_this6->bytesPerElement) != 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength6 = buffer6->length;
HXDLIN( 120)					int elementSize6 = _this6->bytesPerElement;
HXDLIN( 120)					int newByteLength6 = bufferByteLength6;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength6 = (bufferByteLength6 - in_byteOffset6);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength6,_this6->bytesPerElement) != 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength6 < 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength6 = (len * _this6->bytesPerElement);
HXDLIN( 120)						int newRange6 = (in_byteOffset6 + newByteLength6);
HXDLIN( 120)						if ((newRange6 > bufferByteLength6)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this6->buffer = buffer6;
HXDLIN( 120)					_this6->byteOffset = in_byteOffset6;
HXDLIN( 120)					_this6->byteLength = newByteLength6;
HXDLIN( 120)					_this6->length = ::Std_obj::_hx_int((( (Float)(newByteLength6) ) / ( (Float)(_this6->bytesPerElement) )));
HXDLIN( 120)					this8 = _this6;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e));
            				}
HXDLIN( 120)				view = this8;
            			}
            			break;
            			case (int)8: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer7 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this9;
HXDLIN( 120)				if (hx::IsNotNull( buffer7 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this7 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 120)					int in_byteOffset7 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset7 < 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset7,_this7->bytesPerElement) != 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength7 = buffer7->length;
HXDLIN( 120)					int elementSize7 = _this7->bytesPerElement;
HXDLIN( 120)					int newByteLength7 = bufferByteLength7;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength7 = (bufferByteLength7 - in_byteOffset7);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength7,_this7->bytesPerElement) != 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength7 < 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength7 = (len * _this7->bytesPerElement);
HXDLIN( 120)						int newRange7 = (in_byteOffset7 + newByteLength7);
HXDLIN( 120)						if ((newRange7 > bufferByteLength7)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this7->buffer = buffer7;
HXDLIN( 120)					_this7->byteOffset = in_byteOffset7;
HXDLIN( 120)					_this7->byteLength = newByteLength7;
HXDLIN( 120)					_this7->length = ::Std_obj::_hx_int((( (Float)(newByteLength7) ) / ( (Float)(_this7->bytesPerElement) )));
HXDLIN( 120)					this9 = _this7;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4));
            				}
HXDLIN( 120)				view = this9;
            			}
            			break;
            			case (int)9: {
HXDLIN( 120)				 ::haxe::io::Bytes buffer8 = this1->buffer;
HXDLIN( 120)				 ::lime::utils::ArrayBufferView this10;
HXDLIN( 120)				if (hx::IsNotNull( buffer8 )) {
HXDLIN( 120)					 ::lime::utils::ArrayBufferView _this8 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 120)					int in_byteOffset8 = byte_offset;
HXDLIN( 120)					if ((in_byteOffset8 < 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					if ((hx::Mod(in_byteOffset8,_this8->bytesPerElement) != 0)) {
HXDLIN( 120)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 120)					int bufferByteLength8 = buffer8->length;
HXDLIN( 120)					int elementSize8 = _this8->bytesPerElement;
HXDLIN( 120)					int newByteLength8 = bufferByteLength8;
HXDLIN( 120)					if (hx::IsNull( len )) {
HXDLIN( 120)						newByteLength8 = (bufferByteLength8 - in_byteOffset8);
HXDLIN( 120)						if ((hx::Mod(bufferByteLength8,_this8->bytesPerElement) != 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN( 120)						if ((newByteLength8 < 0)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXDLIN( 120)						newByteLength8 = (len * _this8->bytesPerElement);
HXDLIN( 120)						int newRange8 = (in_byteOffset8 + newByteLength8);
HXDLIN( 120)						if ((newRange8 > bufferByteLength8)) {
HXDLIN( 120)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN( 120)					_this8->buffer = buffer8;
HXDLIN( 120)					_this8->byteOffset = in_byteOffset8;
HXDLIN( 120)					_this8->byteLength = newByteLength8;
HXDLIN( 120)					_this8->length = ::Std_obj::_hx_int((( (Float)(newByteLength8) ) / ( (Float)(_this8->bytesPerElement) )));
HXDLIN( 120)					this10 = _this8;
            				}
            				else {
HXDLIN( 120)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e));
            				}
HXDLIN( 120)				view = this10;
            			}
            			break;
            		}
HXDLIN( 120)		return view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int32Array_Impl__obj,subarray,return )

 ::lime::utils::ArrayBufferView Int32Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes, ::Dynamic __o_byteOffset, ::Dynamic len){
            		 ::Dynamic byteOffset = __o_byteOffset;
            		if (hx::IsNull(__o_byteOffset)) byteOffset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_125_fromBytes)
HXDLIN( 125)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 125)		if (hx::IsNotNull( bytes )) {
HXDLIN( 125)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 125)			int in_byteOffset = ( (int)(byteOffset) );
HXDLIN( 125)			if ((in_byteOffset < 0)) {
HXDLIN( 125)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 125)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 125)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 125)			int bufferByteLength = bytes->length;
HXDLIN( 125)			int elementSize = _this->bytesPerElement;
HXDLIN( 125)			int newByteLength = bufferByteLength;
HXDLIN( 125)			if (hx::IsNull( len )) {
HXDLIN( 125)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 125)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 125)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 125)				if ((newByteLength < 0)) {
HXDLIN( 125)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
            			else {
HXDLIN( 125)				newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 125)				int newRange = (in_byteOffset + newByteLength);
HXDLIN( 125)				if ((newRange > bufferByteLength)) {
HXDLIN( 125)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 125)			_this->buffer = bytes;
HXDLIN( 125)			_this->byteOffset = in_byteOffset;
HXDLIN( 125)			_this->byteLength = newByteLength;
HXDLIN( 125)			_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 125)			this1 = _this;
            		}
            		else {
HXDLIN( 125)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61));
            		}
HXDLIN( 125)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int32Array_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes Int32Array_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_130_toBytes)
HXDLIN( 130)		return this1->buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32Array_Impl__obj,toBytes,return )

int Int32Array_Impl__obj::get_length( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_135_get_length)
HXDLIN( 135)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32Array_Impl__obj,get_length,return )

::String Int32Array_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_153_toString)
HXDLIN( 153)		if (hx::IsNotNull( this1 )) {
HXDLIN( 153)			return ((((HX_("Int32Array [byteLength:",a6,a7,b7,bd) + this1->byteLength) + HX_(", length:",a0,04,67,ef)) + this1->length) + HX_("]",5d,00,00,00));
            		}
            		else {
HXDLIN( 153)			return null();
            		}
HXDLIN( 153)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32Array_Impl__obj,toString,return )


Int32Array_Impl__obj::Int32Array_Impl__obj()
{
}

bool Int32Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { outValue = subarray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Int32Array_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Int32Array_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Int32Array_Impl__obj::BYTES_PER_ELEMENT,HX_("BYTES_PER_ELEMENT",a6,04,1d,cc)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Int32Array_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int32Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Int32Array_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int32Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class Int32Array_Impl__obj::__mClass;

static ::String Int32Array_Impl__obj_sStaticFields[] = {
	HX_("BYTES_PER_ELEMENT",a6,04,1d,cc),
	HX_("subarray",19,54,81,07),
	HX_("fromBytes",a1,f2,20,72),
	HX_("toBytes",f0,54,1c,8a),
	HX_("get_length",af,04,8f,8f),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Int32Array_Impl__obj::__register()
{
	Int32Array_Impl__obj _hx_dummy;
	Int32Array_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("lime.utils._Int32Array.Int32Array_Impl_",c5,98,8c,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int32Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Int32Array_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Int32Array_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Int32Array_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Int32Array_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Int32Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Int32Array_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Int32Array_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_84_boot)
HXDLIN(  84)		BYTES_PER_ELEMENT = 4;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace _Int32Array
