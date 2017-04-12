; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDeleteReader
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "lms.h"
LastPage=0

ClassCount=54
Class1=CAdmin
Class2=CBook
Class3=CBookMDlg
Class4=CBorrow
Class5=CBorrowBook
Class6=CBorrowRecord
Class7=CButtonST
Class8=CCancelRenewal
Class9=CClass
Class10=CConfig
Class11=CDeleteBook
Class12=CDeleteReader
Class13=CDept
Class14=CImport
Class15=CINFO
Class16=CLMSApp
Class17=CAboutDlg
Class18=CLMSDoc
Class19=CLMSView
Class20=CLOGIN
Class21=CMainFrame
Class22=CMajor
Class23=CModifyBook
Class24=CModifyInfo
Class25=CModifyPassword
Class26=CmyButton
Class27=CNewBook
Class28=CNewReader
Class29=COneBook
Class30=CPunish
Class31=CPunishment
Class32=CPunishRecord
Class33=CQUERYBOOK
Class34=CQueryReaderDlg
Class35=CQUERYREASON
Class36=CRADERM
Class37=CReader
Class38=CRenewal
Class39=CTwoBook
Class40=CUserDlg

ResourceCount=41
Resource1=IDD_DIALOG_BORROWBOOK
Resource2=IDD_DIALOG_RETURNBOOK
Resource3=IDD_DIALOG_BORROWMANAGE
Resource4=IDR_MENUMANAGE
Resource5=IDD_DIALOG_ADMINMANAGE
Resource6=IDD_DIALOG_CANCELRENEWAL
Resource7=IDD_DIALOG_NEWBOOK
Resource8=IDR_MAINFRAME
Resource9=IDD_DIALOG_NEWREADER
Resource10=IDD_DIALOG_QUERY
Resource11=IDD_DIALOG_MODIFYPASSWORD
Resource12=IDD_DIALOG_BOOKBOOK
Resource13=IDD_DIALOG_ADDNEWADMIN
Resource14=IDD_DIALOG_PUNISHMENT
Resource15=IDD_QUERYREADERREASON
Resource16=IDD_DIALOG_NINDEX
Resource17=IDD_DIALOG_MODIFYINFO
Resource18=IDD_DIALOG_RADER
Resource19=IDD_DIALOG_MODIFYBOOK
Resource20=IDD_DIALOG_DELETEREADER
Resource21=IDD_ABOUTBOX
Resource22=IDD_DIALOG_USER
Resource23=IDD_DIALOG_EXPORT
Resource24=IDD_DIALOG_QUERYREADER
Resource25=IDD_DIALOG_BORROWRECORD
Resource26=IDD_DIALOG_DEMPTMANAGE
Resource27=IDD_DIALOG_RENEWAL
Class41=CDelayBook
Class42=CMdifyReader
Resource28=IDD_DIALOG_LOGIN
Class43=CDeptManage
Resource29=IDD_DIALOG_CLASSMODIFY
Class44=CConfigManage
Resource30=IDR_MENU
Class45=CDatabaseManage
Resource31=IDD_DIALOG_MODIFYREADER
Class46=CAdminManage
Resource32=IDD_LMS_FORM
Class47=CAddAdmin
Resource33=IDD_DIALOG_DELETEBOOK
Class48=CBookbook
Resource34=IDD_DIALOG_DATABASEMANAGE
Class49=CReturnBook
Resource35=IDD_DIALOG_BOOKSORT
Class50=CBackupName
Resource36=IDD_DIALOG_DATABASEBACKUP
Class51=CBookSort
Resource37=IDD_DIALOG_BOOKM
Class52=CNindex
Resource38=IDR_MENUQUERY
Resource39=IDR_MENURCLICK
Class53=CClassModify
Resource40=IDD_DIALOG_PUNISHRECORD
Class54=CBookLook
Resource41=IDD_DIALOG_Look

[CLS:CAdmin]
Type=0
HeaderFile=Admin.h
ImplementationFile=Admin.cpp
Filter=N
BaseClass=CRecordset
VirtualFilter=r

[CLS:CBook]
Type=0
HeaderFile=Book.h
ImplementationFile=Book.cpp
Filter=N
BaseClass=CRecordset
VirtualFilter=r

[CLS:CBookMDlg]
Type=0
BaseClass=CDialog
HeaderFile=BookMDlg.h
ImplementationFile=BookMDlg.cpp
Filter=D
VirtualFilter=dWC
LastObject=CBookMDlg

[CLS:CBorrow]
Type=0
HeaderFile=Borrow.h
ImplementationFile=Borrow.cpp
LastObject=CBorrow
Filter=N
BaseClass=CRecordset
VirtualFilter=r

[CLS:CBorrowBook]
Type=0
BaseClass=CDialog
HeaderFile=BorrowBook.h
ImplementationFile=BorrowBook.cpp
Filter=D
VirtualFilter=dWC
LastObject=IDC_EDIT1

[CLS:CBorrowRecord]
Type=0
BaseClass=CDialog
HeaderFile=BorrowRecord.h
ImplementationFile=BorrowRecord.cpp
Filter=D
VirtualFilter=dWC

[CLS:CButtonST]
Type=0
BaseClass=CButton
HeaderFile=BtnST.h
ImplementationFile=BtnST.cpp

[CLS:CCancelRenewal]
Type=0
BaseClass=CDialog
HeaderFile=CancelRenewal.h
ImplementationFile=CancelRenewal.cpp
Filter=D
VirtualFilter=dWC

