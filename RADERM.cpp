// RADERM.cpp : implementation file
//

#include "stdafx.h"
#include "LMS.h"
#include "RADERM.h"
#include "BtnST.h"
#include "Reader.h"
#include "NewReader.h"
#include "QUERYREASON.h"
#include "BSTree.h"
#include "BinaryTreeNode.h"
#include "excel.h"
#include "msword.h"
#include "Import.h"
#include "Dept.h"
#include "Class.h"
#include "Major.h"
#include "MdifyReader.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRADERM dialog


CRADERM::CRADERM(CWnd* pParent /*=NULL*/)
	: CDialog(CRADERM::IDD, pParent)
{
	//{{AFX_DATA_INIT(CRADERM)
	m_keyword = _T("");
	//}}AFX_DATA_INIT
}


void CRADERM::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRADERM)
	DDX_Control(pDX, IDC_COMBO1, m_combo);
	DDX_Control(pDX, IDC_LIST1, m_ctrList);
	DDX_Text(pDX, IDC_EDIT1, m_keyword);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRADERM, CDialog)
	//{{AFX_MSG_MAP(CRADERM)
	ON_BN_CLICKED(IDC_CLOSE, OnClose)
	ON_BN_CLICKED(IDC_QUERY, OnQuery)
	ON_BN_CLICKED(IDC_ADDREADER, OnAddreader)
	ON_BN_CLICKED(IDC_EXPORT, OnExport)
	ON_BN_CLICKED(IDC_PRINT, OnPrint)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_MODIFY, OnModify)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST1, OnDblclkList1)
	ON_BN_CLICKED(IDC_DELETE, OnDelete)
	ON_NOTIFY(NM_RCLICK, IDC_LIST1, OnRclickList1)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRADERM message handlers

BOOL CRADERM::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_btn.SubclassDlgItem(IDC_ADDREADER,this);
	m_btn.SetIcon(IDI_ADDBOOK);
	m_btn.SetTooltipText(_T("新增"));
	m_btn1.SubclassDlgItem(IDC_MODIFY,this);
	m_btn1.SetIcon(IDI_MODIFY);
	m_btn1.SetTooltipText(_T("修改"));
	m_btn2.SubclassDlgItem(IDC_DELETE,this);
	m_btn2.SetIcon(IDI_DELETE);
	m_btn2.SetTooltipText(_T("删除"));
	m_btn5.SubclassDlgItem(IDC_PRINT,this);
	m_btn5.SetIcon(IDI_PRINT);
	m_btn5.SetTooltipText(_T("打印"));
	m_btn6.SubclassDlgItem(IDC_EXPORT,this);
	m_btn6.SetIcon(IDI_EXPORT);
	m_btn6.SetTooltipText(_T("导出"));
	m_btn7.SubclassDlgItem(IDC_QUERY,this);
	m_btn7.SetIcon(IDI_SEARCH);
	m_btn7.SetTooltipText(_T("查询"));
	m_btn8.SubclassDlgItem(IDC_CLOSE,this);
	m_btn8.SetIcon(IDI_CLOSE);
	m_btn8.SetTooltipText(_T("关闭"));
	m_ctrList.InsertColumn(0,"学号");
	m_ctrList.InsertColumn(1,"姓名");
	m_ctrList.InsertColumn(2,"学历");
	m_ctrList.InsertColumn(3,"性别");
	m_ctrList.InsertColumn(4,"年龄");
	m_ctrList.InsertColumn(5,"生日");
	m_ctrList.InsertColumn(6,"系别编号");
	m_ctrList.InsertColumn(7,"系别名称");
	m_ctrList.InsertColumn(8,"专业编号");
	m_ctrList.InsertColumn(9,"专业名称");
	m_ctrList.InsertColumn(10,"班级");
	m_ctrList.InsertColumn(11,"电子邮件");
	m_ctrList.InsertColumn(12,"移动电话");
	m_ctrList.InsertColumn(13,"备注");
	m_ctrList.SetColumnWidth(0,120);
	m_ctrList.SetColumnWidth(1,100);
	m_ctrList.SetColumnWidth(2,120);
	m_ctrList.SetColumnWidth(3,60);
	m_ctrList.SetColumnWidth(4,60);
	m_ctrList.SetColumnWidth(5,120);
	m_ctrList.SetColumnWidth(6,60);
	m_ctrList.SetColumnWidth(7,120);
	m_ctrList.SetColumnWidth(8,60);
	m_ctrList.SetColumnWidth(9,120);
	m_ctrList.SetColumnWidth(10,90);
	m_ctrList.SetColumnWidth(11,120);
	m_ctrList.SetColumnWidth(12,120);
	m_ctrList.SetColumnWidth(13,180);
	//m_ctrList.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_CHECKBOXES|LVS_EX_INFOTIP|LVS_EX_GRIDLINES);
	DWORD dwStyle =m_ctrList.GetExtendedStyle();
	dwStyle |=LVS_EX_FULLROWSELECT;
	dwStyle |= LVS_EX_GRIDLINES;      
	dwStyle |=LVS_EX_CHECKBOXES;  
	m_ctrList.SetExtendedStyle(dwStyle);
	m_combo.InsertString(0,"学号");
	m_combo.InsertString(1,"姓名");
	m_combo.InsertString(2,"专业");
	m_combo.InsertString(3,"学院");
	m_combo.InsertString(4,"年级");
	m_combo.InsertString(5,"学历");
	m_combo.InsertString(6,"性别");
	m_combo.SetCurSel(0);
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
		m_pReader.m_pDatabase=&m_database;
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
	return TRUE;  

}

