// Generated by Haxe 4.0.0-rc.2+77068e10c
#include <hxcpp.h>

#ifndef INCLUDED_5f5af744d9ff5693
#define INCLUDED_5f5af744d9ff5693
#include "cpp/Pointer.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_45_urlEncode,"StringTools","urlEncode",0x06afdce1,"StringTools.urlEncode","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",45,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_115_urlDecode,"StringTools","urlDecode",0x71b947f9,"StringTools.urlDecode","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",115,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_153_htmlEscape,"StringTools","htmlEscape",0x0e1a5dd0,"StringTools.htmlEscape","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",153,0xb9dbeb2d)
static const ::String _hx_array_data_0363db6a_4[] = {
	HX_("&quot;",2c,d9,81,8f),
};
static const ::String _hx_array_data_0363db6a_5[] = {
	HX_("&amp;",dd,d4,aa,21),
};
static const ::String _hx_array_data_0363db6a_6[] = {
	HX_("&#039;",62,26,77,78),
};
static const ::String _hx_array_data_0363db6a_7[] = {
	HX_("&lt;",4d,74,70,19),
};
static const ::String _hx_array_data_0363db6a_8[] = {
	HX_("&gt;",08,a9,6c,19),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_193_startsWith,"StringTools","startsWith",0x5f4e6efb,"StringTools.startsWith","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",193,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_223_endsWith,"StringTools","endsWith",0x0eb5bfe2,"StringTools.endsWith","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",223,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_259_isSpace,"StringTools","isSpace",0xe0290778,"StringTools.isSpace","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",259,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_276_ltrim,"StringTools","ltrim",0x24d2234a,"StringTools.ltrim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",276,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_301_rtrim,"StringTools","rtrim",0x99399e50,"StringTools.rtrim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",301,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_329_trim,"StringTools","trim",0x2908d066,"StringTools.trim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",329,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_345_lpad,"StringTools","lpad",0x23bd8feb,"StringTools.lpad","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",345,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_404_replace,"StringTools","replace",0x6d651f30,"StringTools.replace","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",404,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_414_hex,"StringTools","hex",0xd91debd7,"StringTools.hex","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",414,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_510_quoteUnixArg,"StringTools","quoteUnixArg",0xc59dac56,"StringTools.quoteUnixArg","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",510,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_543_quoteWinArg,"StringTools","quoteWinArg",0x7e16b8f2,"StringTools.quoteWinArg","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",543,0xb9dbeb2d)
static const ::String _hx_array_data_0363db6a_30[] = {
	HX_("\"",22,00,00,00),
};
static const ::String _hx_array_data_0363db6a_31[] = {
	HX_("\\\"",46,50,00,00),
};
static const ::String _hx_array_data_0363db6a_32[] = {
	HX_("\\",5c,00,00,00),
};
static const ::String _hx_array_data_0363db6a_33[] = {
	HX_("\"",22,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_528_boot,"StringTools","boot",0x1d20b7b6,"StringTools.boot","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",528,0xb9dbeb2d)
static const int _hx_array_data_0363db6a_35[] = {
	(int)32,(int)40,(int)41,(int)37,(int)33,(int)94,(int)34,(int)60,(int)62,(int)38,(int)124,(int)10,(int)13,(int)44,(int)59,
};

void StringTools_obj::__construct() { }

Dynamic StringTools_obj::__CreateEmpty() { return new StringTools_obj; }

void *StringTools_obj::_hx_vtable = 0;

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringTools_obj > _hx_result = new StringTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0363db6a;
}

