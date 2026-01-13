

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for wslserviceproxystub_2.5.6.0_2.5.10.0.idl:
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


#include "wslserviceproxystub_2.5.6.0_2.5.10.0.h"

#define TYPE_FORMAT_STRING_SIZE   249                               
#define PROC_FORMAT_STRING_SIZE   1423                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _wslserviceproxystub_22E52E62E0_22E52E102E0_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } wslserviceproxystub_22E52E62E0_22E52E102E0_MIDL_TYPE_FORMAT_STRING;

typedef struct _wslserviceproxystub_22E52E62E0_22E52E102E0_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } wslserviceproxystub_22E52E62E0_22E52E102E0_MIDL_PROC_FORMAT_STRING;

typedef struct _wslserviceproxystub_22E52E62E0_22E52E102E0_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } wslserviceproxystub_22E52E62E0_22E52E102E0_MIDL_EXPR_FORMAT_STRING;


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


extern const wslserviceproxystub_22E52E62E0_22E52E102E0_MIDL_TYPE_FORMAT_STRING wslserviceproxystub_22E52E62E0_22E52E102E0__MIDL_TypeFormatString;
extern const wslserviceproxystub_22E52E62E0_22E52E102E0_MIDL_PROC_FORMAT_STRING wslserviceproxystub_22E52E62E0_22E52E102E0__MIDL_ProcFormatString;
extern const wslserviceproxystub_22E52E62E0_22E52E102E0_MIDL_EXPR_FORMAT_STRING wslserviceproxystub_22E52E62E0_22E52E102E0__MIDL_ExprFormatString;

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


static const wslserviceproxystub_22E52E62E0_22E52E102E0_MIDL_PROC_FORMAT_STRING wslserviceproxystub_22E52E62E0_22E52E102E0__MIDL_ProcFormatString =
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
/* 56 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 58 */	NdrFcShort( 0xda ),	/* 218 */
/* 60 */	NdrFcShort( 0xde ),	/* 222 */
/* 62 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
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

/* 108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 110 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p7 */

/* 114 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 116 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 118 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p8 */

/* 120 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 122 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 124 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter p9 */

/* 126 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 128 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 130 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p10 */

/* 132 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 134 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 136 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc5 */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x5 ),	/* 5 */
/* 152 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 154 */	NdrFcShort( 0xda ),	/* 218 */
/* 156 */	NdrFcShort( 0xde ),	/* 222 */
/* 158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xc,		/* 12 */
/* 160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 168 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 188 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 192 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 194 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 196 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 200 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p6 */

/* 204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 206 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p7 */

/* 210 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 212 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 214 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p8 */

/* 216 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 218 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 220 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter p9 */

/* 222 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 224 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 226 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p10 */

/* 228 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 230 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 232 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 236 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDistributionId */

/* 240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x6 ),	/* 6 */
/* 248 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 250 */	NdrFcShort( 0x6c ),	/* 108 */
/* 252 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 254 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 256 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistributionName */

/* 264 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 268 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter Flags */

/* 270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Error */

/* 276 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 278 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 280 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pDistroGuid */

/* 282 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 284 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 286 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 290 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc7 */

/* 294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x7 ),	/* 7 */
/* 302 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 304 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 306 */	NdrFcShort( 0x6c ),	/* 108 */
/* 308 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 310 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 318 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 322 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 324 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 328 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc8 */

/* 336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 344 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 346 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 348 */	NdrFcShort( 0x6c ),	/* 108 */
/* 350 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 352 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 360 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 364 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 366 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 370 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc9 */

/* 378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x9 ),	/* 9 */
/* 386 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 388 */	NdrFcShort( 0xb8 ),	/* 184 */
/* 390 */	NdrFcShort( 0x6c ),	/* 108 */
/* 392 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 394 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 402 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 406 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 408 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 420 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 422 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 424 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 428 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc10 */

/* 432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0xa ),	/* 10 */
/* 440 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 442 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 444 */	NdrFcShort( 0x14b ),	/* 331 */
/* 446 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x9,		/* 9 */
/* 448 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 456 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 458 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 460 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 462 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 464 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 466 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter p2 */

/* 468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 476 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 480 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 482 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 486 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 488 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 490 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter p6 */

/* 492 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 494 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p7 */

/* 498 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 500 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 502 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 506 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc11 */

/* 510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0xb ),	/* 11 */
/* 518 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 520 */	NdrFcShort( 0x64 ),	/* 100 */
/* 522 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 524 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 526 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 534 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 538 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p1 */

