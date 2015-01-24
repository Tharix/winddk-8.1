

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IFaxTiff,0xb19bb45f,0xb91c,0x11d1,0x83,0xe1,0x00,0xc0,0x4f,0xb6,0xe9,0x84);


MIDL_DEFINE_GUID(IID, IID_IFaxServer,0xD73733C7,0xCC80,0x11D0,0xB2,0x25,0x00,0xC0,0x4F,0xB6,0xC2,0xF5);


MIDL_DEFINE_GUID(IID, IID_IFaxPort,0xD73733CC,0xCC80,0x11D0,0xB2,0x25,0x00,0xC0,0x4F,0xB6,0xC2,0xF5);


MIDL_DEFINE_GUID(IID, IID_IFaxPorts,0xD73733D5,0xCC80,0x11D0,0xB2,0x25,0x00,0xC0,0x4F,0xB6,0xC2,0xF5);


MIDL_DEFINE_GUID(IID, IID_IFaxRoutingMethod,0x2199F5F3,0xCEFC,0x11D0,0xA3,0x41,0x00,0x00,0xF8,0x00,0xE6,0x8D);


MIDL_DEFINE_GUID(IID, IID_IFaxRoutingMethods,0x2199F5F5,0xCEFC,0x11D0,0xA3,0x41,0x00,0x00,0xF8,0x00,0xE6,0x8D);


MIDL_DEFINE_GUID(IID, IID_IFaxStatus,0x8B97E605,0xD054,0x11D0,0xB2,0x26,0x00,0xC0,0x4F,0xB6,0xC2,0xF5);


MIDL_DEFINE_GUID(IID, IID_IFaxDoc,0xFA21F4C5,0x5C4C,0x11D1,0x83,0xCF,0x00,0xC0,0x4F,0xB6,0xE9,0x84);


MIDL_DEFINE_GUID(IID, IID_IFaxJobs,0x55DABFD3,0x5C9E,0x11D1,0xB7,0x91,0x00,0x00,0x00,0x00,0x00,0x00);


MIDL_DEFINE_GUID(IID, IID_IFaxJob,0x55DABFD5,0x5C9E,0x11D1,0xB7,0x91,0x00,0x00,0x00,0x00,0x00,0x00);


MIDL_DEFINE_GUID(IID, LIBID_FAXCOMLib,0x87099223,0xC7AF,0x11D0,0xB2,0x25,0x00,0xC0,0x4F,0xB6,0xC2,0xF5);


MIDL_DEFINE_GUID(CLSID, CLSID_FaxTiff,0x87099231,0xC7AF,0x11D0,0xB2,0x25,0x00,0xC0,0x4F,0xB6,0xC2,0xF5);


MIDL_DEFINE_GUID(CLSID, CLSID_FaxServer,0xD73733C8,0xCC80,0x11D0,0xB2,0x25,0x00,0xC0,0x4F,0xB6,0xC2,0xF5);


MIDL_DEFINE_GUID(CLSID, CLSID_FaxPort,0xD73733CD,0xCC80,0x11D0,0xB2,0x25,0x00,0xC0,0x4F,0xB6,0xC2,0xF5);


MIDL_DEFINE_GUID(CLSID, CLSID_FaxPorts,0xD73733D6,0xCC80,0x11D0,0xB2,0x25,0x00,0xC0,0x4F,0xB6,0xC2,0xF5);


MIDL_DEFINE_GUID(CLSID, CLSID_FaxRoutingMethod,0x2199F5F4,0xCEFC,0x11D0,0xA3,0x41,0x00,0x00,0xF8,0x00,0xE6,0x8D);


MIDL_DEFINE_GUID(CLSID, CLSID_FaxRoutingMethods,0x2199F5F6,0xCEFC,0x11D0,0xA3,0x41,0x00,0x00,0xF8,0x00,0xE6,0x8D);


MIDL_DEFINE_GUID(CLSID, CLSID_FaxStatus,0x8B97E606,0xD054,0x11D0,0xB2,0x26,0x00,0xC0,0x4F,0xB6,0xC2,0xF5);


MIDL_DEFINE_GUID(CLSID, CLSID_FaxDoc,0xFA21F4C6,0x5C4C,0x11D1,0x83,0xCF,0x00,0xC0,0x4F,0xB6,0xE9,0x84);


MIDL_DEFINE_GUID(CLSID, CLSID_FaxJobs,0x55DABFD4,0x5C9E,0x11D1,0xB7,0x91,0x00,0x00,0x00,0x00,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_FaxJob,0x55DABFD6,0x5C9E,0x11D1,0xB7,0x91,0x00,0x00,0x00,0x00,0x00,0x00);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



