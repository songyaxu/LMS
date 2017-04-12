// LMSDoc.h : interface of the CLMSDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LMSDOC_H__EFF44244_D2B2_400A_9DED_AA621F586F30__INCLUDED_)
#define AFX_LMSDOC_H__EFF44244_D2B2_400A_9DED_AA621F586F30__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CLMSDoc : public CDocument
{
protected: // create from serialization only
	DECLARE_DYNCREATE(CLMSDoc)
	CLMSDoc();
// Attributes
public:
	
// Operations
protected:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLMSDoc)
	public:
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CLMSDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
public:
	//{{AFX_MSG(CLMSDoc)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LMSDOC_H__EFF44244_D2B2_400A_9DED_AA621F586F30__INCLUDED_)
