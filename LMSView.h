// LMSView.h : interface of the CLMSView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LMSVIEW_H__DB6411DC_7E5B_4FDE_BF99_B1E2D6B1A334__INCLUDED_)
#define AFX_LMSVIEW_H__DB6411DC_7E5B_4FDE_BF99_B1E2D6B1A334__INCLUDED_

#include "BtnST.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CLMSView : public CFormView
{
protected: // create from serialization only
	CLMSView();
	DECLARE_DYNCREATE(CLMSView)

public:
	//{{AFX_DATA(CLMSView)
	enum { IDD = IDD_LMS_FORM };
	CButton	m_pbutton;
	//}}AFX_DATA

// Attributes
public:
	CLMSDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLMSView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	CDatabase m_database;
	bool Login();
	bool m_Authority;
	CString m_Uno;
	CButtonST m_btn;
	virtual ~CLMSView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CLMSView)
	afx_msg void OnPaint();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnDrawItem(int nIDCtl, LPDRAWITEMSTRUCT lpDrawItemStruct);
	afx_msg void OnAddnewbook();
	afx_msg void OnReturnbook();
	afx_msg void OnBorrowbook();
	afx_msg void OnDelay();
	afx_msg void OnDeletebook();
	afx_msg void OnPunishment();
	afx_msg void OnDeletereader();
	afx_msg void OnAddnewreader();
	afx_msg void OnDelaybook();
	afx_msg void OnExit();
	afx_msg void OnPeopleM();
	afx_msg void OnBookM();
	afx_msg void OnDeptm();
	afx_msg void OnBorrowreason();
	afx_msg void OnDatabasem();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in LMSView.cpp
inline CLMSDoc* CLMSView::GetDocument()
   { return (CLMSDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LMSVIEW_H__DB6411DC_7E5B_4FDE_BF99_B1E2D6B1A334__INCLUDED_)
