// DatabaseManage.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "DatabaseManage.h"
#include "Admin.h"
#include "AdminManage.h"
#include "BackupName.h"
#include "Nindex.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDatabaseManage dialog


CDatabaseManage::CDatabaseManage(CWnd* pParent /*=NULL*/)
	: CDialog(CDatabaseManage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDatabaseManage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDatabaseManage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDatabaseManage)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDatabaseManage, CDialog)
	//{{AFX_MSG_MAP(CDatabaseManage)
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_DATACOPY, OnDatacopy)
	ON_WM_CANCELMODE()
	ON_BN_CLICKED(IDC_DATADIFFCOPY, OnDatadiffcopy)
	ON_BN_CLICKED(IDC_DATALOGCOPY, OnDatalogcopy)
	ON_BN_CLICKED(IDC_BUTTON6, OnnIndexRebuild)
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDatabaseManage message handlers

void CDatabaseManage::OnAdd() 
{
	CAdminManage dlg;
	dlg.DoModal();
}

void CDatabaseManage::OnDatacopy() 
{
	if(MessageBox("�Ƿ�������ݿ���������?","���ݿⱸ��",MB_OKCANCEL)==2)
	{
		return;
	}
	CString filename;
	CString Name;
	CFileDialog filedlg(false,"",NULL,OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,"�����ļ�(*.*)||",NULL);
	if(filedlg.DoModal()==IDOK)
	{
		filename=filedlg.GetPathName();
		Name=filedlg.GetFileName();	
		if(filename!="")
		{
			CString strSQL,str;
			strSQL.Format("backup database ͼ�����ϵͳ to Disk='%s'with init, name='",filename);
			str.Format("%s��������',description='%s��������'",Name,Name);
			m_database.ExecuteSQL(strSQL+str);
			AfxMessageBox("���ݿⱸ�ݳɹ���\r\n�ļ�·��Ϊ:"+filename); 
		}
	}
}

BOOL CDatabaseManage::OnInitDialog() 
{
	CDialog::OnInitDialog();
	TRY
	{
		m_database.OpenEx(_T("DSN=ͼ�����ϵͳ;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
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

void CDatabaseManage::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

void CDatabaseManage::OnDatadiffcopy() 
{
	if(MessageBox("�Ƿ�������ݿ���챸��?","���ݿⱸ��",MB_OKCANCEL)==2)
	{
		return;
	}
	CString filename;
	CString Name;
	CFileDialog filedlg(false,"",NULL,OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,"�����ļ�(*.*)||",NULL);
	if(filedlg.DoModal()==IDOK)
	{
		Name=filedlg.GetFileName();
		filename=filedlg.GetPathName();
		if(filename!="")
		{
			CString strSQL,str;
			strSQL.Format("backup database ͼ�����ϵͳ to Disk='%s'with differential,noinit, name='",filename);
			str.Format("%s��������',description='%s��������'",Name,Name);
			m_database.ExecuteSQL(strSQL+str);
			AfxMessageBox("���ݿⱸ�ݳɹ���\r\n�ļ�·��Ϊ:"+filename); 
		}
	}
}

void CDatabaseManage::OnDatalogcopy() 
{
	if(MessageBox("�Ƿ�������ݿ���־����?","���ݿⱸ��",MB_OKCANCEL)==2)
	{
		return;
	}
	CString filename;
	CString Name;
	CFileDialog filedlg(false,"",NULL,OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,"�����ļ�(*.*)||",NULL);
	if(filedlg.DoModal()==IDOK)
	{
		Name=filedlg.GetFileName();
		filename=filedlg.GetPathName();
		if(filename!="")
		{
			CString strSQL,str;
			strSQL.Format("backup log ͼ�����ϵͳ to Disk='%s'with noinit, name='",filename);
			str.Format("%s��������',description='%s��������'",Name,Name);
			m_database.ExecuteSQL(strSQL+str);
			AfxMessageBox("���ݿⱸ�ݳɹ���\r\n�ļ�·��Ϊ:"+filename); 
		}
	}
}

void CDatabaseManage::OnnIndexRebuild() 
{
	CNindex dlg;
	dlg.DoModal();
}

void CDatabaseManage::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	CRect   rect;   
	GetClientRect(&rect);   
	CDC   dcMem;   
	dcMem.CreateCompatibleDC(&dc);   
	CBitmap   bmpBackground;   
	bmpBackground.LoadBitmap(IDB_BITMAP5);   //����ͼ
																	
          
	BITMAP   bitmap;   
	bmpBackground.GetBitmap(&bitmap);   
	CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
	dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
	bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);  
}

void CDatabaseManage::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}