void CRADERM::OnClose() 
{
	OnOK();
}

void CRADERM::OnQuery() 
{
	CDept * m_pDept=new CDept(&m_database);
	CClass * m_pClass=new CClass(&m_database);
	CMajor *m_pMajor=new CMajor(&m_database);
	m_ctrList.DeleteAllItems();
	UpdateData(true);
	CString str="%";
	CString strSQL;
	int nIndex=m_combo.GetCurSel(); 
	CString strCBText;
	strCBText=GetValues(nIndex);
	if(m_combo.GetCurSel()==-1)
	{
		MessageBox("请选择查找条件!","读者查询",MB_OK|MB_ICONINFORMATION);
		return;
	}
	if(m_keyword.IsEmpty())
	{
		MessageBox("请在对话框中输入你要查找的信息！","读者查询",MB_OK|MB_ICONINFORMATION);
		return;
	}
	else
	{
		if(nIndex==2)
		{
			m_ctrList.DeleteAllItems();
			if(m_pMajor->IsOpen())
				m_pMajor->Close();
			strSQL.Format("select * from Major where MajorName like '%s%s%s'",str,m_keyword,str);
			m_pMajor->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
			m_pMajor->MoveFirst();
			for(int i=0;;i++)
			{
				if(m_pMajor->IsEOF())
					break;
				strSQL.Format("select * from UserInfo where MajorNo='%s'",m_pMajor->m_MajorNo);
				if(m_pReader.IsOpen())
					m_pReader.Close();
				m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
				m_pReader.MoveFirst();
				CString strTemp;
				for(int i=0;;i++)
				{
					if(m_pReader.IsEOF())
						break;
					m_ctrList.InsertItem(i,strTemp);
					m_ctrList.SetItemText(i,0,m_pReader.m_Uno);
					m_ctrList.SetItemText(i,1,m_pReader.m_Uname);
					m_ctrList.SetItemText(i,2,m_pReader.m_Ujob);
					m_ctrList.SetItemText(i,3,m_pReader.m_Usex);
					strTemp.Format("%d",m_pReader.m_Uage);
					m_ctrList.SetItemText(i,4,strTemp);
					m_ctrList.SetItemText(i,5,m_pReader.m_Ubirthday);
					if(m_pDept->IsOpen())
						m_pDept->Close();
					strSQL.Format("select * from Dept where DeptNo='%s'",m_pReader.m_DeptNo);
					m_pDept->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
					m_ctrList.SetItemText(i,6,m_pDept->m_DeptNo);
					m_ctrList.SetItemText(i,7,m_pDept->m_DeptName);
					m_pDept->Close();
					m_ctrList.SetItemText(i,8,m_pReader.m_MajorNo);
					m_ctrList.SetItemText(i,9,m_pMajor->m_MajorName);
					m_ctrList.SetItemText(i,10,m_pReader.m_ClassNo);
					if(m_pClass->IsOpen())
						m_pClass->Close();
					strSQL.Format("select * from Class where ClassNo='%s'",m_pReader.m_ClassNo);
					m_pClass->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
					m_ctrList.SetItemText(i,11,m_pReader.m_Uemail);
					m_ctrList.SetItemText(i,12,m_pReader.m_Uphone);
					m_ctrList.SetItemText(i,13,m_pReader.m_Uremarks);
					m_pReader.MoveNext();
				}
				m_pMajor->MoveNext();
			}
			m_pMajor->Close();
			return;
		}
		if(nIndex==3)
		{
			m_ctrList.DeleteAllItems();
			if(m_pDept->IsOpen())
				m_pDept->Close();
			strSQL.Format("select * from Dept where DeptName like '%s%s%s'",str,m_keyword,str);
			m_pDept->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
			m_pDept->MoveFirst();
			for(int i=0;;i++)
			{
				if(m_pDept->IsEOF())
					break;
				strSQL.Format("select * from UserInfo where DeptNo='%s'",m_pDept->m_DeptNo);
				if(m_pReader.IsOpen())
					m_pReader.Close();
				m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
				m_pReader.MoveFirst();
				CString strTemp;
				for(int i=0;;i++)
				{
					if(m_pReader.IsEOF())
						break;
					m_ctrList.InsertItem(i,strTemp);
					m_ctrList.SetItemText(i,0,m_pReader.m_Uno);
					m_ctrList.SetItemText(i,1,m_pReader.m_Uname);
					m_ctrList.SetItemText(i,2,m_pReader.m_Ujob);
					m_ctrList.SetItemText(i,3,m_pReader.m_Usex);
					strTemp.Format("%d",m_pReader.m_Uage);
					m_ctrList.SetItemText(i,4,strTemp);
					m_ctrList.SetItemText(i,5,m_pReader.m_Ubirthday);
					if(m_pMajor->IsOpen())
						m_pMajor->Close();
					strSQL.Format("select * from Major where MajorNo='%s'",m_pReader.m_MajorNo);
					m_pMajor->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
					m_ctrList.SetItemText(i,6,m_pDept->m_DeptNo);
					m_ctrList.SetItemText(i,7,m_pDept->m_DeptName);
					m_pMajor->Close();
					m_ctrList.SetItemText(i,8,m_pReader.m_MajorNo);
					m_ctrList.SetItemText(i,9,m_pMajor->m_MajorName);
					m_ctrList.SetItemText(i,10,m_pReader.m_ClassNo);
					m_ctrList.SetItemText(i,11,m_pReader.m_Uemail);
					m_ctrList.SetItemText(i,12,m_pReader.m_Uphone);
					m_ctrList.SetItemText(i,13,m_pReader.m_Uremarks);
					m_pReader.MoveNext();
				}
				m_pDept->MoveNext();
			}
			m_pDept->Close();
			return;
		}
		if(m_pReader.IsOpen())
			m_pReader.Close();
		strSQL.Format("select * from UserInfo where %s like '%s%s%s'",strCBText,str,m_keyword,str);
		m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pReader.GetRecordCount()==0)
		{
			MessageBox("没有任何信息！","读者查询",MB_OK|MB_ICONINFORMATION);
			m_ctrList.DeleteAllItems();
			return;
		}
		else
		{
			m_ctrList.DeleteAllItems();
			m_pReader.MoveFirst();
			CString strTemp;
			for(int i=0;;i++)
			{
				if(m_pReader.IsEOF())
					break;
				m_ctrList.InsertItem(i,strTemp);
				m_ctrList.SetItemText(i,0,m_pReader.m_Uno);
				m_ctrList.SetItemText(i,1,m_pReader.m_Uname);
				m_ctrList.SetItemText(i,2,m_pReader.m_Ujob);
				m_ctrList.SetItemText(i,3,m_pReader.m_Usex);
				strTemp.Format("%d",m_pReader.m_Uage);
				m_ctrList.SetItemText(i,4,strTemp);
				m_ctrList.SetItemText(i,5,m_pReader.m_Ubirthday);
				if(m_pDept->IsOpen())
				m_pDept->Close();
				strSQL.Format("select * from Dept where DeptNo='%s'",m_pReader.m_DeptNo);
				m_pDept->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
				m_ctrList.SetItemText(i,6,m_pDept->m_DeptNo);
				m_ctrList.SetItemText(i,7,m_pDept->m_DeptName);
				m_pDept->Close();
				m_ctrList.SetItemText(i,8,m_pReader.m_MajorNo);
				if(m_pMajor->IsOpen())
					m_pMajor->Close();
				strSQL.Format("select * from Major where MajorNo='%s'",m_pReader.m_MajorNo);
				m_pMajor->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
				m_ctrList.SetItemText(i,9,m_pMajor->m_MajorName);
				m_pMajor->Close();
				m_ctrList.SetItemText(i,10,m_pReader.m_ClassNo);
				m_ctrList.SetItemText(i,11,m_pReader.m_Uemail);
				m_ctrList.SetItemText(i,12,m_pReader.m_Uphone);
				m_ctrList.SetItemText(i,13,m_pReader.m_Uremarks);
				m_pReader.MoveNext();
			}
		}

	}
	return;
}

