

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for wslserviceproxystub_2.3.11.0_2.3.17.0.idl:
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


#include "wslserviceproxystub_2.3.11.0_2.3.17.0.h"

#define TYPE_FORMAT_STRING_SIZE   255                               
#define PROC_FORMAT_STRING_SIZE   1393                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _wslserviceproxystub_22E32E112E0_22E32E172E0_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } wslserviceproxystub_22E32E112E0_22E32E172E0_MIDL_TYPE_FORMAT_STRING;

typedef struct _wslserviceproxystub_22E32E112E0_22E32E172E0_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } wslserviceproxystub_22E32E112E0_22E32E172E0_MIDL_PROC_FORMAT_STRING;

typedef struct _wslserviceproxystub_22E32E112E0_22E32E172E0_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } wslserviceproxystub_22E32E112E0_22E32E172E0_MIDL_EXPR_FORMAT_STRING;


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


extern const wslserviceproxystub_22E32E112E0_22E32E172E0_MIDL_TYPE_FORMAT_STRING wslserviceproxystub_22E32E112E0_22E32E172E0__MIDL_TypeFormatString;
extern const wslserviceproxystub_22E32E112E0_22E32E172E0_MIDL_PROC_FORMAT_STRING wslserviceproxystub_22E32E112E0_22E32E172E0__MIDL_ProcFormatString;
extern const wslserviceproxystub_22E32E112E0_22E32E172E0_MIDL_EXPR_FORMAT_STRING wslserviceproxystub_22E32E112E0_22E32E172E0__MIDL_ExprFormatString;

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


static const wslserviceproxystub_22E32E112E0_22E32E172E0_MIDL_PROC_FORMAT_STRING wslserviceproxystub_22E32E112E0_22E32E172E0__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Proc3 */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	NdrFcShort( 0xac ),	/* 172 */
/* 12 */	NdrFcShort( 0x68 ),	/* 104 */
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
/* 56 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 58 */	NdrFcShort( 0xce ),	/* 206 */
/* 60 */	NdrFcShort( 0xac ),	/* 172 */
/* 62 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
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

/* 114 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 116 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 118 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p8 */

/* 120 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 122 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 124 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc5 */

/* 132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x5 ),	/* 5 */
/* 140 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 142 */	NdrFcShort( 0xce ),	/* 206 */
/* 144 */	NdrFcShort( 0xac ),	/* 172 */
/* 146 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 156 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 160 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 180 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 182 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 184 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 188 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p6 */

/* 192 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 194 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 196 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p7 */

/* 198 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 200 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 202 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p8 */

/* 204 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 206 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 208 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDistributionId */

/* 216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x6 ),	/* 6 */
/* 224 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 226 */	NdrFcShort( 0x68 ),	/* 104 */
/* 228 */	NdrFcShort( 0xac ),	/* 172 */
/* 230 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistributionName */

/* 240 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter Flags */

/* 246 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Error */

/* 252 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 256 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pDistroGuid */

/* 258 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 260 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 262 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc7 */

/* 270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x7 ),	/* 7 */
/* 278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 280 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 282 */	NdrFcShort( 0x68 ),	/* 104 */
/* 284 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 286 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 294 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 298 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 300 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 302 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 304 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc8 */

/* 312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 322 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 324 */	NdrFcShort( 0x68 ),	/* 104 */
/* 326 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 336 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 340 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 342 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 346 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc9 */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x9 ),	/* 9 */
/* 362 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 364 */	NdrFcShort( 0xb4 ),	/* 180 */
/* 366 */	NdrFcShort( 0x68 ),	/* 104 */
/* 368 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 378 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 382 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 396 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 398 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 400 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 404 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc10 */

/* 408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0xa ),	/* 10 */
/* 416 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 418 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 420 */	NdrFcShort( 0x147 ),	/* 327 */
/* 422 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x9,		/* 9 */
/* 424 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 432 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 436 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 438 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 442 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter p2 */

/* 444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 450 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 452 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 456 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 458 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 462 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 464 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 466 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter p6 */

/* 468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 470 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p7 */

