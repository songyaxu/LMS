// LMSDoc.cpp : implementation of the CLMSDoc class
//

#include "stdafx.h"
#include "LMS.h"

#include "LMSDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLMSDoc

IMPLEMENT_DYNCREATE(CLMSDoc, CDocument)

BEGIN_MESSAGE_MAP(CLMSDoc, CDocument)
	//{{AFX_MSG_MAP(CLMSDoc)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLMSDoc construction/destruction

CLMSDoc::CLMSDoc()
{
	// TODO: add one-time construction code here

}

CLMSDoc::~CLMSDoc()
{
}




/////////////////////////////////////////////////////////////////////////////
// CLMSDoc serialization

void CLMSDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CLMSDoc diagnostics

#ifdef _DEBUG
void CLMSDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CLMSDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLMSDoc commands