void CRADERM::OnAddreader() 
{
	CNewReader dlg;
	dlg.DoModal();
}

void CRADERM::OnExcelImport(CString FilePathName)
{
	_ConnectionPtr m_pConnection;
	_RecordsetPtr m_pRecordset;
    _Application m_appExcel;       
    Workbooks m_books;
    _Workbook m_book;
    Sheets m_sheets; 
    _Worksheet m_sheet;
    Range m_range;    
	
	Font m_font;

    LPDISPATCH lpDisp = NULL;
    if (::CoInitialize( NULL ) == E_INVALIDARG)
    {
        MessageBox("初始化Com失败!","EXCEL导入信息");
    }
    if ( !m_appExcel.CreateDispatch(_T("Excel.Application"), NULL))
    {
        MessageBox(_T("创建Excel失败!"));
        ::CoUninitialize();
    }
	try
	{
        m_pConnection.CreateInstance(_uuidof(Connection));   
		_bstr_t strConnect="Provider=SQLOLEDB.1;Persist Security Info=False;Initial Catalog=图书管理系统;DataSource=127.0.0.1"; 
        m_pConnection->Open(strConnect,"syx","qwerty000",adModeUnknown);           
    }
    catch (_com_error e)           
    {
        AfxMessageBox(e.ErrorMessage());        		
    }
    m_books.AttachDispatch(m_appExcel.GetWorkbooks()); 
    try
    {
        lpDisp = m_books.Open(FilePathName, 
            vtMissing, vtMissing, vtMissing, vtMissing, vtMissing,
            vtMissing, vtMissing, vtMissing, vtMissing, vtMissing, 
            vtMissing, vtMissing, vtMissing, vtMissing);
        m_book.AttachDispatch(lpDisp);
    }
    catch(...)
    {
        MessageBox("Excel打开失败!","EXCEL导入信息");
        return;
    }
    m_sheets.AttachDispatch(m_book.GetSheets());

    int sheetIndex = 1;
    try
    {
        lpDisp = m_sheets.GetItem(_variant_t((short)sheetIndex));
        m_sheet.AttachDispatch(lpDisp);
    }
    catch(...)
    {
        MessageBox("Sheet%d未找到，请重新操作！","EXCEL导入信息");
        return;
    }

    Range usedRange;
    usedRange.AttachDispatch(m_sheet.GetUsedRange());
    m_range.AttachDispatch(usedRange.GetRows());
    long iRowNum = m_range.GetCount();                 //已经使用的行数
    m_range.AttachDispatch(usedRange.GetColumns());
    long iColNum = m_range.GetCount();                  //已经使用的列数

    if (iRowNum<1)
    {
        MessageBox("当前选择的Excel中没有要导入的数据！","EXCEL导入信息");
        return;
    }
	CBSTree *existTaskIds=new CBSTree;
    COleVariant vResult;
    int i,j=0;
	CString str;
    try
    {
        m_pConnection->BeginTrans();
        if (sheetIndex == 1)
        {
            CString strExistSQL="select Uno from UserInfo";
            _RecordsetPtr m_ExistRecodeSet = m_pConnection->Execute((LPCTSTR)strExistSQL,NULL, adCmdText);
            while(!m_ExistRecodeSet->adoEOF)
            {
                CString existTaskId;
                _variant_t var = m_ExistRecodeSet->GetCollect(_variant_t((long)0));
                if(var.vt != VT_NULL)
                    existTaskId = var.bstrVal;
                existTaskIds->Insert(existTaskId);
                m_ExistRecodeSet->MoveNext();
            }
            CString no="";
            CString name="";
            CString job="";    
            CString sex="";
            int age=0;
            CString birthday="";
            CString dept="";
            CString major="";
            CString class0="";
            CString phone="";
            CString email="";
            CString remark="";
			CString pwd="";
			CString states="";
			CString time="";
			

			for ( i=1; i<= iRowNum; i++)
            {
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)1)).pdispVal );
                vResult = m_range.GetValue2();
				no=vResult.bstrVal;
                if (!no.IsEmpty()&&vResult.vt!=0)
                {
					CBinaryTreeNode* pr,* parents;
                    if (existTaskIds->Search(no,pr,parents)!=NULL)
					{
						CString strT;
						strT.Format("存在相同学号：%s！无法插入请检查！",no);
						MessageBox(strT,"EXCEL导入信息");
						continue;
					}
					else
					{
						existTaskIds->Insert(no);
					}
                }
				else
				{
					break;
				}
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)2)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    name=vResult.bstrVal;
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)3)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    job= vResult.bstrVal;
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)4)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    sex= vResult.bstrVal;
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)5)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    age=int(vResult.dblVal);
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)6)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
				{
					COleDateTime date;
					date=vResult;
					birthday.Format("%d-%d-%d",date.GetYear(),date.GetMonth(),date.GetDay());
				}
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)7)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    dept=vResult.bstrVal;
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)8)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    major= vResult.bstrVal;
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)9)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    class0= vResult.bstrVal;
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)10)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    phone= vResult.bstrVal;
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)11)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    email= vResult.bstrVal;
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)12)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    remark= vResult.bstrVal;
				m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)13)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    pwd= vResult.bstrVal;
				m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)14)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    states= vResult.bstrVal;
				m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)15)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    time= vResult.bstrVal;
                CString strTaskInsertSQL;
				str=no;
                strTaskInsertSQL.Format("insert into UserInfo values('%s','%s','%s','%s',%d,",
					no,name,job,sex,age);
                m_pConnection->Execute((LPCTSTR)(strTaskInsertSQL+"'"+birthday+"','"+dept+"','"+major+"','"+class0+"','"+phone+"','"+email+"','"+remark+"','"+pwd+"','"+states+"','"+time+"')"),NULL, adCmdText);    
				no="";
				name="";
				job="";    
                sex="";
				age=0;
				birthday="";
				dept="";
				major="";
				class0="";
				phone="";
				email="";
				remark="";
				pwd="";
				states="";
				time="";
			}
		}
		m_pConnection->CommitTrans();
	}
	catch(...)
    {
		m_sheet.ReleaseDispatch();
		m_sheets.ReleaseDispatch();
		m_book.ReleaseDispatch();
		m_books.ReleaseDispatch();
		m_appExcel.Quit();
		m_appExcel.ReleaseDispatch();

        MessageBox("操作失败，数据回滚！"+str+"附近出现错误!","EXCEL导入信息");
		m_pConnection->RollbackTrans();
		return;
    }
    m_sheet.ReleaseDispatch();
    m_sheets.ReleaseDispatch();
    m_book.ReleaseDispatch();
    m_books.ReleaseDispatch();
    m_appExcel.Quit();
    m_appExcel.ReleaseDispatch();
	MessageBox("导入成功!","EXCEL导入信息");
	//*/
}

