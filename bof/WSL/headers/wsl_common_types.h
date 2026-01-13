

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for wsl_common_types.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __wsl_common_types_h__
#define __wsl_common_types_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "wtypes.h"
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wsl_common_types_0000_0000 */
/* [local] */ 

typedef 
enum _LxssHandleType
    {
        LxssHandleConsole	= 0,
        LxssHandleInput	= ( LxssHandleConsole + 1 ) ,
        LxssHandleOutput	= ( LxssHandleInput + 1 ) 
    } 	LxssHandleType;

typedef 
enum _LxssDistributionState
    {
        LxssDistributionStateInvalid	= 0,
        LxssDistributionStateInstalled	= ( LxssDistributionStateInvalid + 1 ) ,
        LxssDistributionStateRunning	= ( LxssDistributionStateInstalled + 1 ) ,
        LxssDistributionStateInstalling	= ( LxssDistributionStateRunning + 1 ) ,
        LxssDistributionStateUninstalling	= ( LxssDistributionStateInstalling + 1 ) ,
        LxssDistributionStateConverting	= ( LxssDistributionStateUninstalling + 1 ) ,
        LxssDistributionStateExporting	= ( LxssDistributionStateConverting + 1 ) 
    } 	LxssDistributionState;

typedef struct _LXSS_HANDLE
    {
    ULONG Member0;
    LxssHandleType Member4;
    } 	LXSS_HANDLE;

typedef LXSS_HANDLE Struct_4;

typedef struct _LXSS_ERROR_INFO
    {
    int Member0;
    long Member8;
    wchar_t *Member10;
    wchar_t *Member18;
    } 	LXSS_ERROR_INFO;

typedef struct _LXSS_ENUMERATE_INFO
    {
    GUID Member0;
    LxssDistributionState Member10;
    int Member14;
    int Member18;
    wchar_t Member1C[ 257 ];
    } 	LXSS_ENUMERATE_INFO;

typedef struct _LXSS_STD_HANDLES
    {
    LXSS_HANDLE Member0;
    LXSS_HANDLE Member8;
    LXSS_HANDLE Member10;
    } 	LXSS_STD_HANDLES;



extern RPC_IF_HANDLE __MIDL_itf_wsl_common_types_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsl_common_types_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


