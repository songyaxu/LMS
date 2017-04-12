// Machine generated IDispatch wrapper class(es) created with ClassWizard
/////////////////////////////////////////////////////////////////////////////
// _Collection wrapper class

class _Collection : public COleDispatchDriver
{
public:
	_Collection() {}		// Calls COleDispatchDriver default constructor
	_Collection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Collection(const _Collection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Refresh();
};
/////////////////////////////////////////////////////////////////////////////
// _DynaCollection wrapper class

class _DynaCollection : public COleDispatchDriver
{
public:
	_DynaCollection() {}		// Calls COleDispatchDriver default constructor
	_DynaCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_DynaCollection(const _DynaCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Refresh();
	void Append(LPDISPATCH Object);
	void Delete(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// _ADO wrapper class

class _ADO : public COleDispatchDriver
{
public:
	_ADO() {}		// Calls COleDispatchDriver default constructor
	_ADO(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_ADO(const _ADO& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
};
/////////////////////////////////////////////////////////////////////////////
// Properties wrapper class

class Properties : public COleDispatchDriver
{
public:
	Properties() {}		// Calls COleDispatchDriver default constructor
	Properties(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Properties(const Properties& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Refresh();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// Property wrapper class

class Property : public COleDispatchDriver
{
public:
	Property() {}		// Calls COleDispatchDriver default constructor
	Property(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Property(const Property& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	CString GetName();
	long GetType();
	long GetAttributes();
	void SetAttributes(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Error wrapper class

class Error : public COleDispatchDriver
{
public:
	Error() {}		// Calls COleDispatchDriver default constructor
	Error(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Error(const Error& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetNumber();
	CString GetSource();
	CString GetDescription();
	CString GetHelpFile();
	long GetHelpContext();
	CString GetSQLState();
	long GetNativeError();
};
/////////////////////////////////////////////////////////////////////////////
// Errors wrapper class

class Errors : public COleDispatchDriver
{
public:
	Errors() {}		// Calls COleDispatchDriver default constructor
	Errors(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Errors(const Errors& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Refresh();
	LPDISPATCH GetItem(const VARIANT& Index);
	void Clear();
};
/////////////////////////////////////////////////////////////////////////////
// Command15 wrapper class

class Command15 : public COleDispatchDriver
{
public:
	Command15() {}		// Calls COleDispatchDriver default constructor
	Command15(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Command15(const Command15& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	LPDISPATCH GetActiveConnection();
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	CString GetCommandText();
	void SetCommandText(LPCTSTR lpszNewValue);
	long GetCommandTimeout();
	void SetCommandTimeout(long nNewValue);
	BOOL GetPrepared();
	void SetPrepared(BOOL bNewValue);
	LPDISPATCH Execute(VARIANT* RecordsAffected, VARIANT* Parameters, long Options);
	LPDISPATCH CreateParameter(LPCTSTR Name, long Type, long Direction, long Size, const VARIANT& Value);
	LPDISPATCH GetParameters();
	void SetCommandType(long nNewValue);
	long GetCommandType();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// _Connection wrapper class

class _Connection : public COleDispatchDriver
{
public:
	_Connection() {}		// Calls COleDispatchDriver default constructor
	_Connection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Connection(const _Connection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	CString GetConnectionString();
	void SetConnectionString(LPCTSTR lpszNewValue);
	long GetCommandTimeout();
	void SetCommandTimeout(long nNewValue);
	long GetConnectionTimeout();
	void SetConnectionTimeout(long nNewValue);
	CString GetVersion();
	void Close();
	LPDISPATCH Execute(LPCTSTR CommandText, VARIANT* RecordsAffected, long Options);
	long BeginTrans();
	void CommitTrans();
	void RollbackTrans();
	void Open(LPCTSTR ConnectionString, LPCTSTR UserID, LPCTSTR Password, long Options);
	LPDISPATCH GetErrors();
	CString GetDefaultDatabase();
	void SetDefaultDatabase(LPCTSTR lpszNewValue);
	long GetIsolationLevel();
	void SetIsolationLevel(long nNewValue);
	long GetAttributes();
	void SetAttributes(long nNewValue);
	long GetCursorLocation();
	void SetCursorLocation(long nNewValue);
	long GetMode();
	void SetMode(long nNewValue);
	CString GetProvider();
	void SetProvider(LPCTSTR lpszNewValue);
	long GetState();
	LPDISPATCH OpenSchema(long Schema, const VARIANT& Restrictions, const VARIANT& SchemaID);
	void Cancel();
};
/////////////////////////////////////////////////////////////////////////////
// Connection15 wrapper class

class Connection15 : public COleDispatchDriver
{
public:
	Connection15() {}		// Calls COleDispatchDriver default constructor
	Connection15(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Connection15(const Connection15& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	CString GetConnectionString();
	void SetConnectionString(LPCTSTR lpszNewValue);
	long GetCommandTimeout();
	void SetCommandTimeout(long nNewValue);
	long GetConnectionTimeout();
	void SetConnectionTimeout(long nNewValue);
	CString GetVersion();
	void Close();
	LPDISPATCH Execute(LPCTSTR CommandText, VARIANT* RecordsAffected, long Options);
	long BeginTrans();
	void CommitTrans();
	void RollbackTrans();
	void Open(LPCTSTR ConnectionString, LPCTSTR UserID, LPCTSTR Password, long Options);
	LPDISPATCH GetErrors();
	CString GetDefaultDatabase();
	void SetDefaultDatabase(LPCTSTR lpszNewValue);
	long GetIsolationLevel();
	void SetIsolationLevel(long nNewValue);
	long GetAttributes();
	void SetAttributes(long nNewValue);
	long GetCursorLocation();
	void SetCursorLocation(long nNewValue);
	long GetMode();
	void SetMode(long nNewValue);
	CString GetProvider();
	void SetProvider(LPCTSTR lpszNewValue);
	long GetState();
	LPDISPATCH OpenSchema(long Schema, const VARIANT& Restrictions, const VARIANT& SchemaID);
};
/////////////////////////////////////////////////////////////////////////////
// _Recordset wrapper class

class _Recordset : public COleDispatchDriver
{
public:
	_Recordset() {}		// Calls COleDispatchDriver default constructor
	_Recordset(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Recordset(const _Recordset& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetAbsolutePosition();
	void SetAbsolutePosition(long nNewValue);
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	VARIANT GetActiveConnection();
	BOOL GetBof();
	VARIANT GetBookmark();
	void SetBookmark(const VARIANT& newValue);
	long GetCacheSize();
	void SetCacheSize(long nNewValue);
	long GetCursorType();
	void SetCursorType(long nNewValue);
	BOOL GetEof();
	LPDISPATCH GetFields();
	long GetLockType();
	void SetLockType(long nNewValue);
	long GetMaxRecords();
	void SetMaxRecords(long nNewValue);
	long GetRecordCount();
	void SetRefSource(LPDISPATCH newValue);
	void SetSource(LPCTSTR lpszNewValue);
	VARIANT GetSource();
	void AddNew(const VARIANT& FieldList, const VARIANT& Values);
	void CancelUpdate();
	void Close();
	void Delete(long AffectRecords);
	VARIANT GetRows(long Rows, const VARIANT& Start, const VARIANT& Fields);
	void Move(long NumRecords, const VARIANT& Start);
	void MoveNext();
	void MovePrevious();
	void MoveFirst();
	void MoveLast();
	void Open(const VARIANT& Source, const VARIANT& ActiveConnection, long CursorType, long LockType, long Options);
	void Requery(long Options);
	void Update(const VARIANT& Fields, const VARIANT& Values);
	long GetAbsolutePage();
	void SetAbsolutePage(long nNewValue);
	long GetEditMode();
	VARIANT GetFilter();
	void SetFilter(const VARIANT& newValue);
	long GetPageCount();
	long GetPageSize();
	void SetPageSize(long nNewValue);
	CString GetSort();
	void SetSort(LPCTSTR lpszNewValue);
	long GetStatus();
	long GetState();
	void UpdateBatch(long AffectRecords);
	void CancelBatch(long AffectRecords);
	long GetCursorLocation();
	void SetCursorLocation(long nNewValue);
	LPDISPATCH NextRecordset(VARIANT* RecordsAffected);
	BOOL Supports(long CursorOptions);
	long GetMarshalOptions();
	void SetMarshalOptions(long nNewValue);
	void Find(LPCTSTR Criteria, long SkipRecords, long SearchDirection, const VARIANT& Start);
	void Cancel();
	LPUNKNOWN GetDataSource();
	void SetRefDataSource(LPUNKNOWN newValue);
	LPDISPATCH GetActiveCommand();
	void SetStayInSync(BOOL bNewValue);
	BOOL GetStayInSync();
	CString GetString(long StringFormat, long NumRows, LPCTSTR ColumnDelimeter, LPCTSTR RowDelimeter, LPCTSTR NullExpr);
	CString GetDataMember();
	void SetDataMember(LPCTSTR lpszNewValue);
	long CompareBookmarks(const VARIANT& Bookmark1, const VARIANT& Bookmark2);
	LPDISPATCH Clone(long LockType);
	void Resync(long AffectRecords, long ResyncValues);
	void Seek(const VARIANT& KeyValues, long SeekOption);
	void SetIndex(LPCTSTR lpszNewValue);
	CString GetIndex();
	void Save(const VARIANT& Destination, long PersistFormat);
};
/////////////////////////////////////////////////////////////////////////////
// Recordset21 wrapper class

class Recordset21 : public COleDispatchDriver
{
public:
	Recordset21() {}		// Calls COleDispatchDriver default constructor
	Recordset21(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Recordset21(const Recordset21& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetAbsolutePosition();
	void SetAbsolutePosition(long nNewValue);
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	VARIANT GetActiveConnection();
	BOOL GetBof();
	VARIANT GetBookmark();
	void SetBookmark(const VARIANT& newValue);
	long GetCacheSize();
	void SetCacheSize(long nNewValue);
	long GetCursorType();
	void SetCursorType(long nNewValue);
	BOOL GetEof();
	LPDISPATCH GetFields();
	long GetLockType();
	void SetLockType(long nNewValue);
	long GetMaxRecords();
	void SetMaxRecords(long nNewValue);
	long GetRecordCount();
	void SetRefSource(LPDISPATCH newValue);
	void SetSource(LPCTSTR lpszNewValue);
	VARIANT GetSource();
	void AddNew(const VARIANT& FieldList, const VARIANT& Values);
	void CancelUpdate();
	void Close();
	void Delete(long AffectRecords);
	VARIANT GetRows(long Rows, const VARIANT& Start, const VARIANT& Fields);
	void Move(long NumRecords, const VARIANT& Start);
	void MoveNext();
	void MovePrevious();
	void MoveFirst();
	void MoveLast();
	void Open(const VARIANT& Source, const VARIANT& ActiveConnection, long CursorType, long LockType, long Options);
	void Requery(long Options);
	void Update(const VARIANT& Fields, const VARIANT& Values);
	long GetAbsolutePage();
	void SetAbsolutePage(long nNewValue);
	long GetEditMode();
	VARIANT GetFilter();
	void SetFilter(const VARIANT& newValue);
	long GetPageCount();
	long GetPageSize();
	void SetPageSize(long nNewValue);
	CString GetSort();
	void SetSort(LPCTSTR lpszNewValue);
	long GetStatus();
	long GetState();
	void UpdateBatch(long AffectRecords);
	void CancelBatch(long AffectRecords);
	long GetCursorLocation();
	void SetCursorLocation(long nNewValue);
	LPDISPATCH NextRecordset(VARIANT* RecordsAffected);
	BOOL Supports(long CursorOptions);
	long GetMarshalOptions();
	void SetMarshalOptions(long nNewValue);
	void Find(LPCTSTR Criteria, long SkipRecords, long SearchDirection, const VARIANT& Start);
	void Cancel();
	LPUNKNOWN GetDataSource();
	void SetRefDataSource(LPUNKNOWN newValue);
	LPDISPATCH GetActiveCommand();
	void SetStayInSync(BOOL bNewValue);
	BOOL GetStayInSync();
	CString GetString(long StringFormat, long NumRows, LPCTSTR ColumnDelimeter, LPCTSTR RowDelimeter, LPCTSTR NullExpr);
	CString GetDataMember();
	void SetDataMember(LPCTSTR lpszNewValue);
	long CompareBookmarks(const VARIANT& Bookmark1, const VARIANT& Bookmark2);
	LPDISPATCH Clone(long LockType);
	void Resync(long AffectRecords, long ResyncValues);
	void Seek(const VARIANT& KeyValues, long SeekOption);
	void SetIndex(LPCTSTR lpszNewValue);
	CString GetIndex();
};
/////////////////////////////////////////////////////////////////////////////
// Recordset20 wrapper class

class Recordset20 : public COleDispatchDriver
{
public:
	Recordset20() {}		// Calls COleDispatchDriver default constructor
	Recordset20(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Recordset20(const Recordset20& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetAbsolutePosition();
	void SetAbsolutePosition(long nNewValue);
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	VARIANT GetActiveConnection();
	BOOL GetBof();
	VARIANT GetBookmark();
	void SetBookmark(const VARIANT& newValue);
	long GetCacheSize();
	void SetCacheSize(long nNewValue);
	long GetCursorType();
	void SetCursorType(long nNewValue);
	BOOL GetEof();
	LPDISPATCH GetFields();
	long GetLockType();
	void SetLockType(long nNewValue);
	long GetMaxRecords();
	void SetMaxRecords(long nNewValue);
	long GetRecordCount();
	void SetRefSource(LPDISPATCH newValue);
	void SetSource(LPCTSTR lpszNewValue);
	VARIANT GetSource();
	void AddNew(const VARIANT& FieldList, const VARIANT& Values);
	void CancelUpdate();
	void Close();
	void Delete(long AffectRecords);
	VARIANT GetRows(long Rows, const VARIANT& Start, const VARIANT& Fields);
	void Move(long NumRecords, const VARIANT& Start);
	void MoveNext();
	void MovePrevious();
	void MoveFirst();
	void MoveLast();
	void Open(const VARIANT& Source, const VARIANT& ActiveConnection, long CursorType, long LockType, long Options);
	void Requery(long Options);
	void Update(const VARIANT& Fields, const VARIANT& Values);
	long GetAbsolutePage();
	void SetAbsolutePage(long nNewValue);
	long GetEditMode();
	VARIANT GetFilter();
	void SetFilter(const VARIANT& newValue);
	long GetPageCount();
	long GetPageSize();
	void SetPageSize(long nNewValue);
	CString GetSort();
	void SetSort(LPCTSTR lpszNewValue);
	long GetStatus();
	long GetState();
	void UpdateBatch(long AffectRecords);
	void CancelBatch(long AffectRecords);
	long GetCursorLocation();
	void SetCursorLocation(long nNewValue);
	LPDISPATCH NextRecordset(VARIANT* RecordsAffected);
	BOOL Supports(long CursorOptions);
	long GetMarshalOptions();
	void SetMarshalOptions(long nNewValue);
	void Find(LPCTSTR Criteria, long SkipRecords, long SearchDirection, const VARIANT& Start);
	void Cancel();
	LPUNKNOWN GetDataSource();
	void SetRefDataSource(LPUNKNOWN newValue);
	LPDISPATCH GetActiveCommand();
	void SetStayInSync(BOOL bNewValue);
	BOOL GetStayInSync();
	CString GetString(long StringFormat, long NumRows, LPCTSTR ColumnDelimeter, LPCTSTR RowDelimeter, LPCTSTR NullExpr);
	CString GetDataMember();
	void SetDataMember(LPCTSTR lpszNewValue);
	long CompareBookmarks(const VARIANT& Bookmark1, const VARIANT& Bookmark2);
	LPDISPATCH Clone(long LockType);
	void Resync(long AffectRecords, long ResyncValues);
};
/////////////////////////////////////////////////////////////////////////////
// Recordset15 wrapper class

class Recordset15 : public COleDispatchDriver
{
public:
	Recordset15() {}		// Calls COleDispatchDriver default constructor
	Recordset15(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Recordset15(const Recordset15& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetAbsolutePosition();
	void SetAbsolutePosition(long nNewValue);
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	VARIANT GetActiveConnection();
	BOOL GetBof();
	VARIANT GetBookmark();
	void SetBookmark(const VARIANT& newValue);
	long GetCacheSize();
	void SetCacheSize(long nNewValue);
	long GetCursorType();
	void SetCursorType(long nNewValue);
	BOOL GetEof();
	LPDISPATCH GetFields();
	long GetLockType();
	void SetLockType(long nNewValue);
	long GetMaxRecords();
	void SetMaxRecords(long nNewValue);
	long GetRecordCount();
	void SetRefSource(LPDISPATCH newValue);
	void SetSource(LPCTSTR lpszNewValue);
	VARIANT GetSource();
	void AddNew(const VARIANT& FieldList, const VARIANT& Values);
	void CancelUpdate();
	void Close();
	void Delete(long AffectRecords);
	VARIANT GetRows(long Rows, const VARIANT& Start, const VARIANT& Fields);
	void Move(long NumRecords, const VARIANT& Start);
	void MoveNext();
	void MovePrevious();
	void MoveFirst();
	void MoveLast();
	void Open(const VARIANT& Source, const VARIANT& ActiveConnection, long CursorType, long LockType, long Options);
	void Requery(long Options);
	void Update(const VARIANT& Fields, const VARIANT& Values);
	long GetAbsolutePage();
	void SetAbsolutePage(long nNewValue);
	long GetEditMode();
	VARIANT GetFilter();
	void SetFilter(const VARIANT& newValue);
	long GetPageCount();
	long GetPageSize();
	void SetPageSize(long nNewValue);
	CString GetSort();
	void SetSort(LPCTSTR lpszNewValue);
	long GetStatus();
	long GetState();
	void UpdateBatch(long AffectRecords);
	void CancelBatch(long AffectRecords);
	long GetCursorLocation();
	void SetCursorLocation(long nNewValue);
	LPDISPATCH NextRecordset(VARIANT* RecordsAffected);
	BOOL Supports(long CursorOptions);
	long GetMarshalOptions();
	void SetMarshalOptions(long nNewValue);
	void Find(LPCTSTR Criteria, long SkipRecords, long SearchDirection, const VARIANT& Start);
};
/////////////////////////////////////////////////////////////////////////////
// Fields wrapper class

class Fields : public COleDispatchDriver
{
public:
	Fields() {}		// Calls COleDispatchDriver default constructor
	Fields(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Fields(const Fields& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Refresh();
	LPDISPATCH GetItem(const VARIANT& Index);
	void Delete(const VARIANT& Index);
	void Append(LPCTSTR Name, long Type, long DefinedSize, long Attrib, const VARIANT& FieldValue);
	void Update();
	void Resync(long ResyncValues);
	void CancelUpdate();
};
/////////////////////////////////////////////////////////////////////////////
// Fields20 wrapper class

class Fields20 : public COleDispatchDriver
{
public:
	Fields20() {}		// Calls COleDispatchDriver default constructor
	Fields20(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Fields20(const Fields20& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Refresh();
	LPDISPATCH GetItem(const VARIANT& Index);
	void Delete(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// Fields15 wrapper class

class Fields15 : public COleDispatchDriver
{
public:
	Fields15() {}		// Calls COleDispatchDriver default constructor
	Fields15(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Fields15(const Fields15& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Refresh();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// Field wrapper class

class Field : public COleDispatchDriver
{
public:
	Field() {}		// Calls COleDispatchDriver default constructor
	Field(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Field(const Field& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetActualSize();
	long GetAttributes();
	long GetDefinedSize();
	CString GetName();
	long GetType();
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	// method 'GetPrecision' not emitted because of invalid return type or parameter type
	// method 'GetNumericScale' not emitted because of invalid return type or parameter type
	void AppendChunk(const VARIANT& Data);
	VARIANT GetChunk(long Length);
	VARIANT GetOriginalValue();
	VARIANT GetUnderlyingValue();
	LPUNKNOWN GetDataFormat();
	void SetRefDataFormat(LPUNKNOWN newValue);
	// method 'SetPrecision' not emitted because of invalid return type or parameter type
	// method 'SetNumericScale' not emitted because of invalid return type or parameter type
	void SetType(long nNewValue);
	void SetDefinedSize(long nNewValue);
	void SetAttributes(long nNewValue);
	long GetStatus();
};
/////////////////////////////////////////////////////////////////////////////
// Field20 wrapper class

class Field20 : public COleDispatchDriver
{
public:
	Field20() {}		// Calls COleDispatchDriver default constructor
	Field20(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Field20(const Field20& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetActualSize();
	long GetAttributes();
	long GetDefinedSize();
	CString GetName();
	long GetType();
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	// method 'GetPrecision' not emitted because of invalid return type or parameter type
	// method 'GetNumericScale' not emitted because of invalid return type or parameter type
	void AppendChunk(const VARIANT& Data);
	VARIANT GetChunk(long Length);
	VARIANT GetOriginalValue();
	VARIANT GetUnderlyingValue();
	LPUNKNOWN GetDataFormat();
	void SetRefDataFormat(LPUNKNOWN newValue);
	// method 'SetPrecision' not emitted because of invalid return type or parameter type
	// method 'SetNumericScale' not emitted because of invalid return type or parameter type
	void SetType(long nNewValue);
	void SetDefinedSize(long nNewValue);
	void SetAttributes(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// _Parameter wrapper class

class _Parameter : public COleDispatchDriver
{
public:
	_Parameter() {}		// Calls COleDispatchDriver default constructor
	_Parameter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Parameter(const _Parameter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	long GetType();
	void SetType(long nNewValue);
	void SetDirection(long nNewValue);
	long GetDirection();
	// method 'SetPrecision' not emitted because of invalid return type or parameter type
	// method 'GetPrecision' not emitted because of invalid return type or parameter type
	// method 'SetNumericScale' not emitted because of invalid return type or parameter type
	// method 'GetNumericScale' not emitted because of invalid return type or parameter type
	void SetSize(long nNewValue);
	long GetSize();
	void AppendChunk(const VARIANT& Val);
	long GetAttributes();
	void SetAttributes(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Parameters wrapper class

class Parameters : public COleDispatchDriver
{
public:
	Parameters() {}		// Calls COleDispatchDriver default constructor
	Parameters(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Parameters(const Parameters& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Refresh();
	void Append(LPDISPATCH Object);
	void Delete(const VARIANT& Index);
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// Command25 wrapper class

class Command25 : public COleDispatchDriver
{
public:
	Command25() {}		// Calls COleDispatchDriver default constructor
	Command25(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Command25(const Command25& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	LPDISPATCH GetActiveConnection();
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	CString GetCommandText();
	void SetCommandText(LPCTSTR lpszNewValue);
	long GetCommandTimeout();
	void SetCommandTimeout(long nNewValue);
	BOOL GetPrepared();
	void SetPrepared(BOOL bNewValue);
	LPDISPATCH Execute(VARIANT* RecordsAffected, VARIANT* Parameters, long Options);
	LPDISPATCH CreateParameter(LPCTSTR Name, long Type, long Direction, long Size, const VARIANT& Value);
	LPDISPATCH GetParameters();
	void SetCommandType(long nNewValue);
	long GetCommandType();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetState();
	void Cancel();
};
/////////////////////////////////////////////////////////////////////////////
// _Command wrapper class

class _Command : public COleDispatchDriver
{
public:
	_Command() {}		// Calls COleDispatchDriver default constructor
	_Command(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Command(const _Command& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	LPDISPATCH GetActiveConnection();
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	CString GetCommandText();
	void SetCommandText(LPCTSTR lpszNewValue);
	long GetCommandTimeout();
	void SetCommandTimeout(long nNewValue);
	BOOL GetPrepared();
	void SetPrepared(BOOL bNewValue);
	LPDISPATCH Execute(VARIANT* RecordsAffected, VARIANT* Parameters, long Options);
	LPDISPATCH CreateParameter(LPCTSTR Name, long Type, long Direction, long Size, const VARIANT& Value);
	LPDISPATCH GetParameters();
	void SetCommandType(long nNewValue);
	long GetCommandType();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetState();
	void Cancel();
	void SetRefCommandStream(LPUNKNOWN newValue);
	VARIANT GetCommandStream();
	void SetDialect(LPCTSTR lpszNewValue);
	CString GetDialect();
	void SetNamedParameters(BOOL bNewValue);
	BOOL GetNamedParameters();
};
/////////////////////////////////////////////////////////////////////////////
// ConnectionEvents wrapper class

class ConnectionEvents : public COleDispatchDriver
{
public:
	ConnectionEvents() {}		// Calls COleDispatchDriver default constructor
	ConnectionEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ConnectionEvents(const ConnectionEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	// method 'InfoMessage' not emitted because of invalid return type or parameter type
	// method 'BeginTransComplete' not emitted because of invalid return type or parameter type
	// method 'CommitTransComplete' not emitted because of invalid return type or parameter type
	// method 'RollbackTransComplete' not emitted because of invalid return type or parameter type
	// method 'WillExecute' not emitted because of invalid return type or parameter type
	// method 'ExecuteComplete' not emitted because of invalid return type or parameter type
	// method 'WillConnect' not emitted because of invalid return type or parameter type
	// method 'ConnectComplete' not emitted because of invalid return type or parameter type
	// method 'Disconnect' not emitted because of invalid return type or parameter type
};
/////////////////////////////////////////////////////////////////////////////
// RecordsetEvents wrapper class

class RecordsetEvents : public COleDispatchDriver
{
public:
	RecordsetEvents() {}		// Calls COleDispatchDriver default constructor
	RecordsetEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	RecordsetEvents(const RecordsetEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	// method 'WillChangeField' not emitted because of invalid return type or parameter type
	// method 'FieldChangeComplete' not emitted because of invalid return type or parameter type
	// method 'WillChangeRecord' not emitted because of invalid return type or parameter type
	// method 'RecordChangeComplete' not emitted because of invalid return type or parameter type
	// method 'WillChangeRecordset' not emitted because of invalid return type or parameter type
	// method 'RecordsetChangeComplete' not emitted because of invalid return type or parameter type
	// method 'WillMove' not emitted because of invalid return type or parameter type
	// method 'MoveComplete' not emitted because of invalid return type or parameter type
	// method 'EndOfRecordset' not emitted because of invalid return type or parameter type
	// method 'FetchProgress' not emitted because of invalid return type or parameter type
	// method 'FetchComplete' not emitted because of invalid return type or parameter type
};
/////////////////////////////////////////////////////////////////////////////
// _Record wrapper class

class _Record : public COleDispatchDriver
{
public:
	_Record() {}		// Calls COleDispatchDriver default constructor
	_Record(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Record(const _Record& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	VARIANT GetActiveConnection();
	void SetActiveConnection(LPCTSTR lpszNewValue);
	void SetRefActiveConnection(LPDISPATCH newValue);
	long GetState();
	VARIANT GetSource();
	void SetSource(LPCTSTR lpszNewValue);
	void SetRefSource(LPDISPATCH newValue);
	long GetMode();
	void SetMode(long nNewValue);
	CString GetParentURL();
	CString MoveRecord(LPCTSTR Source, LPCTSTR Destination, LPCTSTR UserName, LPCTSTR Password, long Options, BOOL Async);
	CString CopyRecord(LPCTSTR Source, LPCTSTR Destination, LPCTSTR UserName, LPCTSTR Password, long Options, BOOL Async);
	void DeleteRecord(LPCTSTR Source, BOOL Async);
	void Open(const VARIANT& Source, const VARIANT& ActiveConnection, long Mode, long CreateOptions, long Options, LPCTSTR UserName, LPCTSTR Password);
	void Close();
	LPDISPATCH GetFields();
	long GetRecordType();
	LPDISPATCH GetChildren();
	void Cancel();
};
/////////////////////////////////////////////////////////////////////////////
// _Stream wrapper class

class _Stream : public COleDispatchDriver
{
public:
	_Stream() {}		// Calls COleDispatchDriver default constructor
	_Stream(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Stream(const _Stream& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetSize();
	BOOL GetEos();
	long GetPosition();
	void SetPosition(long nNewValue);
	long GetType();
	void SetType(long nNewValue);
	long GetLineSeparator();
	void SetLineSeparator(long nNewValue);
	long GetState();
	long GetMode();
	void SetMode(long nNewValue);
	CString GetCharset();
	void SetCharset(LPCTSTR lpszNewValue);
	VARIANT Read(long NumBytes);
	void Open(const VARIANT& Source, long Mode, long Options, LPCTSTR UserName, LPCTSTR Password);
	void Close();
	void SkipLine();
	void Write(const VARIANT& Buffer);
	void SetEOS();
	void CopyTo(LPDISPATCH DestStream, long CharNumber);
	void Flush();
	void SaveToFile(LPCTSTR FileName, long Options);
	void LoadFromFile(LPCTSTR FileName);
	CString ReadText(long NumChars);
	void WriteText(LPCTSTR Data, long Options);
	void Cancel();
};
/////////////////////////////////////////////////////////////////////////////
// Field15 wrapper class

class Field15 : public COleDispatchDriver
{
public:
	Field15() {}		// Calls COleDispatchDriver default constructor
	Field15(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Field15(const Field15& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetActualSize();
	long GetAttributes();
	long GetDefinedSize();
	CString GetName();
	long GetType();
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	// method 'GetPrecision' not emitted because of invalid return type or parameter type
	// method 'GetNumericScale' not emitted because of invalid return type or parameter type
	void AppendChunk(const VARIANT& Data);
	VARIANT GetChunk(long Length);
	VARIANT GetOriginalValue();
	VARIANT GetUnderlyingValue();
};
/////////////////////////////////////////////////////////////////////////////
// _Connection_Deprecated wrapper class

class _Connection_Deprecated : public COleDispatchDriver
{
public:
	_Connection_Deprecated() {}		// Calls COleDispatchDriver default constructor
	_Connection_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Connection_Deprecated(const _Connection_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	CString GetConnectionString();
	void SetConnectionString(LPCTSTR lpszNewValue);
	long GetCommandTimeout();
	void SetCommandTimeout(long nNewValue);
	long GetConnectionTimeout();
	void SetConnectionTimeout(long nNewValue);
	CString GetVersion();
	void Close();
	LPDISPATCH Execute(LPCTSTR CommandText, VARIANT* RecordsAffected, long Options);
	long BeginTrans();
	void CommitTrans();
	void RollbackTrans();
	void Open(LPCTSTR ConnectionString, LPCTSTR UserID, LPCTSTR Password, long Options);
	LPDISPATCH GetErrors();
	CString GetDefaultDatabase();
	void SetDefaultDatabase(LPCTSTR lpszNewValue);
	long GetIsolationLevel();
	void SetIsolationLevel(long nNewValue);
	long GetAttributes();
	void SetAttributes(long nNewValue);
	long GetCursorLocation();
	void SetCursorLocation(long nNewValue);
	long GetMode();
	void SetMode(long nNewValue);
	CString GetProvider();
	void SetProvider(LPCTSTR lpszNewValue);
	long GetState();
	LPDISPATCH OpenSchema(long Schema, const VARIANT& Restrictions, const VARIANT& SchemaID);
	void Cancel();
};
/////////////////////////////////////////////////////////////////////////////
// Connection15_Deprecated wrapper class

class Connection15_Deprecated : public COleDispatchDriver
{
public:
	Connection15_Deprecated() {}		// Calls COleDispatchDriver default constructor
	Connection15_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Connection15_Deprecated(const Connection15_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	CString GetConnectionString();
	void SetConnectionString(LPCTSTR lpszNewValue);
	long GetCommandTimeout();
	void SetCommandTimeout(long nNewValue);
	long GetConnectionTimeout();
	void SetConnectionTimeout(long nNewValue);
	CString GetVersion();
	void Close();
	LPDISPATCH Execute(LPCTSTR CommandText, VARIANT* RecordsAffected, long Options);
	long BeginTrans();
	void CommitTrans();
	void RollbackTrans();
	void Open(LPCTSTR ConnectionString, LPCTSTR UserID, LPCTSTR Password, long Options);
	LPDISPATCH GetErrors();
	CString GetDefaultDatabase();
	void SetDefaultDatabase(LPCTSTR lpszNewValue);
	long GetIsolationLevel();
	void SetIsolationLevel(long nNewValue);
	long GetAttributes();
	void SetAttributes(long nNewValue);
	long GetCursorLocation();
	void SetCursorLocation(long nNewValue);
	long GetMode();
	void SetMode(long nNewValue);
	CString GetProvider();
	void SetProvider(LPCTSTR lpszNewValue);
	long GetState();
	LPDISPATCH OpenSchema(long Schema, const VARIANT& Restrictions, const VARIANT& SchemaID);
};
/////////////////////////////////////////////////////////////////////////////
// _Recordset_Deprecated wrapper class

class _Recordset_Deprecated : public COleDispatchDriver
{
public:
	_Recordset_Deprecated() {}		// Calls COleDispatchDriver default constructor
	_Recordset_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Recordset_Deprecated(const _Recordset_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetAbsolutePosition();
	void SetAbsolutePosition(long nNewValue);
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	VARIANT GetActiveConnection();
	BOOL GetBof();
	VARIANT GetBookmark();
	void SetBookmark(const VARIANT& newValue);
	long GetCacheSize();
	void SetCacheSize(long nNewValue);
	long GetCursorType();
	void SetCursorType(long nNewValue);
	BOOL GetEof();
	LPDISPATCH GetFields();
	long GetLockType();
	void SetLockType(long nNewValue);
	long GetMaxRecords();
	void SetMaxRecords(long nNewValue);
	long GetRecordCount();
	void SetRefSource(LPDISPATCH newValue);
	void SetSource(LPCTSTR lpszNewValue);
	VARIANT GetSource();
	void AddNew(const VARIANT& FieldList, const VARIANT& Values);
	void CancelUpdate();
	void Close();
	void Delete(long AffectRecords);
	VARIANT GetRows(long Rows, const VARIANT& Start, const VARIANT& Fields);
	void Move(long NumRecords, const VARIANT& Start);
	void MoveNext();
	void MovePrevious();
	void MoveFirst();
	void MoveLast();
	void Open(const VARIANT& Source, const VARIANT& ActiveConnection, long CursorType, long LockType, long Options);
	void Requery(long Options);
	void Update(const VARIANT& Fields, const VARIANT& Values);
	long GetAbsolutePage();
	void SetAbsolutePage(long nNewValue);
	long GetEditMode();
	VARIANT GetFilter();
	void SetFilter(const VARIANT& newValue);
	long GetPageCount();
	long GetPageSize();
	void SetPageSize(long nNewValue);
	CString GetSort();
	void SetSort(LPCTSTR lpszNewValue);
	long GetStatus();
	long GetState();
	void UpdateBatch(long AffectRecords);
	void CancelBatch(long AffectRecords);
	long GetCursorLocation();
	void SetCursorLocation(long nNewValue);
	LPDISPATCH NextRecordset(VARIANT* RecordsAffected);
	BOOL Supports(long CursorOptions);
	long GetMarshalOptions();
	void SetMarshalOptions(long nNewValue);
	void Find(LPCTSTR Criteria, long SkipRecords, long SearchDirection, const VARIANT& Start);
	void Cancel();
	LPUNKNOWN GetDataSource();
	void SetRefDataSource(LPUNKNOWN newValue);
	LPDISPATCH GetActiveCommand();
	void SetStayInSync(BOOL bNewValue);
	BOOL GetStayInSync();
	CString GetString(long StringFormat, long NumRows, LPCTSTR ColumnDelimeter, LPCTSTR RowDelimeter, LPCTSTR NullExpr);
	CString GetDataMember();
	void SetDataMember(LPCTSTR lpszNewValue);
	long CompareBookmarks(const VARIANT& Bookmark1, const VARIANT& Bookmark2);
	LPDISPATCH Clone(long LockType);
	void Resync(long AffectRecords, long ResyncValues);
	void Seek(const VARIANT& KeyValues, long SeekOption);
	void SetIndex(LPCTSTR lpszNewValue);
	CString GetIndex();
	void Save(const VARIANT& Destination, long PersistFormat);
};
/////////////////////////////////////////////////////////////////////////////
// Recordset21_Deprecated wrapper class

class Recordset21_Deprecated : public COleDispatchDriver
{
public:
	Recordset21_Deprecated() {}		// Calls COleDispatchDriver default constructor
	Recordset21_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Recordset21_Deprecated(const Recordset21_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetAbsolutePosition();
	void SetAbsolutePosition(long nNewValue);
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	VARIANT GetActiveConnection();
	BOOL GetBof();
	VARIANT GetBookmark();
	void SetBookmark(const VARIANT& newValue);
	long GetCacheSize();
	void SetCacheSize(long nNewValue);
	long GetCursorType();
	void SetCursorType(long nNewValue);
	BOOL GetEof();
	LPDISPATCH GetFields();
	long GetLockType();
	void SetLockType(long nNewValue);
	long GetMaxRecords();
	void SetMaxRecords(long nNewValue);
	long GetRecordCount();
	void SetRefSource(LPDISPATCH newValue);
	void SetSource(LPCTSTR lpszNewValue);
	VARIANT GetSource();
	void AddNew(const VARIANT& FieldList, const VARIANT& Values);
	void CancelUpdate();
	void Close();
	void Delete(long AffectRecords);
	VARIANT GetRows(long Rows, const VARIANT& Start, const VARIANT& Fields);
	void Move(long NumRecords, const VARIANT& Start);
	void MoveNext();
	void MovePrevious();
	void MoveFirst();
	void MoveLast();
	void Open(const VARIANT& Source, const VARIANT& ActiveConnection, long CursorType, long LockType, long Options);
	void Requery(long Options);
	void Update(const VARIANT& Fields, const VARIANT& Values);
	long GetAbsolutePage();
	void SetAbsolutePage(long nNewValue);
	long GetEditMode();
	VARIANT GetFilter();
	void SetFilter(const VARIANT& newValue);
	long GetPageCount();
	long GetPageSize();
	void SetPageSize(long nNewValue);
	CString GetSort();
	void SetSort(LPCTSTR lpszNewValue);
	long GetStatus();
	long GetState();
	void UpdateBatch(long AffectRecords);
	void CancelBatch(long AffectRecords);
	long GetCursorLocation();
	void SetCursorLocation(long nNewValue);
	LPDISPATCH NextRecordset(VARIANT* RecordsAffected);
	BOOL Supports(long CursorOptions);
	long GetMarshalOptions();
	void SetMarshalOptions(long nNewValue);
	void Find(LPCTSTR Criteria, long SkipRecords, long SearchDirection, const VARIANT& Start);
	void Cancel();
	LPUNKNOWN GetDataSource();
	void SetRefDataSource(LPUNKNOWN newValue);
	LPDISPATCH GetActiveCommand();
	void SetStayInSync(BOOL bNewValue);
	BOOL GetStayInSync();
	CString GetString(long StringFormat, long NumRows, LPCTSTR ColumnDelimeter, LPCTSTR RowDelimeter, LPCTSTR NullExpr);
	CString GetDataMember();
	void SetDataMember(LPCTSTR lpszNewValue);
	long CompareBookmarks(const VARIANT& Bookmark1, const VARIANT& Bookmark2);
	LPDISPATCH Clone(long LockType);
	void Resync(long AffectRecords, long ResyncValues);
	void Seek(const VARIANT& KeyValues, long SeekOption);
	void SetIndex(LPCTSTR lpszNewValue);
	CString GetIndex();
};
/////////////////////////////////////////////////////////////////////////////
// Recordset20_Deprecated wrapper class

class Recordset20_Deprecated : public COleDispatchDriver
{
public:
	Recordset20_Deprecated() {}		// Calls COleDispatchDriver default constructor
	Recordset20_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Recordset20_Deprecated(const Recordset20_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetAbsolutePosition();
	void SetAbsolutePosition(long nNewValue);
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	VARIANT GetActiveConnection();
	BOOL GetBof();
	VARIANT GetBookmark();
	void SetBookmark(const VARIANT& newValue);
	long GetCacheSize();
	void SetCacheSize(long nNewValue);
	long GetCursorType();
	void SetCursorType(long nNewValue);
	BOOL GetEof();
	LPDISPATCH GetFields();
	long GetLockType();
	void SetLockType(long nNewValue);
	long GetMaxRecords();
	void SetMaxRecords(long nNewValue);
	long GetRecordCount();
	void SetRefSource(LPDISPATCH newValue);
	void SetSource(LPCTSTR lpszNewValue);
	VARIANT GetSource();
	void AddNew(const VARIANT& FieldList, const VARIANT& Values);
	void CancelUpdate();
	void Close();
	void Delete(long AffectRecords);
	VARIANT GetRows(long Rows, const VARIANT& Start, const VARIANT& Fields);
	void Move(long NumRecords, const VARIANT& Start);
	void MoveNext();
	void MovePrevious();
	void MoveFirst();
	void MoveLast();
	void Open(const VARIANT& Source, const VARIANT& ActiveConnection, long CursorType, long LockType, long Options);
	void Requery(long Options);
	void Update(const VARIANT& Fields, const VARIANT& Values);
	long GetAbsolutePage();
	void SetAbsolutePage(long nNewValue);
	long GetEditMode();
	VARIANT GetFilter();
	void SetFilter(const VARIANT& newValue);
	long GetPageCount();
	long GetPageSize();
	void SetPageSize(long nNewValue);
	CString GetSort();
	void SetSort(LPCTSTR lpszNewValue);
	long GetStatus();
	long GetState();
	void UpdateBatch(long AffectRecords);
	void CancelBatch(long AffectRecords);
	long GetCursorLocation();
	void SetCursorLocation(long nNewValue);
	LPDISPATCH NextRecordset(VARIANT* RecordsAffected);
	BOOL Supports(long CursorOptions);
	long GetMarshalOptions();
	void SetMarshalOptions(long nNewValue);
	void Find(LPCTSTR Criteria, long SkipRecords, long SearchDirection, const VARIANT& Start);
	void Cancel();
	LPUNKNOWN GetDataSource();
	void SetRefDataSource(LPUNKNOWN newValue);
	LPDISPATCH GetActiveCommand();
	void SetStayInSync(BOOL bNewValue);
	BOOL GetStayInSync();
	CString GetString(long StringFormat, long NumRows, LPCTSTR ColumnDelimeter, LPCTSTR RowDelimeter, LPCTSTR NullExpr);
	CString GetDataMember();
	void SetDataMember(LPCTSTR lpszNewValue);
	long CompareBookmarks(const VARIANT& Bookmark1, const VARIANT& Bookmark2);
	LPDISPATCH Clone(long LockType);
	void Resync(long AffectRecords, long ResyncValues);
};
/////////////////////////////////////////////////////////////////////////////
// Recordset15_Deprecated wrapper class

class Recordset15_Deprecated : public COleDispatchDriver
{
public:
	Recordset15_Deprecated() {}		// Calls COleDispatchDriver default constructor
	Recordset15_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Recordset15_Deprecated(const Recordset15_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetAbsolutePosition();
	void SetAbsolutePosition(long nNewValue);
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	VARIANT GetActiveConnection();
	BOOL GetBof();
	VARIANT GetBookmark();
	void SetBookmark(const VARIANT& newValue);
	long GetCacheSize();
	void SetCacheSize(long nNewValue);
	long GetCursorType();
	void SetCursorType(long nNewValue);
	BOOL GetEof();
	LPDISPATCH GetFields();
	long GetLockType();
	void SetLockType(long nNewValue);
	long GetMaxRecords();
	void SetMaxRecords(long nNewValue);
	long GetRecordCount();
	void SetRefSource(LPDISPATCH newValue);
	void SetSource(LPCTSTR lpszNewValue);
	VARIANT GetSource();
	void AddNew(const VARIANT& FieldList, const VARIANT& Values);
	void CancelUpdate();
	void Close();
	void Delete(long AffectRecords);
	VARIANT GetRows(long Rows, const VARIANT& Start, const VARIANT& Fields);
	void Move(long NumRecords, const VARIANT& Start);
	void MoveNext();
	void MovePrevious();
	void MoveFirst();
	void MoveLast();
	void Open(const VARIANT& Source, const VARIANT& ActiveConnection, long CursorType, long LockType, long Options);
	void Requery(long Options);
	void Update(const VARIANT& Fields, const VARIANT& Values);
	long GetAbsolutePage();
	void SetAbsolutePage(long nNewValue);
	long GetEditMode();
	VARIANT GetFilter();
	void SetFilter(const VARIANT& newValue);
	long GetPageCount();
	long GetPageSize();
	void SetPageSize(long nNewValue);
	CString GetSort();
	void SetSort(LPCTSTR lpszNewValue);
	long GetStatus();
	long GetState();
	void UpdateBatch(long AffectRecords);
	void CancelBatch(long AffectRecords);
	long GetCursorLocation();
	void SetCursorLocation(long nNewValue);
	LPDISPATCH NextRecordset(VARIANT* RecordsAffected);
	BOOL Supports(long CursorOptions);
	long GetMarshalOptions();
	void SetMarshalOptions(long nNewValue);
	void Find(LPCTSTR Criteria, long SkipRecords, long SearchDirection, const VARIANT& Start);
};
/////////////////////////////////////////////////////////////////////////////
// Fields_Deprecated wrapper class

class Fields_Deprecated : public COleDispatchDriver
{
public:
	Fields_Deprecated() {}		// Calls COleDispatchDriver default constructor
	Fields_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Fields_Deprecated(const Fields_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Refresh();
	LPDISPATCH GetItem(const VARIANT& Index);
	void Delete(const VARIANT& Index);
	void Append(LPCTSTR Name, long Type, long DefinedSize, long Attrib, const VARIANT& FieldValue);
	void Update();
	void Resync(long ResyncValues);
	void CancelUpdate();
};
/////////////////////////////////////////////////////////////////////////////
// Fields20_Deprecated wrapper class

class Fields20_Deprecated : public COleDispatchDriver
{
public:
	Fields20_Deprecated() {}		// Calls COleDispatchDriver default constructor
	Fields20_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Fields20_Deprecated(const Fields20_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Refresh();
	LPDISPATCH GetItem(const VARIANT& Index);
	void Delete(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// Fields15_Deprecated wrapper class

class Fields15_Deprecated : public COleDispatchDriver
{
public:
	Fields15_Deprecated() {}		// Calls COleDispatchDriver default constructor
	Fields15_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Fields15_Deprecated(const Fields15_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Refresh();
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// Field_Deprecated wrapper class

class Field_Deprecated : public COleDispatchDriver
{
public:
	Field_Deprecated() {}		// Calls COleDispatchDriver default constructor
	Field_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Field_Deprecated(const Field_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetActualSize();
	long GetAttributes();
	long GetDefinedSize();
	CString GetName();
	long GetType();
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	// method 'GetPrecision' not emitted because of invalid return type or parameter type
	// method 'GetNumericScale' not emitted because of invalid return type or parameter type
	void AppendChunk(const VARIANT& Data);
	VARIANT GetChunk(long Length);
	VARIANT GetOriginalValue();
	VARIANT GetUnderlyingValue();
	LPUNKNOWN GetDataFormat();
	void SetRefDataFormat(LPUNKNOWN newValue);
	// method 'SetPrecision' not emitted because of invalid return type or parameter type
	// method 'SetNumericScale' not emitted because of invalid return type or parameter type
	void SetType(long nNewValue);
	void SetDefinedSize(long nNewValue);
	void SetAttributes(long nNewValue);
	long GetStatus();
};
/////////////////////////////////////////////////////////////////////////////
// Field20_Deprecated wrapper class

class Field20_Deprecated : public COleDispatchDriver
{
public:
	Field20_Deprecated() {}		// Calls COleDispatchDriver default constructor
	Field20_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Field20_Deprecated(const Field20_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetActualSize();
	long GetAttributes();
	long GetDefinedSize();
	CString GetName();
	long GetType();
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	// method 'GetPrecision' not emitted because of invalid return type or parameter type
	// method 'GetNumericScale' not emitted because of invalid return type or parameter type
	void AppendChunk(const VARIANT& Data);
	VARIANT GetChunk(long Length);
	VARIANT GetOriginalValue();
	VARIANT GetUnderlyingValue();
	LPUNKNOWN GetDataFormat();
	void SetRefDataFormat(LPUNKNOWN newValue);
	// method 'SetPrecision' not emitted because of invalid return type or parameter type
	// method 'SetNumericScale' not emitted because of invalid return type or parameter type
	void SetType(long nNewValue);
	void SetDefinedSize(long nNewValue);
	void SetAttributes(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// _Command_Deprecated wrapper class

class _Command_Deprecated : public COleDispatchDriver
{
public:
	_Command_Deprecated() {}		// Calls COleDispatchDriver default constructor
	_Command_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Command_Deprecated(const _Command_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	LPDISPATCH GetActiveConnection();
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	CString GetCommandText();
	void SetCommandText(LPCTSTR lpszNewValue);
	long GetCommandTimeout();
	void SetCommandTimeout(long nNewValue);
	BOOL GetPrepared();
	void SetPrepared(BOOL bNewValue);
	LPDISPATCH Execute(VARIANT* RecordsAffected, VARIANT* Parameters, long Options);
	LPDISPATCH CreateParameter(LPCTSTR Name, long Type, long Direction, long Size, const VARIANT& Value);
	LPDISPATCH GetParameters();
	void SetCommandType(long nNewValue);
	long GetCommandType();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetState();
	void Cancel();
	void SetRefCommandStream(LPUNKNOWN newValue);
	VARIANT GetCommandStream();
	void SetDialect(LPCTSTR lpszNewValue);
	CString GetDialect();
	void SetNamedParameters(BOOL bNewValue);
	BOOL GetNamedParameters();
};
/////////////////////////////////////////////////////////////////////////////
// Command25_Deprecated wrapper class

class Command25_Deprecated : public COleDispatchDriver
{
public:
	Command25_Deprecated() {}		// Calls COleDispatchDriver default constructor
	Command25_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Command25_Deprecated(const Command25_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	LPDISPATCH GetActiveConnection();
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	CString GetCommandText();
	void SetCommandText(LPCTSTR lpszNewValue);
	long GetCommandTimeout();
	void SetCommandTimeout(long nNewValue);
	BOOL GetPrepared();
	void SetPrepared(BOOL bNewValue);
	LPDISPATCH Execute(VARIANT* RecordsAffected, VARIANT* Parameters, long Options);
	LPDISPATCH CreateParameter(LPCTSTR Name, long Type, long Direction, long Size, const VARIANT& Value);
	LPDISPATCH GetParameters();
	void SetCommandType(long nNewValue);
	long GetCommandType();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetState();
	void Cancel();
};
/////////////////////////////////////////////////////////////////////////////
// Command15_Deprecated wrapper class

class Command15_Deprecated : public COleDispatchDriver
{
public:
	Command15_Deprecated() {}		// Calls COleDispatchDriver default constructor
	Command15_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Command15_Deprecated(const Command15_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	LPDISPATCH GetActiveConnection();
	void SetRefActiveConnection(LPDISPATCH newValue);
	void SetActiveConnection(const VARIANT& newValue);
	CString GetCommandText();
	void SetCommandText(LPCTSTR lpszNewValue);
	long GetCommandTimeout();
	void SetCommandTimeout(long nNewValue);
	BOOL GetPrepared();
	void SetPrepared(BOOL bNewValue);
	LPDISPATCH Execute(VARIANT* RecordsAffected, VARIANT* Parameters, long Options);
	LPDISPATCH CreateParameter(LPCTSTR Name, long Type, long Direction, long Size, const VARIANT& Value);
	LPDISPATCH GetParameters();
	void SetCommandType(long nNewValue);
	long GetCommandType();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// _Parameter_Deprecated wrapper class

class _Parameter_Deprecated : public COleDispatchDriver
{
public:
	_Parameter_Deprecated() {}		// Calls COleDispatchDriver default constructor
	_Parameter_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Parameter_Deprecated(const _Parameter_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	long GetType();
	void SetType(long nNewValue);
	void SetDirection(long nNewValue);
	long GetDirection();
	// method 'SetPrecision' not emitted because of invalid return type or parameter type
	// method 'GetPrecision' not emitted because of invalid return type or parameter type
	// method 'SetNumericScale' not emitted because of invalid return type or parameter type
	// method 'GetNumericScale' not emitted because of invalid return type or parameter type
	void SetSize(long nNewValue);
	long GetSize();
	void AppendChunk(const VARIANT& Val);
	long GetAttributes();
	void SetAttributes(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Parameters_Deprecated wrapper class

class Parameters_Deprecated : public COleDispatchDriver
{
public:
	Parameters_Deprecated() {}		// Calls COleDispatchDriver default constructor
	Parameters_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Parameters_Deprecated(const Parameters_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Refresh();
	void Append(LPDISPATCH Object);
	void Delete(const VARIANT& Index);
	LPDISPATCH GetItem(const VARIANT& Index);
};
/////////////////////////////////////////////////////////////////////////////
// ConnectionEvents_Deprecated wrapper class

class ConnectionEvents_Deprecated : public COleDispatchDriver
{
public:
	ConnectionEvents_Deprecated() {}		// Calls COleDispatchDriver default constructor
	ConnectionEvents_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ConnectionEvents_Deprecated(const ConnectionEvents_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	// method 'InfoMessage' not emitted because of invalid return type or parameter type
	// method 'BeginTransComplete' not emitted because of invalid return type or parameter type
	// method 'CommitTransComplete' not emitted because of invalid return type or parameter type
	// method 'RollbackTransComplete' not emitted because of invalid return type or parameter type
	// method 'WillExecute' not emitted because of invalid return type or parameter type
	// method 'ExecuteComplete' not emitted because of invalid return type or parameter type
	// method 'WillConnect' not emitted because of invalid return type or parameter type
	// method 'ConnectComplete' not emitted because of invalid return type or parameter type
	// method 'Disconnect' not emitted because of invalid return type or parameter type
};
/////////////////////////////////////////////////////////////////////////////
// RecordsetEvents_Deprecated wrapper class

class RecordsetEvents_Deprecated : public COleDispatchDriver
{
public:
	RecordsetEvents_Deprecated() {}		// Calls COleDispatchDriver default constructor
	RecordsetEvents_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	RecordsetEvents_Deprecated(const RecordsetEvents_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	// method 'WillChangeField' not emitted because of invalid return type or parameter type
	// method 'FieldChangeComplete' not emitted because of invalid return type or parameter type
	// method 'WillChangeRecord' not emitted because of invalid return type or parameter type
	// method 'RecordChangeComplete' not emitted because of invalid return type or parameter type
	// method 'WillChangeRecordset' not emitted because of invalid return type or parameter type
	// method 'RecordsetChangeComplete' not emitted because of invalid return type or parameter type
	// method 'WillMove' not emitted because of invalid return type or parameter type
	// method 'MoveComplete' not emitted because of invalid return type or parameter type
	// method 'EndOfRecordset' not emitted because of invalid return type or parameter type
	// method 'FetchProgress' not emitted because of invalid return type or parameter type
	// method 'FetchComplete' not emitted because of invalid return type or parameter type
};
/////////////////////////////////////////////////////////////////////////////
// _Record_Deprecated wrapper class

class _Record_Deprecated : public COleDispatchDriver
{
public:
	_Record_Deprecated() {}		// Calls COleDispatchDriver default constructor
	_Record_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Record_Deprecated(const _Record_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	VARIANT GetActiveConnection();
	void SetActiveConnection(LPCTSTR lpszNewValue);
	void SetRefActiveConnection(LPDISPATCH newValue);
	long GetState();
	VARIANT GetSource();
	void SetSource(LPCTSTR lpszNewValue);
	void SetRefSource(LPDISPATCH newValue);
	long GetMode();
	void SetMode(long nNewValue);
	CString GetParentURL();
	CString MoveRecord(LPCTSTR Source, LPCTSTR Destination, LPCTSTR UserName, LPCTSTR Password, long Options, BOOL Async);
	CString CopyRecord(LPCTSTR Source, LPCTSTR Destination, LPCTSTR UserName, LPCTSTR Password, long Options, BOOL Async);
	void DeleteRecord(LPCTSTR Source, BOOL Async);
	void Open(const VARIANT& Source, const VARIANT& ActiveConnection, long Mode, long CreateOptions, long Options, LPCTSTR UserName, LPCTSTR Password);
	void Close();
	LPDISPATCH GetFields();
	long GetRecordType();
	LPDISPATCH GetChildren();
	void Cancel();
};
/////////////////////////////////////////////////////////////////////////////
// _Stream_Deprecated wrapper class

class _Stream_Deprecated : public COleDispatchDriver
{
public:
	_Stream_Deprecated() {}		// Calls COleDispatchDriver default constructor
	_Stream_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Stream_Deprecated(const _Stream_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetSize();
	BOOL GetEos();
	long GetPosition();
	void SetPosition(long nNewValue);
	long GetType();
	void SetType(long nNewValue);
	long GetLineSeparator();
	void SetLineSeparator(long nNewValue);
	long GetState();
	long GetMode();
	void SetMode(long nNewValue);
	CString GetCharset();
	void SetCharset(LPCTSTR lpszNewValue);
	VARIANT Read(long NumBytes);
	void Open(const VARIANT& Source, long Mode, long Options, LPCTSTR UserName, LPCTSTR Password);
	void Close();
	void SkipLine();
	void Write(const VARIANT& Buffer);
	void SetEOS();
	void CopyTo(LPDISPATCH DestStream, long CharNumber);
	void Flush();
	void SaveToFile(LPCTSTR FileName, long Options);
	void LoadFromFile(LPCTSTR FileName);
	CString ReadText(long NumChars);
	void WriteText(LPCTSTR Data, long Options);
	void Cancel();
};
/////////////////////////////////////////////////////////////////////////////
// Field15_Deprecated wrapper class

class Field15_Deprecated : public COleDispatchDriver
{
public:
	Field15_Deprecated() {}		// Calls COleDispatchDriver default constructor
	Field15_Deprecated(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Field15_Deprecated(const Field15_Deprecated& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetProperties();
	long GetActualSize();
	long GetAttributes();
	long GetDefinedSize();
	CString GetName();
	long GetType();
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	// method 'GetPrecision' not emitted because of invalid return type or parameter type
	// method 'GetNumericScale' not emitted because of invalid return type or parameter type
	void AppendChunk(const VARIANT& Data);
	VARIANT GetChunk(long Length);
	VARIANT GetOriginalValue();
	VARIANT GetUnderlyingValue();
};