void CRADERM::OnExport() 
{
	CString FilePathName;
	CFileDialog dlg(true, NULL, NULL, NULL, _T("Excel Files(*.xls)|*.xls|Excel Files(*.xlsx)|*.xlsx| All Files(*.*)|*.*||"), NULL);
	if(dlg.DoModal()==IDOK)
		FilePathName=dlg.GetPathName();
	if(FilePathName.IsEmpty())
	{
		return;
	}
	OnExcelImport(FilePathName);
}

void CRADERM::OnPrint() 
{
	CImport dlg;
	dlg.DoModal();
	if(dlg.Yn==true)
	{
		if(m_ctrList.GetItemCount()>0)
		{
			if(dlg.m_radio==1)
				OnExcelPrint(dlg.m_strTitle);
			else
				OnWordPrint(dlg.m_strTitle);
		}
		else
		{
			MessageBox("没有需要打印的信息!","打印");
		}
	}
}

void CRADERM::OnExcelPrint(CString strTitle)
{
	UpdateData(true);
	CString Field[15]={"学号","姓名","学历","性别","年龄","生日","系别编号","系别名称","专业编号","专业名称","班级","电子邮件","移动电话","备注","借阅数"};
	_Application exApp;
	_Workbook exBook;
	Workbooks exBooks;
	Sheets exSheets;
	_Worksheet exSheet;
	Range exRange;
	Font exFont;

	if(!exApp.CreateDispatch(_T("Excel.Application"))) 
	{
		AfxMessageBox(_T(" Excel failed to start!"));
		return;
	}
	VARIANT varOptional;
	VariantInit(&varOptional);
	varOptional.vt=VT_ERROR;
	varOptional.scode=DISP_E_PARAMNOTFOUND;

	exBooks=exApp.GetWorkbooks();
	exBook=exBooks.Add(varOptional);
	exSheets=exBook.GetWorksheets();
	exSheet=exSheets.Add(varOptional,varOptional,varOptional,varOptional);
	long nRows,nCols;
	nCols=15;
	nRows=m_ctrList.GetItemCount()+1;

	long nstrLen;
	CString strField;
	VARIANT varCol;
	VariantInit(&varCol);
	varCol.vt=VT_R4;
	char cCol='A';
	CString strCol;
	for(int i=0;i<nCols;i++)
	{
		CString str=Field[i];
		nstrLen=str.GetLength();
		strCol=cCol;
		strCol=strCol+"1";
		exRange=exSheet.GetRange(COleVariant(strCol),varOptional);
		varCol.fltVal=float(nstrLen+10);
		exRange.SetColumnWidth(varCol);
		cCol=cCol++;
	}

	char chr;
	chr='A'+nCols-1;
	CString strCh=chr;
	strCh=strCh+"2";
	VARIANT varUnit;
	VariantInit(&varUnit);
	varUnit.vt=VT_I4;
	varUnit.lVal=15;
	exRange=exSheet.GetRange(COleVariant("A1"),COleVariant(strCh));
	exRange.Merge(varOptional);
	exFont=exRange.GetFont();
	exFont.SetName(COleVariant("黑体"));
	exFont.SetSize(varUnit);
	exRange.SetValue2(COleVariant(strTitle));
	varUnit.lVal=-4108;
	exRange.SetHorizontalAlignment(varUnit);
	exRange.SetVerticalAlignment(varUnit);

	COleSafeArray sarry;
	DWORD ElementsNum[2];
	ElementsNum[0]=nRows;
	ElementsNum[1]=nCols;
	sarry.Create(VT_BSTR,2,ElementsNum);
	VARIANT varVal;
	long Index[2];
	CString strvalue;
	int k,l;
	for( k=0;k<nRows;k++)
	{
		if(k==0)
		{
			for(l=0;l<nCols;l++)
			{
				Index[0]=k;
				Index[1]=l;
				VariantInit(&varVal);
				varVal.vt=VT_BSTR;
				varVal.bstrVal=Field[l].AllocSysString();
				sarry.PutElement(Index,varVal.bstrVal);
				SysFreeString(varVal.bstrVal);
				VariantClear(&varVal);
			}
		}
		else
		{
			for(l=0;l<nCols;l++)
			{
				Index[0]=k;
				Index[1]=l;
				strvalue=m_ctrList.GetItemText(k-1,l);
				VariantInit(&varVal);
				varVal.vt=VT_BSTR;
				varVal.bstrVal=strvalue.AllocSysString();
				sarry.PutElement(Index,varVal.bstrVal);
				SysFreeString(varVal.bstrVal);
				VariantClear(&varVal);
			}
		}
	}
	strCh=chr;
	CString temp;
	temp.Format("%d",nRows+2);
	strCh=strCh+temp;
	
	exRange=exSheet.GetRange(COleVariant("A3"),COleVariant(strCh));
	exFont=exRange.GetFont();
	exFont.SetName(COleVariant("宋体"));
	varUnit.lVal=12;
	exFont.SetSize(varUnit);
	exRange.SetValue2(COleVariant(sarry));
	varUnit.lVal=-4108;
	exRange.SetHorizontalAlignment(varUnit);
	exRange.SetVerticalAlignment(varUnit);
	exApp.SetVisible(true);//*/
}

