

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for wslserviceproxystub_2.5.4.0.idl:
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __wslserviceproxystub_22E52E42E0_h__
#define __wslserviceproxystub_22E52E42E0_h__

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

#ifndef __ILxssUserSession_FWD_DEFINED__
#define __ILxssUserSession_FWD_DEFINED__
typedef interface ILxssUserSession ILxssUserSession;

#endif 	/* __ILxssUserSession_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wslserviceproxystub_22E52E42E0_0000_0000 */
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
    int Member20;
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



extern RPC_IF_HANDLE __MIDL_itf_wslserviceproxystub_22E52E42E0_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wslserviceproxystub_22E52E42E0_0000_0000_v0_0_s_ifspec;

#ifndef __ILxssUserSession_INTERFACE_DEFINED__
#define __ILxssUserSession_INTERFACE_DEFINED__

/* interface ILxssUserSession */
/* [uuid][object] */ 


EXTERN_C const IID IID_ILxssUserSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("38541bdc-f54f-4ceb-85d0-37f0f3d2617e")
    ILxssUserSession : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Proc3( 
            /* [in] */ GUID *p0,
            /* [in] */ int p1,
            /* [out][in] */ LXSS_ERROR_INFO *p2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc4( 
            /* [in] */ wchar_t *p0,
            /* [in] */ int p1,
            /* [in] */ UINT_PTR p2,
            /* [in] */ UINT_PTR p3,
            /* [in] */ wchar_t *p4,
            /* [in] */ int p5,
            /* [in] */ long p6,
            /* [in] */ wchar_t *p7,
            /* [out] */ wchar_t **p8,
            /* [out][in] */ LXSS_ERROR_INFO *p9,
            /* [out] */ GUID *p10) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc5( 
            /* [in] */ wchar_t *p0,
            /* [in] */ int p1,
            /* [in] */ UINT_PTR p2,
            /* [in] */ UINT_PTR p3,
            /* [in] */ wchar_t *p4,
            /* [in] */ int p5,
            /* [in] */ long p6,
            /* [in] */ wchar_t *p7,
            /* [out] */ wchar_t **p8,
            /* [out][in] */ LXSS_ERROR_INFO *p9,
            /* [out] */ GUID *p10) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDistributionId( 
            /* [in] */ LPCWSTR DistributionName,
            /* [in] */ ULONG Flags,
            /* [out][in] */ LXSS_ERROR_INFO *Error,
            /* [retval][out] */ GUID *pDistroGuid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc7( 
            /* [in] */ GUID *p0,
            /* [out][in] */ LXSS_ERROR_INFO *p1) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc8( 
            /* [in] */ GUID *p0,
            /* [out][in] */ LXSS_ERROR_INFO *p1) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc9( 
            /* [in] */ GUID *p0,
            /* [in] */ int p1,
            /* [in] */ int p2,
            /* [out][in] */ LXSS_ERROR_INFO *p3) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc10( 
            /* [in] */ GUID *p0,
            /* [out] */ wchar_t **p1,
            /* [out] */ int *p2,
            /* [out] */ int *p3,
            /* [out] */ int *p4,
            /* [out] */ unsigned char ***p5,
            /* [out] */ int *p6,
            /* [out][in] */ LXSS_ERROR_INFO *p7) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc11( 
            /* [out][in] */ LXSS_ERROR_INFO *p0,
            /* [out] */ GUID *p1) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc12( 
            /* [in] */ GUID *p0,
            /* [in] */ UINT_PTR p1,
            /* [in] */ long p2,
            /* [out][in] */ LXSS_ERROR_INFO *p3) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc13( 
            /* [in] */ GUID *p0,
            /* [out][in] */ LXSS_ERROR_INFO *p1) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc14( 
            /* [in] */ GUID *p0,
            /* [in] */ byte p1,
            /* [out][in] */ LXSS_ERROR_INFO *p2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc15( 
            /* [out] */ int *p0,
            /* [out] */ LXSS_ENUMERATE_INFO **p1,
            /* [out][in] */ LXSS_ERROR_INFO *p2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateLxProcess( 
            /* [in] */ LPCGUID DistroGuid,
            /* [in] */ LPCSTR Filename,
            /* [in] */ ULONG CommandLineCount,
            /* [size_is][in] */ LPCSTR *CommandLine,
            /* [in] */ LPCWSTR CurrentWorkingDirectory,
            /* [in] */ LPCWSTR NtPath,
            /* [size_is][in] */ WCHAR *NtEnvironment,
            /* [in] */ ULONG NtEnvironmentLength,
            /* [in] */ LPCWSTR Username,
            /* [in] */ SHORT Columns,
            /* [in] */ SHORT Rows,
            /* [in] */ ULONG ConsoleHandle,
            /* [in] */ LXSS_STD_HANDLES *StdHandles,
            /* [in] */ ULONG Flags,
            /* [out] */ GUID *DistributionId,
            /* [out] */ GUID *InstanceId,
            /* [system_handle][out] */ HANDLE *ProcessHandle,
            /* [system_handle][out] */ HANDLE *ServerHandle,
            /* [system_handle][out] */ HANDLE *StandardIn,
            /* [system_handle][out] */ HANDLE *StandardOut,
            /* [system_handle][out] */ HANDLE *StandardErr,
            /* [system_handle][out] */ HANDLE *CommunicationChannel,
            /* [system_handle][out] */ HANDLE *InteropSocket,
            /* [out][in] */ LXSS_ERROR_INFO *Error) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc17( 
            /* [in] */ GUID *p0,
            /* [in] */ int p1,
            /* [in] */ UINT_PTR p2,
            /* [out][in] */ LXSS_ERROR_INFO *p3) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc18( 
            /* [in] */ GUID *p0,
            /* [in] */ UINT_PTR p1,
            /* [in] */ UINT_PTR p2,
            /* [in] */ int p3,
            /* [out][in] */ LXSS_ERROR_INFO *p4) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc19( 
            /* [in] */ GUID *p0,
            /* [in] */ UINT_PTR p1,
            /* [in] */ UINT_PTR p2,
            /* [in] */ int p3,
            /* [out][in] */ LXSS_ERROR_INFO *p4) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc20( 
            /* [in] */ wchar_t *p0,
            /* [in] */ int p1,
            /* [out][in] */ LXSS_ERROR_INFO *p2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc21( 
            /* [in] */ wchar_t *p0,
            /* [out] */ int *p1,
            /* [out] */ int *p2,
            /* [out][in] */ LXSS_ERROR_INFO *p3) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc22( 
            /* [in] */ wchar_t *p0,
            /* [in] */ int p1,
            /* [in] */ int p2,
            /* [in] */ wchar_t *p3,
            /* [in] */ wchar_t *p4,
            /* [in] */ wchar_t *p5,
            /* [out] */ int *p6,
            /* [out] */ int *p7,
            /* [out] */ wchar_t **p8,
            /* [out][in] */ LXSS_ERROR_INFO *p9) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc23( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc24( 
            /* [in] */ wchar_t *p0,
            /* [in] */ wchar_t *p1,
            /* [out][in] */ LXSS_ERROR_INFO *p2,
            /* [out] */ GUID *p3) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Proc25( 
            /* [in] */ GUID *p0,
            /* [in] */ wchar_t *p1,
            /* [out][in] */ LXSS_ERROR_INFO *p2) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILxssUserSessionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILxssUserSession * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILxssUserSession * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILxssUserSession * This);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc3)
        HRESULT ( STDMETHODCALLTYPE *Proc3 )( 
            ILxssUserSession * This,
            /* [in] */ GUID *p0,
            /* [in] */ int p1,
            /* [out][in] */ LXSS_ERROR_INFO *p2);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc4)
        HRESULT ( STDMETHODCALLTYPE *Proc4 )( 
            ILxssUserSession * This,
            /* [in] */ wchar_t *p0,
            /* [in] */ int p1,
            /* [in] */ UINT_PTR p2,
            /* [in] */ UINT_PTR p3,
            /* [in] */ wchar_t *p4,
            /* [in] */ int p5,
            /* [in] */ long p6,
            /* [in] */ wchar_t *p7,
            /* [out] */ wchar_t **p8,
            /* [out][in] */ LXSS_ERROR_INFO *p9,
            /* [out] */ GUID *p10);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc5)
        HRESULT ( STDMETHODCALLTYPE *Proc5 )( 
            ILxssUserSession * This,
            /* [in] */ wchar_t *p0,
            /* [in] */ int p1,
            /* [in] */ UINT_PTR p2,
            /* [in] */ UINT_PTR p3,
            /* [in] */ wchar_t *p4,
            /* [in] */ int p5,
            /* [in] */ long p6,
            /* [in] */ wchar_t *p7,
            /* [out] */ wchar_t **p8,
            /* [out][in] */ LXSS_ERROR_INFO *p9,
            /* [out] */ GUID *p10);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, GetDistributionId)
        HRESULT ( STDMETHODCALLTYPE *GetDistributionId )( 
            ILxssUserSession * This,
            /* [in] */ LPCWSTR DistributionName,
            /* [in] */ ULONG Flags,
            /* [out][in] */ LXSS_ERROR_INFO *Error,
            /* [retval][out] */ GUID *pDistroGuid);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc7)
        HRESULT ( STDMETHODCALLTYPE *Proc7 )( 
            ILxssUserSession * This,
            /* [in] */ GUID *p0,
            /* [out][in] */ LXSS_ERROR_INFO *p1);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc8)
        HRESULT ( STDMETHODCALLTYPE *Proc8 )( 
            ILxssUserSession * This,
            /* [in] */ GUID *p0,
            /* [out][in] */ LXSS_ERROR_INFO *p1);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc9)
        HRESULT ( STDMETHODCALLTYPE *Proc9 )( 
            ILxssUserSession * This,
            /* [in] */ GUID *p0,
            /* [in] */ int p1,
            /* [in] */ int p2,
            /* [out][in] */ LXSS_ERROR_INFO *p3);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc10)
        HRESULT ( STDMETHODCALLTYPE *Proc10 )( 
            ILxssUserSession * This,
            /* [in] */ GUID *p0,
            /* [out] */ wchar_t **p1,
            /* [out] */ int *p2,
            /* [out] */ int *p3,
            /* [out] */ int *p4,
            /* [out] */ unsigned char ***p5,
            /* [out] */ int *p6,
            /* [out][in] */ LXSS_ERROR_INFO *p7);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc11)
        HRESULT ( STDMETHODCALLTYPE *Proc11 )( 
            ILxssUserSession * This,
            /* [out][in] */ LXSS_ERROR_INFO *p0,
            /* [out] */ GUID *p1);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc12)
        HRESULT ( STDMETHODCALLTYPE *Proc12 )( 
            ILxssUserSession * This,
            /* [in] */ GUID *p0,
            /* [in] */ UINT_PTR p1,
            /* [in] */ long p2,
            /* [out][in] */ LXSS_ERROR_INFO *p3);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc13)
        HRESULT ( STDMETHODCALLTYPE *Proc13 )( 
            ILxssUserSession * This,
            /* [in] */ GUID *p0,
            /* [out][in] */ LXSS_ERROR_INFO *p1);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc14)
        HRESULT ( STDMETHODCALLTYPE *Proc14 )( 
            ILxssUserSession * This,
            /* [in] */ GUID *p0,
            /* [in] */ byte p1,
            /* [out][in] */ LXSS_ERROR_INFO *p2);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc15)
        HRESULT ( STDMETHODCALLTYPE *Proc15 )( 
            ILxssUserSession * This,
            /* [out] */ int *p0,
            /* [out] */ LXSS_ENUMERATE_INFO **p1,
            /* [out][in] */ LXSS_ERROR_INFO *p2);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, CreateLxProcess)
        HRESULT ( STDMETHODCALLTYPE *CreateLxProcess )( 
            ILxssUserSession * This,
            /* [in] */ LPCGUID DistroGuid,
            /* [in] */ LPCSTR Filename,
            /* [in] */ ULONG CommandLineCount,
            /* [size_is][in] */ LPCSTR *CommandLine,
            /* [in] */ LPCWSTR CurrentWorkingDirectory,
            /* [in] */ LPCWSTR NtPath,
            /* [size_is][in] */ WCHAR *NtEnvironment,
            /* [in] */ ULONG NtEnvironmentLength,
            /* [in] */ LPCWSTR Username,
            /* [in] */ SHORT Columns,
            /* [in] */ SHORT Rows,
            /* [in] */ ULONG ConsoleHandle,
            /* [in] */ LXSS_STD_HANDLES *StdHandles,
            /* [in] */ ULONG Flags,
            /* [out] */ GUID *DistributionId,
            /* [out] */ GUID *InstanceId,
            /* [system_handle][out] */ HANDLE *ProcessHandle,
            /* [system_handle][out] */ HANDLE *ServerHandle,
            /* [system_handle][out] */ HANDLE *StandardIn,
            /* [system_handle][out] */ HANDLE *StandardOut,
            /* [system_handle][out] */ HANDLE *StandardErr,
            /* [system_handle][out] */ HANDLE *CommunicationChannel,
            /* [system_handle][out] */ HANDLE *InteropSocket,
            /* [out][in] */ LXSS_ERROR_INFO *Error);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc17)
        HRESULT ( STDMETHODCALLTYPE *Proc17 )( 
            ILxssUserSession * This,
            /* [in] */ GUID *p0,
            /* [in] */ int p1,
            /* [in] */ UINT_PTR p2,
            /* [out][in] */ LXSS_ERROR_INFO *p3);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc18)
        HRESULT ( STDMETHODCALLTYPE *Proc18 )( 
            ILxssUserSession * This,
            /* [in] */ GUID *p0,
            /* [in] */ UINT_PTR p1,
            /* [in] */ UINT_PTR p2,
            /* [in] */ int p3,
            /* [out][in] */ LXSS_ERROR_INFO *p4);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc19)
        HRESULT ( STDMETHODCALLTYPE *Proc19 )( 
            ILxssUserSession * This,
            /* [in] */ GUID *p0,
            /* [in] */ UINT_PTR p1,
            /* [in] */ UINT_PTR p2,
            /* [in] */ int p3,
            /* [out][in] */ LXSS_ERROR_INFO *p4);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc20)
        HRESULT ( STDMETHODCALLTYPE *Proc20 )( 
            ILxssUserSession * This,
            /* [in] */ wchar_t *p0,
            /* [in] */ int p1,
            /* [out][in] */ LXSS_ERROR_INFO *p2);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc21)
        HRESULT ( STDMETHODCALLTYPE *Proc21 )( 
            ILxssUserSession * This,
            /* [in] */ wchar_t *p0,
            /* [out] */ int *p1,
            /* [out] */ int *p2,
            /* [out][in] */ LXSS_ERROR_INFO *p3);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc22)
        HRESULT ( STDMETHODCALLTYPE *Proc22 )( 
            ILxssUserSession * This,
            /* [in] */ wchar_t *p0,
            /* [in] */ int p1,
            /* [in] */ int p2,
            /* [in] */ wchar_t *p3,
            /* [in] */ wchar_t *p4,
            /* [in] */ wchar_t *p5,
            /* [out] */ int *p6,
            /* [out] */ int *p7,
            /* [out] */ wchar_t **p8,
            /* [out][in] */ LXSS_ERROR_INFO *p9);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc23)
        HRESULT ( STDMETHODCALLTYPE *Proc23 )( 
            ILxssUserSession * This);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc24)
        HRESULT ( STDMETHODCALLTYPE *Proc24 )( 
            ILxssUserSession * This,
            /* [in] */ wchar_t *p0,
            /* [in] */ wchar_t *p1,
            /* [out][in] */ LXSS_ERROR_INFO *p2,
            /* [out] */ GUID *p3);
        
        DECLSPEC_XFGVIRT(ILxssUserSession, Proc25)
        HRESULT ( STDMETHODCALLTYPE *Proc25 )( 
            ILxssUserSession * This,
            /* [in] */ GUID *p0,
            /* [in] */ wchar_t *p1,
            /* [out][in] */ LXSS_ERROR_INFO *p2);
        
        END_INTERFACE
    } ILxssUserSessionVtbl;

    interface ILxssUserSession
    {
        CONST_VTBL struct ILxssUserSessionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILxssUserSession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILxssUserSession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILxssUserSession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILxssUserSession_Proc3(This,p0,p1,p2)	\
    ( (This)->lpVtbl -> Proc3(This,p0,p1,p2) ) 

#define ILxssUserSession_Proc4(This,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10)	\
    ( (This)->lpVtbl -> Proc4(This,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10) ) 

#define ILxssUserSession_Proc5(This,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10)	\
    ( (This)->lpVtbl -> Proc5(This,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10) ) 

#define ILxssUserSession_GetDistributionId(This,DistributionName,Flags,Error,pDistroGuid)	\
    ( (This)->lpVtbl -> GetDistributionId(This,DistributionName,Flags,Error,pDistroGuid) ) 

#define ILxssUserSession_Proc7(This,p0,p1)	\
    ( (This)->lpVtbl -> Proc7(This,p0,p1) ) 

#define ILxssUserSession_Proc8(This,p0,p1)	\
    ( (This)->lpVtbl -> Proc8(This,p0,p1) ) 

#define ILxssUserSession_Proc9(This,p0,p1,p2,p3)	\
    ( (This)->lpVtbl -> Proc9(This,p0,p1,p2,p3) ) 

#define ILxssUserSession_Proc10(This,p0,p1,p2,p3,p4,p5,p6,p7)	\
    ( (This)->lpVtbl -> Proc10(This,p0,p1,p2,p3,p4,p5,p6,p7) ) 

#define ILxssUserSession_Proc11(This,p0,p1)	\
    ( (This)->lpVtbl -> Proc11(This,p0,p1) ) 

#define ILxssUserSession_Proc12(This,p0,p1,p2,p3)	\
    ( (This)->lpVtbl -> Proc12(This,p0,p1,p2,p3) ) 

#define ILxssUserSession_Proc13(This,p0,p1)	\
    ( (This)->lpVtbl -> Proc13(This,p0,p1) ) 

#define ILxssUserSession_Proc14(This,p0,p1,p2)	\
    ( (This)->lpVtbl -> Proc14(This,p0,p1,p2) ) 

#define ILxssUserSession_Proc15(This,p0,p1,p2)	\
    ( (This)->lpVtbl -> Proc15(This,p0,p1,p2) ) 

#define ILxssUserSession_CreateLxProcess(This,DistroGuid,Filename,CommandLineCount,CommandLine,CurrentWorkingDirectory,NtPath,NtEnvironment,NtEnvironmentLength,Username,Columns,Rows,ConsoleHandle,StdHandles,Flags,DistributionId,InstanceId,ProcessHandle,ServerHandle,StandardIn,StandardOut,StandardErr,CommunicationChannel,InteropSocket,Error)	\
    ( (This)->lpVtbl -> CreateLxProcess(This,DistroGuid,Filename,CommandLineCount,CommandLine,CurrentWorkingDirectory,NtPath,NtEnvironment,NtEnvironmentLength,Username,Columns,Rows,ConsoleHandle,StdHandles,Flags,DistributionId,InstanceId,ProcessHandle,ServerHandle,StandardIn,StandardOut,StandardErr,CommunicationChannel,InteropSocket,Error) ) 

#define ILxssUserSession_Proc17(This,p0,p1,p2,p3)	\
    ( (This)->lpVtbl -> Proc17(This,p0,p1,p2,p3) ) 

#define ILxssUserSession_Proc18(This,p0,p1,p2,p3,p4)	\
    ( (This)->lpVtbl -> Proc18(This,p0,p1,p2,p3,p4) ) 

#define ILxssUserSession_Proc19(This,p0,p1,p2,p3,p4)	\
    ( (This)->lpVtbl -> Proc19(This,p0,p1,p2,p3,p4) ) 

#define ILxssUserSession_Proc20(This,p0,p1,p2)	\
    ( (This)->lpVtbl -> Proc20(This,p0,p1,p2) ) 

#define ILxssUserSession_Proc21(This,p0,p1,p2,p3)	\
    ( (This)->lpVtbl -> Proc21(This,p0,p1,p2,p3) ) 

#define ILxssUserSession_Proc22(This,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9)	\
    ( (This)->lpVtbl -> Proc22(This,p0,p1,p2,p3,p4,p5,p6,p7,p8,p9) ) 

#define ILxssUserSession_Proc23(This)	\
    ( (This)->lpVtbl -> Proc23(This) ) 

#define ILxssUserSession_Proc24(This,p0,p1,p2,p3)	\
    ( (This)->lpVtbl -> Proc24(This,p0,p1,p2,p3) ) 

#define ILxssUserSession_Proc25(This,p0,p1,p2)	\
    ( (This)->lpVtbl -> Proc25(This,p0,p1,p2) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILxssUserSession_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


