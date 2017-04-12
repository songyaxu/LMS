// LMS.h : main header file for the LMS application
//

#if !defined(AFX_LMS_H__0E9BC6D4_871B_4713_B10E_4D1C472B6502__INCLUDED_)
#define AFX_LMS_H__0E9BC6D4_871B_4713_B10E_4D1C472B6502__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CLMSApp:
// See LMS.cpp for the implementation of this class
//

class CLMSApp : public CWinApp
{
public:
	CString temp;
	CString m_ISBN;
	CString m_UserNo;
	int m_Atype;
	CLMSApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLMSApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CLMSApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:

};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LMS_H__0E9BC6D4_871B_4713_B10E_4D1C472B6502__INCLUDED_)