void CRADERM::OnWordPrint(CString strTitle)
{
	UpdateData(true);
	CString Field[14]={"学号","姓名","学历","性别","年龄","生日","系别编号","系别名称","专业编号","专业名称","班级","电子邮件","移动电话","备注"};

	Application sapp;
	if(!sapp.CreateDispatch(_T("word.Application"))) 
	{
		AfxMessageBox(_T(" Word failed to start!"));
		return;
	}

	_Document sDoc;
	Documents sDocs;
	sDocs.AttachDispatch(sapp.GetDocuments(),true);
	VARIANT varUnit,varOptional;
	VariantInit(&varUnit);
	varUnit.vt=VT_I4;
	varUnit.lVal=5;
	VariantInit(&varOptional);
	varOptional.vt=VT_ERROR;
	varOptional.scode=DISP_E_PARAMNOTFOUND;

	LPDISPATCH pDoc=sDocs.Add(&varOptional,&varOptional,&varOptional,&varOptional);
	sDoc.AttachDispatch(pDoc);
	long nRows,nCols;
	nCols=14;
	nRows=m_ctrList.GetItemCount()+1;

	_Range wordRange=sDoc._Range(&varOptional,&varOptional);

	Selection wordSelect=sapp.GetSelection();
	_Font oFont;
	_ParagraphFormat wordFormat;

	wordSelect.HomeKey(&varUnit,&varOptional);
	oFont=wordSelect.GetFont();
	oFont.SetSize(15);
	oFont.SetName("黑体");
	wordFormat=wordSelect.GetParagraphFormat();
	wordFormat.SetAlignment(1);
	wordSelect.InsertAfter(strTitle);
	wordSelect.EndKey(&varUnit,&varOptional);

	wordRange=wordSelect.Get_Range();
	oFont=wordSelect.GetFont();
	oFont.SetSize(12);
	oFont.SetName("宋体");
	wordFormat=wordSelect.GetParagraphFormat();
	wordFormat.SetAlignment(1);

	VARIANT varTable;
	VariantInit(&varTable);
	varTable.vt=VT_I4;
	varTable.lVal=0;

	Tables wordTables=wordSelect.GetTables();
	Table wordTable=wordTables.Add(wordRange,nRows,nCols,&varOptional,&varTable);
	Borders tblBorders;
	tblBorders=wordTable.GetBorders();
	tblBorders.SetInsideLineStyle(1);
	tblBorders.SetOutsideLineStyle(7);

	Columns tblColumns;
	tblColumns=wordTable.GetColumns();
	tblColumns.SetPreferredWidthType(1);

	long i,j;
	CString strValue;
	Cell tblCell;
	for(i=1;i<=nRows;i++)
	{
		if(i==1)
		{
			for(j=1;j<=nCols;j++)
			{
				tblCell=wordTable.Cell(i,j);
				wordRange=tblCell.Get_Range();
				oFont=wordRange.GetFont();
				oFont.SetName("黑体");
				wordRange.InsertAfter(Field[j-1]);
			}
		}
		else
		{
			for(j=1;j<=nCols;j++)
			{
				tblCell=wordTable.Cell(i,j);
				wordRange=tblCell.Get_Range();
				wordRange.InsertAfter(m_ctrList.GetItemText(i-2,j-1));
			}
		}
	}

	sapp.SetVisible(true);
	sDoc.Activate();
}

