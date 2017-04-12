#if !defined(AFX_MYBUTTON_H__666EE31B_B34B_4F90_A67E_3EA78C60ADE4__INCLUDED_)
#define AFX_MYBUTTON_H__666EE31B_B34B_4F90_A67E_3EA78C60ADE4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// myButton.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CmyButton window

class CmyButton : public CButton
{
// Construction
public:
	CmyButton();
	void SetDownColor(COLORREF color);
    //ÉèÖÃButton UpµÄ±³¾°ÑÕÉ«
	void SetUpColor(COLORREF color);
	BOOL Attach(const UINT nID, CWnd* pParent);

// Attributes
public:

// Operations
public:
	COLORREF m_TextColor, m_DownColor, m_UpColor;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CmyButton)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CmyButton();

	// Generated message map functions
protected:
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	//{{AFX_MSG(CmyButton)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYBUTTON_H__666EE31B_B34B_4F90_A67E_3EA78C60ADE4__INCLUDED_)