/* 540 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 544 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc12 */

/* 552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0xc ),	/* 12 */
/* 560 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 562 */	NdrFcShort( 0xb8 ),	/* 184 */
/* 564 */	NdrFcShort( 0x6c ),	/* 108 */
/* 566 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 568 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 576 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 580 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 584 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 590 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 594 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 596 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 598 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 602 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc13 */

/* 606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0xd ),	/* 13 */
/* 614 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 616 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 618 */	NdrFcShort( 0x6c ),	/* 108 */
/* 620 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 622 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 630 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 634 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 636 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 640 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc14 */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0xe ),	/* 14 */
/* 656 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 658 */	NdrFcShort( 0xb2 ),	/* 178 */
/* 660 */	NdrFcShort( 0x6c ),	/* 108 */
/* 662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 672 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 688 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 690 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 692 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 694 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 698 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc15 */

/* 702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0xf ),	/* 15 */
/* 710 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 712 */	NdrFcShort( 0x64 ),	/* 100 */
/* 714 */	NdrFcShort( 0x88 ),	/* 136 */
/* 716 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 718 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 726 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 732 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 736 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Parameter p2 */

/* 738 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 742 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 746 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateLxProcess */

/* 750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x10 ),	/* 16 */
/* 758 */	NdrFcShort( 0x68 ),	/* x86 Stack size/offset = 104 */
/* 760 */	NdrFcShort( 0xd4 ),	/* 212 */
/* 762 */	NdrFcShort( 0xf4 ),	/* 244 */
/* 764 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x19,		/* 25 */
/* 766 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x1 ),	/* 1 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 774 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 778 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Filename */

/* 780 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 784 */	NdrFcShort( 0x88 ),	/* Type Offset=136 */

	/* Parameter CommandLineCount */

/* 786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter CommandLine */

/* 792 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 794 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 796 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */

	/* Parameter CurrentWorkingDirectory */

/* 798 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 800 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 802 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter NtPath */

/* 804 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 806 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 808 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter NtEnvironment */

/* 810 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 812 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 814 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter NtEnvironmentLength */

/* 816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 818 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Username */

/* 822 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 824 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 826 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter Columns */

/* 828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 830 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 832 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter Rows */

/* 834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 836 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 838 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ConsoleHandle */

/* 840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 842 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter StdHandles */

/* 846 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 848 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 850 */	NdrFcShort( 0xce ),	/* Type Offset=206 */

	/* Parameter Flags */

/* 852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 854 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DistributionId */

/* 858 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 860 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 862 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter InstanceId */

/* 864 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 866 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 868 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ProcessHandle */

/* 870 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 872 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 874 */	NdrFcShort( 0xe8 ),	/* Type Offset=232 */

	/* Parameter ServerHandle */

/* 876 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 878 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 880 */	NdrFcShort( 0xe8 ),	/* Type Offset=232 */

	/* Parameter StandardIn */

/* 882 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 884 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 886 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter StandardOut */

/* 888 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 890 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 892 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter StandardErr */

/* 894 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 896 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 898 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter CommunicationChannel */

/* 900 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 902 */	NdrFcShort( 0x58 ),	/* x86 Stack size/offset = 88 */
/* 904 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter InteropSocket */

/* 906 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 908 */	NdrFcShort( 0x5c ),	/* x86 Stack size/offset = 92 */
/* 910 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter Error */

/* 912 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 914 */	NdrFcShort( 0x60 ),	/* x86 Stack size/offset = 96 */
/* 916 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 920 */	NdrFcShort( 0x64 ),	/* x86 Stack size/offset = 100 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc17 */

/* 924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x11 ),	/* 17 */
/* 932 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 934 */	NdrFcShort( 0xb8 ),	/* 184 */
/* 936 */	NdrFcShort( 0x6c ),	/* 108 */
/* 938 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 940 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 948 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 950 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 952 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 956 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 962 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 966 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 968 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 970 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 974 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc18 */

/* 978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x12 ),	/* 18 */
/* 986 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 988 */	NdrFcShort( 0xc0 ),	/* 192 */
/* 990 */	NdrFcShort( 0x6c ),	/* 108 */
/* 992 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 994 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1002 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1004 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1006 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 1008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1010 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1016 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 1020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1022 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 1026 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1028 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1030 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1034 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc19 */