void CRADERM::OnButton1() 
{
	if(m_pReader.IsOpen())
	m_pReader.Close();
	CString strSQL;
	strSQL="select * from UserInfo";
	CDept * m_pDept=new CDept(&m_database);
	CClass * m_pClass=new CClass(&m_database);
	CMajor *m_pMajor=new CMajor(&m_database);
	m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
	if(m_pReader.GetRecordCount()==0)
	{
		MessageBox("没有任何信息！","读者管理",MB_OK|MB_ICONINFORMATION);
	}
	else
	{
		m_ctrList.DeleteAllItems();
		m_pReader.MoveFirst();
		CString strTemp;
		for(int i=0;;i++)
		{
			if(m_pReader.IsEOF())
				break;
			m_ctrList.InsertItem(i,strTemp);
			m_ctrList.SetItemText(i,0,m_pReader.m_Uno);
			m_ctrList.SetItemText(i,1,m_pReader.m_Uname);
			m_ctrList.SetItemText(i,2,m_pReader.m_Ujob);
			m_ctrList.SetItemText(i,3,m_pReader.m_Usex);
			strTemp.Format("%d",m_pReader.m_Uage);
			m_ctrList.SetItemText(i,4,strTemp);
			m_ctrList.SetItemText(i,5,m_pReader.m_Ubirthday);
			m_ctrList.SetItemText(i,6,m_pReader.m_DeptNo);
			if(m_pDept->IsOpen())
				m_pDept->Close();
			strSQL.Format("select * from Dept where DeptNo='%s'",m_pReader.m_DeptNo);
			m_pDept->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
			m_ctrList.SetItemText(i,7,m_pDept->m_DeptName);
			m_pDept->Close();
			m_ctrList.SetItemText(i,8,m_pReader.m_MajorNo);
			if(m_pMajor->IsOpen())
				m_pMajor->Close();
			strSQL.Format("select * from Major where MajorNo='%s'",m_pReader.m_MajorNo);
			m_pMajor->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
			m_ctrList.SetItemText(i,9,m_pMajor->m_MajorName);
			m_pMajor->Close();
			m_ctrList.SetItemText(i,10,m_pReader.m_ClassNo);
			if(m_pClass->IsOpen())
				m_pClass->Close();
			strSQL.Format("select * from Class where ClassNo='%s'",m_pReader.m_ClassNo);
			m_pMajor->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
			m_ctrList.SetItemText(i,11,m_pClass->m_ClassName);
			m_pMajor->Close();
			m_ctrList.SetItemText(i,12,m_pReader.m_Uemail);
			m_ctrList.SetItemText(i,13,m_pReader.m_Uphone);
			m_ctrList.SetItemText(i,14,m_pReader.m_Uremarks);
			m_pReader.MoveNext();
		}
	}
}