::String StringTools_obj::urlEncode(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_45_urlEncode)
HXDLIN(  45)		return ( (::String)(s.__URLEncode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlEncode,return )

::String StringTools_obj::urlDecode(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_115_urlDecode)
HXDLIN( 115)		return ( (::String)(s.__URLDecode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlDecode,return )

::String StringTools_obj::htmlEscape(::String s, ::Dynamic quotes){
            	HX_GC_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_153_htmlEscape)
HXLINE( 154)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 155)		{
HXLINE( 155)			int _g_offset = 0;
HXDLIN( 155)			::String _g_s = s;
HXDLIN( 155)			while((_g_offset < _g_s.length)){
HXLINE( 155)				_g_offset = (_g_offset + 1);
HXDLIN( 155)				int c = _g_s.cca((_g_offset - 1));
HXDLIN( 155)				bool _hx_tmp;
HXDLIN( 155)				if ((c >= 55296)) {
HXLINE( 155)					_hx_tmp = (c < 56319);
            				}
            				else {
HXLINE( 155)					_hx_tmp = false;
            				}
HXDLIN( 155)				if (_hx_tmp) {
HXLINE( 155)					_g_offset = (_g_offset + 1);
HXLINE(  57)					c = (((c - 55232) << 10) | (_g_s.cca((_g_offset - 1)) & 1023));
            				}
HXLINE( 155)				int code = c;
HXLINE( 156)				switch((int)(code)){
            					case (int)34: {
HXLINE( 160)						if (( (bool)(quotes) )) {
HXLINE( 160)							if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 160)								buf->flush();
            							}
HXDLIN( 160)							if (hx::IsNull( buf->b )) {
HXLINE( 160)								buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_4,1);
            							}
            							else {
HXLINE( 160)								buf->b->push(HX_("&quot;",2c,d9,81,8f));
            							}
            						}
            						else {
HXLINE( 162)							if (hx::IsNull( buf->charBuf )) {
HXLINE( 162)								buf->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 162)							buf->charBuf->push(code);
            						}
            					}
            					break;
            					case (int)38: {
HXLINE( 157)						if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 157)							buf->flush();
            						}
HXDLIN( 157)						if (hx::IsNull( buf->b )) {
HXLINE( 157)							buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_5,1);
            						}
            						else {
HXLINE( 157)							buf->b->push(HX_("&amp;",dd,d4,aa,21));
            						}
            					}
            					break;
            					case (int)39: {
HXLINE( 161)						if (( (bool)(quotes) )) {
HXLINE( 161)							if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 161)								buf->flush();
            							}
HXDLIN( 161)							if (hx::IsNull( buf->b )) {
HXLINE( 161)								buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_6,1);
            							}
            							else {
HXLINE( 161)								buf->b->push(HX_("&#039;",62,26,77,78));
            							}
            						}
            						else {
HXLINE( 162)							if (hx::IsNull( buf->charBuf )) {
HXLINE( 162)								buf->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 162)							buf->charBuf->push(code);
            						}
            					}
            					break;
            					case (int)60: {
HXLINE( 158)						if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 158)							buf->flush();
            						}
HXDLIN( 158)						if (hx::IsNull( buf->b )) {
HXLINE( 158)							buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_7,1);
            						}
            						else {
HXLINE( 158)							buf->b->push(HX_("&lt;",4d,74,70,19));
            						}
            					}
            					break;
            					case (int)62: {
HXLINE( 159)						if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 159)							buf->flush();
            						}
HXDLIN( 159)						if (hx::IsNull( buf->b )) {
HXLINE( 159)							buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_8,1);
            						}
            						else {
HXLINE( 159)							buf->b->push(HX_("&gt;",08,a9,6c,19));
            						}
            					}
            					break;
            					default:{
HXLINE( 162)						if (hx::IsNull( buf->charBuf )) {
HXLINE( 162)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 162)						buf->charBuf->push(code);
            					}
            				}
            			}
            		}
HXLINE( 165)		return buf->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,htmlEscape,return )

bool StringTools_obj::startsWith(::String s,::String start){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_193_startsWith)
HXLINE( 199)		if ((s.length < start.length)) {
HXLINE( 200)			return false;
            		}
HXLINE( 201)		::cpp::Pointer< char > p0 = cpp::Pointer_obj::fromPointer(s.__s);
HXLINE( 202)		::cpp::Pointer< char > p1 = cpp::Pointer_obj::fromPointer(start.__s);
HXLINE( 203)		{
HXLINE( 203)			int _g = 0;
HXDLIN( 203)			int _g1 = start.length;
HXDLIN( 203)			while((_g < _g1)){
HXLINE( 203)				_g = (_g + 1);
HXDLIN( 203)				int i = (_g - 1);
HXLINE( 204)				char & _hx_tmp = p0->at(i);
HXDLIN( 204)				char & _hx_tmp1 = p1->at(i);
HXDLIN( 204)				if (hx::IsNotEq( _hx_tmp,_hx_tmp1 )) {
HXLINE( 205)					return false;
            				}
            			}
            		}
HXLINE( 206)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,startsWith,return )

bool StringTools_obj::endsWith(::String s,::String end){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_223_endsWith)
HXLINE( 229)		if ((s.length < end.length)) {
HXLINE( 230)			return false;
            		}
