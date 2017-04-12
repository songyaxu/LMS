// Punishment.cpp : implementation file
//

#include "stdafx.h"
#include "LMS.h"
#include "Punishment.h"
#include "Borrow.h"
#include "Punish.h"
#include "Config.h"
#include "Reader.h"
#include "RestDay.h"
#include "Book.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPunishment dialog


CPunishment::CPunishment(CWnd* pParent /*=NULL*/)
	: CDialog(CPunishment::IDD, pParent)
{
	//{{AFX_DATA_INIT(CPunishment)
	m_fee = 0.0;
	m_other = _T("");
	m_no = _T("");
	m_numno = 0;
	m_feenum = 0.00;
	//}}AFX_DATA_INIT
}


void CPunishment::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPunishment)
	DDX_Control(pDX, IDC_LIST2, m_ctrList);
	DDX_Control(pDX, IDC_CHECK4, m_c4);
	DDX_Control(pDX, IDC_CHECK3, m_c3);
	DDX_Control(pDX, IDC_CHECK2, m_c2);
	DDX_Control(pDX, IDC_CHECK1, m_c1);
	DDX_Text(pDX, IDC_FEE, m_fee);
	DDX_Text(pDX, IDC_OTHER, m_other);
	DDX_Text(pDX, IDC_IDNO, m_no);
	DDX_Text(pDX, IDC_EDIT2, m_numno);
	DDX_Text(pDX, IDC_EDIT3, m_feenum);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CPunishment, CDialog)
	//{{AFX_MSG_MAP(CPunishment)
	ON_WM_CANCELMODE()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_NOTIFY(NM_CLICK, IDC_LIST2, OnClickList2)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPunishment message handlers
BOOL CPunishment::OnInitDialog() 
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
	m_btn.SubclassDlgItem(IDC_BUTTON1,this);
	m_btn.SetIcon(IDI_SEARCH);
	m_ctrList.InsertColumn(0,"序号");
	m_ctrList.InsertColumn(1,"ISBN");
	m_ctrList.InsertColumn(2,"图书名称");
	m_ctrList.InsertColumn(3,"借阅数量");
	m_ctrList.InsertColumn(4,"借阅时间");
	m_ctrList.InsertColumn(5,"已借阅天数");
	m_ctrList.InsertColumn(6,"还书时间");
	m_ctrList.InsertColumn(7,"图书状态");
	m_ctrList.SetColumnWidth(0,40);
	m_ctrList.SetColumnWidth(1,100);
	m_ctrList.SetColumnWidth(2,100);
	m_ctrList.SetColumnWidth(3,55);
	m_ctrList.SetColumnWidth(4,90);
	m_ctrList.SetColumnWidth(5,70);
	m_ctrList.SetColumnWidth(6,90);
	m_ctrList.SetColumnWidth(7,80);
	m_ctrList.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_INFOTIP|LVS_EX_GRIDLINES);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CPunishment::OnCancelMode() 
{
	CDialog::OnCancelMode();	
}
void CPunishment::OnOK() 
{
	CDialog::OnOK();
}

void CPunishment::OnButton1() 
{
	UpdateData(true);
	m_ctrList.DeleteAllItems();
	if(m_no.IsEmpty())
	{
		MessageBox("没有输入读者学号!","惩罚");
		return;
	}
	CString strSQL,strTemp="";
	CReader *m_pReader=new CReader(&m_database);
	if(m_pReader->IsOpen())
		m_pReader->Close();
	strSQL.Format("select * from UserInfo where Uno='%s'",m_no);
	m_pReader->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pReader->GetRecordCount()==0)
	{
		MessageBox("没有此借书证号!","惩罚");
		return;
	}
	CString temp;
	temp=m_pReader->m_Ujob;
	m_pReader->Close();
	CConfig * m_pConfig=new CConfig(&m_database);
	if(m_pConfig->IsOpen())
		m_pConfig->Close();
	strSQL.Format("select * from Config where Cname='%s'",temp);
	m_pConfig->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	p.data.Day=m_pConfig->m_Time;
	p.data.MaxNum=m_pConfig->m_MaxNum;
	p.data.Punish=m_pConfig->m_Punish;
	p.data.SameNum=m_pConfig->m_SameNum;
	m_pConfig->Close();
	CBorrow * m_pBorrow=new CBorrow(&m_database);
	if(m_pBorrow->IsOpen())
		m_pBorrow->Close();
	strSQL.Format("select * from Borrow where Uno='%s' and Tstatus!=2",m_no);
	m_pBorrow->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pBorrow->GetRecordCount()==0)
	{
		MessageBox("没有借阅信息无法惩罚!","惩罚");
		return;
	}
	m_pBorrow->MoveFirst();
	for(int i=0;;i++)
	{
		if(m_pBorrow->IsEOF())
			break;
		m_ctrList.InsertItem(i,strTemp);
		strTemp.Format("%d",m_pBorrow->m_BorrId);
		m_ctrList.SetItemText(i,0,strTemp);
		m_ctrList.SetItemText(i,1,m_pBorrow->m_ISBN);
		m_ctrList.SetItemText(i,2,m_pBorrow->m_Bname);
		strTemp.Format("%d",m_pBorrow->m_BorrNum);
		m_ctrList.SetItemText(i,3,strTemp);
		m_ctrList.SetItemText(i,4,m_pBorrow->m_BorrTime);
		CString timetime;
		timetime.Format("%d-%d-%d",CTime::GetCurrentTime().GetYear(),CTime::GetCurrentTime().GetMonth(),CTime::GetCurrentTime().GetDay());
		CRestDay dayday;
		int day=dayday.GetDay(timetime,m_pBorrow->m_BorrTime);
		strTemp.Format("%d",day);
		m_ctrList.SetItemText(i,5,strTemp);
		m_ctrList.SetItemText(i,6,m_pBorrow->m_ReturnTime);
		if(day>p.data.Day)
		{
			m_ctrList.SetItemText(i,7,"超期");
		}
		else
		{
			m_ctrList.SetItemText(i,7,"正常");
		}
		m_pBorrow->MoveNext();
	}
	m_pBorrow->Close();
}