void CRADERM::OnModify() 
{
	UpdateData(true);
	int i,count=0;
	int chose;
	int nHeadNum = m_ctrList.GetItemCount();
	for(i=0;i<nHeadNum;i++)
	{
		if(m_ctrList.GetItemState(i, LVIS_SELECTED) == LVIS_SELECTED)
		{
			count++;
			chose=i;
			break;
		}
	}
	if(count==0)
	{
		MessageBox("没有选中任何读者!","修改读者");
		return;
	}
	else
	{
		m_ctrList.SetItemState(chose, 0, LVIS_SELECTED|LVIS_FOCUSED);
		((CLMSApp *)AfxGetApp())->m_UserNo=m_ctrList.GetItemText(chose,0);
		CMdifyReader dlg;
		dlg.DoModal();
	}
}

void CRADERM::OnDblclkList1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
	if(pNMListView->iItem != -1)
	{
		((CLMSApp *)AfxGetApp())->m_UserNo=m_ctrList.GetItemText(pNMListView->iItem,0);
		CMdifyReader dlg;
		dlg.DoModal();
	}
	*pResult = 0;
}

void CRADERM::OnDelete() 
{
	int count=0;
	int a[10000];
	for(int i=0; i<m_ctrList.GetItemCount(); i++)
	{
		if(m_ctrList.GetCheck(i))
		{	  
			a[count++]=i;
		}
	}
	if(count==0)
	{
		MessageBox("没有选中任何信息!","删除读者");
		return;
	}
	else
	{	try
		{
			CString str;
			m_database.BeginTrans();
			for(int i=0;i<count;i++)
			{
				CString strSQL;
				str=m_ctrList.GetItemText(a[i],0);
				strSQL.Format("select * from UserInfo where Uno='%s'",str);
				if(m_pReader.IsOpen())
					m_pReader.Close();
				m_pReader.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
				if(m_pReader.m_Ustatus!=11)
				{
					CString str1;
					str1.Format("因%s有图书借阅或者预约!无法进行删除!",str);
					MessageBox(str1,"删除读者");
					continue;
				}
				m_pReader.Close();
				strSQL.Format("delete from UserInfo where Uno='%s'",str);
				m_database.ExecuteSQL(strSQL);
			}
			m_database.CommitTrans();
			for(int j=count-1;j>=0;j--)
			{
				m_ctrList.DeleteItem(a[j]);
			}
		}
		catch(...)
		{
			MessageBox("删除失败信息回滚!","删除读者");
			m_database.Rollback();
			return;
		}
	}
	MessageBox("删除成功!","删除读者");
}