HXLINE( 231)		::cpp::Pointer< char > p0 = cpp::Pointer_obj::fromPointer(s.__s);
HXDLIN( 231)		::cpp::Pointer< char > p01 = p0->add((s.length - end.length));
HXLINE( 232)		::cpp::Pointer< char > p1 = cpp::Pointer_obj::fromPointer(end.__s);
HXLINE( 233)		{
HXLINE( 233)			int _g = 0;
HXDLIN( 233)			int _g1 = end.length;
HXDLIN( 233)			while((_g < _g1)){
HXLINE( 233)				_g = (_g + 1);
HXDLIN( 233)				int i = (_g - 1);
HXLINE( 234)				char & _hx_tmp = p01->at(i);
HXDLIN( 234)				char & _hx_tmp1 = p1->at(i);
HXDLIN( 234)				if (hx::IsNotEq( _hx_tmp,_hx_tmp1 )) {
HXLINE( 235)					return false;
            				}
            			}
            		}
HXLINE( 236)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,endsWith,return )

bool StringTools_obj::isSpace(::String s,int pos){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_259_isSpace)
HXLINE( 263)		 ::Dynamic c = s.charCodeAt(pos);
HXLINE( 264)		bool _hx_tmp;
HXDLIN( 264)		if (hx::IsGreater( c,8 )) {
HXLINE( 264)			_hx_tmp = hx::IsLess( c,14 );
            		}
            		else {
HXLINE( 264)			_hx_tmp = false;
            		}
HXDLIN( 264)		if (!(_hx_tmp)) {
HXLINE( 264)			return hx::IsEq( c,32 );
            		}
            		else {
HXLINE( 264)			return true;
            		}
HXDLIN( 264)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,isSpace,return )

::String StringTools_obj::ltrim(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_276_ltrim)
HXLINE( 280)		int l = s.length;
HXLINE( 281)		int r = 0;
HXLINE( 282)		while(true){
HXLINE( 282)			bool _hx_tmp;
HXDLIN( 282)			if ((r < l)) {
HXLINE( 282)				_hx_tmp = ::StringTools_obj::isSpace(s,r);
            			}
            			else {
HXLINE( 282)				_hx_tmp = false;
            			}
HXDLIN( 282)			if (!(_hx_tmp)) {
HXLINE( 282)				goto _hx_goto_14;
            			}
HXLINE( 283)			r = (r + 1);
            		}
            		_hx_goto_14:;
HXLINE( 285)		if ((r > 0)) {
HXLINE( 286)			return s.substr(r,(l - r));
            		}
            		else {
HXLINE( 288)			return s;
            		}
HXLINE( 285)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,ltrim,return )

::String StringTools_obj::rtrim(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_301_rtrim)
HXLINE( 305)		int l = s.length;
HXLINE( 306)		int r = 0;
HXLINE( 307)		while(true){
HXLINE( 307)			bool _hx_tmp;
HXDLIN( 307)			if ((r < l)) {
HXLINE( 307)				_hx_tmp = ::StringTools_obj::isSpace(s,((l - r) - 1));
            			}
            			else {
HXLINE( 307)				_hx_tmp = false;
            			}
HXDLIN( 307)			if (!(_hx_tmp)) {
HXLINE( 307)				goto _hx_goto_16;
            			}
HXLINE( 308)			r = (r + 1);
            		}
            		_hx_goto_16:;
HXLINE( 310)		if ((r > 0)) {
HXLINE( 311)			return s.substr(0,(l - r));
            		}
            		else {
HXLINE( 313)			return s;
            		}
HXLINE( 310)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,rtrim,return )

::String StringTools_obj::trim(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_329_trim)
HXDLIN( 329)		return ::StringTools_obj::ltrim(::StringTools_obj::rtrim(s));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,trim,return )

::String StringTools_obj::lpad(::String s,::String c,int l){
            	HX_GC_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_345_lpad)
HXLINE( 346)		if ((c.length <= 0)) {
HXLINE( 347)			return s;
            		}
HXLINE( 349)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 350)		l = (l - s.length);
HXLINE( 351)		while((buf->get_length() < l)){
HXLINE( 352)			if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 352)				buf->flush();
            			}
HXDLIN( 352)			if (hx::IsNull( buf->b )) {
HXLINE( 352)				buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(c));
            			}
            			else {
HXLINE( 352)				::Array< ::String > buf1 = buf->b;
HXDLIN( 352)				buf1->push(::Std_obj::string(c));
            			}
            		}
HXLINE( 354)		{
HXLINE( 354)			if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 354)				buf->flush();
            			}
