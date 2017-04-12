// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__15ED585B_16C4_4346_9471_24FDD30E406B__INCLUDED_)
#define AFX_STDAFX_H__15ED585B_16C4_4346_9471_24FDD30E406B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>			// MFC ODBC database classes
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>			// MFC DAO database classes
#endif // _AFX_NO_DAO_SUPPORT

#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls

#pragma warning(disable:4146)
#import "C:\Program Files\Common Files\System\ADO\msado15.dll" named_guids rename("EOF","adoEOF"), rename("BOF","adoBOF")
#pragma warning(default:4146)
using namespace ADODB;
#endif // _AFX_NO_AFXCMN_SUPPORT
#include "SkinPPWTL.h" 
#pragma comment(lib,"SkinPPWTL.lib")
#ifndef ULONG_PTR
#define ULONG_PTR unsigned long *
#endif

#include "Includes/GdiPlus.h"
#pragma comment(lib,"Lib/GdiPlus.lib")
//using namespace Gdiplus;
//#import "C:\program files\common files\system\ado\msado15.dll" no_namespace rename("EOF","adoEOF")
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__15ED585B_16C4_4346_9471_24FDD30E406B__INCLUDED_)
