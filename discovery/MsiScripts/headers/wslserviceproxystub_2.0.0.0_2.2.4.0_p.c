

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for wslserviceproxystub_2.0.0.0_2.2.4.0.idl:
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


#include "wslserviceproxystub_2.0.0.0_2.2.4.0.h"

#define TYPE_FORMAT_STRING_SIZE   255                               
#define PROC_FORMAT_STRING_SIZE   1315                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _wslserviceproxystub_22E02E02E0_22E22E42E0_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } wslserviceproxystub_22E02E02E0_22E22E42E0_MIDL_TYPE_FORMAT_STRING;

typedef struct _wslserviceproxystub_22E02E02E0_22E22E42E0_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } wslserviceproxystub_22E02E02E0_22E22E42E0_MIDL_PROC_FORMAT_STRING;

typedef struct _wslserviceproxystub_22E02E02E0_22E22E42E0_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } wslserviceproxystub_22E02E02E0_22E22E42E0_MIDL_EXPR_FORMAT_STRING;


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


extern const wslserviceproxystub_22E02E02E0_22E22E42E0_MIDL_TYPE_FORMAT_STRING wslserviceproxystub_22E02E02E0_22E22E42E0__MIDL_TypeFormatString;
extern const wslserviceproxystub_22E02E02E0_22E22E42E0_MIDL_PROC_FORMAT_STRING wslserviceproxystub_22E02E02E0_22E22E42E0__MIDL_ProcFormatString;
extern const wslserviceproxystub_22E02E02E0_22E22E42E0_MIDL_EXPR_FORMAT_STRING wslserviceproxystub_22E02E02E0_22E22E42E0__MIDL_ExprFormatString;

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


static const wslserviceproxystub_22E02E02E0_22E22E42E0_MIDL_PROC_FORMAT_STRING wslserviceproxystub_22E02E02E0_22E22E42E0__MIDL_ProcFormatString =
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
/* 56 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 58 */	NdrFcShort( 0xc6 ),	/* 198 */
/* 60 */	NdrFcShort( 0xac ),	/* 172 */
/* 62 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x9,		/* 9 */
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

/* 90 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 92 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 94 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 96 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 98 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 102 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 104 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 106 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p6 */

/* 108 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 110 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 112 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p7 */

/* 114 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 116 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 118 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 122 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc5 */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x5 ),	/* 5 */
/* 134 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 136 */	NdrFcShort( 0xc6 ),	/* 198 */
/* 138 */	NdrFcShort( 0xac ),	/* 172 */
/* 140 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x9,		/* 9 */
/* 142 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 150 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 154 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 158 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 168 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 170 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 172 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 180 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 182 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 184 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p6 */

/* 186 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 188 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 190 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p7 */

/* 192 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 194 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 196 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 200 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDistributionId */

/* 204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x6 ),	/* 6 */
/* 212 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 214 */	NdrFcShort( 0x68 ),	/* 104 */
/* 216 */	NdrFcShort( 0xac ),	/* 172 */
/* 218 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 220 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistributionName */

/* 228 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 232 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter Flags */

/* 234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Error */

/* 240 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 244 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pDistroGuid */

/* 246 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 248 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 250 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc7 */

/* 258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x7 ),	/* 7 */
/* 266 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 268 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 270 */	NdrFcShort( 0x68 ),	/* 104 */
/* 272 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 282 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 286 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 288 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 292 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc8 */

/* 300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 308 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 310 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 312 */	NdrFcShort( 0x68 ),	/* 104 */
/* 314 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 316 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 324 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 328 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 330 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 334 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 338 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc9 */

/* 342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x9 ),	/* 9 */
/* 350 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 352 */	NdrFcShort( 0xb4 ),	/* 180 */
/* 354 */	NdrFcShort( 0x68 ),	/* 104 */
/* 356 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 358 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 366 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 370 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 384 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 386 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 388 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 392 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc10 */

/* 396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0xa ),	/* 10 */
/* 404 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 406 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 408 */	NdrFcShort( 0x147 ),	/* 327 */
/* 410 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x9,		/* 9 */
/* 412 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 420 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 422 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 424 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 426 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 428 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 430 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter p2 */

/* 432 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 440 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 446 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 450 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 452 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 454 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter p6 */