[CLS:CClass]
Type=0
HeaderFile=Class.h
ImplementationFile=Class.cpp
Filter=N
BaseClass=CRecordset
VirtualFilter=r

[CLS:CConfig]
Type=0
HeaderFile=Config.h
ImplementationFile=Config.cpp
Filter=N
BaseClass=CRecordset
VirtualFilter=r

[CLS:CDeleteBook]
Type=0
BaseClass=CDialog
HeaderFile=DeleteBook.h
ImplementationFile=DeleteBook.cpp
LastObject=IDC_DELETE
Filter=D
VirtualFilter=dWC

[CLS:CDeleteReader]
Type=0
BaseClass=CDialog
HeaderFile=DeleteReader.h
ImplementationFile=DeleteReader.cpp
Filter=D
VirtualFilter=dWC
LastObject=CDeleteReader

[CLS:CDept]
Type=0
HeaderFile=Dept.h
ImplementationFile=Dept.cpp
Filter=N
BaseClass=CRecordset
VirtualFilter=r

[CLS:CImport]
Type=0
BaseClass=CDialog
HeaderFile=Import.h
ImplementationFile=Import.cpp
Filter=D
VirtualFilter=dWC

[CLS:CINFO]
Type=0
BaseClass=CDialog
HeaderFile=INFO.h
ImplementationFile=INFO.cpp

[CLS:CLMSApp]
Type=0
BaseClass=CWinApp
HeaderFile=LMS.h
ImplementationFile=LMS.cpp

[CLS:CAboutDlg]
Type=0
BaseClass=CDialog
HeaderFile=LMS.cpp
ImplementationFile=LMS.cpp
LastObject=IDOK

[CLS:CLMSDoc]
Type=0
BaseClass=CDocument
HeaderFile=LMSDoc.h
ImplementationFile=LMSDoc.cpp

[CLS:CLMSView]
Type=0
BaseClass=CFormView
HeaderFile=LMSView.h
ImplementationFile=LMSView.cpp
LastObject=IDC_DATABASEM
Filter=D
VirtualFilter=VWC

[CLS:CLOGIN]
Type=0
BaseClass=CDialog
HeaderFile=LOGIN.h
ImplementationFile=LOGIN.cpp

[CLS:CMainFrame]
Type=0
BaseClass=CFrameWnd
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
VirtualFilter=fWC

[CLS:CMajor]
Type=0
HeaderFile=Major.h
ImplementationFile=Major.cpp
Filter=N
BaseClass=CRecordset
VirtualFilter=r

[CLS:CModifyBook]
Type=0
BaseClass=CDialog
HeaderFile=modifybook.h
ImplementationFile=ModifyBook.cpp
Filter=D
VirtualFilter=dWC
LastObject=CModifyBook

[CLS:CModifyInfo]
Type=0
BaseClass=CDialog
HeaderFile=ModifyInfo.h
ImplementationFile=ModifyInfo.cpp
Filter=D
VirtualFilter=dWC

[CLS:CModifyPassword]
Type=0
BaseClass=CDialog
HeaderFile=ModifyPassword.h
ImplementationFile=ModifyPassword.cpp
Filter=D
VirtualFilter=dWC

[CLS:CmyButton]
Type=0
BaseClass=CButton
HeaderFile=myButton.h
ImplementationFile=myButton.cpp

[CLS:CNewBook]
Type=0
BaseClass=CDialog
HeaderFile=NewBook.h
ImplementationFile=NewBook.cpp
LastObject=IDC_OPEN

[CLS:CNewReader]
Type=0
BaseClass=CDialog
HeaderFile=NewReader.h
ImplementationFile=NewReader.cpp
LastObject=CNewReader
Filter=D
VirtualFilter=dWC

[CLS:COneBook]
Type=0
HeaderFile=OneBook.h
ImplementationFile=OneBook.cpp

[CLS:CPunish]
Type=0
HeaderFile=Punish.h
ImplementationFile=Punish.cpp
Filter=N
BaseClass=CRecordset
VirtualFilter=r
LastObject=CPunish

[CLS:CPunishment]
Type=0
BaseClass=CDialog
HeaderFile=Punishment.h
ImplementationFile=Punishment.cpp
LastObject=CPunishment
Filter=D
VirtualFilter=dWC

[CLS:CPunishRecord]
Type=0
BaseClass=CDialog
HeaderFile=PunishRecord.h
ImplementationFile=PunishRecord.cpp
Filter=D
VirtualFilter=dWC
LastObject=IDOK

[CLS:CQUERYBOOK]
Type=0
BaseClass=CDialog
HeaderFile=QUERYBOOK.h
ImplementationFile=QUERYBOOK.cpp
LastObject=IDC_LIST1
Filter=D
VirtualFilter=dWC

[CLS:CQueryReaderDlg]
Type=0
BaseClass=CDialog
HeaderFile=QueryReaderDlg.h
ImplementationFile=QueryReaderDlg.cpp
Filter=D
VirtualFilter=dWC
LastObject=CQueryReaderDlg

[CLS:CQUERYREASON]
Type=0
BaseClass=CDialog
HeaderFile=QUERYREASON.h
ImplementationFile=QUERYREASON.cpp
Filter=D
VirtualFilter=dWC

[CLS:CRADERM]
Type=0
BaseClass=CDialog
HeaderFile=RADERM.h
ImplementationFile=RADERM.cpp
Filter=D
VirtualFilter=dWC
LastObject=CRADERM

[CLS:CReader]
Type=0
HeaderFile=Reader.h
ImplementationFile=Reader.cpp
Filter=N
BaseClass=CRecordset
VirtualFilter=r

