'* **********************************************************************
'* *   File               :    ModuleGlobalDefine.vb.
'                            
'* *   Short Description  :    Define global structures and functions.
'                            
'* *   Author             :    Liu Weizhao.
'                            
'* *   Date & Version     :    2009.04.05. Initial Version.
'                            
'* *********************************************************************
'* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
'* *********************************************************************
Imports System.Data
Imports System.Data.OleDb
Imports System.IO
Imports System.IO.Stream
Imports System.IO.StreamReader
Imports System.IO.StreamWriter
Imports System.IO.File


Module ModuleGlobalDefine

    Public endl As String                           '输出回车换行
    Public EDL As String = Chr(10)
    Public TAB1 As String = " "                     '输出1个空格
    Public TAB4 As String = "   "                   '输出一个Tab键值
    Public NSP As String = ""
    Public dTab4 As String = TAB4 & TAB4

    Public GlobSelectTableName As String

    Public hppPath As String
    Public cppPath As String
    Public sqlPath As String

    Public hdHeaderFile As Integer                   '头文件句柄
    Public hdSourceFile As Integer                  'pc文件句柄
    Public hdSQLFile As Integer                     'SQL文件句柄
    Public hdSQLBatFile As Integer
    Public strTableName As String                   '全局的数据表名称
    Public strTableSpaceName As String              '全局的数据库表空间名

    Public userid As String       '用户ID
    Public userlevel As Char      '管理权限
    Public user_Pwd As String     '用户密码
    Public user_s As Char '查询权限
    Public user_a As Char '添加权限
    Public user_e As Char '修改权限
    Public user_d As Char '删除权限
    Public user_p As Char '报表输出权限


    Public dbConnectionString As String
    Public dbConnection As OleDbConnection
    Public dbDataAdatpter As OleDbDataAdapter
    Public dbDataSet As DataSet
    Public dbCommand As OleDbCommand
    Public dbReader As OleDbDataReader
    Public dbFieldReader As OleDbDataReader
    Public dbStdFunReader As OleDbDataReader
    Public dbStdFunSrcReader As OleDbDataReader


    Public dbExcConnectionString As String
    Public dbExcConnection As OleDbConnection
    Public dbExcDataAdatpter As OleDbDataAdapter
    Public dbExcDataSet As DataSet
    Public dbExcCommand As OleDbCommand
    Public dbExcReader As OleDbDataReader
    Public dbExcFieldReader As OleDbDataReader
    Public dbExcStdFunReader As OleDbDataReader
    Public dbExcStdFunSrcReader As OleDbDataReader

    '结构体定义结束
    Public Structure ImpTable                       '定义导入文件表名结构
        Public TableName As String
        Public ExcTabName As String
        Public ExcTabDesc As String
        Public ExcImport As Boolean
        Public ExcTabSpace As String
        Public ExcFieldNo As Integer
    End Structure
    Public Structure ImpTableField                  '定义导入文件结构
        Public ExcfdNo As Integer
        Public ExcOuterName As String
        Public ExcOuterType As String
        Public ExcinnerName As String
        Public ExcInnerType As String
        Public ExcInnerLength As Integer
        Public ExcUnit As String
        Public ExcComment As String
        Public ExcfdKey As Integer
        Public ExcfdIsNull As Integer
        Public ExcULimit As String
        Public ExcLLimit As String

        Public Function GetComments() As String
            GetComments = "Unit"
            If ExcUnit = "" Then
                GetComments &= "[-]:"
            Else
                GetComments &= ExcUnit & ":"
            End If
            If ExcComment = "" Then
                GetComments &= " "
            Else
                GetComments &= ExcComment & ".Limit:["
            End If
            If ExcLLimit <> "" Then
                GetComments &= ExcLLimit & ","
            Else
                GetComments &= "-,"
            End If
            If ExcULimit <> "" Then
                GetComments &= ExcULimit & "]"
            Else
                GetComments &= "-]"
            End If
        End Function
    End Structure
    Public Structure PkNameVar
        Public pkType As String
        Public pkAttName As String
        Public pkOraName As String
        Public pkStruName As String
        Public pkFunName As String
    End Structure
    Public Structure FieldNameVar   '定义字段结构体
        Public fdName As String
        Public fdType As String
        Public fdLength As Integer
        Public fdUnit As String
        Public fdComment As String
        Public fdKey As Integer
        Public fdIsNull As Integer

        Public hostName As String
        Public Function OraType() As String
            If fdType = "CHAR" Or fdType = "UCHAR" Or fdType = "char" Then
                OraType = "VARCHAR"
            ElseIf fdType = "DATE" Or fdType = "date" Then
                OraType = "VARCHAR"
            Else
                OraType = fdType.ToLower()
            End If
        End Function
        Public Function AttType() As String
            If fdType = "DATE" Or fdType = "date" Then
                AttType = "char"
            Else
                AttType = fdType.ToLower()
            End If
        End Function
        Public Function OraHostName() As String
            OraHostName = "ora_" & StrucName()
        End Function

        Public Function PkOraHostName() As String
            PkOraHostName = "k_" & OraHostName()
        End Function
        Public Function OraHostNameZi() As String
            OraHostNameZi = "ora_" & StrucZiName()
        End Function

        Public Function StrucName() As String   '构造字段的结构体变量名
            If fdType = "CHAR" Or fdType = "UCHAR" Or fdType = "char" Then
                StrucName = fdName & "[" & fdLength & "]"
            ElseIf fdType = "DATE" Or fdType = "date" Then
                StrucName = fdName & "[" & fdLength & "]"
            Else
                StrucName = fdName
            End If
        End Function
        Public Function StrucZiName() As String '构造字段的结构体指示变量名
            If fdIsNull = 0 Then
                StrucZiName = fdName & "Zi"
            Else
                StrucZiName = ""
            End If
        End Function
        Public Function attZiName() As String   '构造字段属性指示变量名
            If fdIsNull = 0 Then
                attZiName = "s_" & fdName & "Zi"
            Else
                attZiName = ""
            End If
        End Function
        Public Function PkAttName() As String   '构造字段主键属性变量名
            If fdType = "SHORT" Or fdType = "USHORT" Or fdType = "short" Then
                PkAttName = "s_k_" & fdName
            ElseIf fdType = "LONG" Or fdType = "ULONG" Or fdType = "long" Then
                PkAttName = "l_k_" & fdName
            ElseIf fdType = "CHAR" Or fdType = "UCHAR" Or fdType = "char" Then
                PkAttName = "c_k_" & fdName & "[" & fdLength & "]"
            ElseIf fdType = "INT" Or fdType = "int" Or fdType = "UINT" Then
                PkAttName = "w_k_" & fdName
            ElseIf fdType = "DATE" Or fdType = "date" Then
                PkAttName = "c_k_" & fdName & "[" & fdLength & "]"
            Else
                PkAttName = fdName
            End If
        End Function
        Public Function AttPkName() As String   '构造字段主键属性变量名
            If fdKey <> 0 Then
                AttPkName = AttName()
            Else
                AttPkName = ""
            End If

        End Function

        Public Function PkStrucName() As String     '构造字段主键结构体名
            PkStrucName = "k_" & fdName
        End Function

        Public Function getPkFunName() As String    '获取主键get函数名
            getPkFunName = PkStrucName()
        End Function

        Public Function setPkFunName() As String    '获取主键set函数名
            setPkFunName = "set_" & PkStrucName()
        End Function
        Public Function getAttFunName() As String   '获取属性get函数名
            Dim lis(4) As String
            lis = StrucName().Split("[")

            getAttFunName = lis(0)
        End Function
        Public Function getAttZiFunName() As String '获取属性指示变量get函数名
            If fdIsNull = 0 Then
                getAttZiFunName = StrucZiName()
            Else
                getAttZiFunName = ""
            End If
        End Function

        Public Function setAttFunName() As String   '获取属性set函数名
            Dim lis(4) As String
            lis = StrucName().Split("[")

            setAttFunName = "set_" & lis(0)

        End Function
        Public Function setAttZiFunName() As String '获取属性指示变量set函数名
            If fdIsNull = 0 Then
                setAttZiFunName = "set_" & StrucZiName()
            Else
                setAttZiFunName = ""
            End If
        End Function
        Public Function AttName() As String         '构造字段属性变量名
            If fdType = "SHORT" Or fdType = "USHORT" Or fdType = "short" Then
                AttName = "s_" & fdName
            ElseIf fdType = "LONG" Or fdType = "ULONG" Or fdType = "long" Then
                AttName = "l_" & fdName
            ElseIf fdType = "FLOAT" Or fdType = "float" Then
                AttName = "f_" & fdName
            ElseIf fdType = "CHAR" Or fdType = "UCHAR" Or fdType = "char" Then
                AttName = "c_" & fdName & "[" & fdLength & "]"
            ElseIf fdType = "INT" Or fdType = "int" Or fdType = "UINT" Then
                AttName = "w_" & fdName
            ElseIf fdType = "DATE" Or fdType = "date" Then
                AttName = "c_" & fdName & "[" & fdLength & "]"
            Else
                AttName = fdName
            End If
        End Function
        Public Function getAttFunCode() As String   '获取属性get函数代码
            Dim strTemp() As String

            If fdType = "CHAR" Or fdType = "UCHAR" Or fdType = "char" Or fdType = "DATE" Or fdType = "date" Then
                strTemp = AttName().Split("[")
                getAttFunCode = "//" & AttType().ToLower() & "*" & " " & fdName & " = " & fdComment & Chr(10)
                getAttFunCode &= AttType().ToLower() & "*" & "  " & fdName & "() const" & Chr(10)
                getAttFunCode &= "{" & Chr(10) & "   " & "return ((" & AttType().ToLower() & "*)" & strTemp(0) & ");"
                getAttFunCode &= Chr(10) & "}" & Chr(10) & Chr(10)
            Else
                getAttFunCode = "//" & AttType().ToLower() & " " & fdName & " = " & fdComment & Chr(10)
                getAttFunCode &= AttType().ToLower() & "  " & fdName & "() const" & Chr(10)
                'getAttFunCode &= "{" & Chr(10) & "   " & "return ((" & AttType().ToLower() & "*)" & AttName() & ");"
                getAttFunCode &= "{" & Chr(10) & "   " & "return (" & AttName() & ");"
                getAttFunCode &= Chr(10) & "}" & Chr(10) & Chr(10)
            End If
        End Function

        Public Function setAttFunCode() As String   '获取属性set函数代码
            Dim strTemp() As String
            If fdType = "CHAR" Or fdType = "UCHAR" Or fdType = "char" Or fdType = "DATE" Or fdType = "date" Then
                strTemp = AttName().Split("[")
                setAttFunCode = "void  set_" & fdName & " (const " & AttType().ToLower() & "* arg)" & Chr(10)
                setAttFunCode &= "{" & Chr(10) & "   " & "strncpy((char*)" & strTemp(0) & ", arg, sizeof(" & strTemp(0) & "));" & Chr(10)
                setAttFunCode &= "    " & strTemp(0) & "[sizeof(" & strTemp(0) & ")-1] = '\0';" & Chr(10)
            Else
                setAttFunCode = "void  set_" & fdName & " (" & AttType().ToLower() & " arg)" & Chr(10)
                setAttFunCode &= "{" & Chr(10) & "   " & AttName() & "= arg;" & Chr(10)
            End If
            If fdIsNull = 0 Then
                setAttFunCode &= "   " & attZiName() & " = 0;" & Chr(10)
            End If
            setAttFunCode &= "   " & "return;"
            setAttFunCode &= Chr(10) & "}" & Chr(10) & Chr(10)
        End Function

        Public Function getAttZiFunCode() As String     '获取属性指示变量get函数代码

            getAttZiFunCode = "short   " & StrucZiName() & "() const" & Chr(10)
            getAttZiFunCode &= "{" & Chr(10) & "   " & "return (" & attZiName() & ");"
            getAttZiFunCode &= Chr(10) & "}" & Chr(10) & Chr(10)
        End Function

        Public Function setAttZiFunCode() As String     '获取属性指示变量set函数代码
            setAttZiFunCode = "void  set_" & StrucZiName() & "(short" & " arg)" & Chr(10)
            setAttZiFunCode &= "{" & Chr(10) & "   " & attZiName() & "= arg;" & Chr(10) & "    " & "return;"
            setAttZiFunCode &= Chr(10) & "}" & Chr(10) & Chr(10)
        End Function

        Public Function setPkAttFunCode() As String   '获取主键属性变量set函数代码
            Dim strTemp() As String
            If fdType = "CHAR" Or fdType = "UCHAR" Or fdType = "char" Or fdType = "DATE" Or fdType = "date" Then
                strTemp = PkAttName().Split("[")
                setPkAttFunCode = "void  set_" & PkStrucName() & " (const " & AttType().ToLower() & "* arg)" & Chr(10)
                setPkAttFunCode &= "{" & Chr(10) & "   " & "strncpy((char*)" & strTemp(0) & ", arg, sizeof(" & strTemp(0) & "));" & Chr(10)
                setPkAttFunCode &= "    " & strTemp(0) & "[sizeof(" & strTemp(0) & ")-1] = '\0';" & Chr(10) & "    " & "return;" & Chr(10) & "}" & Chr(10) & Chr(10)
            Else
                setPkAttFunCode = "void  set_" & PkStrucName() & " (" & AttType().ToLower() & " arg)" & Chr(10)
                setPkAttFunCode &= "{" & Chr(10) & "   " & PkAttName() & "= arg;" & Chr(10) & "    " & "return;"
                setPkAttFunCode &= Chr(10) & "}" & Chr(10) & Chr(10)
            End If
        End Function
        Public Function getPkAttFunCode() As String   '获取主键属性变量get函数代码
            Dim strTemp() As String
            If fdType = "CHAR" Or fdType = "UCHAR" Or fdType = "char" Or fdType = "DATE" Or fdType = "date" Then
                strTemp = PkAttName().Split("[")
                getPkAttFunCode = "//" & AttType().ToLower() & "*" & PkStrucName() & " = " & fdComment & Chr(10)
                getPkAttFunCode &= AttType().ToLower() & "*" & "  " & PkStrucName() & "() const" & Chr(10)
                getPkAttFunCode &= "{" & Chr(10) & "   " & "return ((" & AttType().ToLower() & "*)" & strTemp(0) & ");"
                getPkAttFunCode &= Chr(10) & "}" & Chr(10) & Chr(10)
            Else
                getPkAttFunCode = "//" & AttType().ToLower() & PkStrucName() & " = " & fdComment & Chr(10)
                getPkAttFunCode &= AttType().ToLower() & "  " & PkStrucName() & "() const" & Chr(10)
                'getPkAttFunCode &= "{" & Chr(10) & "   " & "return ((" & AttType().ToLower() & "*)" & PkAttName() & ");"
                getPkAttFunCode &= "{" & Chr(10) & "   " & "return (" & PkAttName() & ");"
                getPkAttFunCode &= Chr(10) & "}" & Chr(10) & Chr(10)
            End If
        End Function
    End Structure
    ' 结构体定义结束
    Public strConstructor As String
    Public PkArgc As Integer
    Public pkArgv() As String
    Public pkFieldList(10) As PkNameVar
    Public ImpTableList() As ImpTable               '导入表列表
    Public ImpTableFieldList() As ImpTableField     '导入表字段列表
    Public ImpTableNo As Integer                    '导入表的个数

    Public VarList(500) As FieldNameVar             '数据库字段列表
    Public FieldCount As Integer                    '数据库字段个数
    Public FunCount As Integer = 0
    '数据库
    Public Function DBopen(ByVal dbName As String) As Boolean '打开数据库 

        dbConnectionString = "Provider=Microsoft.Jet.OLEDB.4.0;" & "Data Source= " & dbName & ";Persist Security Info=true"
        dbConnection = New OleDbConnection(dbConnectionString)
        Try
            dbConnection.Open()
            Return True
        Catch Ex As Exception
            MessageBox.Show("Cann't Open the Project file." + Ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error, MessageBoxDefaultButton.Button1, MessageBoxOptions.DefaultDesktopOnly, False)
            Return False
        End Try

    End Function

    Public Function ExcOpen(ByVal ExcName As String) As Boolean '打开数据库 

        dbExcConnectionString = "Provider=Microsoft.Jet.OLEDB.4.0;" & "Data Source= " & ExcName & ";Extended Properties=Excel 8.0;"
        dbExcConnection = New OleDbConnection(dbExcConnectionString)
        Try
            dbExcConnection.Open()
            Return True
        Catch Ex As Exception
            MessageBox.Show("Cann't Open the Project file.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error, MessageBoxDefaultButton.Button1, MessageBoxOptions.DefaultDesktopOnly, False)
            Return False
        End Try

    End Function
    Public Function DBclose() As Boolean '关闭数据库 
        If dbConnection Is Nothing Then
        Else

            If dbConnection.State = ConnectionState.Connecting Then
                Try
                    dbConnection.Close()
                    dbConnection.Dispose()
                    Return True
                Catch ex As Exception
                    MsgBox(ex.ToString)
                    Return False
                End Try
            End If
        End If
    End Function
    Public Function ExcClose() As Boolean '关闭数据库 
        Try
            dbExcConnection.Close()
            dbExcConnection.Dispose()
            Return True
        Catch ex As Exception
            MsgBox(ex.ToString)
            Return False
        End Try
    End Function
End Module
