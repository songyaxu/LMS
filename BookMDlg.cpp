// BookMDlg.cpp : implementation file
//

#include "stdafx.h"
#include "LMS.h"
#include "BookMDlg.h"
#include "Book.h"
#include "excel.h"
#include "NewBook.h"
#include <comdef.h>
#include <vector>
#include <set>
#include "Import.h"
#include "msword.h"
#include "BSTree.h"
#include "BinaryTreeNode.h"
#include "QueryReaderDlg.h"
#include "BookSort.h"
#include "ModifyBook.h"
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBookMDlg dialog


CBookMDlg::CBookMDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CBookMDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBookMDlg)
	m_editstr = _T("");
	//}}AFX_DATA_INIT
}

void CBookMDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBookMDlg)
	DDX_Control(pDX, IDC_COMBOINFO, m_combo);
	DDX_Control(pDX, IDC_LIST, m_ctrList);
	DDX_Text(pDX, IDC_EDITINFO, m_editstr);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookMDlg, CDialog)
	//{{AFX_MSG_MAP(CBookMDlg)
	ON_BN_CLICKED(IDC_ADDBOOK, OnAddbook)
	ON_BN_CLICKED(IDC_CLOSE, OnClose)
	ON_BN_CLICKED(IDC_SEARCH, OnSearch)
	ON_COMMAND(ID_EXCELIMPORT, OnExcelimport)
	ON_COMMAND(ID_QUERYREASON, OnQueryreason)
	ON_BN_CLICKED(IDC_PRINT, OnPrint)
	ON_BN_CLICKED(IDC_IMPORT, OnImport)
	ON_BN_CLICKED(IDC_MODIFY, OnModify)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST, OnDblclkList)
	ON_BN_CLICKED(IDC_QUERY, OnQuery)
	ON_BN_CLICKED(IDC_DELETE, OnDelete)
	ON_BN_CLICKED(IDC_BOOKmanage, OnBOOKmanage)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBookMDlg message handlers