/* 474 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 476 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 478 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 482 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc11 */

/* 486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0xb ),	/* 11 */
/* 494 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 496 */	NdrFcShort( 0x60 ),	/* 96 */
/* 498 */	NdrFcShort( 0xac ),	/* 172 */
/* 500 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 502 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 510 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 514 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p1 */

/* 516 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 520 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc12 */

/* 528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0xc ),	/* 12 */
/* 536 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 538 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 540 */	NdrFcShort( 0x68 ),	/* 104 */
/* 542 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 544 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 552 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 556 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 558 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 562 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc13 */

/* 570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0xd ),	/* 13 */
/* 578 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 580 */	NdrFcShort( 0xa9 ),	/* 169 */
/* 582 */	NdrFcShort( 0x68 ),	/* 104 */
/* 584 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 594 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 598 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 604 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 606 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 610 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 614 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc14 */

/* 618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0xe ),	/* 14 */
/* 626 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 628 */	NdrFcShort( 0x60 ),	/* 96 */
/* 630 */	NdrFcShort( 0x84 ),	/* 132 */
/* 632 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 634 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 642 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 644 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 648 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 652 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */

	/* Parameter p2 */

/* 654 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 658 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 662 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateLxProcess */

/* 666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0xf ),	/* 15 */
/* 674 */	NdrFcShort( 0x68 ),	/* x86 Stack size/offset = 104 */
/* 676 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 678 */	NdrFcShort( 0xf0 ),	/* 240 */
/* 680 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x19,		/* 25 */
/* 682 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x1 ),	/* 1 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 690 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 692 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 694 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Filename */

/* 696 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 698 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 700 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Parameter CommandLineCount */

/* 702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 704 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter CommandLine */

/* 708 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 710 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 712 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter CurrentWorkingDirectory */

/* 714 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 716 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 718 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter NtPath */

/* 720 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 722 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 724 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter NtEnvironment */

/* 726 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 728 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 730 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Parameter NtEnvironmentLength */

/* 732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 734 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Username */

/* 738 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 740 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 742 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter Columns */

/* 744 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 746 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 748 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter Rows */

/* 750 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 752 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 754 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ConsoleHandle */

/* 756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 758 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter StdHandles */

/* 762 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 764 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 766 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Parameter Flags */

/* 768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 770 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DistributionId */

/* 774 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 776 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 778 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter InstanceId */

/* 780 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 782 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 784 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ProcessHandle */

/* 786 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 788 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 790 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Parameter ServerHandle */

/* 792 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 794 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 796 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Parameter StandardIn */

/* 798 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 800 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 802 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Parameter StandardOut */

/* 804 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 806 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 808 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Parameter StandardErr */

/* 810 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 812 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 814 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Parameter CommunicationChannel */

/* 816 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 818 */	NdrFcShort( 0x58 ),	/* x86 Stack size/offset = 88 */
/* 820 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Parameter InteropSocket */

/* 822 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 824 */	NdrFcShort( 0x5c ),	/* x86 Stack size/offset = 92 */
/* 826 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Parameter Error */

/* 828 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 830 */	NdrFcShort( 0x60 ),	/* x86 Stack size/offset = 96 */
/* 832 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 836 */	NdrFcShort( 0x64 ),	/* x86 Stack size/offset = 100 */
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc16 */

/* 840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x10 ),	/* 16 */
/* 848 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 850 */	NdrFcShort( 0xac ),	/* 172 */
/* 852 */	NdrFcShort( 0x68 ),	/* 104 */
/* 854 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 864 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 868 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 876 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 880 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 884 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc17 */

/* 888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x11 ),	/* 17 */
/* 896 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 898 */	NdrFcShort( 0xbc ),	/* 188 */
/* 900 */	NdrFcShort( 0x68 ),	/* 104 */
/* 902 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 904 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 912 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 916 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 930 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 932 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 936 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 938 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 940 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 944 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc18 */

