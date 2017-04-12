// Nindex.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "Nindex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNindex dialog


CNindex::CNindex(CWnd* pParent /*=NULL*/)
	: CDialog(CNindex::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNindex)
	m_radio = -1;
	//}}AFX_DATA_INIT
}


void CNindex::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNindex)
	DDX_Radio(pDX, IDC_RADIO1, m_radio);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNindex, CDialog)
	//{{AFX_MSG_MAP(CNindex)
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNindex message handlers

void CNindex::OnOK() 
{
	CString strSQL;
	UpdateData(true);
	if(m_radio==0)
	{
		strSQL.Format("alter index index_Uno on UserInfo rebuild");
		m_database.ExecuteSQL(strSQL);
		MessageBox("索引重建成功!","索引重建");
		return;
	}
	if(m_radio==1)
	{
		strSQL.Format("alter index index_ISBN on Book rebuild");
		m_database.ExecuteSQL(strSQL);
		MessageBox("索引重建成功!","索引重建");
		return;
	}
	CDialog::OnOK();
}

BOOL CNindex::OnInitDialog() 
{
	CDialog::OnInitDialog();
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
	}
	CATCH(CDBException,ex)
	{
	   AfxMessageBox(ex->m_strError);
	   AfxMessageBox(ex->m_strStateNativeOrigin);
	}
	AND_CATCH(CMemoryException,pEx)
	{
	   pEx->ReportError();
	   AfxMessageBox(_T("memory exception"));
	}
	AND_CATCH(CException,e)
	{
	   TCHAR szError[100];
	   e->GetErrorMessage(szError,100);
	   AfxMessageBox(szError);
	}
	END_CATCH
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CNindex::OnCancelMode() 
{
	CDialog::OnCancelMode();	
}