BOOL CBookMDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();

	m_btn.SubclassDlgItem(IDC_ADDBOOK,this);
	m_btn.SetIcon(IDI_ADDBOOK);
	m_btn.SetTooltipText(_T("新增"));
	m_btn1.SubclassDlgItem(IDC_MODIFY,this);
	m_btn1.SetIcon(IDI_MODIFY);
	m_btn1.SetTooltipText(_T("修改"));
	m_btn2.SubclassDlgItem(IDC_DELETE,this);
	m_btn2.SetIcon(IDI_DELETE);
	m_btn2.SetTooltipText(_T("删除"));
	m_btn3.SubclassDlgItem(IDC_BOOKmanage,this);
	m_btn3.SetIcon(IDI_MANAGE);
	m_btn3.SetTooltipText(_T("管理"));
	m_btn5.SubclassDlgItem(IDC_PRINT,this);
	m_btn5.SetIcon(IDI_PRINT);
	m_btn5.SetTooltipText(_T("打印"));
	m_btn6.SubclassDlgItem(IDC_IMPORT,this);
	m_btn6.SetIcon(IDI_EXPORT);
	m_btn6.SetTooltipText(_T("导入"));
	m_btn7.SubclassDlgItem(IDC_MANAGE,this);
	m_btn8.SubclassDlgItem(IDC_CLOSE,this);
	m_btn8.SetIcon(IDI_CLOSE);
	m_btn8.SetTooltipText(_T("关闭"));
	m_btn9.SubclassDlgItem(IDC_SEARCH,this);
	m_btn9.SetIcon(IDI_SEARCH);
	m_btn9.SetTooltipText(_T("查找"));
	m_combo.InsertString(0,"名称");
	m_combo.InsertString(1,"出版社");
	m_combo.InsertString(2,"主编");
	m_combo.InsertString(3,"简介");
	m_combo.InsertString(4,"位置");
	m_combo.InsertString(5,"类别");
	m_combo.InsertString(6,"ISBN");
	m_combo.SetCurSel(0);
	m_ctrList.InsertColumn(0,"ISBN/ISSN");
	m_ctrList.InsertColumn(1,"名称");
	m_ctrList.InsertColumn(2,"出版社");
	m_ctrList.InsertColumn(3,"主编");
	m_ctrList.InsertColumn(4,"简介");
	m_ctrList.InsertColumn(5,"价格");
	m_ctrList.InsertColumn(6,"位置");
	m_ctrList.InsertColumn(7,"数量");
	m_ctrList.InsertColumn(8,"库存");
	m_ctrList.InsertColumn(9,"一级分类");
	m_ctrList.InsertColumn(10,"二级分类");
	m_ctrList.InsertColumn(11,"备注");
	m_ctrList.InsertColumn(12,"版次");
	m_ctrList.InsertColumn(13,"印刷时间");
	m_ctrList.SetColumnWidth(0,90);
	m_ctrList.SetColumnWidth(1,120);
	m_ctrList.SetColumnWidth(2,120);
	m_ctrList.SetColumnWidth(3,120);
	m_ctrList.SetColumnWidth(4,100);
	m_ctrList.SetColumnWidth(5,60);
	m_ctrList.SetColumnWidth(6,100);
	m_ctrList.SetColumnWidth(7,60);
	m_ctrList.SetColumnWidth(8,60);
	m_ctrList.SetColumnWidth(9,120);
	m_ctrList.SetColumnWidth(10,120);
	m_ctrList.SetColumnWidth(11,180);
	m_ctrList.SetColumnWidth(12,80);
	m_ctrList.SetColumnWidth(13,80);
	DWORD dwStyle =m_ctrList.GetExtendedStyle();
	dwStyle |=LVS_EX_FULLROWSELECT;
	dwStyle |= LVS_EX_GRIDLINES;      
	dwStyle |=LVS_EX_CHECKBOXES;  
	m_ctrList.SetExtendedStyle(dwStyle);
	TRY
	{
		m_database.OpenEx(_T("DSN=图书管理系统;UID=syx;PWD=qwerty000"),CDatabase::noOdbcDialog);
		m_pBook.m_pDatabase=&m_database;
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

void CBookMDlg::OnSearch() 
{
	m_ctrList.DeleteAllItems();
	UpdateData(true);
	COneBook *m_pOnebook=new COneBook(&m_database);
	CTwoBook *m_pTwobook=new CTwoBook(&m_database);
	int nIndex=m_combo.GetCurSel(); 
	CString strCBText;
	strCBText=GetValues(nIndex);
	if(m_combo.GetCurSel()==-1)
	{
		MessageBox("请选择查找条件!","图书查询",MB_OK|MB_ICONINFORMATION);
		return;
	}
	if(m_editstr.IsEmpty())
	{
		MessageBox("请在对话框中输入你要查找的信息！","图书查询",MB_OK|MB_ICONINFORMATION);
		return;
	}
	else
	{
		if(m_pBook.IsOpen())
			m_pBook.Close();
		CString str="%";
		CString strSQL;
		strSQL.Format("select * from Book where %s like '%s%s%s'",strCBText,str,m_editstr,str);
		m_pBook.Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
		if(m_pBook.GetRecordCount()==0)
		{
			MessageBox("没有任何信息！","图书查询",MB_OK|MB_ICONINFORMATION);
			m_ctrList.DeleteAllItems();
		}
		else
		{
			m_ctrList.DeleteAllItems();
			m_pBook.MoveFirst();
			CString strTemp;
			for(int i=0;;i++)
			{
				if(m_pBook.IsEOF())
					break;
				m_ctrList.InsertItem(i,strTemp);
				m_ctrList.SetItemText(i,0,m_pBook.m_ISBN);
				m_ctrList.SetItemText(i,1,m_pBook.m_Bname);
				m_ctrList.SetItemText(i,2,m_pBook.m_Bpublish);
				m_ctrList.SetItemText(i,3,m_pBook.m_Beditor);
				m_ctrList.SetItemText(i,4,m_pBook.m_Bcontents);
				strTemp.Format(_T("%.2f"),m_pBook.m_Bprice);
				m_ctrList.SetItemText(i,5,strTemp);
				m_ctrList.SetItemText(i,6,m_pBook.m_Bplace);
				strTemp.Format("%d",m_pBook.m_Bnum);
				m_ctrList.SetItemText(i,7,strTemp);
				strTemp.Format("%d",m_pBook.m_Bstore);
				m_ctrList.SetItemText(i,8,strTemp);
				if(m_pOnebook->IsOpen())
					m_pOnebook->Close();
				strSQL.Format("select * from OneBook,TwoBook where TwoBook.oneNo=OneBook.oneNo and TwoBook.twoNo=%d",m_pBook.m_twoNo);
				m_pOnebook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
				m_ctrList.SetItemText(i,9,m_pOnebook->m_oneName);
				m_pOnebook->Close();
				if(m_pTwobook->IsOpen())
					m_pTwobook->Close();
				strSQL.Format("select * from TwoBook where twoNo=%d",m_pBook.m_twoNo);
				m_pTwobook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
				m_ctrList.SetItemText(i,10,m_pTwobook->m_twoName);
				m_pTwobook->Close();
				m_ctrList.SetItemText(i,11,m_pBook.m_Bremarks);
				m_ctrList.SetItemText(i,12,m_pBook.m_BpublishTime);
				m_ctrList.SetItemText(i,13,m_pBook.m_BprintTime);
				m_pBook.MoveNext();
			}
		}

	}
	return;
}
void CBookMDlg::OnAddbook() 
{
	CNewBook dlg;
	dlg.DoModal();
}
void CBookMDlg::OnClose() 
{
	OnOK();
}

CString CBookMDlg::GetValues(int nIndex)
{
	if(nIndex==0)
		return "Bname";
	if(nIndex==1)
		return "Bpublish";
	if(nIndex==2)
		return "Beditor";
	if(nIndex==3)
		return "Bcontents";
	if(nIndex==4)
		return "Bplace";
	if(nIndex==5)
		return "twoNo";
	if(nIndex==6)
		return "ISBN";
	return "";
}

void CBookMDlg::OnImportExcel(CString filePathName) 
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
        lpDisp = m_books.Open(filePathName, 
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
	CString d;
	CBSTree *existTaskIds=new CBSTree;
    COleVariant vResult;
    int i,j=0;
    try
    {
        m_pConnection->BeginTrans();
        if (sheetIndex == 1)
        {
            CString strExistSQL="select ISBN from Book";
            _RecordsetPtr m_ExistRecodeSet = m_pConnection->Execute((LPCTSTR)strExistSQL,NULL, adCmdText);
            while(!m_ExistRecodeSet->adoEOF)
            {
                CString existTaskId;
                _variant_t var = m_ExistRecodeSet->GetCollect(_variant_t((long)0));
                if(var.vt!= VT_NULL)
                    existTaskId = var.bstrVal;
                existTaskIds->Insert(existTaskId);
                m_ExistRecodeSet->MoveNext();
            }
            CString isbn="";
            CString name="";
            CString publish="";    
            CString editor="";
            CString contents="";
            CString place="";
            float price=0;
            int num=0;
            int store=0;
            int two=0;
			CString remark="";
            CString publishtime="";
            CString printtime="";
			CString cover="";
				
			for ( i=1; i<=iRowNum; i++)
            {
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)1)).pdispVal );
                vResult = m_range.GetValue2();
				isbn=vResult.bstrVal;
				d=isbn;
                if (!isbn.IsEmpty()&&vResult.vt!=0)
                {
					CBinaryTreeNode* pr,* parents;
                    if (existTaskIds->Search(isbn,pr,parents)!=NULL)
					{
						CString strT;
						strT.Format("存在相同ISBN：%s！无法插入请检查！",isbn);
						MessageBox(strT,"EXCEL导入信息");
						continue;
					}
					else
					{
						existTaskIds->Insert(isbn);
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
                    publish= vResult.bstrVal;
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)4)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    editor= vResult.bstrVal;
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)5)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    contents=vResult.bstrVal;
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)6)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
					place=vResult.bstrVal;
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)7)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    price=float(vResult.dblVal);
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)8)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    num=int(vResult.dblVal);
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)9)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    store=int(vResult.dblVal);
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)10)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    two=int(vResult.dblVal);
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)11)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    remark= vResult.bstrVal;
                m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)12)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    publishtime= vResult.bstrVal;
				m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)13)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
				{
					COleDateTime date;
					date=vResult;
					printtime.Format("%d-%d-%d",date.GetYear(),date.GetMonth(),date.GetDay());
				}
				m_range.AttachDispatch(m_sheet.GetCells());
                m_range.AttachDispatch(m_range.GetItem (COleVariant((long)i),COleVariant((long)14)).pdispVal );
                vResult = m_range.GetValue2();
                if (vResult.vt!=VT_NULL)
                    cover= vResult.bstrVal;
                CString strTaskInsertSQL;
                strTaskInsertSQL.Format("insert into Book values('%s','%s','%s','%s','%s','%s','%.2f','%d','%d','%d','",
					isbn,name,publish,editor,contents,place,price,num,store,two);
				m_pConnection->Execute((LPCTSTR)(strTaskInsertSQL+remark+"','"+publishtime+"','"+printtime+"','"+cover+"')"),NULL, adCmdText);   
            
				isbn="";
				name="";
				publish="";    
				editor="";
				contents="";
				place="";
				price=0;
				num=0;
				store=0;
				two=0;
				remark="";
				publishtime="";
				printtime="";
				cover="";
			}
		}
		m_pConnection->CommitTrans();
	}
	catch(...)
    {	
		CString str;
		str.Format("在ISBN为%s的附近出现问题!",d);
		MessageBox(str,"导入数据");
		m_sheet.ReleaseDispatch();
		m_sheets.ReleaseDispatch();
		m_book.ReleaseDispatch();
		m_books.ReleaseDispatch();
		m_appExcel.Quit();
		m_appExcel.ReleaseDispatch();
        MessageBox("操作失败，数据回滚！","EXCEL导入信息");
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
void CBookMDlg::OnExcelimport() 
{
	//importExcel();
}

void CBookMDlg::OnQueryreason() 
{
	CQueryReaderDlg dlg;
	dlg.DoModal();
}

void CBookMDlg::OnImport() 
{
	CString FilePathName;
	CFileDialog dlg(true, NULL, NULL, NULL, _T("Excel Files(*.xls)|*.xls|Excel Files(*.xlsx)|*.xlsx| All Files(*.*)|*.*||"), NULL);
	if(dlg.DoModal()==IDOK)
		FilePathName=dlg.GetPathName();
	if(FilePathName.IsEmpty())
	{
		return;
	}
	OnImportExcel(FilePathName);
}

void CBookMDlg::OnPrint() 
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

void CBookMDlg::OnExcelPrint(CString strTitle)
{
	UpdateData(true);
	CString Field[14]={"ISBN/ISSN","名称","出版社","主编","简介","价格","位置","总数","库存","一级分类","二级分类",
	"备注","版次","印刷时间"};
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
	nCols=14;
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
		varCol.fltVal=nstrLen+10;
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
	exApp.SetVisible(true);
}
void CBookMDlg::OnWordPrint(CString strTitle)
{
	UpdateData(true);
	CString Field[14]={"ISBN/ISSN","名称","出版社","主编","简介","价格","位置","总数","库存","一级分类","二级分类",
	"备注","版次","印刷时间"};

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


void CBookMDlg::OnModify() 
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
		MessageBox("没有选中任何图书!","修改图书");
		return;
	}
	else
	{
		m_ctrList.SetItemState(chose, 0, LVIS_SELECTED|LVIS_FOCUSED);
		((CLMSApp *)AfxGetApp())->m_ISBN=m_ctrList.GetItemText(chose,0);
		CModifyBook dlg;
		dlg.DoModal();
	}
}