/* 948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x12 ),	/* 18 */
/* 956 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 958 */	NdrFcShort( 0xbc ),	/* 188 */
/* 960 */	NdrFcShort( 0x68 ),	/* 104 */
/* 962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 964 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 972 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 976 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 986 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 992 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 996 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 998 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1000 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1004 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc19 */

/* 1008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1016 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1018 */	NdrFcShort( 0x82 ),	/* 130 */
/* 1020 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1022 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1032 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1036 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1040 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1044 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1046 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1048 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1052 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc20 */

/* 1056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1064 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1066 */	NdrFcShort( 0x7a ),	/* 122 */
/* 1068 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 1070 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1072 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1080 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1084 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1086 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1092 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1094 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 1098 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1100 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1102 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1106 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc21 */

/* 1110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1118 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1120 */	NdrFcShort( 0xd8 ),	/* 216 */
/* 1122 */	NdrFcShort( 0xce ),	/* 206 */
/* 1124 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 1126 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1134 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1138 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1148 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 1152 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1154 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1156 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 1158 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1160 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1162 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 1164 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1166 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1168 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p6 */

/* 1170 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1172 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p7 */

/* 1176 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1178 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p8 */

/* 1182 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 1184 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1186 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter p9 */

/* 1188 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1190 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1192 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1196 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc22 */

/* 1200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1216 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc23 */

/* 1230 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1238 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1240 */	NdrFcShort( 0x6a ),	/* 106 */
/* 1242 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1244 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 1246 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1254 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1256 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1258 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1260 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1262 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1264 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1268 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 1272 */	NdrFcShort( 0x200a ),	/* Flags:  must free, in, srv alloc size=8 */
/* 1274 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1276 */	NdrFcShort( 0xf6 ),	/* Type Offset=246 */

	/* Parameter p4 */

/* 1278 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1280 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1282 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 1284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1286 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc24 */

/* 1290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1298 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1300 */	NdrFcShort( 0x82 ),	/* 130 */
/* 1302 */	NdrFcShort( 0xac ),	/* 172 */
/* 1304 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1306 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1314 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1318 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1320 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1326 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1330 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p3 */

/* 1332 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1334 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1336 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 1338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1340 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc25 */

/* 1344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1352 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1354 */	NdrFcShort( 0xbe ),	/* 190 */
/* 1356 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1358 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1360 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1368 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1372 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 1374 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1378 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1380 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1382 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1384 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1388 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const wslserviceproxystub_22E32E112E0_22E32E172E0_MIDL_TYPE_FORMAT_STRING wslserviceproxystub_22E32E112E0_22E32E172E0__MIDL_TypeFormatString =
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
/* 30 */	NdrFcShort( 0x10 ),	/* 16 */
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
			0x5b,		/* FC_END */
/* 60 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 62 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 64 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 66 */	NdrFcShort( 0xffca ),	/* Offset= -54 (12) */
/* 68 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 70 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 72 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 74 */	NdrFcShort( 0x2 ),	/* Offset= 2 (76) */
/* 76 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 78 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 80 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 82 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 84 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 86 */	NdrFcShort( 0x2 ),	/* Offset= 2 (88) */
/* 88 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 90 */	NdrFcShort( 0x2 ),	/* Offset= 2 (92) */
/* 92 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 94 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 96 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	
			0x13, 0x0,	/* FC_OP */
/* 102 */	NdrFcShort( 0x8 ),	/* Offset= 8 (110) */
/* 104 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 106 */	NdrFcShort( 0x202 ),	/* 514 */
/* 108 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 110 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 112 */	NdrFcShort( 0x220 ),	/* 544 */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0x0 ),	/* Offset= 0 (116) */
/* 118 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0xff94 ),	/* Offset= -108 (12) */
/* 122 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 124 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 126 */	0x0,		/* 0 */
			NdrFcShort( 0xffe9 ),	/* Offset= -23 (104) */
			0x3e,		/* FC_STRUCTPAD2 */
/* 130 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 132 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 134 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 136 */	
			0x11, 0x0,	/* FC_RP */
