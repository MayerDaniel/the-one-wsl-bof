

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for wslserviceproxystub_2.4.4.0_2.4.13.0.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "wslserviceproxystub_2.4.4.0_2.4.13.0.h"

#define TYPE_FORMAT_STRING_SIZE   249                               
#define PROC_FORMAT_STRING_SIZE   1351                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _wslserviceproxystub_22E42E42E0_22E42E132E0_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } wslserviceproxystub_22E42E42E0_22E42E132E0_MIDL_TYPE_FORMAT_STRING;

typedef struct _wslserviceproxystub_22E42E42E0_22E42E132E0_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } wslserviceproxystub_22E42E42E0_22E42E132E0_MIDL_PROC_FORMAT_STRING;

typedef struct _wslserviceproxystub_22E42E42E0_22E42E132E0_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } wslserviceproxystub_22E42E42E0_22E42E132E0_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif


extern const wslserviceproxystub_22E42E42E0_22E42E132E0_MIDL_TYPE_FORMAT_STRING wslserviceproxystub_22E42E42E0_22E42E132E0__MIDL_TypeFormatString;
extern const wslserviceproxystub_22E42E42E0_22E42E132E0_MIDL_PROC_FORMAT_STRING wslserviceproxystub_22E42E42E0_22E42E132E0__MIDL_ProcFormatString;
extern const wslserviceproxystub_22E42E42E0_22E42E132E0_MIDL_EXPR_FORMAT_STRING wslserviceproxystub_22E42E42E0_22E42E132E0__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ILxssUserSession_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILxssUserSession_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT102_OR_LATER)
#error You need NTDDI_VERSION >= NTDDI_WIN10_RS1 to run this stub because it uses these features:
#error   [system_handle] attribute.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const wslserviceproxystub_22E42E42E0_22E42E132E0_MIDL_PROC_FORMAT_STRING wslserviceproxystub_22E42E42E0_22E42E132E0__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Proc3 */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 12 */	NdrFcShort( 0x6c ),	/* 108 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 24 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 36 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc4 */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x4 ),	/* 4 */
/* 56 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 58 */	NdrFcShort( 0xd2 ),	/* 210 */
/* 60 */	NdrFcShort( 0xde ),	/* 222 */
/* 62 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 64 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 72 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 78 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 80 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 84 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 86 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 90 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 92 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 96 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 98 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 100 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 104 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p6 */

/* 108 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 110 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 112 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p7 */

/* 114 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 116 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 118 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter p8 */

/* 120 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 122 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 124 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p9 */

/* 126 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 128 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 130 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc5 */

/* 138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x5 ),	/* 5 */
/* 146 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 148 */	NdrFcShort( 0xd2 ),	/* 210 */
/* 150 */	NdrFcShort( 0xde ),	/* 222 */
/* 152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 154 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 162 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 166 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 182 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 186 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 188 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 190 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 194 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p6 */

/* 198 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 200 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 202 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p7 */

/* 204 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 206 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 208 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter p8 */

/* 210 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 212 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 214 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p9 */

/* 216 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 218 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 220 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDistributionId */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x6 ),	/* 6 */
/* 236 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 238 */	NdrFcShort( 0x6c ),	/* 108 */
/* 240 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 244 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistributionName */

/* 252 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 256 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter Flags */

/* 258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Error */

/* 264 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 268 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pDistroGuid */

/* 270 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 274 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 278 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc7 */

/* 282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x7 ),	/* 7 */
/* 290 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 292 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 294 */	NdrFcShort( 0x6c ),	/* 108 */
/* 296 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 298 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 306 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 310 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 312 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 316 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc8 */

/* 324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 332 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 334 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 336 */	NdrFcShort( 0x6c ),	/* 108 */
/* 338 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 340 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 348 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 352 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 354 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 356 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 358 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc9 */

/* 366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x9 ),	/* 9 */
/* 374 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 376 */	NdrFcShort( 0xb8 ),	/* 184 */
/* 378 */	NdrFcShort( 0x6c ),	/* 108 */
/* 380 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 382 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 390 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 394 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 396 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 408 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 410 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 412 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 416 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc10 */

/* 420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0xa ),	/* 10 */
/* 428 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 430 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 432 */	NdrFcShort( 0x14b ),	/* 331 */
/* 434 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x9,		/* 9 */
/* 436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 444 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 450 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 454 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter p2 */