[CLS:CRenewal]
Type=0
HeaderFile=Renewal.h
ImplementationFile=Renewal.cpp

[CLS:CTwoBook]
Type=0
HeaderFile=TwoBook.h
ImplementationFile=TwoBook.cpp

[CLS:CUserDlg]
Type=0
BaseClass=CDialog
HeaderFile=UserDlg.h
ImplementationFile=UserDlg.cpp
Filter=C
VirtualFilter=dWC

[DB:CAdmin]
DB=1
DBType=ODBC
ColumnCount=6
Column1=[Aid], 4, 4
Column2=[Aname], -9, 100
Column3=[Apwd], -9, 100
Column4=[Atype], 4, 4
Column5=[Alasttime], 11, 16
Column6=[Aremarks], -9, 100

[DB:CBook]
DB=1
DBType=ODBC
ColumnCount=15
Column1=[Bid], 4, 4
Column2=[ISBN], -9, 100
Column3=[Bname], -9, 1000
Column4=[Bpublish], -9, 100
Column5=[Beditor], -9, 1000
Column6=[Bcontents], -1, 2147483647
Column7=[Bplace], -9, 100
Column8=[Bprice], 6, 8
Column9=[Bnum], 4, 4
Column10=[Bstore], 4, 4
Column11=[twoNo], 4, 4
Column12=[Bremarks], -1, 2147483647
Column13=[BpublishTime], -9, 100
Column14=[BprintTime], -9, 100
Column15=[Bcover], -9, 100

[DB:CBorrow]
DB=1
DBType=ODBC
ColumnCount=9
Column1=[BorrId], 4, 4
Column2=[Uno], 12, 50
Column3=[Uname], 12, 50
Column4=[ISBN], -9, 100
Column5=[Bname], 12, 50
Column6=[BorrNum], 4, 4
Column7=[BorrTime], 12, 50
Column8=[ReturnTime], 12, 50
Column9=[Tstatus], 4, 4

[DB:CClass]
DB=1
DBType=ODBC
ColumnCount=4
Column1=[Cid], 4, 4
Column2=[ClassNo], 12, 50
Column3=[ClassName], 12, 50
Column4=[MajorNo], 12, 50

[DB:CConfig]
DB=1
DBType=ODBC
ColumnCount=6
Column1=[Cid], 4, 4
Column2=[Cname], 12, 50
Column3=[MaxNum], 4, 4
Column4=[Time], 4, 4
Column5=[Punish], 4, 4
Column6=[SameNum], 4, 4

[DB:CDept]
DB=1

[DB:CMajor]
DB=1
DBType=ODBC
ColumnCount=4
Column1=[Mid], 4, 4
Column2=[MajorNo], 12, 50
Column3=[MajorName], 12, 50
Column4=[DeptNo], 12, 50

[DB:COneBook]
DB=1

[DB:CPunish]
DB=1
DBType=ODBC
ColumnCount=8
Column1=[Pno], 4, 4
Column2=[Uno], 12, 50
Column3=[Uname], 12, 50
Column4=[ISBN], -9, 100
Column5=[Bname], 12, 50
Column6=[Reason], 12, 50
Column7=[Fee], 6, 8
Column8=[BorrId], 4, 4

[DB:CReader]
DB=1
DBType=ODBC
ColumnCount=15
Column1=[Uno], 12, 50
Column2=[Uname], 12, 50
Column3=[Ujob], 12, 50
Column4=[Usex], 12, 2
Column5=[Uage], 4, 4
Column6=[Ubirthday], 12, 50
Column7=[DeptNo], 12, 50
Column8=[MajorNo], 12, 50
Column9=[ClassNo], 12, 50
Column10=[Uphone], 12, 11
Column11=[Uemail], 12, 50
Column12=[Uremarks], -1, 2147483647
Column13=[Upwd], 12, 16
Column14=[Ustatus], 4, 4
Column15=[Ulasttime], 12, 50

[DB:CRenewal]
DB=1

[DB:CTwoBook]
DB=1

[DLG:IDD_DIALOG_BOOKM]
Type=1
Class=CBookMDlg
ControlCount=16
Control1=IDC_ADDBOOK,button,1342242816
Control2=IDC_MODIFY,button,1342242816
Control3=IDC_DELETE,button,1342242816
Control4=IDC_PRINT,button,1342242816
Control5=IDC_IMPORT,button,1342242816
Control6=IDC_CLOSE,button,1342242817
Control7=IDC_COMBOINFO,combobox,1344340226
Control8=IDC_EDITINFO,edit,1350631552
Control9=IDC_SEARCH,button,1342242816
Control10=IDOK,button,1342242817
Control11=IDCANCEL,button,1342242816
Control12=IDC_STATIC,static,1342177296
Control13=IDC_STATIC,static,1342308352
Control14=IDC_STATIC,static,1342177297
Control15=IDC_LIST,SysListView32,1350633473
Control16=IDC_BOOKmanage,button,1342242816

[DLG:IDD_DIALOG_BORROWBOOK]
Type=1
Class=CBorrowBook
ControlCount=23
Control1=IDOK,button,1342242816
Control2=IDC_COMBO1,combobox,1344340226
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_COMBO2,combobox,1344340226
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_LIST1,SysListView32,1350631425
Control9=IDC_EDIT1,edit,1350631552
Control10=IDC_LIST2,SysListView32,1350631425
Control11=IDC_EDIT2,edit,1350631552
Control12=IDC_EDIT3,edit,1350633600
Control13=IDC_EDIT4,edit,1350633600
Control14=IDC_EDIT5,edit,1350633600
Control15=IDC_EDIT10,edit,1350633600
Control16=IDC_BORROWBOOK,button,1342242817
Control17=IDC_LIST3,SysListView32,1350631425
Control18=IDC_MONTHCALENDAR1,SysMonthCal32,1342242832
Control19=IDC_STATIC,static,1342308352
Control20=IDC_STATIC,static,1342177297
Control21=IDC_EDIT6,edit,1484849280
Control22=IDC_QUERYBOOK,button,1342242816
Control23=IDC_QUERYREADER,button,1342242816