void CBookMDlg::OnDblclkList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
	if(pNMListView->iItem != -1)
	{
		((CLMSApp *)AfxGetApp())->m_ISBN=m_ctrList.GetItemText(pNMListView->iItem,0);
		CModifyBook dlg;
		dlg.DoModal();
	}
	*pResult = 0;
}

void CBookMDlg::OnQuery() 
{
	CQueryReaderDlg dlg;
	dlg.DoModal();
}

void CBookMDlg::OnDelete() 
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
		MessageBox("没有选中任何信息!","删除图书");
		return;
	}
	else
	{
		if(MessageBox("确定删除图书?","删除图书",MB_OKCANCEL)==2)
			return;
		try
		{
			CBook *m_pBook=new CBook(&m_database);
			CString str;
			m_database.BeginTrans();
			for(int i=0;i<count;i++)
			{
				CString strSQL;
				str=m_ctrList.GetItemText(a[i],0);
				strSQL.Format("select * from Book where ISBN='%s'",str);
				m_pBook->Open(AFX_DB_USE_DEFAULT_TYPE,strSQL);
				if(m_pBook->m_Bstore!=m_pBook->m_Bnum)
				{
					CString str1;
					str1.Format("图书%s有借阅!无法进行删除!",str);
					MessageBox(str1,"删除图书");
					continue;
				}
				m_pBook->Close();
				strSQL.Format("delete from Book where ISBN='%s'",str);
				m_database.ExecuteSQL(strSQL);
			}
			m_database.CommitTrans();
			MessageBox("删除成功!","删除图书");
			for(int j=count-1;j>=0;j--)
			{
				m_ctrList.DeleteItem(a[j]);
			}
		}
		catch(...)
		{
			MessageBox("删除失败信息回滚!","删除图书");
			m_database.Rollback();
			return;
		}

	}
}

void CBookMDlg::OnBOOKmanage() 
{
	CBookSort dlg;
	dlg.DoModal();
}

void CBookMDlg::OnPaint() 
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
	// Do not call CDialog::OnPaint() for painting messages
}

void CBookMDlg::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