/* 1038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1046 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1048 */	NdrFcShort( 0xc0 ),	/* 192 */
/* 1050 */	NdrFcShort( 0x6c ),	/* 108 */
/* 1052 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 1054 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1062 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1066 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 1068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 1080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 1086 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1088 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1090 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1094 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc20 */

/* 1098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1106 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1108 */	NdrFcShort( 0x86 ),	/* 134 */
/* 1110 */	NdrFcShort( 0x6c ),	/* 108 */
/* 1112 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1114 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1122 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1126 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1128 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1130 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1134 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1138 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1142 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc21 */

/* 1146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1154 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1156 */	NdrFcShort( 0x7e ),	/* 126 */
/* 1158 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 1160 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1162 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1170 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1174 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1176 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1178 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1182 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 1188 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1190 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1192 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1196 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc22 */

/* 1200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1208 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1210 */	NdrFcShort( 0xdc ),	/* 220 */
/* 1212 */	NdrFcShort( 0xd2 ),	/* 210 */
/* 1214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 1216 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1224 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1228 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 1242 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1244 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1246 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 1248 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1250 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1252 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 1254 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1256 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1258 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p6 */

/* 1260 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1262 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p7 */

/* 1266 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1268 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p8 */

/* 1272 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 1274 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1276 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter p9 */

/* 1278 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1280 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1282 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1286 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc23 */

/* 1290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1298 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1304 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1306 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc24 */

/* 1320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1328 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1330 */	NdrFcShort( 0x98 ),	/* 152 */
/* 1332 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 1334 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1336 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1344 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1348 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1350 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1354 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1356 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1358 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1360 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p3 */

/* 1362 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1364 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1366 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 1368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1370 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc25 */

/* 1374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1382 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1384 */	NdrFcShort( 0xc2 ),	/* 194 */
/* 1386 */	NdrFcShort( 0x6c ),	/* 108 */
/* 1388 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1390 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1398 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1400 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1402 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 1404 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1406 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1408 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1410 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1412 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1414 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1418 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const wslserviceproxystub_22E52E62E0_22E52E102E0_MIDL_TYPE_FORMAT_STRING wslserviceproxystub_22E52E62E0_22E52E102E0__MIDL_TypeFormatString =
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


/* Standard interface: __MIDL_itf_wslserviceproxystub_22E52E62E0_22E52E102E0_0000_0000, ver. 0.0,
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
    144,
    240,
    294,
    336,
    378,
    432,
    510,
    552,
    606,
    648,
    702,
    750,
    924,
    978,
    1038,
    1098,
    1146,
    1200,
    1290,
    1320,
    1374
    };

static const MIDL_STUBLESS_PROXY_INFO ILxssUserSession_ProxyInfo =
    {
    &Object_StubDesc,
    wslserviceproxystub_22E52E62E0_22E52E102E0__MIDL_ProcFormatString.Format,
    &ILxssUserSession_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ILxssUserSession_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wslserviceproxystub_22E52E62E0_22E52E102E0__MIDL_ProcFormatString.Format,
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
    (void *) (INT_PTR) -1 /* ILxssUserSession::Proc15 */ ,
    (void *) (INT_PTR) -1 /* ILxssUserSession::CreateLxProcess */ ,
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
    wslserviceproxystub_22E52E62E0_22E52E102E0__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _wslserviceproxystub_22E52E62E0_22E52E102E0_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ILxssUserSessionProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _wslserviceproxystub_22E52E62E0_22E52E102E0_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ILxssUserSessionStubVtbl,
    0
};

PCInterfaceName const _wslserviceproxystub_22E52E62E0_22E52E102E0_InterfaceNamesList[] = 
{
    "ILxssUserSession",
    0
};


#define _wslserviceproxystub_22E52E62E0_22E52E102E0_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _wslserviceproxystub_22E52E62E0_22E52E102E0, pIID, n)

int __stdcall _wslserviceproxystub_22E52E62E0_22E52E102E0_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_wslserviceproxystub_22E52E62E0_22E52E102E0_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

EXTERN_C const ExtendedProxyFileInfo wslserviceproxystub_22E52E62E0_22E52E102E0_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _wslserviceproxystub_22E52E62E0_22E52E102E0_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _wslserviceproxystub_22E52E62E0_22E52E102E0_StubVtblList,
    (const PCInterfaceName * ) & _wslserviceproxystub_22E52E62E0_22E52E102E0_InterfaceNamesList,
    0, /* no delegation */
    & _wslserviceproxystub_22E52E62E0_22E52E102E0_IID_Lookup, 
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