[DLG:IDD_DIALOG_BORROWRECORD]
Type=1
Class=CBorrowRecord
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_LIST1,SysListView32,1350631425

[DLG:IDD_DIALOG_CANCELRENEWAL]
Type=1
Class=CCancelRenewal
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_BUTTON1,button,1342242816
Control4=IDC_LIST1,SysListView32,1350631425

[DLG:IDD_DIALOG_DELETEBOOK]
Type=1
Class=CDeleteBook
ControlCount=13
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_DELETE,button,1342242816
Control4=IDC_STATIC,static,1342308352
Control5=IDC_COMBO1,combobox,1344340226
Control6=IDC_COMBO2,combobox,1344340226
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_QUERY,button,1342242816
Control11=IDC_EDIT2,edit,1350631552
Control12=IDC_COMBO3,combobox,1344340226
Control13=IDC_LIST1,SysListView32,1350631425

[DLG:IDD_DIALOG_DELETEREADER]
Type=1
Class=CDeleteReader
ControlCount=10
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342177296
Control4=IDC_LIST2,SysListView32,1350631425
Control5=IDC_COMBO2,combobox,1344340226
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT1,edit,1350631552
Control8=IDC_STATIC,static,1342308352
Control9=IDC_DELETE,button,1342242816
Control10=IDC_QUERY,button,1342242816

[DLG:IDD_DIALOG_EXPORT]
Type=1
Class=CImport
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342177296
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT1,edit,1350631552
Control6=IDC_RADIO1,button,1342308361
Control7=IDC_RADIO2,button,1342177289
Control8=IDC_STATIC,button,1342177287

[DLG:IDD_DIALOG_INFO]
Type=1
Class=CINFO

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_LMS_FORM]
Type=1
Class=CLMSView
ControlCount=16
Control1=IDC_BORROWBOOK,button,1342242816
Control2=IDC_DELAY,button,1342242816
Control3=IDC_ADDNEWBOOK,button,1342242816
Control4=IDC_RETURNBOOK,button,1342242816
Control5=IDC_ADDNEWREADER,button,1342242816
Control6=IDC_DELETEBOOK,button,1342242816
Control7=IDC_DELETEREADER,button,1342242816
Control8=IDC_PUNISHMENT,button,1342242816
Control9=IDC_STATIC,button,1342177287
Control10=IDC_STATIC,button,1342177287
Control11=IDC_BookM,button,1342242816
Control12=IDC_PeopleM,button,1342242816
Control13=IDC_Exit,button,1342242816
Control14=IDC_BORROWREASON,button,1342242816
Control15=IDC_DATABASEM,button,1342242816
Control16=IDC_DEPTM,button,1342242816

[DLG:IDD_DIALOG_LOGIN]
Type=1
Class=CLOGIN
ControlCount=10
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_EDIT2,edit,1350631584
Control3=IDC_OK1,static,1342177550
Control4=IDC_CANCEL1,static,1342177550
Control5=IDC_STATIC,static,1342177294
Control6=IDC_STATIC1,static,1342308352
Control7=IDC_STATIC2,static,1342308352
Control8=IDC_STATIC3,static,1342308352
Control9=IDC_RADIO1,button,1342308361
Control10=IDC_RADIO2,button,1342177289

[DLG:IDD_DIALOG_MODIFYBOOK]
Type=1
Class=CModifyBook
ControlCount=34
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_ISBN,edit,1350631552
Control4=IDC_NAME,edit,1350631552
Control5=IDC_WRITER,edit,1350631552
Control6=IDC_PUBLISH,edit,1350631552
Control7=IDC_CONCENTS,edit,1350631552
Control8=IDC_PRICE,edit,1350631552
Control9=IDC_PLEACE,edit,1350631552
Control10=IDC_NUM,edit,1350631552
Control11=IDC_ONE,combobox,1344340226
Control12=IDC_TWO,combobox,1344340226
Control13=IDC_VERSION,edit,1350631552
Control14=IDC_TIME,edit,1350631552
Control15=IDC_REMARKS,edit,1350631556
Control16=IDC_STATIC,static,1342308352
Control17=IDC_STATIC,static,1342308352
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342308352
Control20=IDC_STATIC,static,1342308352
Control21=IDC_STATIC,static,1342308352
Control22=IDC_STATIC,static,1342308352
Control23=IDC_STATIC,static,1342308352
Control24=IDC_STATIC,static,1342308352
Control25=IDC_STATIC,static,1342308352
Control26=IDC_STATIC,static,1342308352
Control27=IDC_STATIC,static,1342308352
Control28=IDC_STATIC,static,1342308352
Control29=IDC_STATIC1,static,1342177298
Control30=IDC_STATIC,static,1342308352
Control31=IDC_OPEN,button,1342242816
Control32=IDC_STATIC,static,1342308352
Control33=IDC_STORE,edit,1350631552
Control34=IDC_CONFORM,button,1342242817