/* 456 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 462 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 464 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 470 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 474 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 476 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 478 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter p6 */

/* 480 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 482 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p7 */

/* 486 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 488 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 490 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 494 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc11 */

/* 498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0xb ),	/* 11 */
/* 506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 508 */	NdrFcShort( 0x64 ),	/* 100 */
/* 510 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 522 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 526 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p1 */

/* 528 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 532 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc12 */

/* 540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0xc ),	/* 12 */
/* 548 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 550 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 552 */	NdrFcShort( 0x6c ),	/* 108 */
/* 554 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 556 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 564 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 568 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 570 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 572 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 574 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc13 */

/* 582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0xd ),	/* 13 */
/* 590 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 592 */	NdrFcShort( 0xad ),	/* 173 */
/* 594 */	NdrFcShort( 0x6c ),	/* 108 */
/* 596 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 598 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 606 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 608 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 610 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 612 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 614 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 616 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 618 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 622 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 626 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc14 */

/* 630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0xe ),	/* 14 */
/* 638 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 640 */	NdrFcShort( 0x64 ),	/* 100 */
/* 642 */	NdrFcShort( 0x88 ),	/* 136 */
/* 644 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 646 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 660 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 662 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 664 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Parameter p2 */

/* 666 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 668 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 670 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 674 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateLxProcess */

/* 678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0xf ),	/* 15 */
/* 686 */	NdrFcShort( 0x68 ),	/* x86 Stack size/offset = 104 */
/* 688 */	NdrFcShort( 0xd4 ),	/* 212 */
/* 690 */	NdrFcShort( 0xf4 ),	/* 244 */
/* 692 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x19,		/* 25 */
/* 694 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x1 ),	/* 1 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 702 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 704 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 706 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Filename */

/* 708 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 710 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 712 */	NdrFcShort( 0x88 ),	/* Type Offset=136 */

	/* Parameter CommandLineCount */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter CommandLine */

/* 720 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 722 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 724 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */

	/* Parameter CurrentWorkingDirectory */

/* 726 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 728 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 730 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter NtPath */

/* 732 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 734 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 736 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter NtEnvironment */

/* 738 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 740 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 742 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter NtEnvironmentLength */

/* 744 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 746 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Username */

/* 750 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 752 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 754 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter Columns */

/* 756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 758 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 760 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter Rows */

/* 762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 764 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 766 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ConsoleHandle */

/* 768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 770 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter StdHandles */

/* 774 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 776 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 778 */	NdrFcShort( 0xce ),	/* Type Offset=206 */

	/* Parameter Flags */

/* 780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 782 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DistributionId */

/* 786 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 788 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 790 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter InstanceId */

/* 792 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 794 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 796 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ProcessHandle */

/* 798 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 800 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 802 */	NdrFcShort( 0xe8 ),	/* Type Offset=232 */

	/* Parameter ServerHandle */

/* 804 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 806 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 808 */	NdrFcShort( 0xe8 ),	/* Type Offset=232 */

	/* Parameter StandardIn */

/* 810 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 812 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 814 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter StandardOut */

/* 816 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 818 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 820 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter StandardErr */

/* 822 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 824 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 826 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter CommunicationChannel */

/* 828 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 830 */	NdrFcShort( 0x58 ),	/* x86 Stack size/offset = 88 */
/* 832 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter InteropSocket */

/* 834 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 836 */	NdrFcShort( 0x5c ),	/* x86 Stack size/offset = 92 */
/* 838 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter Error */

/* 840 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 842 */	NdrFcShort( 0x60 ),	/* x86 Stack size/offset = 96 */
/* 844 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 848 */	NdrFcShort( 0x64 ),	/* x86 Stack size/offset = 100 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc16 */

/* 852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x10 ),	/* 16 */
/* 860 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 862 */	NdrFcShort( 0xb8 ),	/* 184 */
/* 864 */	NdrFcShort( 0x6c ),	/* 108 */
/* 866 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 868 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 876 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 880 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 888 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 890 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 894 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 896 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 898 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc17 */

/* 906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x11 ),	/* 17 */
/* 914 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 916 */	NdrFcShort( 0xc0 ),	/* 192 */
/* 918 */	NdrFcShort( 0x6c ),	/* 108 */
/* 920 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 922 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 930 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 934 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 948 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 950 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 954 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 956 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 958 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 962 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc18 */