CString CRADERM::GetValues(int nIndex)
{
	if(nIndex==0)
	{
		return "Uno";
	}
	if(nIndex==1)
	{
		return "Uname";
	}
	if(nIndex==2)
	{
		return "MajorName";
	}
	if(nIndex==3)
	{
		return "DeptName";
	}
	if(nIndex==4)
	{
		return "ClassNo";
	}
	if(nIndex==5)
	{
		return "Ujob";
	}
	if(nIndex==6)
	{
		return "Usex";
	}
	return "";
}

void CRADERM::OnRclickList1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
   if(pNMListView->iItem != -1)
   {
        DWORD dwPos = GetMessagePos();
        CPoint point( LOWORD(dwPos), HIWORD(dwPos) );
		//m_ctrList.ScreenToClient(&point);
        CMenu menu;
        VERIFY( menu.LoadMenu( IDR_MENURCLICK ) );
        CMenu* popup = menu.GetSubMenu(0);
        ASSERT( popup != NULL );
        popup->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, this );
		/*LVHITTESTINFO lvinfo;
       lvinfo.pt = point;
       lvinfo.flags = LVHT_ABOVE;

       int nItem = m_ctrList.SubItemHitTest(&lvinfo);
       if(nItem != -1)
       {
            CString strtemp;
            strtemp.Format("单击的是第%d行第%d列", lvinfo.iItem, lvinfo.iSubItem);
            AfxMessageBox(strtemp);
       }*/
   }
	*pResult = 0;
}

void CRADERM::OnPaint() 
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

void CRADERM::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
