// QUERYREASON.cpp : implementation file
//

#include "stdafx.h"
#include "lms.h"
#include "QUERYREASON.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CQUERYREASON dialog


CQUERYREASON::CQUERYREASON(CWnd* pParent /*=NULL*/)
	: CDialog(CQUERYREASON::IDD, pParent)
{
	//{{AFX_DATA_INIT(CQUERYREASON)
	m_radio = 0;
	m_value = _T("");
	//}}AFX_DATA_INIT
}


void CQUERYREASON::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CQUERYREASON)
	DDX_Control(pDX, IDC_LIST1, m_list);
	DDX_Control(pDX, IDC_COMBO8, m_condition);
	DDX_Control(pDX, IDC_COMBO1, m_item);
	DDX_Radio(pDX, IDC_RADIO1, m_radio);
	DDX_Text(pDX, IDC_EDIT1, m_value);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CQUERYREASON, CDialog)
	//{{AFX_MSG_MAP(CQUERYREASON)
	ON_BN_CLICKED(IDC_ADDNEW, OnAddnew)
	ON_BN_CLICKED(IDC_ADDTO, OnAddto)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CQUERYREASON message handlers

BOOL CQUERYREASON::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_item.InsertString(0,"学号");
	m_item.InsertString(1,"姓名");
	m_item.InsertString(2,"学历");
	m_item.InsertString(3,"性别");
	m_item.InsertString(4,"生日");
	m_item.InsertString(5,"专业");
	m_item.InsertString(6,"班级");
	m_item.InsertString(7,"系/学院");
	m_item.InsertString(8,"电子邮箱");
	m_item.InsertString(9,"移动电话");
	m_item.InsertString(10,"备注");
	m_item.SetCurSel(1);
	m_condition.InsertString(0,"等于");
	m_condition.InsertString(1,"不等于");
	m_condition.InsertString(2,"大于");
	m_condition.InsertString(3,"大于或等于");
	m_condition.InsertString(4,"小于");
	m_condition.InsertString(5,"小于或等于");
	m_condition.InsertString(6,"始于");
	m_condition.InsertString(7,"并非始于");
	m_condition.InsertString(8,"止于");
	m_condition.InsertString(9,"并非止于");
	m_condition.InsertString(10,"包含");
	m_condition.InsertString(11,"不包含");
	m_condition.SetCurSel(10);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
CString CQUERYREASON::Distinguish(int nIndex1, int nIndex,int radio,CString str)
{
	CString SQL;
	if(nIndex1==0)
		SQL+=" Uno ";
	if(nIndex1==1)
		SQL+=" Uname ";
	if(nIndex1==2)
		SQL+=" Ujob ";
	if(nIndex1==3)
		SQL+=" Usex ";
	if(nIndex1==4)
		SQL+=" Ubirthday ";
	if(nIndex1==5)
		SQL+=" MajorNo ";
	if(nIndex1==6)
		SQL+=" ClassNo ";
	if(nIndex1==7)
		SQL+=" DeptNo ";
	if(nIndex1==8)
		SQL+=" Uphone ";
	if(nIndex1==9)
		SQL+=" Uemail ";
	if(nIndex1==10)
		SQL+=" Uremarks ";
	if(nIndex==0)
	{
		SQL+=" = '";
		SQL+=str;
		SQL+="' ";
	}
	if(nIndex==1)
	{
		SQL+=" != '";
		SQL+=str;
		SQL+="' ";
	}
	if(nIndex==2)	
	{
		SQL+=" > '";
		SQL+=str;
		SQL+="' ";
	}
	if(nIndex==3)
		str+=" >= ";
	if(nIndex==4)
		str+=" < ";
	if(nIndex==5)
		str+=" <= ";
	if(nIndex==6)
		return "";
	if(nIndex==7)
		return "ClassNo";
	if(nIndex==8)
		return "DeptNo";
	if(nIndex==9)
		return "Uphone";
	if(nIndex==10)
		return "Uemail";
	if(nIndex==11)
		return "Uremarks";
	return "";
}
void CQUERYREASON::OnAddnew() 
{
	m_list.ResetContent();
	strSQL.count=0;
}

void CQUERYREASON::OnAddto() 
{
	UpdateData(true);
	if(m_value.IsEmpty())
	{
		MessageBox("请填写查找信息'值'！","读者查询",MB_OK);
		return;
	}
	int nIndex1=m_item.GetCurSel();
	int nIndex=m_condition.GetCurSel();
	CString str1,str2;
	if(m_list.GetCount()!=0)
	{
		if(m_radio==0)
			str1+="与 ";
		else
			str1+="或 ";
	}
	m_item.GetLBText(nIndex1,str2);
	str1+=str2;
	str1+=" ";
	m_condition.GetLBText(nIndex,str2);
	str1+=str2;
	str1+=" ";
	str1+=m_value;
	m_list.InsertString(m_list.GetCount(),str1);
	/*if(strSQL.count==0)
	{
		strSQL.str[strSQL.count]+="select * from UserInfo where ";
		strSQL.str[strSQL.count]=Distinguish(nIndex1,nIndex,m_radio,m_value);
	}
	else
	{
		strSQL.str[strSQL.count]=Distinguish(nIndex1,nIndex,m_radio,m_value);
	}*/

}

void CQUERYREASON::OnPaint() 
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

void CQUERYREASON::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