/* 966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x12 ),	/* 18 */
/* 974 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 976 */	NdrFcShort( 0xc0 ),	/* 192 */
/* 978 */	NdrFcShort( 0x6c ),	/* 108 */
/* 980 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 982 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 990 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 994 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1004 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 1008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1010 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 1014 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1016 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1018 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1022 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc19 */

/* 1026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1034 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1036 */	NdrFcShort( 0x86 ),	/* 134 */
/* 1038 */	NdrFcShort( 0x6c ),	/* 108 */
/* 1040 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1042 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1050 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1054 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1058 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1062 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1066 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc20 */

/* 1074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1082 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1084 */	NdrFcShort( 0x7e ),	/* 126 */
/* 1086 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 1088 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1090 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1098 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1102 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1104 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1112 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 1116 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1118 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1120 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1124 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc21 */

/* 1128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1136 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1138 */	NdrFcShort( 0xdc ),	/* 220 */
/* 1140 */	NdrFcShort( 0xd2 ),	/* 210 */
/* 1142 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 1144 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1152 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1156 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 1170 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1174 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 1176 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1178 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1180 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 1182 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1184 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1186 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p6 */

/* 1188 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1190 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p7 */

/* 1194 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1196 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p8 */

/* 1200 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 1202 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1204 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter p9 */

/* 1206 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1208 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1210 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1214 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc22 */

/* 1218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1232 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1234 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc23 */

/* 1248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1256 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1258 */	NdrFcShort( 0x86 ),	/* 134 */
/* 1260 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 1262 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1264 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1272 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1276 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1284 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1288 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p3 */

/* 1290 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1294 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 1296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1298 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc24 */

/* 1302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1310 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1312 */	NdrFcShort( 0xc2 ),	/* 194 */
/* 1314 */	NdrFcShort( 0x6c ),	/* 108 */
/* 1316 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1318 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1326 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1330 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 1332 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1336 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1338 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1340 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1342 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1346 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const wslserviceproxystub_22E42E42E0_22E42E132E0_MIDL_TYPE_FORMAT_STRING wslserviceproxystub_22E42E42E0_22E42E132E0__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x0,	/* FC_RP */
/*  4 */	NdrFcShort( 0x8 ),	/* Offset= 8 (12) */
/*  6 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 12 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 14 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 18 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 20 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (6) */
			0x5b,		/* FC_END */
/* 24 */	
			0x11, 0x0,	/* FC_RP */
/* 26 */	NdrFcShort( 0x2 ),	/* Offset= 2 (28) */
/* 28 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 30 */	NdrFcShort( 0x14 ),	/* 20 */
/* 32 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 34 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 36 */	NdrFcShort( 0x8 ),	/* 8 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 42 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 44 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 46 */	NdrFcShort( 0xc ),	/* 12 */
/* 48 */	NdrFcShort( 0xc ),	/* 12 */
/* 50 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 52 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 54 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 56 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 58 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 60 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 62 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 64 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 66 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 68 */	NdrFcShort( 0x2 ),	/* Offset= 2 (70) */
/* 70 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 72 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 76 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (12) */
/* 78 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 80 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 82 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 84 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 86 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 88 */	NdrFcShort( 0x2 ),	/* Offset= 2 (90) */
/* 90 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 92 */	NdrFcShort( 0x2 ),	/* Offset= 2 (94) */
/* 94 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 96 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 98 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 100 */	NdrFcShort( 0x2 ),	/* Offset= 2 (102) */
/* 102 */	
			0x13, 0x0,	/* FC_OP */
/* 104 */	NdrFcShort( 0x8 ),	/* Offset= 8 (112) */
/* 106 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 108 */	NdrFcShort( 0x202 ),	/* 514 */
/* 110 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 112 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 114 */	NdrFcShort( 0x220 ),	/* 544 */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x0 ),	/* Offset= 0 (118) */
/* 120 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 122 */	NdrFcShort( 0xff92 ),	/* Offset= -110 (12) */
/* 124 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 126 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 128 */	0x0,		/* 0 */
			NdrFcShort( 0xffe9 ),	/* Offset= -23 (106) */
			0x3e,		/* FC_STRUCTPAD2 */
/* 132 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 134 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 136 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 138 */	
			0x11, 0x0,	/* FC_RP */
/* 140 */	NdrFcShort( 0x2 ),	/* Offset= 2 (142) */
/* 142 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 144 */	NdrFcShort( 0x4 ),	/* 4 */
/* 146 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 148 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 150 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 152 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 154 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 156 */	NdrFcShort( 0x4 ),	/* 4 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 168 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 170 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 172 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 174 */	
			0x11, 0x0,	/* FC_RP */