HXDLIN( 354)			if (hx::IsNull( buf->b )) {
HXLINE( 354)				buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(s));
            			}
            			else {
HXLINE( 354)				::Array< ::String > buf2 = buf->b;
HXDLIN( 354)				buf2->push(::Std_obj::string(s));
            			}
            		}
HXLINE( 355)		return buf->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,lpad,return )

::String StringTools_obj::replace(::String s,::String sub,::String by){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_404_replace)
HXDLIN( 404)		return s.split(sub)->join(by);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,replace,return )

::String StringTools_obj::hex(int n, ::Dynamic digits){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_414_hex)
HXLINE( 420)		::String s = HX_("",00,00,00,00);
HXLINE( 421)		::String hexChars = HX_("0123456789ABCDEF",68,2a,58,a2);
HXLINE( 422)		while(true){
HXLINE( 423)			s = (hexChars.charAt((n & 15)) + s);
HXLINE( 424)			n = hx::UShr(n,4);
HXLINE( 422)			if (!((n > 0))) {
HXLINE( 422)				goto _hx_goto_22;
            			}
            		}
            		_hx_goto_22:;
HXLINE( 435)		if (hx::IsNotNull( digits )) {
HXLINE( 436)			while(hx::IsLess( s.length,digits )){
HXLINE( 437)				s = (HX_("0",30,00,00,00) + s);
            			}
            		}
HXLINE( 439)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,hex,return )

::String StringTools_obj::quoteUnixArg(::String argument){
            	HX_GC_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_510_quoteUnixArg)
HXLINE( 514)		if ((argument == HX_("",00,00,00,00))) {
HXLINE( 515)			return HX_("''",20,22,00,00);
            		}
HXLINE( 517)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("[^a-zA-Z0-9_@%+=:,./-]",80,28,a0,8d),HX_("",00,00,00,00))->match(argument))) {
HXLINE( 518)			return argument;
            		}
HXLINE( 522)		return ((HX_("'",27,00,00,00) + ::StringTools_obj::replace(argument,HX_("'",27,00,00,00),HX_("'\"'\"'",71,96,37,8b))) + HX_("'",27,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,quoteUnixArg,return )

::Array< int > StringTools_obj::winMetaCharacters;

::String StringTools_obj::quoteWinArg(::String argument,bool escapeMetaCharacters){
            	HX_GC_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_543_quoteWinArg)
HXLINE( 545)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^[^ \t\\\\\"]+$",fe,85,ca,95),HX_("",00,00,00,00))->match(argument))) {
HXLINE( 550)			 ::StringBuf result =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 551)			bool needquote;
HXDLIN( 551)			bool needquote1;
HXDLIN( 551)			if ((argument.indexOf(HX_(" ",20,00,00,00),null()) == -1)) {
HXLINE( 551)				needquote1 = (argument.indexOf(HX_("\t",09,00,00,00),null()) != -1);
            			}
            			else {
HXLINE( 551)				needquote1 = true;
            			}
HXDLIN( 551)			if (!(needquote1)) {
HXLINE( 551)				needquote = (argument == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 551)				needquote = true;
            			}
HXLINE( 553)			if (needquote) {
HXLINE( 554)				if (hx::IsNotNull( result->charBuf )) {
HXLINE( 554)					result->flush();
            				}
HXDLIN( 554)				if (hx::IsNull( result->b )) {
HXLINE( 554)					result->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_30,1);
            				}
            				else {
HXLINE( 554)					result->b->push(HX_("\"",22,00,00,00));
            				}
            			}
