 
// begin_1_0
// begin2_0
/********************************************************************************
*                                                                               *
* ProcessEnv.h -- ApiSet Contract for api-ms-win-core-processenvironment-l1     *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _PROCESSENV_
#define _PROCESSENV_

#include <apiset.h>
#include <apisetcconv.h>


#include <minwindef.h>

/* APISET_NAME: api-ms-win-core-processenvironment-l1 */

#ifndef _APISET_PROCESSENV_VER
#ifdef _APISET_MINWIN_VERSION
#if _APISET_MINWIN_VERSION > 0x0100
#define _APISET_PROCESSENV_VER 0x0200
#elif _APISET_MINWIN_VERSION == 0x0100
#define _APISET_PROCESSENV_VER 0x0100
#endif
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

// end_1_0
// end2_0

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

// begin_1_0

WINBASEAPI
_NullNull_terminated_
LPCH
WINAPI
GetEnvironmentStrings(
    VOID
    );


WINBASEAPI
_NullNull_terminated_
LPWCH
WINAPI
GetEnvironmentStringsW(
    VOID
    );


#ifdef UNICODE
#define GetEnvironmentStrings  GetEnvironmentStringsW
#else
#define GetEnvironmentStringsA  GetEnvironmentStrings
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
SetEnvironmentStringsW(
    _In_ _Pre_ _NullNull_terminated_ LPWCH NewEnvironment
    );

#ifdef UNICODE
#define SetEnvironmentStrings  SetEnvironmentStringsW
#endif

WINBASEAPI
BOOL
WINAPI
FreeEnvironmentStringsA(
    _In_ _Pre_ _NullNull_terminated_ LPCH penv
    );

WINBASEAPI
BOOL
WINAPI
FreeEnvironmentStringsW(
    _In_ _Pre_ _NullNull_terminated_ LPWCH penv
    );

#ifdef UNICODE
#define FreeEnvironmentStrings  FreeEnvironmentStringsW
#else
#define FreeEnvironmentStrings  FreeEnvironmentStringsA
#endif // !UNICODE

WINBASEAPI
HANDLE
WINAPI
GetStdHandle(
    _In_ DWORD nStdHandle
    );


WINBASEAPI
BOOL
WINAPI
SetStdHandle(
    _In_ DWORD nStdHandle,
    _In_ HANDLE hHandle
    );



#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI
BOOL
WINAPI
SetStdHandleEx(
    _In_ DWORD nStdHandle,
    _In_ HANDLE hHandle,
    _Out_opt_ PHANDLE phPrevValue
    );


#endif // _WIN32_WINNT >= 0x0600

// end_1_0

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma endregion

#pragma region Application Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

// begin_1_0

WINBASEAPI
LPSTR
WINAPI
GetCommandLineA(
    VOID
    );

WINBASEAPI
LPWSTR
WINAPI
GetCommandLineW(
    VOID
    );

#ifdef UNICODE
#define GetCommandLine  GetCommandLineW
#else
#define GetCommandLine  GetCommandLineA
#endif // !UNICODE

// end_1_0

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#pragma endregion

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

// begin_1_0

WINBASEAPI
_Success_(return != 0 && return < nSize)
DWORD
WINAPI
GetEnvironmentVariableA(
    _In_opt_ LPCSTR lpName,
    _Out_writes_to_opt_(nSize, return + 1) LPSTR lpBuffer,
    _In_ DWORD nSize
    );

WINBASEAPI
_Success_(return != 0 && return < nSize)
DWORD
WINAPI
GetEnvironmentVariableW(
    _In_opt_ LPCWSTR lpName,
    _Out_writes_to_opt_(nSize, return + 1) LPWSTR lpBuffer,
    _In_ DWORD nSize
    );

#ifdef UNICODE
#define GetEnvironmentVariable  GetEnvironmentVariableW
#else
#define GetEnvironmentVariable  GetEnvironmentVariableA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
SetEnvironmentVariableA(
    _In_ LPCSTR lpName,
    _In_opt_ LPCSTR lpValue
    );

WINBASEAPI
BOOL
WINAPI
SetEnvironmentVariableW(
    _In_ LPCWSTR lpName,
    _In_opt_ LPCWSTR lpValue
    );