/* 176 */	NdrFcShort( 0x2 ),	/* Offset= 2 (178) */
/* 178 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 180 */	NdrFcShort( 0x2 ),	/* 2 */
/* 182 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 184 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 186 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 188 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 190 */	
			0x11, 0x0,	/* FC_RP */
/* 192 */	NdrFcShort( 0xe ),	/* Offset= 14 (206) */
/* 194 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* Offset= 0 (200) */
/* 202 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 204 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 206 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 208 */	NdrFcShort( 0x18 ),	/* 24 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* Offset= 0 (212) */
/* 214 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 216 */	NdrFcShort( 0xffea ),	/* Offset= -22 (194) */
/* 218 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 220 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (194) */
/* 222 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 224 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (194) */
/* 226 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 228 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 230 */	NdrFcShort( 0x2 ),	/* Offset= 2 (232) */
/* 232 */	0x3c,		/* FC_SYSTEM_HANDLE */
			0x0,		/* 0 */
/* 234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 238 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 240 */	NdrFcShort( 0x2 ),	/* Offset= 2 (242) */
/* 242 */	0x3c,		/* FC_SYSTEM_HANDLE */
			0xa,		/* 10 */
/* 244 */	NdrFcLong( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_wslserviceproxystub_22E42E42E0_22E42E132E0_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ILxssUserSession, ver. 0.0,
   GUID={0x38541bdc,0xf54f,0x4ceb,{0x85,0xd0,0x37,0xf0,0xf3,0xd2,0x61,0x7e}} */

#pragma code_seg(".orpc")
static const unsigned short ILxssUserSession_FormatStringOffsetTable[] =
    {
    0,
    48,
    138,
    228,
    282,
    324,
    366,
    420,
    498,
    540,
    582,
    630,
    678,
    852,
    906,
    966,
    1026,
    1074,
    1128,
    1218,
    1248,
    1302
    };

static const MIDL_STUBLESS_PROXY_INFO ILxssUserSession_ProxyInfo =
    {
    &Object_StubDesc,
    wslserviceproxystub_22E42E42E0_22E42E132E0__MIDL_ProcFormatString.Format,
    &ILxssUserSession_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ILxssUserSession_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wslserviceproxystub_22E42E42E0_22E42E132E0__MIDL_ProcFormatString.Format,
    &ILxssUserSession_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _ILxssUserSessionProxyVtbl = 
{
    &ILxssUserSession_ProxyInfo,
    &IID_ILxssUserSession,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc3 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc4 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc5 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::GetDistributionId */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc7 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc8 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc9 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc10 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc11 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc12 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc13 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc14 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::CreateLxProcess */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc16 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc17 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc18 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc19 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc20 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc21 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc22 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc23 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc24 */
};

const CInterfaceStubVtbl _ILxssUserSessionStubVtbl =
{
    &IID_ILxssUserSession,
    &ILxssUserSession_ServerInfo,
    25,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS_OPT
};

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    wslserviceproxystub_22E42E42E0_22E42E132E0__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0xa0000, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _wslserviceproxystub_22E42E42E0_22E42E132E0_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ILxssUserSessionProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _wslserviceproxystub_22E42E42E0_22E42E132E0_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ILxssUserSessionStubVtbl,
    0
};

PCInterfaceName const _wslserviceproxystub_22E42E42E0_22E42E132E0_InterfaceNamesList[] = 
{
    "ILxssUserSession",
    0
};


#define _wslserviceproxystub_22E42E42E0_22E42E132E0_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _wslserviceproxystub_22E42E42E0_22E42E132E0, pIID, n)

int __stdcall _wslserviceproxystub_22E42E42E0_22E42E132E0_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_wslserviceproxystub_22E42E42E0_22E42E132E0_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

EXTERN_C const ExtendedProxyFileInfo wslserviceproxystub_22E42E42E0_22E42E132E0_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _wslserviceproxystub_22E42E42E0_22E42E132E0_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _wslserviceproxystub_22E42E42E0_22E42E132E0_StubVtblList,
    (const PCInterfaceName * ) & _wslserviceproxystub_22E42E42E0_22E42E132E0_InterfaceNamesList,
    0, /* no delegation */
    & _wslserviceproxystub_22E42E42E0_22E42E132E0_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