/* 456 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 458 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p7 */

/* 462 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 464 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 466 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 470 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc11 */

/* 474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0xb ),	/* 11 */
/* 482 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 484 */	NdrFcShort( 0x60 ),	/* 96 */
/* 486 */	NdrFcShort( 0xac ),	/* 172 */
/* 488 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 490 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 498 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 500 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 502 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p1 */

/* 504 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 508 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc12 */

/* 516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0xc ),	/* 12 */
/* 524 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 526 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 528 */	NdrFcShort( 0x68 ),	/* 104 */
/* 530 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 532 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 540 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 544 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 546 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 550 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 554 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc13 */

/* 558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0xd ),	/* 13 */
/* 566 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 568 */	NdrFcShort( 0xa9 ),	/* 169 */
/* 570 */	NdrFcShort( 0x68 ),	/* 104 */
/* 572 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 574 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 582 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 586 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 590 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 592 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 594 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 598 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 602 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc14 */

/* 606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0xe ),	/* 14 */
/* 614 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 616 */	NdrFcShort( 0x60 ),	/* 96 */
/* 618 */	NdrFcShort( 0x84 ),	/* 132 */
/* 620 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 622 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 630 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 636 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 640 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */

	/* Parameter p2 */

/* 642 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 646 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 650 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateLxProcess */

/* 654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0xf ),	/* 15 */
/* 662 */	NdrFcShort( 0x64 ),	/* x86 Stack size/offset = 100 */
/* 664 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 666 */	NdrFcShort( 0xf0 ),	/* 240 */
/* 668 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x18,		/* 24 */
/* 670 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0x1 ),	/* 1 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DistroGuid */

/* 678 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 682 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Filename */

/* 684 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 688 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Parameter CommandLineCount */

/* 690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter CommandLine */

/* 696 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 698 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 700 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter CurrentWorkingDirectory */

/* 702 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 704 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 706 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter NtPath */

/* 708 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 710 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 712 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter NtEnvironment */

/* 714 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 716 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 718 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Parameter NtEnvironmentLength */

/* 720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 722 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Username */

/* 726 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 728 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 730 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter Columns */

/* 732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 734 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 736 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter Rows */

/* 738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 740 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 742 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ConsoleHandle */

/* 744 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 746 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter StdHandles */

/* 750 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 752 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 754 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Parameter Flags */

/* 756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 758 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DistributionId */

/* 762 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 764 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 766 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter InstanceId */

/* 768 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 770 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 772 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ProcessHandle */

/* 774 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 776 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 778 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Parameter ServerHandle */

/* 780 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 782 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 784 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Parameter StandardIn */

/* 786 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 788 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 790 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Parameter StandardOut */

/* 792 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 794 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 796 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Parameter StandardErr */

/* 798 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 800 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 802 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Parameter CommunicationChannel */

/* 804 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 806 */	NdrFcShort( 0x58 ),	/* x86 Stack size/offset = 88 */
/* 808 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Parameter Error */

/* 810 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 812 */	NdrFcShort( 0x5c ),	/* x86 Stack size/offset = 92 */
/* 814 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 818 */	NdrFcShort( 0x60 ),	/* x86 Stack size/offset = 96 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc16 */

/* 822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x10 ),	/* 16 */
/* 830 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 832 */	NdrFcShort( 0xac ),	/* 172 */
/* 834 */	NdrFcShort( 0x68 ),	/* 104 */
/* 836 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 838 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 846 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 850 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 858 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 862 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc17 */

/* 870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0x11 ),	/* 17 */
/* 878 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 880 */	NdrFcShort( 0xb4 ),	/* 180 */
/* 882 */	NdrFcShort( 0x68 ),	/* 104 */
/* 884 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 886 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 894 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 898 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter p1 */

/* 900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 908 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 912 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 914 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 916 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 920 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc18 */

/* 924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x12 ),	/* 18 */
/* 932 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 934 */	NdrFcShort( 0xb4 ),	/* 180 */
/* 936 */	NdrFcShort( 0x68 ),	/* 104 */
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

	/* Procedure Proc19 */

/* 978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x13 ),	/* 19 */
/* 986 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 988 */	NdrFcShort( 0x82 ),	/* 130 */
/* 990 */	NdrFcShort( 0x68 ),	/* 104 */
/* 992 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 994 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1002 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1004 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1006 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1010 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1014 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1016 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1018 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1022 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc20 */