[DLG:IDD_DIALOG_MODIFYINFO]
Type=1
Class=CModifyInfo
ControlCount=32
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT1,edit,1484849280
Control8=IDC_EDIT2,edit,1484849280
Control9=IDC_COMBO1,combobox,1478557954
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352
Control12=IDC_EDIT3,edit,1350631552
Control13=IDC_EDIT4,edit,1350631552
Control14=IDC_STATIC,static,1342308352
Control15=IDC_STATIC,static,1342308352
Control16=IDC_EDIT5,edit,1350631552
Control17=IDC_STATIC,static,1342177296
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342308352
Control20=IDC_COMBO6,combobox,1478557954
Control21=IDC_STATIC,static,1342308352
Control22=IDC_STATIC,static,1342308352
Control23=IDC_EDIT7,edit,1350633600
Control24=IDC_STATIC,static,1342308352
Control25=IDC_EDIT8,edit,1350631556
Control26=IDC_STATICTag,static,1342308364
Control27=IDC_STATIC,static,1342308352
Control28=IDC_COMBO4,combobox,1478557954
Control29=IDC_COMBO5,combobox,1478557954
Control30=IDC_COMBO2,combobox,1344340226
Control31=IDC_MODIFYPWD,button,1342242817
Control32=IDC_EDIT9,edit,1350631552

[DLG:IDD_DIALOG_MODIFYPASSWORD]
Type=1
Class=CModifyPassword
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT1,edit,1350631584
Control7=IDC_EDIT2,edit,1350631584
Control8=IDC_EDIT6,edit,1350631584

[DLG:IDD_DIALOG_NEWBOOK]
Type=1
Class=CNewBook
ControlCount=32
Control1=IDC_ISBN,edit,1350631552
Control2=IDC_NAME,edit,1350631552
Control3=IDC_WRITER,edit,1350631552
Control4=IDC_PUBLISH,edit,1350631552
Control5=IDC_CONCENTS,edit,1350631552
Control6=IDC_PRICE,edit,1350631552
Control7=IDC_PLEACE,edit,1350631552
Control8=IDC_NUM,edit,1350631552
Control9=IDC_ONE,combobox,1344340226
Control10=IDC_TWO,combobox,1344340226
Control11=IDC_VERSION,edit,1350631552
Control12=IDC_TIME,edit,1350631552
Control13=IDC_REMARKS,edit,1350631556
Control14=IDOK,button,1342242817
Control15=IDCANCEL,button,1342242816
Control16=IDC_STATIC,static,1342308352
Control17=IDC_STATIC,static,1342308352
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342308352
Control20=IDC_STATIC,static,1342308352
Control21=IDC_STATIC,static,1342308352
Control22=IDC_STATIC,static,1342308352
Control23=IDC_STATIC,static,1342308352
Control24=IDC_STATIC,static,1342308352
Control25=IDC_STATIC,static,1342308352
Control26=IDC_STATIC,static,1342308352
Control27=IDC_STATIC,static,1342177296
Control28=IDC_STATIC,static,1342308352
Control29=IDC_STATIC,static,1342308352
Control30=IDC_STATIC1,static,1342177298
Control31=IDC_STATIC,static,1342308352
Control32=IDC_OPEN,button,1342242816

[DLG:IDD_DIALOG_NEWREADER]
Type=1
Class=CNewReader
ControlCount=29
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_EDIT2,edit,1350631552
Control3=IDC_COMBO2,combobox,1344340226
Control4=IDC_EDIT3,edit,1350631552
Control5=IDC_COMBO7,combobox,1344340226
Control6=IDC_EDIT4,edit,1350631552
Control7=IDC_EDIT5,edit,1350631552
Control8=IDC_DATETIMEPICKER1,SysDateTimePick32,1342242848
Control9=IDC_COMBO4,combobox,1344340226
Control10=IDC_COMBO5,combobox,1344340226
Control11=IDC_COMBO6,combobox,1344340226
Control12=IDC_EDIT8,edit,1350631556
Control13=IDOK,button,1342242817
Control14=IDCANCEL,button,1342242816
Control15=IDC_STATIC,static,1342308352
Control16=IDC_STATIC,static,1342308352
Control17=IDC_STATIC,static,1342308352
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342308352
Control20=IDC_STATIC,static,1342308352
Control21=IDC_STATIC,static,1342308352
Control22=IDC_STATIC,static,1342308352
Control23=IDC_STATIC,static,1342308352
Control24=IDC_STATIC,static,1342308352
Control25=IDC_STATIC,static,1342308352
Control26=IDC_STATIC,static,1342308352
Control27=IDC_EDIT7,edit,1350633600
Control28=IDC_STATIC,static,1342308352
Control29=IDC_STATIC,static,1342177296

[DLG:IDD_DIALOG_PUNISHMENT]
Type=1
Class=CPunishment
ControlCount=21
Control1=IDCANCEL,button,1342242816
Control2=IDC_IDNO,edit,1350631552
Control3=IDC_STATIC,static,1342308352
Control4=IDC_CHECK1,button,1342373891
Control5=IDC_STATIC,button,1342177287
Control6=IDC_STATIC,static,1342308352
Control7=IDC_FEE,edit,1350631552
Control8=IDC_CHECK2,button,1476460547
Control9=IDC_CHECK3,button,1342242819
Control10=IDC_CHECK4,button,1342242819
Control11=IDC_STATIC,static,1342308352
Control12=IDC_OTHER,edit,1350631556
Control13=IDC_LIST2,SysListView32,1350631425
Control14=IDC_BUTTON1,button,1342242816
Control15=IDC_STATIC,static,1342308352
Control16=IDC_EDIT2,edit,1350633600
Control17=IDC_EDIT3,edit,1350633600
Control18=IDC_STATIC,static,1342308352
Control19=IDC_BUTTON2,button,1342242816
Control20=IDC_STATIC,static,1342308352
Control21=IDC_STATIC,static,1342308352