/* 138 */	NdrFcShort( 0x2 ),	/* Offset= 2 (140) */
/* 140 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 142 */	NdrFcShort( 0x4 ),	/* 4 */
/* 144 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 150 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 152 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 154 */	NdrFcShort( 0x4 ),	/* 4 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x1 ),	/* 1 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 166 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 168 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 170 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 172 */	
			0x11, 0x0,	/* FC_RP */
/* 174 */	NdrFcShort( 0x2 ),	/* Offset= 2 (176) */
/* 176 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 178 */	NdrFcShort( 0x2 ),	/* 2 */
/* 180 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 182 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 184 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 186 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 188 */	
			0x11, 0x0,	/* FC_RP */
/* 190 */	NdrFcShort( 0xe ),	/* Offset= 14 (204) */
/* 192 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x0 ),	/* Offset= 0 (198) */
/* 200 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 202 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 204 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 206 */	NdrFcShort( 0x18 ),	/* 24 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* Offset= 0 (210) */
/* 212 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 214 */	NdrFcShort( 0xffea ),	/* Offset= -22 (192) */
/* 216 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 218 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (192) */
/* 220 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 222 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (192) */
/* 224 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 226 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 228 */	NdrFcShort( 0x2 ),	/* Offset= 2 (230) */
/* 230 */	0x3c,		/* FC_SYSTEM_HANDLE */
			0x0,		/* 0 */
/* 232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 236 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 238 */	NdrFcShort( 0x2 ),	/* Offset= 2 (240) */
/* 240 */	0x3c,		/* FC_SYSTEM_HANDLE */
			0xa,		/* 10 */
/* 242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 246 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 248 */	NdrFcShort( 0x2 ),	/* Offset= 2 (250) */
/* 250 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 252 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_wslserviceproxystub_22E32E112E0_22E32E172E0_0000_0000, ver. 0.0,
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
    132,
    216,
    270,
    312,
    354,
    408,
    486,
    528,
    570,
    618,
    666,
    840,
    888,
    948,
    1008,
    1056,
    1110,
    1200,
    1230,
    1290,
    1344
    };

static const MIDL_STUBLESS_PROXY_INFO ILxssUserSession_ProxyInfo =
    {
    &Object_StubDesc,
    wslserviceproxystub_22E32E112E0_22E32E172E0__MIDL_ProcFormatString.Format,
    &ILxssUserSession_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ILxssUserSession_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wslserviceproxystub_22E32E112E0_22E32E172E0__MIDL_ProcFormatString.Format,
    &ILxssUserSession_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(26) _ILxssUserSessionProxyVtbl = 
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
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc24 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc25 */
};

const CInterfaceStubVtbl _ILxssUserSessionStubVtbl =
{
    &IID_ILxssUserSession,
    &ILxssUserSession_ServerInfo,
    26,
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
    wslserviceproxystub_22E32E112E0_22E32E172E0__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _wslserviceproxystub_22E32E112E0_22E32E172E0_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ILxssUserSessionProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _wslserviceproxystub_22E32E112E0_22E32E172E0_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ILxssUserSessionStubVtbl,
    0
};

PCInterfaceName const _wslserviceproxystub_22E32E112E0_22E32E172E0_InterfaceNamesList[] = 
{
    "ILxssUserSession",
    0
};


#define _wslserviceproxystub_22E32E112E0_22E32E172E0_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _wslserviceproxystub_22E32E112E0_22E32E172E0, pIID, n)

int __stdcall _wslserviceproxystub_22E32E112E0_22E32E172E0_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_wslserviceproxystub_22E32E112E0_22E32E172E0_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

EXTERN_C const ExtendedProxyFileInfo wslserviceproxystub_22E32E112E0_22E32E172E0_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _wslserviceproxystub_22E32E112E0_22E32E172E0_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _wslserviceproxystub_22E32E112E0_22E32E172E0_StubVtblList,
    (const PCInterfaceName * ) & _wslserviceproxystub_22E32E112E0_22E32E172E0_InterfaceNamesList,
    0, /* no delegation */
    & _wslserviceproxystub_22E32E112E0_22E32E172E0_IID_Lookup, 
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