HXLINE( 556)			 ::StringBuf bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 557)			{
HXLINE( 557)				int _g = 0;
HXDLIN( 557)				int _g1 = argument.length;
HXDLIN( 557)				while((_g < _g1)){
HXLINE( 557)					_g = (_g + 1);
HXDLIN( 557)					int i = (_g - 1);
HXLINE( 558)					{
HXLINE( 558)						 ::Dynamic _g2 = argument.charCodeAt(i);
HXDLIN( 558)						if (hx::IsNull( _g2 )) {
HXLINE( 569)							 ::Dynamic c = _g2;
HXDLIN( 569)							{
HXLINE( 571)								if ((bs_buf->get_length() > 0)) {
HXLINE( 572)									{
HXLINE( 572)										::String x = bs_buf->toString();
HXDLIN( 572)										if (hx::IsNotNull( result->charBuf )) {
HXLINE( 572)											result->flush();
            										}
HXDLIN( 572)										if (hx::IsNull( result->b )) {
HXLINE( 572)											result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            										}
            										else {
HXLINE( 572)											::Array< ::String > result1 = result->b;
HXDLIN( 572)											result1->push(::Std_obj::string(x));
            										}
            									}
HXLINE( 573)									bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
            								}
HXLINE( 575)								{
HXLINE( 575)									if (hx::IsNull( result->charBuf )) {
HXLINE( 575)										result->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 575)									result->charBuf->push(( (int)(c) ));
            								}
            							}
            						}
            						else {
HXLINE( 558)							 ::Dynamic _hx_switch_0 = _g2;
            							if (  (_hx_switch_0==34) ){
HXLINE( 564)								::String bs = bs_buf->toString();
HXLINE( 565)								{
HXLINE( 565)									if (hx::IsNotNull( result->charBuf )) {
HXLINE( 565)										result->flush();
            									}
HXDLIN( 565)									if (hx::IsNull( result->b )) {
HXLINE( 565)										result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(bs));
            									}
            									else {
HXLINE( 565)										::Array< ::String > result2 = result->b;
HXDLIN( 565)										result2->push(::Std_obj::string(bs));
            									}
            								}
HXLINE( 566)								{
HXLINE( 566)									if (hx::IsNotNull( result->charBuf )) {
HXLINE( 566)										result->flush();
            									}
HXDLIN( 566)									if (hx::IsNull( result->b )) {
HXLINE( 566)										result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(bs));
            									}
            									else {
HXLINE( 566)										::Array< ::String > result3 = result->b;
HXDLIN( 566)										result3->push(::Std_obj::string(bs));
            									}
            								}
HXLINE( 567)								bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 568)								{
HXLINE( 568)									if (hx::IsNotNull( result->charBuf )) {
HXLINE( 568)										result->flush();
            									}
HXDLIN( 568)									if (hx::IsNull( result->b )) {
HXLINE( 568)										result->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_31,1);
            									}
            									else {
HXLINE( 568)										result->b->push(HX_("\\\"",46,50,00,00));
            									}
            								}
HXLINE( 562)								goto _hx_goto_27;
            							}
            							if (  (_hx_switch_0==92) ){
HXLINE( 561)								if (hx::IsNotNull( bs_buf->charBuf )) {
HXLINE( 561)									bs_buf->flush();
            								}
HXDLIN( 561)								if (hx::IsNull( bs_buf->b )) {
HXLINE( 561)									bs_buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_32,1);
            								}
            								else {
HXLINE( 561)									bs_buf->b->push(HX_("\\",5c,00,00,00));
            								}
HXDLIN( 561)								goto _hx_goto_27;
            							}
            							/* default */{
HXLINE( 569)								 ::Dynamic c1 = _g2;
HXDLIN( 569)								{
HXLINE( 571)									if ((bs_buf->get_length() > 0)) {
HXLINE( 572)										{
HXLINE( 572)											::String x1 = bs_buf->toString();
HXDLIN( 572)											if (hx::IsNotNull( result->charBuf )) {
HXLINE( 572)												result->flush();
            											}
HXDLIN( 572)											if (hx::IsNull( result->b )) {
HXLINE( 572)												result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            											}
            											else {
HXLINE( 572)												::Array< ::String > result4 = result->b;
HXDLIN( 572)												result4->push(::Std_obj::string(x1));
            											}
            										}
HXLINE( 573)										bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
            									}
HXLINE( 575)									{
HXLINE( 575)										if (hx::IsNull( result->charBuf )) {
HXLINE( 575)											result->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 575)										result->charBuf->push(( (int)(c1) ));
            									}
            								}
            							}
            							_hx_goto_27:;
            						}
            					}
            				}
            			}
HXLINE( 580)			{
HXLINE( 580)				::String x2 = bs_buf->toString();
HXDLIN( 580)				if (hx::IsNotNull( result->charBuf )) {
HXLINE( 580)					result->flush();
            				}
HXDLIN( 580)				if (hx::IsNull( result->b )) {
HXLINE( 580)					result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            				}
            				else {
HXLINE( 580)					::Array< ::String > result5 = result->b;
HXDLIN( 580)					result5->push(::Std_obj::string(x2));
            				}
            			}
