// Import.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "Import.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CImport dialog


CImport::CImport(CWnd* pParent /*=NULL*/)
	: CDialog(CImport::IDD, pParent)
{
	//{{AFX_DATA_INIT(CImport)
	m_radio = -1;
	m_strTitle = _T("数据报表");
	//}}AFX_DATA_INIT
	Yn=false;
}


void CImport::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CImport)
	DDX_Radio(pDX, IDC_RADIO1, m_radio);
	DDX_Text(pDX, IDC_EDIT1, m_strTitle);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CImport, CDialog)
	//{{AFX_MSG_MAP(CImport)
	ON_WM_CANCELMODE()
	ON_WM_PAINT()
	ON_WM_CAPTURECHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CImport message handlers

void CImport::OnOK() 
{
	UpdateData(true);
	if(m_strTitle.IsEmpty())
	{
		MessageBox("请输入报表名称!","打印");
		return;
	}
	if(m_radio==-1)
	{
		MessageBox("请选择打印方式!","打印");
		return;
	}
	Yn=true;
	CDialog::OnOK();
}


BOOL CImport::OnInitDialog() 
{
	CDialog::OnInitDialog();
	/*::CoInitialize(NULL); 
	try
	{
        m_pConnection.CreateInstance(_uuidof(Connection));   //创建连接对象实例
		_bstr_t strConnect="Provider=SQLOLEDB.1;Persist Security Info=False;Initial Catalog=图书管理系统;DataSource=127.0.0.1"; 
		//连接字符串，127.0.0.1代表本地主机
        m_pConnection->Open(strConnect,"syx","qwerty000",adModeUnknown);   //打开数据库        
    }
    catch (_com_error e)           //捕捉错误
    {
        AfxMessageBox(e.ErrorMessage());        //弹出错误		
    }*/
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CImport::OnCancelMode() 
{
	CDialog::OnCancelMode();
		
}

void CImport::OnPaint() 
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

void CImport::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CDialog::OnCaptureChanged(pWnd);
}