/* 1026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1034 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1036 */	NdrFcShort( 0x7a ),	/* 122 */
/* 1038 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 1040 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
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

/* 1056 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1058 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 1068 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1070 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1072 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1076 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc21 */

/* 1080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1088 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1090 */	NdrFcShort( 0xd8 ),	/* 216 */
/* 1092 */	NdrFcShort( 0xce ),	/* 206 */
/* 1094 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xb,		/* 11 */
/* 1096 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1104 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1108 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 1122 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1124 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1126 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p4 */

/* 1128 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1130 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1132 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p5 */

/* 1134 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1136 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1138 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p6 */

/* 1140 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1142 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p7 */

/* 1146 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1148 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p8 */

/* 1152 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 1154 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1156 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter p9 */

/* 1158 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1160 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1162 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1166 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc22 */

/* 1170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1178 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1184 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1186 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1196 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc23 */

/* 1200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1208 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1210 */	NdrFcShort( 0x6a ),	/* 106 */
/* 1212 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
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

/* 1230 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1234 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p3 */

/* 1242 */	NdrFcShort( 0x200a ),	/* Flags:  must free, in, srv alloc size=8 */
/* 1244 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1246 */	NdrFcShort( 0xf6 ),	/* Type Offset=246 */

	/* Parameter p4 */

/* 1248 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1250 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1252 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 1254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1256 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc24 */

/* 1260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1268 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1270 */	NdrFcShort( 0x82 ),	/* 130 */
/* 1272 */	NdrFcShort( 0xac ),	/* 172 */
/* 1274 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1276 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter p0 */

/* 1284 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1288 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter p1 */

/* 1290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p2 */

/* 1296 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1300 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter p3 */

/* 1302 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1304 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1306 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 1308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1310 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const wslserviceproxystub_22E02E02E0_22E22E42E0_MIDL_TYPE_FORMAT_STRING wslserviceproxystub_22E02E02E0_22E22E42E0__MIDL_TypeFormatString =
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


/* Standard interface: __MIDL_itf_wslserviceproxystub_22E02E02E0_22E22E42E0_0000_0000, ver. 0.0,
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
    126,
    204,
    258,
    300,
    342,
    396,
    474,
    516,
    558,
    606,
    654,
    822,
    870,
    924,
    978,
    1026,
    1080,
    1170,
    1200,
    1260
    };

static const MIDL_STUBLESS_PROXY_INFO ILxssUserSession_ProxyInfo =
    {
    &Object_StubDesc,
    wslserviceproxystub_22E02E02E0_22E22E42E0__MIDL_ProcFormatString.Format,
    &ILxssUserSession_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ILxssUserSession_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wslserviceproxystub_22E02E02E0_22E22E42E0__MIDL_ProcFormatString.Format,
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
    wslserviceproxystub_22E02E02E0_22E22E42E0__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _wslserviceproxystub_22E02E02E0_22E22E42E0_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ILxssUserSessionProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _wslserviceproxystub_22E02E02E0_22E22E42E0_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ILxssUserSessionStubVtbl,
    0
};

PCInterfaceName const _wslserviceproxystub_22E02E02E0_22E22E42E0_InterfaceNamesList[] = 
{
    "ILxssUserSession",
    0
};


#define _wslserviceproxystub_22E02E02E0_22E22E42E0_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _wslserviceproxystub_22E02E02E0_22E22E42E0, pIID, n)

int __stdcall _wslserviceproxystub_22E02E02E0_22E22E42E0_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_wslserviceproxystub_22E02E02E0_22E22E42E0_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

EXTERN_C const ExtendedProxyFileInfo wslserviceproxystub_22E02E02E0_22E22E42E0_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _wslserviceproxystub_22E02E02E0_22E22E42E0_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _wslserviceproxystub_22E02E02E0_22E22E42E0_StubVtblList,
    (const PCInterfaceName * ) & _wslserviceproxystub_22E02E02E0_22E22E42E0_InterfaceNamesList,
    0, /* no delegation */
    & _wslserviceproxystub_22E02E02E0_22E22E42E0_IID_Lookup, 
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