[DLG:IDD_DIALOG_PUNISHRECORD]
Type=1
Class=CPunishRecord
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_LIST1,SysListView32,1350631425

[DLG:IDD_DIALOG_QUERY]
Type=1
Class=CQUERYBOOK
ControlCount=14
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_COMBO1,combobox,1344340226
Control5=IDC_COMBO2,combobox,1344340226
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_BUTTON1,button,1342242816
Control10=IDC_EDIT2,edit,1350631552
Control11=IDC_COMBO3,combobox,1344340226
Control12=IDC_LIST1,SysListView32,1350631425
Control13=IDC_STATIC,static,1342177296
Control14=IDC_RENEWAL,button,1342242816

[DLG:IDD_QUERYREADERREASON]
Type=1
Class=CQueryReaderDlg
ControlCount=16
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_COMBO1,combobox,1344340226
Control4=IDC_COMBO8,combobox,1344340226
Control5=IDC_EDIT1,edit,1350631552
Control6=IDC_ADDTO,button,1342242816
Control7=IDC_LIST1,listbox,1352728833
Control8=IDC_ADDNEW,button,1342242816
Control9=IDC_DELETE,button,1342242816
Control10=IDC_RADIO1,button,1342308361
Control11=IDC_RADIO2,button,1342177289
Control12=IDC_STATIC,button,1342177287
Control13=IDC_STATIC,button,1342177287
Control14=IDC_STATIC,static,1342177280
Control15=IDC_STATIC,static,1342308352
Control16=IDC_STATIC,static,1342308352

[DLG:IDD_DIALOG_QUERYREADER]
Type=1
Class=CQUERYREASON
ControlCount=17
Control1=IDC_COMBO1,combobox,1344340226
Control2=IDC_COMBO8,combobox,1344340226
Control3=IDC_EDIT1,edit,1350631552
Control4=IDC_ADDTO,button,1342242816
Control5=IDC_LIST1,listbox,1352728833
Control6=IDC_ADDNEW,button,1342242816
Control7=IDC_DELETE,button,1342242816
Control8=IDOK,button,1342242817
Control9=IDCANCEL,button,1342242816
Control10=IDC_RADIO1,button,1342308361
Control11=IDC_RADIO2,button,1342177289
Control12=IDC_STATIC,static,1342177296
Control13=IDC_STATIC,button,1342177287
Control14=IDC_STATIC,button,1342177287
Control15=IDC_STATIC,static,1342177280
Control16=IDC_STATIC,static,1342308352
Control17=IDC_STATIC,static,1342308352

[DLG:IDD_DIALOG_RADER]
Type=1
Class=CRADERM
ControlCount=16
Control1=IDC_ADDREADER,button,1342242816
Control2=IDC_MODIFY,button,1342242816
Control3=IDC_DELETE,button,1342242816
Control4=IDC_PRINT,button,1342242816
Control5=IDC_EXPORT,button,1342242816
Control6=IDC_CLOSE,button,1342242816
Control7=IDOK,button,1342242817
Control8=IDCANCEL,button,1342242816
Control9=IDC_STATIC,static,1342177297
Control10=IDC_STATIC,static,1342177296
Control11=IDC_STATIC,static,1342308352
Control12=IDC_LIST1,SysListView32,1350631425
Control13=IDC_QUERY,button,1342242816
Control14=IDC_COMBO1,combobox,1344340226
Control15=IDC_STATIC,static,1342308352
Control16=IDC_EDIT1,edit,1350631552