#ifdef UNICODE
#define SetEnvironmentVariable  SetEnvironmentVariableW
#else
#define SetEnvironmentVariable  SetEnvironmentVariableA
#endif // !UNICODE

WINBASEAPI
_Success_(return != 0 && return <= nSize)
DWORD
WINAPI
ExpandEnvironmentStringsA(
    _In_ LPCSTR lpSrc,
    _Out_writes_to_opt_(nSize, return) LPSTR lpDst,
    _In_ DWORD nSize
    );

WINBASEAPI
_Success_(return != 0 && return <= nSize)
DWORD
WINAPI
ExpandEnvironmentStringsW(
    _In_ LPCWSTR lpSrc,
    _Out_writes_to_opt_(nSize, return) LPWSTR lpDst,
    _In_ DWORD nSize
    );

#ifdef UNICODE
#define ExpandEnvironmentStrings  ExpandEnvironmentStringsW
#else
#define ExpandEnvironmentStrings  ExpandEnvironmentStringsA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
SetCurrentDirectoryA(
    _In_ LPCSTR lpPathName
    );

WINBASEAPI
BOOL
WINAPI
SetCurrentDirectoryW(
    _In_ LPCWSTR lpPathName
    );

#ifdef UNICODE
#define SetCurrentDirectory  SetCurrentDirectoryW
#else
#define SetCurrentDirectory  SetCurrentDirectoryA
#endif // !UNICODE

WINBASEAPI
_Success_(return != 0 && return < nBufferLength)
DWORD
WINAPI
GetCurrentDirectoryA(
    _In_ DWORD nBufferLength,
    _Out_writes_to_opt_(nBufferLength, return + 1) LPSTR lpBuffer
    );

WINBASEAPI
_Success_(return != 0 && return < nBufferLength)
DWORD
WINAPI
GetCurrentDirectoryW(
    _In_ DWORD nBufferLength,
    _Out_writes_to_opt_(nBufferLength, return + 1) LPWSTR lpBuffer
    );

#ifdef UNICODE
#define GetCurrentDirectory  GetCurrentDirectoryW
#else
#define GetCurrentDirectory  GetCurrentDirectoryA
#endif // !UNICODE

WINBASEAPI
DWORD
WINAPI
SearchPathW(
    _In_opt_ LPCWSTR lpPath,
    _In_ LPCWSTR lpFileName,
    _In_opt_ LPCWSTR lpExtension,
    _In_ DWORD nBufferLength,
    _Out_writes_to_opt_(nBufferLength, return + 1) LPWSTR lpBuffer,
    _Out_opt_ LPWSTR * lpFilePart
    );


#ifdef UNICODE
#define SearchPath  SearchPathW
#else
#define SearchPath  SearchPathA
#endif // !UNICODE

// end_1_0

// begin2_0


#if (defined(_WIN32_WINNT) && !defined(_CONTRACT_GEN)) || (_APISET_PROCESSENV_VER > 0x0100)

WINBASEAPI
DWORD
APIENTRY
SearchPathA(
    _In_opt_ LPCSTR lpPath,
    _In_ LPCSTR lpFileName,
    _In_opt_ LPCSTR lpExtension,
    _In_ DWORD nBufferLength,
    _Out_writes_to_opt_(nBufferLength, return + 1) LPSTR lpBuffer,
    _Out_opt_ LPSTR * lpFilePart
    );



#if _WIN32_WINNT >= 0x0502

WINBASEAPI
BOOL
WINAPI
NeedCurrentDirectoryForExePathA(
    _In_ LPCSTR ExeName
    );

WINBASEAPI
BOOL
WINAPI
NeedCurrentDirectoryForExePathW(
    _In_ LPCWSTR ExeName
    );

#ifdef UNICODE
#define NeedCurrentDirectoryForExePath  NeedCurrentDirectoryForExePathW
#else
#define NeedCurrentDirectoryForExePath  NeedCurrentDirectoryForExePathA
#endif // !UNICODE

#endif

#endif // (defined(_WIN32_WINNT) && !defined(_CONTRACT_GEN)) || (_APISET_PROCESSENV_VER > 0x0100)

// end2_0

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma endregion

// begin_1_0
// begin2_0

#ifdef __cplusplus
}
#endif

#endif // _PROCESSENV_
// end_1_0
// end2_0