void CPunishment::OnClickList2(NMHDR* pNMHDR, LRESULT* pResult) 
{
	CString str,str1;
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
	if(pNMListView->iItem==-1)
	{
		return;
	}	
	m_Bookisbn=m_ctrList.GetItemText(pNMListView->iItem,1);
	str=m_ctrList.GetItemText(pNMListView->iItem,0);
	m_numno=atoi(str);
	str=m_ctrList.GetItemText(pNMListView->iItem,5);
	float money=((atoi(str)-p.data.Day)*p.data.Punish)/100.00;
	if(money>0)
	{
		m_feenum=float(money);
		m_c2.SetCheck(1);
	}
	UpdateData(false);
	*pResult = 0;
}

void CPunishment::OnButton2() 
{
	UpdateData(true);
	if(m_numno==0)
	{
		MessageBox("没有选中惩罚记录!","惩罚");
		return;
	}
	CReader *m_pReader=new CReader(&m_database);
	CPunish *m_pPunish=new CPunish(&m_database);
	CBook *m_pBook=new CBook(&m_database);
	CString strSQL;
	strSQL.Format("select * from Book where ISBN='%s'",m_Bookisbn);
	if(m_pBook->IsOpen())
		m_pBook->Close();
	m_pBook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_fee>m_pBook->m_Bprice)
	{
		CString price;
		price.Format("%.2f",m_pBook->m_Bprice);
		MessageBox("填写其它惩罚金额不得超过图书价格"+price+"!","惩罚");
		return;
	}
	if(m_no.IsEmpty())
	{
		MessageBox("没有选中需惩罚的借书记录!","惩罚");
		return;
	}
	else
	{
		CString strreason;
		if(m_c1.GetCheck()==1)
			strreason+="破损";
		if(m_c3.GetCheck()==1)
			strreason+="丢失";
		if(m_c4.GetCheck()==1)
			strreason+="缺页";
		if(m_c2.GetCheck()==1)
			strreason+="超期";
		strreason+=m_other;
		if(m_pReader->IsOpen())
			m_pReader->Close();
		strSQL.Format("select * from UserInfo where Uno='%s'",m_no);
		m_pReader->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pReader->GetRecordCount()==0)
		{
			MessageBox("出现未知错误!","惩罚");
			return;
		}
		if(m_pPunish->IsOpen())
			m_pPunish->Close();
		m_pPunish->Open(AFX_DB_USE_DEFAULT_TYPE,NULL);
		m_pPunish->AddNew();
		m_pPunish->m_Bname=m_pBook->m_Bname;
		m_pPunish->m_ISBN=m_pBook->m_ISBN;
		m_pPunish->m_Uno=m_pReader->m_Uno;
		m_pPunish->m_Uname=m_pReader->m_Uname;
		m_pPunish->m_Reason=strreason;
		m_pPunish->m_Fee=m_fee+m_feenum;
		m_pPunish->m_BorrId=m_numno;
		m_pPunish->Update();
		m_pPunish->Close();
		m_pReader->Close();
		m_pBook->Close();
		//CBorrow
		MessageBox("已惩罚!","惩罚");
	}
}

void CPunishment::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	CRect   rect;   
	GetClientRect(&rect);   
	CDC   dcMem;   
	dcMem.CreateCompatibleDC(&dc);   
	CBitmap   bmpBackground;   
	bmpBackground.LoadBitmap(IDB_BITMAP5);   //背景图
																	
          
	BITMAP   bitmap;   
	bmpBackground.GetBitmap(&bitmap);   
	CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
	dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
	bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);  
}

void CPunishment::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}