[DLG:IDD_DIALOG_USER]
Type=1
Class=CUserDlg
ControlCount=8
Control1=IDC_PERSONINFO,button,1342275584
Control2=IDC_BOOKQUERY,button,1342242816
Control3=IDC_BOOK_BOOK,button,1342242816
Control4=IDC_PUNISHMENTRECORD,button,1342242816
Control5=IDC_BORROWRECORD,button,1342242816
Control6=IDC_Exit,button,1342242816
Control7=IDC_STATIC,static,1342308352
Control8=IDC_CANCELRENEWAL,button,1342242816

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[MNU:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
CommandCount=16

[MNU:IDR_MENU]
Type=1
Class=?
Command1=ID_MENUITEM32773
Command2=ID_MENUITEM32774
CommandCount=2

[MNU:IDR_MENUQUERY]
Type=1
Class=?
Command1=ID_QUERYREADERALL
Command2=ID_QUERYREASON
CommandCount=2

[MNU:IDR_MENUMANAGE]
Type=1
Class=?
Command1=ID_EXCELIMPORT
Command2=ID_ACCESSIMPORT
CommandCount=2

[ACL:IDR_MAINFRAME]
Type=1
Class=?
Command1=IDC_BORROWBOOK
Command2=IDC_DELAY
Command3=IDC_RETURNBOOK
Command4=IDC_ADDNEWBOOK
Command5=IDC_DELETEBOOK
Command6=IDC_ADDNEWREADER
Command7=IDC_DELETEREADER
Command8=IDC_PUNISHMENT
Command9=ID_EDIT_CUT
Command10=ID_EDIT_UNDO
CommandCount=10

[DLG:IDD_DIALOG_RENEWAL]
Type=1
Class=CDelayBook
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDC_EDIT1,edit,1350631552
Control3=IDC_STATIC,static,1342308352
Control4=IDC_QUERY,button,1342242816
Control5=IDC_LIST1,SysListView32,1350631425
Control6=IDC_CONFORM,button,1342242817

[DB:CDASD]
DB=1
DBType=ODBC
ColumnCount=3
Column1=[Did], 4, 4
Column2=[DeptNo], 12, 50
Column3=[DeptName], 12, 50

[DB:CDDFASDA]
DB=1
DBType=ODBC
ColumnCount=0

[CLS:CDelayBook]
Type=0
HeaderFile=DelayBook.h
ImplementationFile=DelayBook.cpp
BaseClass=CDialog
Filter=D
LastObject=CDelayBook
VirtualFilter=dWC

[DLG:IDD_DIALOG_MODIFYREADER]
Type=1
Class=CMdifyReader
ControlCount=29
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_EDIT3,edit,1350631552
Control10=IDC_EDIT4,edit,1350631552
Control11=IDC_STATIC,static,1342308352
Control12=IDC_STATIC,static,1342308352
Control13=IDC_EDIT5,edit,1350631552
Control14=IDC_STATIC,static,1342308352
Control15=IDC_STATIC,static,1342308352
Control16=IDC_STATIC,static,1342308352
Control17=IDC_STATIC,static,1342308352
Control18=IDC_EDIT8,edit,1350631556
Control19=IDC_COMBO2,combobox,1344340226
Control20=IDC_COMBO1,combobox,1344340226
Control21=IDC_EDIT1,edit,1350631552
Control22=IDC_EDIT2,edit,1350631552
Control23=IDC_STATIC,static,1342308352
Control24=IDC_COMBO5,combobox,1344340226
Control25=IDC_COMBO6,combobox,1344340226
Control26=IDC_COMBO7,combobox,1344340226
Control27=IDC_EDIT6,edit,1350633600
Control28=IDC_CONFORM,button,1342242817
Control29=IDC_DATETIMEPICKER1,SysDateTimePick32,1342242848

[CLS:CMdifyReader]
Type=0
HeaderFile=MdifyReader.h
ImplementationFile=MdifyReader.cpp
BaseClass=CDialog
Filter=D
LastObject=CMdifyReader
VirtualFilter=dWC

[DLG:IDD_DIALOG_DEMPTMANAGE]
Type=1
Class=CDeptManage
ControlCount=13
Control1=IDOK,button,1342242817
Control2=IDC_TREE1,SysTreeView32,1350631431
Control3=IDC_EDIT1,edit,1350631552
Control4=IDC_STATIC,static,1342308352
Control5=IDC_BUTTON1,button,1342242816
Control6=IDC_DELETE,button,1342242816
Control7=IDC_LIST1,SysListView32,1350631425
Control8=IDC_ADD,button,1342242816
Control9=IDC_STATIC,button,1342177287
Control10=IDC_STATIC,button,1342177287
Control11=IDC_BUTTON2,button,1342242816
Control12=IDC_BUTTON3,button,1342242816
Control13=IDC_BUTTON4,button,1342242816

[CLS:CDeptManage]
Type=0
HeaderFile=DeptManage.h
ImplementationFile=DeptManage.cpp
BaseClass=CDialog
Filter=D
LastObject=CDeptManage
VirtualFilter=dWC

[CLS:CConfigManage]
Type=0
HeaderFile=ConfigManage.h
ImplementationFile=ConfigManage.cpp
BaseClass=CDialog
Filter=D
LastObject=CConfigManage
VirtualFilter=dWC

[DLG:IDD_DIALOG_BORROWMANAGE]
Type=1
Class=CConfigManage
ControlCount=15
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_LIST1,SysListView32,1350631425
Control4=IDC_MODIFY,button,1342242816
Control5=IDC_STATIC,static,1342177296
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT1,edit,1350633600
Control8=IDC_STATIC,static,1342308352
Control9=IDC_EDIT2,edit,1350631552
Control10=IDC_EDIT6,edit,1350631552
Control11=IDC_STATIC,static,1342308352
Control12=IDC_STATIC,static,1342308352
Control13=IDC_EDIT3,edit,1350631552
Control14=IDC_STATIC,static,1342308352
Control15=IDC_EDIT4,edit,1350631552

[DLG:IDD_DIALOG_DATABASEMANAGE]
Type=1
Class=CDatabaseManage
ControlCount=7
Control1=IDCANCEL,button,1342242817
Control2=IDC_ADD,button,1342242816
Control3=IDC_DATADIFFCOPY,button,1342242816
Control4=IDC_DATACOPY,button,1342242816
Control5=IDC_DATALOGCOPY,button,1342242816
Control6=IDC_BUTTON6,button,1342242816
Control7=IDC_STATIC,static,1342177296

[CLS:CDatabaseManage]
Type=0
HeaderFile=DatabaseManage.h
ImplementationFile=DatabaseManage.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_DATALOGCOPY
VirtualFilter=dWC

[CLS:CAdminManage]
Type=0
HeaderFile=AdminManage.h
ImplementationFile=AdminManage.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_DELETE
VirtualFilter=dWC

[DLG:IDD_DIALOG_ADMINMANAGE]
Type=1
Class=CAdminManage
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_LIST1,SysListView32,1350631425
Control4=IDC_DELETE,button,1342242817
Control5=IDC_ADDNEW,button,1342242817

[DLG:IDD_DIALOG_ADDNEWADMIN]
Type=1
Class=CAddAdmin
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT2,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_EDIT11,edit,1350633600

[CLS:CAddAdmin]
Type=0
HeaderFile=AddAdmin.h
ImplementationFile=AddAdmin.cpp
BaseClass=CDialog
Filter=D
LastObject=CAddAdmin
VirtualFilter=dWC

[DLG:IDD_DIALOG_BOOKBOOK]
Type=1
Class=CBookbook
ControlCount=22
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_LIST1,SysListView32,1350631425
Control6=IDC_BUTTON1,button,1342242816
Control7=IDC_BUTTON2,button,1342242816
Control8=IDC_BUTTON3,button,1342242816
Control9=IDC_LIST4,SysListView32,1350631425
Control10=IDC_STATIC,static,1342308352
Control11=IDC_EDIT2,edit,1350631552
Control12=IDC_BUTTON4,button,1342242816
Control13=IDC_LIST2,SysListView32,1350631425
Control14=IDC_STATIC,static,1342308352
Control15=IDC_EDIT3,edit,1350633600
Control16=IDC_STATIC,static,1342308352
Control17=IDC_EDIT4,edit,1350633600
Control18=IDC_STATIC,static,1342308352
Control19=IDC_EDIT5,edit,1350633600
Control20=IDC_STATIC,static,1342308352
Control21=IDC_EDIT10,edit,1350633600
Control22=IDC_BUTTON5,button,1342242816

[CLS:CBookbook]
Type=0
HeaderFile=Bookbook.h
ImplementationFile=Bookbook.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CBookbook

[DLG:IDD_DIALOG_RETURNBOOK]
Type=1
Class=CReturnBook
ControlCount=7
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_LIST1,SysListView32,1350631425
Control6=IDC_QUERY,button,1342242816
Control7=IDC_RETURN,button,1342242816

[CLS:CReturnBook]
Type=0
HeaderFile=ReturnBook.h
ImplementationFile=ReturnBook.cpp
BaseClass=CDialog
Filter=D
LastObject=CReturnBook
VirtualFilter=dWC

[DLG:IDD_DIALOG_DATABASEBACKUP]
Type=1
Class=CBackupName
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_STATIC,static,1342308352

[CLS:CBackupName]
Type=0
HeaderFile=BackupName.h
ImplementationFile=BackupName.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT1
VirtualFilter=dWC

[DLG:IDD_DIALOG_BOOKSORT]
Type=1
Class=CBookSort
ControlCount=7
Control1=IDOK,button,1342242817
Control2=IDC_TREE1,SysTreeView32,1350631431
Control3=IDC_STATIC,static,1342308352
Control4=IDC_BUTTON1,button,1342242816
Control5=IDC_BUTTON2,button,1342242816
Control6=IDC_EDIT1,edit,1350631552
Control7=IDC_EDIT,button,1342242816

[CLS:CBookSort]
Type=0
HeaderFile=BookSort.h
ImplementationFile=BookSort.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_BUTTON2
VirtualFilter=dWC

[DLG:IDD_DIALOG_NINDEX]
Type=1
Class=CNindex
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,button,1342177287
Control4=IDC_RADIO1,button,1342308361
Control5=IDC_RADIO2,button,1342177289

[CLS:CNindex]
Type=0
HeaderFile=Nindex.h
ImplementationFile=Nindex.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_RADIO1
VirtualFilter=dWC

[MNU:IDR_MENURCLICK]
Type=1
Class=?
Command1=ID_DELETE
Command2=ID_MODIFY
CommandCount=2

[CLS:CClassModify]
Type=0
HeaderFile=ClassModify.h
ImplementationFile=ClassModify.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT1
VirtualFilter=dWC

[DLG:IDD_DIALOG_CLASSMODIFY]
Type=1
Class=CClassModify
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT1,edit,1350631552
Control6=IDC_EDIT2,edit,1350631552

[DLG:IDD_DIALOG_Look]
Type=1
Class=CBookLook
ControlCount=31
Control1=IDOK,button,1342242817
Control2=IDC_ISBN,edit,1350633600
Control3=IDC_NAME,edit,1350633600
Control4=IDC_WRITER,edit,1350633600
Control5=IDC_PUBLISH,edit,1350633600
Control6=IDC_CONCENTS,edit,1350633600
Control7=IDC_PRICE,edit,1350633600
Control8=IDC_PLEACE,edit,1350633600
Control9=IDC_NUM,edit,1350633600
Control10=IDC_ONE,combobox,1478557954
Control11=IDC_TWO,combobox,1478557954
Control12=IDC_VERSION,edit,1350633600
Control13=IDC_TIME,edit,1350633600
Control14=IDC_REMARKS,edit,1350633604
Control15=IDC_STATIC,static,1342308352
Control16=IDC_STATIC,static,1342308352
Control17=IDC_STATIC,static,1342308352
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342308352
Control20=IDC_STATIC,static,1342308352
Control21=IDC_STATIC,static,1342308352
Control22=IDC_STATIC,static,1342308352
Control23=IDC_STATIC,static,1342308352
Control24=IDC_STATIC,static,1342308352
Control25=IDC_STATIC,static,1342308352
Control26=IDC_STATIC,static,1342308352
Control27=IDC_STATIC,static,1342308352
Control28=IDC_STATIC1,static,1342177298
Control29=IDC_STATIC,static,1342308352
Control30=IDC_STATIC,static,1342308352
Control31=IDC_STORE,edit,1350633600

[CLS:CBookLook]
Type=0
HeaderFile=BookLook.h
ImplementationFile=BookLook.cpp
BaseClass=CDialog
Filter=D
LastObject=CBookLook
VirtualFilter=dWC