HXLINE( 582)			if (needquote) {
HXLINE( 583)				{
HXLINE( 583)					::String x3 = bs_buf->toString();
HXDLIN( 583)					if (hx::IsNotNull( result->charBuf )) {
HXLINE( 583)						result->flush();
            					}
HXDLIN( 583)					if (hx::IsNull( result->b )) {
HXLINE( 583)						result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            					}
            					else {
HXLINE( 583)						::Array< ::String > result6 = result->b;
HXDLIN( 583)						result6->push(::Std_obj::string(x3));
            					}
            				}
HXLINE( 584)				{
HXLINE( 584)					if (hx::IsNotNull( result->charBuf )) {
HXLINE( 584)						result->flush();
            					}
HXDLIN( 584)					if (hx::IsNull( result->b )) {
HXLINE( 584)						result->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_33,1);
            					}
            					else {
HXLINE( 584)						result->b->push(HX_("\"",22,00,00,00));
            					}
            				}
            			}
HXLINE( 587)			argument = result->toString();
            		}
HXLINE( 590)		if (escapeMetaCharacters) {
HXLINE( 591)			 ::StringBuf result7 =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 592)			{
HXLINE( 592)				int _g3 = 0;
HXDLIN( 592)				int _g11 = argument.length;
HXDLIN( 592)				while((_g3 < _g11)){
HXLINE( 592)					_g3 = (_g3 + 1);
HXDLIN( 592)					int i1 = (_g3 - 1);
HXLINE( 593)					 ::Dynamic c2 = argument.charCodeAt(i1);
HXLINE( 594)					if ((::StringTools_obj::winMetaCharacters->indexOf(c2,null()) >= 0)) {
HXLINE( 595)						if (hx::IsNull( result7->charBuf )) {
HXLINE( 595)							result7->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 595)						result7->charBuf->push(94);
            					}
HXLINE( 597)					{
HXLINE( 597)						if (hx::IsNull( result7->charBuf )) {
HXLINE( 597)							result7->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 597)						result7->charBuf->push(( (int)(c2) ));
            					}
            				}
            			}
HXLINE( 599)			return result7->toString();
            		}
            		else {
HXLINE( 601)			return argument;
            		}
HXLINE( 590)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,quoteWinArg,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { outValue = hex_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lpad") ) { outValue = lpad_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ltrim") ) { outValue = ltrim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rtrim") ) { outValue = rtrim_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { outValue = isSpace_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"replace") ) { outValue = replace_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endsWith") ) { outValue = endsWith_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { outValue = urlEncode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"urlDecode") ) { outValue = urlDecode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"htmlEscape") ) { outValue = htmlEscape_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"startsWith") ) { outValue = startsWith_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"quoteWinArg") ) { outValue = quoteWinArg_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"quoteUnixArg") ) { outValue = quoteUnixArg_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"winMetaCharacters") ) { outValue = ( winMetaCharacters ); return true; }
	}
	return false;
}

bool StringTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"winMetaCharacters") ) { winMetaCharacters=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *StringTools_obj_sMemberStorageInfo = 0;
static hx::StaticInfo StringTools_obj_sStaticStorageInfo[] = {
	{hx::fsObject /* ::Array< int > */ ,(void *) &StringTools_obj::winMetaCharacters,HX_("winMetaCharacters",0b,65,cd,94)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void StringTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringTools_obj::winMetaCharacters,"winMetaCharacters");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringTools_obj::winMetaCharacters,"winMetaCharacters");
};

#endif

hx::Class StringTools_obj::__mClass;

static ::String StringTools_obj_sStaticFields[] = {
	HX_("urlEncode",e5,4e,52,9a),
	HX_("urlDecode",fd,b9,5b,05),
	HX_("htmlEscape",4c,af,9b,a8),
	HX_("startsWith",77,c0,cf,f9),
	HX_("endsWith",5e,7a,b6,db),
	HX_("isSpace",7c,30,ec,1d),
	HX_("ltrim",4e,43,4a,7c),
	HX_("rtrim",54,be,b1,f0),
	HX_("trim",e2,9c,03,4d),
	HX_("lpad",67,5c,b8,47),
	HX_("replace",34,48,28,ab),
	HX_("hex",db,42,4f,00),
	HX_("quoteUnixArg",d2,54,33,00),
	HX_("winMetaCharacters",0b,65,cd,94),
	HX_("quoteWinArg",f6,b3,bc,14),
	::String(null())
};

void StringTools_obj::__register()
{
	StringTools_obj _hx_dummy;
	StringTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("StringTools",6a,db,63,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &StringTools_obj::__SetStatic;
	__mClass->mMarkFunc = StringTools_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StringTools_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringTools_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StringTools_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_528_boot)
HXDLIN( 528)		winMetaCharacters = ::Array_obj< int >::fromData( _hx_array_data_0363db6a_35,15);
            	}
}

