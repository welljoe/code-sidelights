'* ***************************************************************
'* *   File               :    DataBaseCodeGenerator.vb.
'                            
'* *   Short Description  :    Main Class of this project.
'                            
'* *   Author             :    Liu Weizhao.
'                            
'* *   Date & Version     :    2009.04.05. Initial Version.
'                            
'* ****************************************************************
'* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
'* ****************************************************************

Public Class DataBaseCodeGenerator
    Private sqlStr As String



    Private Sub OK_Button_Click(ByVal sender As System.Object, ByVal e As System.EventArgs)
        Me.DialogResult = System.Windows.Forms.DialogResult.OK
        Me.Close()
    End Sub

    Private Sub Cancel_Button_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Cancel_Button.Click
        Me.DialogResult = System.Windows.Forms.DialogResult.Cancel
        Me.Close()
    End Sub

    '设置窗体控件的状态
    Public Sub setControlStatus(ByVal bVal As Boolean)
        Me.EditViewToolStripMenuItem.Enabled = bVal
        Me.GenerateToolStripMenuItem.Enabled = bVal
        Me.SettingToolStripMenuItem.Enabled = bVal
        Me.btnGenerate.Enabled = bVal
        Me.btnSelectAll.Enabled = bVal
        Me.SaveToolStripMenuItem.Enabled = bVal
        Me.ImportExcelToolStripMenuItem.Enabled = bVal
        Me.btnSelNone.Enabled = bVal
    End Sub

    Private Sub DataBaseCodeGenerator_Disposed(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Disposed
        DBclose()
    End Sub

    '窗体类Load
    Private Sub CodeGenerateDlg_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Call setControlStatus(False)
        procBarStatus.Visible = False
    End Sub

    '初始化DataTableList
    Public Sub InitDataTableList()
        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim rcount As Integer
        Dim i As Integer
        lstAllTables.Items.Clear()
        If dbConnection.State Then
            sqlStr = "select TableName from TableInfo"
            Try
                dbDataAdatpter = New OleDb.OleDbDataAdapter(sqlStr, dbConnection)
                dbDataAdatpter.Fill(rs)
                tb = rs.Tables(0)
            Catch Ex As Exception
                MsgBox(Err.Description)
            Finally
                dbDataAdatpter.Dispose()
                rs.Dispose()
                tb.Dispose()
            End Try
            If tb.Rows.Count = 0 Then
                setStatusBar("No table Available,[press Menum <View:Data Type> to add new Tabel Type.]")
            Else
                rcount = tb.Rows.Count
                For i = 1 To rcount
                    lstAllTables.Items.Add(tb.Rows(i - 1).Item(0).ToString)
                Next
            End If
        End If
        Dim tabCount As Integer
        Dim selCount As Integer = 0
        Dim iCount As Integer = 0
        tabCount = lstAllTables.Items.Count()
        For iCount = 1 To tabCount
            If lstAllTables.GetSelected(iCount - 1) Then
                selCount += 1
            End If
        Next

        txtSelectNo.Text = selCount.ToString()
        txtRemainNo.Text = (tabCount - selCount).ToString()
    End Sub

    '产生数据库文件
    Private Sub btnGenerate_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnGenerate.Click
        Dim tabCount As Integer = lstAllTables.Items.Count
        Dim selValue As String
        Dim iCount As Integer
        setStatusBar("Ready")
        initGlobalVariables()
        If setTargetDir() Then
            If chkDb.Checked Then
                'setStatusBar("Begin To Generate [DBStandarAccess] Class...")
                generateDbStandardAccess()
                'setStatusBar("End Of Generate [DBStandarAccess] Class.")
            End If
            If chkBatch.Checked() = True Then
                'setStatusBar("Begin To Create Batch SQL Script...")
                createBatchSQLScript()
                'setStatusBar("End Of Create Batch SQL Script.")
            End If

            If txtSelectNo.Text > 0 Then
                setControlStatus(False)
                procBarStatus.Maximum = txtSelectNo.Text * 2
                procBarStatus.Visible = True
                For iCount = 0 To txtSelectNo.Text - 1
                    selValue = lstAllTables.SelectedItems.Item(iCount)
                    generateAll(selValue)
                    procBarStatus.Value = 2 * (iCount + 1)
                Next
                MessageBox.Show(txtSelectNo.Text & " Data Tables Generated Successfully.", "Information", MessageBoxButtons.OK, MessageBoxIcon.Information, MessageBoxDefaultButton.Button1, MessageBoxOptions.DefaultDesktopOnly, False)
                procBarStatus.Visible = False
                setControlStatus(True)
                setStatusBar("Ready")
            Else
                MessageBox.Show("please select table name.", "Select Table", MessageBoxButtons.OK, MessageBoxIcon.Information, MessageBoxDefaultButton.Button1, MessageBoxOptions.DefaultDesktopOnly, False)
            End If
        End If
    End Sub
    '创建批处理SQL文件
    Private Sub createBatchSQLScript()
        Dim filePath As String
        Dim strScript As String = ""
        Dim iCount As Integer
        'filePath = sqlPath & "\CreateTable.bat"
        'If createFile(filePath, "bat") Then
        '    strScript = "set SQLPATH=E:\imp\sql" & Chr(13) & Chr(10)
        '    strScript &= "echo BEGIN TO EXECUTE SQL SCRIPTS" & Chr(13) & Chr(10)
        '    strScript &= "sqlplus RAFDB/QG_RAFDB@RAFDB @%SQLPATH%\TableList.sql" & Chr(13) & Chr(10)
        '    strScript &= "echo END OF SCRIPTS" & Chr(13) & Chr(10)
        '    Print(hdSQLBatFile, strScript)
        '    FileClose(hdSQLBatFile)
        'End If
        filePath = sqlPath & "\TableList.sql"
        strScript = ""
        If createFile(filePath, "sql") Then
            For iCount = 0 To txtSelectNo.Text - 1
                strScript &= "@" & lstAllTables.SelectedItems.Item(iCount).ToString().Trim() & ".sql;" & Chr(13) & Chr(10)
            Next
            strScript &= "Exit;"
            Print(hdSQLFile, strScript)
            FileClose(hdSQLFile)
        End If

    End Sub
    '产生标准数据库访问类"DbStdAccess"
    Private Sub generateDbStandardAccess()

        Dim stdFileName As String
        Dim filePath As String
        Dim fileName As String
        stdFileName = "DbStdAccess"
        fileName = makeFileName(stdFileName, "h")
        filePath = makeFilePath(stdFileName, "h")
        If createFile(filePath, "h") Then
            genDbStdFileHead(hdHeaderFile, fileName, "Database Standard Access Class", "h") '产生头文件
            FileClose(hdHeaderFile)
        End If
        fileName = makeFileName(stdFileName, "pc")
        filePath = makeFilePath(stdFileName, "pc")
        If createFile(filePath, "pc") Then
            genDbStdSourceFile(hdSourceFile, fileName, "Database Standard Access Class", "pc") '产生Pc文件
            FileClose(hdSourceFile)
        End If
    End Sub

    '关闭文件操作句柄
    Private Sub closeFileHandle()
        FileClose(hdHeaderFile)

    End Sub

    '产生访问数据表标准的函数
    Private Sub genDbStdSourceFile(ByVal hdfile As Integer, ByVal fileName As String, ByVal des As String, ByVal fileExt As String)
        Dim strCode As String = ""
        Dim strDate As String = Date.Now.Day.ToString("00") & "." & Date.Now.Month.ToString("00") & "." & Date.Now.Year

        strCode &= "/* ***************************************************************************/" & Chr(13) & Chr(10)
        strCode &= "/* *   File               :    " & fileName & Chr(13) & Chr(10)
        strCode &= "/* *   Short Description  :    " & des & Chr(13) & Chr(10)
        strCode &= "/* *   Author             :    DBCODE Generator." & Chr(13) & Chr(10)
        strCode &= "/* *   Created Date       :    " & strDate & Chr(13) & Chr(10)
        strCode &= "/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com " & Chr(13) & Chr(10)
        strCode &= "/* ***************************************************************************" & Chr(13) & Chr(10)
        strCode &= "/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved                     *" & Chr(13) & Chr(10)
        strCode &= "/* **************************************************************************/" & Chr(13) & Chr(10)

        strCode &= "#include  <stdio.h>" & Chr(13) & Chr(10)
        strCode &= "#include  <string.h>" & Chr(13) & Chr(10)
        strCode &= "#include  <stdlib.h>" & Chr(13) & Chr(10)

        strCode &= "#include """ & "DbStdAccess.h""" & Chr(13) & Chr(10) & Chr(13) & Chr(10)

        '声明主机变量
        strCode &= "#define SQLCA_STORAGE_CLASS static" & Chr(13) & Chr(10)
        strCode &= "EXEC SQL INCLUDE sqlca;" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "// Declare ORACLE Host variables" & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "EXEC SQL BEGIN DECLARE SECTION;" & Chr(13) & Chr(10)
        strCode &= vbTab & "static char".PadRight(18, " ") & "ora_UsrPwd[100];" & Chr(13) & Chr(10)
        strCode &= vbTab & "static VARCHAR".PadRight(18, " ") & "ora_dateTime[15];" & Chr(13) & Chr(10)
        strCode &= vbTab & "static short".PadRight(18, " ") & "ora_dateTimeZi;" & Chr(13) & Chr(10)
        strCode &= "EXEC SQL END DECLARE SECTION;" & Chr(13) & Chr(10) & Chr(13) & Chr(10)


        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "//constructor" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        strCode &= "DbStdAccess::DbStdAccess()" & Chr(13) & Chr(10)
        strCode &= "{" & Chr(13) & Chr(10)
        strCode &= vbTab & "pCatch = CatchDbaxError::instance();" & Chr(13) & Chr(10)
        strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)

        'dbLogin()函数
        strCode &= "//connect to DataBase" & Chr(13) & Chr(10)
        strCode &= "char* DbStdAccess::dbLogin( char* usrPwd )" & Chr(13) & Chr(10)
        strCode &= "{" & Chr(13) & Chr(10)
        strCode &= vbTab & "strcpy ( ora_UsrPwd , usrPwd );" & Chr(13) & Chr(10)
        strCode &= vbTab & "EXEC SQL CONNECT :ora_UsrPwd;" & Chr(13) & Chr(10)
        strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(13) & Chr(10)
        strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
        strCode &= vbTab & "if ( sqlca.sqlcode != 0 )" & Chr(13) & Chr(10)
        strCode &= vbTab & "{" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(10)
        strCode &= vbTab & vbTab & "return (char*) sqlca.sqlerrm.sqlerrmc ;" & Chr(10)
        strCode &= vbTab & "}" & Chr(13) & Chr(10)
        strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)
        strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)

        'dbLogout()函数
        strCode &= "//disconnect to DataBase and commit transaction " & Chr(13) & Chr(10)
        strCode &= "char* DbStdAccess::dbLogout()" & Chr(13) & Chr(10)
        strCode &= "{" & Chr(13) & Chr(10)

        strCode &= vbTab & "EXEC SQL COMMIT WORK RELEASE;" & Chr(13) & Chr(10)
        strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(13) & Chr(10)
        strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
        strCode &= vbTab & "if ( sqlca.sqlcode != 0 )" & Chr(13) & Chr(10)
        strCode &= vbTab & "{" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "return (char*) sqlca.sqlerrm.sqlerrmc ;" & Chr(13) & Chr(10)
        strCode &= vbTab & "}" & Chr(13) & Chr(10)
        strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)
        strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)

        'dbCommit()函数
        strCode &= "//commit transaction " & Chr(13) & Chr(10)
        strCode &= "char* DbStdAccess::dbCommit()" & Chr(13) & Chr(10)
        strCode &= "{" & Chr(13) & Chr(10)

        strCode &= vbTab & "EXEC SQL COMMIT WORK;" & Chr(13) & Chr(10)
        strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(13) & Chr(10)
        strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
        strCode &= vbTab & "if ( sqlca.sqlcode != 0 )" & Chr(13) & Chr(10)
        strCode &= vbTab & "{" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "return (char*) sqlca.sqlerrm.sqlerrmc ;" & Chr(13) & Chr(10)
        strCode &= vbTab & "}" & Chr(13) & Chr(10)
        strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)
        strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)

        'dbRollback()函数
        strCode &= "//rollback transaction " & Chr(13) & Chr(10)
        strCode &= "char* DbStdAccess::dbRollback()" & Chr(13) & Chr(10)
        strCode &= "{" & Chr(13) & Chr(10)

        strCode &= vbTab & "EXEC SQL ROLLBACK WORK;" & Chr(13) & Chr(10)
        strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(13) & Chr(10)
        strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
        strCode &= vbTab & "if ( sqlca.sqlcode != 0 )" & Chr(13) & Chr(10)
        strCode &= vbTab & "{" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "return (char*) sqlca.sqlerrm.sqlerrmc ;" & Chr(13) & Chr(10)
        strCode &= vbTab & "}" & Chr(13) & Chr(10)
        strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)
        strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)


        'getOracleDateTime()函数
        strCode &= "//returns ORACLE Date & Time format: DDMMYYYYHH24MISS " & Chr(13) & Chr(10)
        strCode &= "char* DbStdAccess::getOracleDateTime(char* oraDateTime)" & Chr(13) & Chr(10)
        strCode &= "{" & Chr(13) & Chr(10)

        strCode &= vbTab & "EXEC SQL SELECT TO_CHAR( sysdate , 'YYYYMMDDHH24MISS')" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "INTO :ora_dateTime:ora_dateTimeZi" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "FROM DUAL;" & Chr(13) & Chr(10)

        strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(13) & Chr(10)
        strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
        strCode &= vbTab & "if ( sqlca.sqlcode != 0 || ora_dateTimeZi == -1 )" & Chr(13) & Chr(10)
        strCode &= vbTab & "{" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "strcpy ( oraDateTime , """ & """ );" & Chr(13) & Chr(10)

        strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "return (char*) sqlca.sqlerrm.sqlerrmc ;" & Chr(13) & Chr(10)
        strCode &= vbTab & "}" & Chr(13) & Chr(10)
        strCode &= vbTab & "ora_dateTime.arr[ora_dateTime.len] = '\0';" & Chr(13) & Chr(10)
        strCode &= vbTab & "strcpy ( oraDateTime , (char*) ora_dateTime.arr );" & Chr(13) & Chr(10)
        strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)
        strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)

        Print(hdfile, strCode)
    End Sub

    '产生访问数据表头文件
    Private Sub genDbStdFileHead(ByVal hdfile As Integer, ByVal fileName As String, ByVal des As String, ByVal fileExt As String)

        Dim strCode As String = ""
        Dim strDate As String = Date.Now.Day.ToString("00") & "." & Date.Now.Month.ToString("00") & "." & Date.Now.Year

        strCode &= "/* *".PadRight(70, "*") & "*/" & Chr(13) & Chr(10)
        strCode &= "/* *   File               :    " & fileName & Chr(13) & Chr(10)
        strCode &= "/* *   Short Description  :    " & des & Chr(13) & Chr(10)
        strCode &= "/* *   Author             :    DB CODE Generator" & Chr(13) & Chr(10)
        strCode &= "/* *   Created Date       :    " & strDate & Chr(13) & Chr(10)
        strCode &= "/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com " & Chr(13) & Chr(10)
        strCode &= "/* *".PadRight(70, "*") & "*/" & Chr(13) & Chr(10)
        strCode &= "/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved" & Chr(13) & Chr(10)
        strCode &= "/* *".PadRight(70, "*") & "*/" & Chr(13) & Chr(10)

        Dim macro As String
        Dim classeName() As String
        classeName = fileName.Split(".")

        macro = Trim(fileName.Replace(".", "_").ToUpper)
        strCode = "#ifndef " & macro & Chr(13) & Chr(10)
        strCode &= "#define " & macro & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        strCode &= "#include " & """CatchDbaxError.h""" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        strCode &= "class " & Trim(classeName(0)) & Chr(13) & Chr(10)
        strCode &= "{" & Chr(13) & Chr(10)
        strCode &= "public:" & Chr(13) & Chr(10)


        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "//A T T R I B U T E S" & Chr(13) & Chr(10)
        strCode &= "//===================" & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= vbTab & "long     oracleSqlCode; // sqlcode of last operation" & Chr(13) & Chr(10)
        strCode &= vbTab & "long     oracleRowsProcessed; // number of executed rows" & Chr(13) & Chr(10)
        strCode &= vbTab & "CatchDbaxError*  pCatch; // pointer for Oracle Error handling" & Chr(13) & Chr(10)
        strCode &= vbTab & "int     print_ora_error();" & Chr(13) & Chr(10) & Chr(13) & Chr(10)


        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "// constructor" & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "public: " & Chr(13) & Chr(10)
        strCode &= "DbStdAccess();" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "// methods " & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "public:" & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "// connect to DB" & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "char* dbLogin( char* ); " & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "//	disconnect from DB " & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "char* dbLogout();" & Chr(13) & Chr(10) & Chr(13) & Chr(10)

        strCode &= "public:" & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "// commit transaktion " & Chr(13) & Chr(10)
        strCode &= "// " & Chr(13) & Chr(10)
        strCode &= "char* dbCommit(); " & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        strCode &= "public:" & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "// transaktion rollback " & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        strCode &= "char* dbRollback(); " & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "// get Oracle system date & time" & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "char* getOracleDateTime( char* dateTime );" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        strCode &= "};  // end of class " & Chr(13) & Chr(10)
        strCode &= "#endif  //" & macro & Chr(13) & Chr(10)
        Print(hdfile, strCode)


    End Sub

    '产生SQL文件公共部分
    Private Sub GenSqlComments(ByVal hdFile As Integer, ByVal strFileName As String, ByVal desc As String)
        Dim strCode As String = ""
        Dim strDate As String = Date.Now.Day.ToString("00") & "." & Date.Now.Month.ToString("00") & "." & Date.Now.Year
        strCode &= "REM".PadRight(70, "*") & Chr(13) & Chr(10)
        strCode &= "REM    File               :    " & strFileName & Chr(13) & Chr(10)
        strCode &= "REM    Short Description  :    Create Data Table SQL Scripts" & Chr(13) & Chr(10)
        strCode &= "REM    Author             :    DBCode Generator" & Chr(13) & Chr(10)
        strCode &= "REM    Created Date       :    " & strDate & Chr(13) & Chr(10)
        strCode &= "REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com " & Chr(13) & Chr(10)
        'strCode &= "REM".PadRight(70, "*") & Chr(13) & Chr(10)
        'strCode &= "REM             Copyright (c)  SGAI AI 2009. All Rights Reserved" & Chr(13) & Chr(10)
        strCode &= "REM".PadRight(70, "*") & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        REM DROP TABLE ...
        strCode &= "REM DROP TABLE ..." & Chr(13) & Chr(10)
        strCode &= "Drop Table " & strTableName & ";" & Chr(13) & Chr(10) '删除表文件
        strCode &= "REM CREATE TABLE ..." & Chr(13) & Chr(10) & Chr(13) & Chr(10)

        Print(hdFile, strCode)
    End Sub
    '产生PC文件公共部分
    Private Sub GenPcComments(ByVal hdFile As Integer, ByVal strFileName As String, ByVal desc As String)
        Dim strCode As String = ""
        Dim strDate As String = Date.Now.Day.ToString("00") & "." & Date.Now.Month.ToString("00") & "." & Date.Now.Year

        strCode &= "/* *".PadRight(70, "*") & "/" & Chr(13) & Chr(10)
        strCode &= "/* *   File               :    " & strFileName & Chr(13) & Chr(10)
        strCode &= "/* *   Short Description  :    ORACLE DATABASE ACCESS" & Chr(13) & Chr(10)
        strCode &= "/* * 		                   " & desc & Chr(13) & Chr(10)
        strCode &= "/* *   Author             :    DB CODE Generator" & Chr(13) & Chr(10)
        strCode &= "/* *   Created Date       :    " & strDate & Chr(13) & Chr(10)
        strCode &= "/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com " & Chr(13) & Chr(10)
        strCode &= "/* *".PadRight(70, "*") & "/" & Chr(13) & Chr(10)
        strCode &= "/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved" & Chr(13) & Chr(10)
        strCode &= "/* *".PadRight(70, "*") & "/" & Chr(13) & Chr(10) & Chr(13) & Chr(10)

        strCode &= "#include ""LOG.h""" & Chr(13) & Chr(10)                       '日志头文件
        strCode &= "#include " & """" & strTableName & ".h""" & Chr(13) & Chr(10) '数据表头文件


        strCode &= "//" & Chr(13) & Chr(10)
        strCode &= "// Declare ORACLE Host Variables" & Chr(13) & Chr(10)
        strCode &= "//" & Chr(13) & Chr(10) & Chr(13) & Chr(10)

        strCode &= "#define SQLCA_STORAGE_CLASS static" & Chr(13) & Chr(10)
        strCode &= "#define ORACA_STORAGE_CLASS static" & Chr(13) & Chr(10)
        strCode &= "EXEC SQL INCLUDE sqlca;" & Chr(13) & Chr(10)
        strCode &= "EXEC SQL INCLUDE oraca;" & Chr(13) & Chr(10) & Chr(13) & Chr(10)

        strCode &= "#define OPENED 1" & Chr(13) & Chr(10)
        strCode &= "#define CLOSED 2" & Chr(13) & Chr(10)
        strCode &= "EXEC SQL BEGIN DECLARE SECTION;" & Chr(13) & Chr(10)
        strCode &= "/* ****************************************************************************** */" & Chr(13) & Chr(10)
        strCode &= "/*                                                                                */" & Chr(13) & Chr(10)
        strCode &= "/*                               define Oracle                                    */" & Chr(13) & Chr(10)
        strCode &= "/*                               Host Variables                                   */" & Chr(13) & Chr(10)
        strCode &= "/*                                                          .                     */" & Chr(13) & Chr(10)
        strCode &= "/*                                                                                */" & Chr(13) & Chr(10)
        strCode &= "/* ****************************************************************************** */" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        strCode &= "static VARCHAR	dynstr[16000];" & Chr(13) & Chr(10)
        strCode &= "static long		rowCnt;       " & Chr(13) & Chr(10)
        strCode &= "static long		cuFl;         " & Chr(13) & Chr(10)

        Print(hdFile, strCode)
    End Sub

    '产生头文件公共部分
    Private Sub GenComments(ByVal hdFile As Integer, ByVal strFileName As String, ByVal desc As String)
        Dim strCode As String = ""
        Dim strDate As String = Date.Now.Day.ToString("00") & "." & Date.Now.Month.ToString("00") & "." & Date.Now.Year

        Print(hdFile, "/* *".PadRight(70, "*") & "*/" & Chr(13) & Chr(10))
        Print(hdFile, "/* *   File               :    " & strFileName, TAB(30), Chr(10))
        Print(hdFile, "/* *   Short Description  :    Database Class ," & desc, TAB(30), Chr(10))
        Print(hdFile, "/* *   Author             :    DB CODE Generator", TAB(30), Chr(10))
        Print(hdFile, "/* *   Created Date       :    " & strDate, TAB(30), Chr(10))
        Print(hdFile, "/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com ", TAB(30), Chr(10))
        Print(hdFile, "/* *".PadRight(70, "*") & "*/" & Chr(13) & Chr(10))
        Print(hdFile, "/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved" & Chr(13) & Chr(10))
        Print(hdFile, "/* *".PadRight(70, "*") & "*/" & Chr(13) & Chr(10))
        Dim macro As String
        macro = Trim(strFileName.Replace(".", "_").ToUpper)

        Print(hdFile, "#ifndef ", macro, endl)
        Print(hdFile, "#define ", macro, endl)
        Print(hdFile, endl)
        Print(hdFile, "#include	<stdio.h>", endl)
        Print(hdFile, "#include	<string.h>", endl)
        Print(hdFile, "#include	<stdlib.h>", endl)
        Print(hdFile, "#include    " & """CatchDbaxError.h""", endl)
        strCode = "class " & Trim(strTableName) & endl
        Print(hdFile, strCode)
        Print(hdFile, "{", endl)
        Print(hdFile, "public:", endl)
        Print(hdFile, "//", endl)
        Print(hdFile, "//A T T R I B U T E S", endl)
        Print(hdFile, "//===================", endl)
        Print(hdFile, "//", endl)
        Print(hdFile, TAB(5), "long     oracleSqlCode; // sqlcode of last operation")
        Print(hdFile, TAB(5), "long     oracleRowsProcessed; // number of executed rows")
        Print(hdFile, TAB(5), "CatchDbaxError*  pCatch; // pointer for Oracle Error handling")
        Print(hdFile, TAB(5), "bool     dbAccess;")
        Print(hdFile, TAB(5), "char*    dbMessage;	// pointer for the return values of DBAX methodes")
        Print(hdFile, TAB(5), "char     messageBuffer[200];	// temporary message buffer")
        Print(hdFile, endl)
    End Sub

    '产生头文件结尾部分
    Private Sub GenEndComments(ByVal hdFile As Integer, ByVal strFileName As String, ByVal extsion As String)
        Dim macro As String
        Dim strCode As String = ""

        If extsion = "h" Then
            macro = Trim(strFileName.Replace(".", "_").ToUpper)
            strCode = "};" & Chr(13) & Chr(10)
            strCode &= "#endif //" & macro & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        ElseIf extsion = "cp" Then
            strCode = "// END OF PC FILE." & Chr(13) & Chr(10)
            PkArgc = 0
            ReDim pkArgv(0)
        ElseIf extsion = "sql" Then
            strCode = Chr(13) & Chr(10)
            strCode &= "REM".PadRight(70, "*") & Chr(13) & Chr(10)
            strCode &= "REM             		End of Scripts" & Chr(13) & Chr(10)
            strCode &= "REM             Copyright (c)  SGAI AI 2009. All Rights Reserved" & Chr(13) & Chr(10)
            strCode &= "REM".PadRight(70, "*") & Chr(13) & Chr(10)
        End If
        Print(hdFile, strCode)
        FileClose(hdFile)

    End Sub

    Public Sub initGlobalVariables()
        endl = Chr(10)     'endline
        hdHeaderFile = FreeFile()
        hdSourceFile = FreeFile()
        hdSQLFile = FreeFile()
        hdSQLBatFile = FreeFile()
        strTableName = ""
    End Sub

    '设置目标文件路径
    Public Function setTargetDir() As Boolean
        Dim sqlStr As String
        Dim retVal As Integer = True
        Dim strDbPath As String
        ' Dim sqlType As String
        strDbPath = System.Environment.GetEnvironmentVariable("IPCPDBPATH", EnvironmentVariableTarget.User)
        If strDbPath = "" Then
            strDbPath = "C:"
        End If
        Try
            sqlStr = "select * from SettingData "
            dbCommand = New OleDb.OleDbCommand(sqlStr, dbConnection)
            dbReader = dbCommand.ExecuteReader
        Catch Ex As Exception
            retVal = False
            MsgBox(Err.Description)
        End Try
        While dbReader.Read()
            If dbReader("name").ToString() = "cppPath" Then
                If dbReader("cValue").ToString = "" Then
                    cppPath = strDbPath + "\src2"
                Else
                    cppPath = dbReader("cValue").ToString
                End If
                If System.IO.Directory.Exists(cppPath) = False Then
                    System.IO.Directory.CreateDirectory(cppPath)
                End If
            ElseIf dbReader("name").ToString() = "hppPath" Then
                If dbReader("cValue").ToString = "" Then
                    hppPath = strDbPath + "\inc"
                Else
                    hppPath = dbReader("cValue").ToString
                End If
                If System.IO.Directory.Exists(hppPath) = False Then
                    System.IO.Directory.CreateDirectory(hppPath)
                End If
            ElseIf dbReader("name").ToString() = "SQLPath" Then
                If dbReader("cValue").ToString = "" Then
                    sqlPath = strDbPath + "\sql"
                Else
                    sqlPath = dbReader("cValue").ToString
                End If
                If System.IO.Directory.Exists(sqlPath) = False Then
                    System.IO.Directory.CreateDirectory(sqlPath)
                End If
            End If
        End While
        dbCommand.Dispose()
        dbReader.Close()
        setTargetDir = retVal
    End Function

    '产生所有的文件.hpp,.pc,.sql
    Private Sub generateAll(ByVal selectVal As String)
        Dim fileName As String
        Dim filePath As String
        Dim RowNo As Integer = 0
        Dim sqlTable As String
        setStatusBar("Create Table:" & selectVal & "...")
        If selectVal = "" Then
            sqlTable = "select * from TableInfo"
        Else
            sqlTable = "select * from TableInfo where TableName = '" & selectVal & "'"
        End If
        Try
            dbCommand = New OleDb.OleDbCommand(sqlTable, dbConnection)
            dbReader = dbCommand.ExecuteReader
        Catch ex As Exception
            MsgBox(Err.Description)
        End Try
        While dbReader.Read()
            strTableName = dbReader("TableName").ToString()  '产生数据表头文件
            strTableSpaceName = dbReader("TableSpace").ToString() ' 产生数据表表空间
            fileName = makeFileName(strTableName, "h")
            filePath = makeFilePath(strTableName, "h")
            If filePath <> "" Then
                If createFile(filePath, "h") Then
                    'setStatusBar("Begin to Create Header File:" & fileName & "...")
                    genDeclarationFileHead(hdHeaderFile, fileName, dbReader("description").ToString(), "h") '产生头文件的注释和公共部分
                    RowNo = genAllAtrributes(hdHeaderFile, strTableName, "h")    '产生类属性
                    genFunctions(hdHeaderFile, strTableName, RowNo)     '产生类函数
                    GenEndComments(hdHeaderFile, fileName, "h")          '头文件结束，关闭文件
                    ' setStatusBar("End of Create Header File:" & fileName & ".")
                End If
            End If
            '开始创建pc文件
            fileName = makeFileName(strTableName, "pc")
            filePath = makeFilePath(strTableName, "pc")
            If filePath <> "" Then
                If createFile(filePath, "pc") Then
                    'setStatusBar("Begin to Create PC File:" & fileName & "...")
                    genDeclarationFileHead(hdSourceFile, fileName, dbReader("description").ToString(), "pc") '产生头文件的注释和公共部分
                    RowNo = genAllAtrributes(hdSourceFile, strTableName, "pc")    '产生类属性
                    genSourceFunctions(hdSourceFile, strTableName, RowNo)     '产生类函数
                    GenEndComments(hdSourceFile, fileName, "pc")          '头文件结束，关闭文件
                    'setStatusBar("End of Create PC File:" & fileName & "...")
                End If
            End If
            '开始创建SQL文件
            fileName = makeFileName(strTableName, "sql")
            filePath = makeFilePath(strTableName, "sql")
            If filePath <> "" Then
                If createFile(filePath, "sql") Then
                    'setStatusBar("Begin to Create Source File:" & fileName & "...")
                    genDeclarationFileHead(hdSQLFile, fileName, dbReader("description").ToString(), "sql") '产生头文件的注释和公共部分
                    RowNo = genAllAtrributes(hdSQLFile, strTableName, "sql")    '读取字段值
                    genSQLSourceFun(hdSQLFile, strTableName, RowNo, dbReader("description").ToString())     '产生SQL scripts
                    GenEndComments(hdSQLFile, fileName, "sql")          '头文件结束，关闭文件
                    'setStatusBar("End of Create Source File:" & fileName & "...")
                End If
            End If
        End While
    End Sub

    '从工程文件中获取表的所有字段信息
    Private Function genAllAtrributes(ByVal hdfile As Integer, ByVal fileName As String, ByVal fileExtstion As String) As Integer

        Dim strSql As String = "select * from TableFields where TableName = '" & strTableName & "' order by [No]"
        Try
            Dim dbCmd As OleDb.OleDbCommand = New OleDb.OleDbCommand(strSql, dbConnection)
            dbCmd = New OleDb.OleDbCommand(strSql, dbConnection)
            dbFieldReader = dbCmd.ExecuteReader()
        Catch ex As Exception
            MsgBox(Err.Description)
        End Try

        Dim icout As Integer = 0
        Dim rCount As Integer = 0

        While dbFieldReader.Read()
            VarList(icout).fdName = dbFieldReader("FieldName").ToString()       'FieldName
            VarList(icout).fdType = dbFieldReader("FieldType").ToString()       'FieldType
            VarList(icout).fdUnit = dbFieldReader("Unit").ToString()            'Unit
            VarList(icout).fdLength = (dbFieldReader("Length") + 1).ToString()        'Length
            VarList(icout).fdKey = dbFieldReader("isKey")                       ' Key
            VarList(icout).fdComment = dbFieldReader("Description").ToString()  'Description
            VarList(icout).fdIsNull = dbFieldReader("NotNull")                 'NotNull
            icout += 1
        End While
        rCount = icout - 1
        FieldCount = rCount

        Call PrintAttField(hdfile, rCount, fileExtstion)
        genAllAtrributes = rCount
    End Function

    '输出表的属性信息
    Private Sub PrintAttField(ByVal hdfile As Integer, ByVal icout As Integer, ByVal fileExtstion As String)
        Dim i As Integer = 0
        Dim strPrint As String = ""
        If fileExtstion = "h" Then
            strPrint &= "protected:		" & Chr(13) & Chr(10)
            strPrint &= "//			" & Chr(13) & Chr(10)
            strPrint &= "//A T T R I B U T E S " & Chr(13) & Chr(10)
            strPrint &= "//=================== " & Chr(13) & Chr(10)
            strPrint &= "//			" & endl

            For i = 0 To icout
                strPrint &= "//" & VarList(i).AttType().ToLower().PadRight(9, " ") & VarList(i).fdName & TAB1 & "=" & TAB1 & VarList(i).fdComment & Chr(13) & Chr(10)
                strPrint &= VarList(i).AttType.ToLower().PadRight(9, " ") & VarList(i).AttName() & ";" & Chr(13) & Chr(10)
                If VarList(i).fdIsNull = 0 Then
                    strPrint &= "short".PadRight(9, " ") & VarList(i).attZiName() & ";" & Chr(13) & Chr(10)
                End If
            Next
            strPrint &= "// arguments for Primary key" & Chr(13) & Chr(10)
            For i = 0 To icout
                If VarList(i).fdKey <> 0 Then
                    strPrint &= VarList(i).AttType().ToLower().PadRight(9, " ") & VarList(i).PkAttName() & ";".PadRight(4, " ") & "// " & VarList(i).fdComment & Chr(13) & Chr(10)
                End If
            Next
            strPrint &= Chr(13) & Chr(10) & "public:" & Chr(13) & Chr(10) & "//" & Chr(13) & Chr(10) & "//Structure" & Chr(13) & Chr(10) & "//" & Chr(13) & Chr(10)
            strPrint &= "struct STR_" & strTableName.ToUpper() & Chr(13) & Chr(10)
            strPrint &= "{" & Chr(13) & Chr(10)

            For i = 0 To icout
                strPrint &= vbTab & VarList(i).AttType().ToLower().PadRight(10, " ") & VarList(i).StrucName() & ";" & Chr(13) & Chr(10)
                If VarList(i).fdIsNull = 0 Then
                    strPrint &= vbTab & "short".PadRight(10, " ") & VarList(i).StrucZiName() & ";" & Chr(13) & Chr(10)
                End If
            Next
            strPrint &= "}struct" & strTableName & ";" & Chr(13) & Chr(10)
        ElseIf fileExtstion = "pc" Then
            For i = 0 To icout
                strPrint &= "//" & VarList(i).fdComment & Chr(13) & Chr(10)
                strPrint &= "static " & VarList(i).OraType().PadRight(9, " ") & VarList(i).OraHostName() & ";" & Chr(13) & Chr(10)
                If VarList(i).fdIsNull = 0 Then
                    strPrint &= "static short".PadRight(16, " ") & VarList(i).OraHostNameZi() & ";" & Chr(13) & Chr(10)
                End If
            Next
            strPrint &= "// Host arguments for Primary key" & Chr(13) & Chr(10)
            For i = 0 To icout
                If VarList(i).fdKey <> 0 Then
                    strPrint &= "static " & VarList(i).OraType().PadRight(9, " ") & VarList(i).PkOraHostName() & ";".PadRight(4, " ") & "// " & VarList(i).fdComment & Chr(13) & Chr(10)
                End If
            Next
            strPrint &= Chr(10) & "EXEC SQL END DECLARE SECTION;"
        End If

        Print(hdfile, strPrint, Chr(10), Chr(10))
    End Sub

    '产生SQL，创建表
    Private Sub genSQLSourceFun(ByVal hdfile As Integer, ByVal fileName As String, ByVal rCount As Integer, ByVal desc As String)
        Dim strCode As String
        Dim argv(10) As String
        Dim argList As String = ""
        Dim argc As Integer = 0
        Dim SqlType As String = ""
        Dim sqlChkName As String = ""
        strCode = "Create Table " & strTableName & "(" & Chr(13) & Chr(10)
        For argc = 0 To rCount
            sqlChkName = ","
            strCode &= vbTab & VarList(argc).fdName.PadRight(20, " ")
            If VarList(argc).fdType = "LONG" Or VarList(argc).fdType = "long" Or VarList(argc).fdType = "ULONG" Then
                SqlType = "NUMBER(10)"
                sqlChkName = "CONSTRAINT " & "c" & strTableName & "_" & argc & " CHECK (" & VarList(argc).fdName & " BETWEEN -2147483648 AND +2147483647),"
            ElseIf VarList(argc).fdType = "SHORT" Or VarList(argc).fdType = "short" Or VarList(argc).fdType = "USHORT" Then
                SqlType = "NUMBER(5)"
                sqlChkName = "CONSTRAINT " & "c" & strTableName & "_" & argc & " CHECK (" & VarList(argc).fdName & " BETWEEN -32768 AND +32767),"
            ElseIf VarList(argc).fdType = "FLOAT" Or VarList(argc).fdType = "float" Then
                SqlType = "FLOAT(126)"
            ElseIf VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                SqlType = "DATE"
            ElseIf VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "char" Or VarList(argc).fdType = "UCHAR" Then
                SqlType = "VARCHAR2(" & VarList(argc).fdLength - 1 & ")"
            End If
            strCode &= SqlType.PadRight(20, " ")
            If VarList(argc).fdIsNull <> 0 Then
                strCode &= "NOT NULL " & sqlChkName & Chr(13) & Chr(10)
            Else
                strCode &= sqlChkName & Chr(13) & Chr(10)
            End If
        Next
        strCode &= vbTab & "CONSTRAINT pk_" & strTableName & " PRIMARY KEY ("
        For argc = 0 To rCount
            If VarList(argc).fdKey <> 0 Then
                strCode &= VarList(argc).fdName & ","
            End If
        Next
        strCode = strCode.Substring(0, strCode.Length() - 1)
        strCode &= ")" & Chr(13) & Chr(10)
        strCode &= vbTab & "USING INDEX TABLESPACE INDTBS STORAGE  ( FREELIST GROUPS 2 ) " & Chr(13) & Chr(10)
        strCode &= ")" & Chr(13) & Chr(10)
        If strTableSpaceName <> "" Then
            strCode &= "TABLESPACE " & strTableSpaceName & Chr(13) & Chr(10)
        Else
            strCode &= "TABLESPACE USERS" & Chr(13) & Chr(10)
        End If
        strCode &= "PCTFREE	20" & Chr(13) & Chr(10)
        strCode &= "STORAGE (     INITIAL	500K" & Chr(13) & Chr(10)
        strCode &= "              NEXT	    500K" & Chr(13) & Chr(10)
        strCode &= "              MINEXTENTS	1" & Chr(13) & Chr(10)
        strCode &= "              MAXEXTENTS	UNLIMITED" & Chr(13) & Chr(10)
        strCode &= "              PCTINCREASE	0" & Chr(13) & Chr(10)
        strCode &= "       FREELIST GROUPS 2 );" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        Print(hdfile, strCode)
        strCode = "COMMENT ON Table " & strTableName & " IS ' " & desc & " ';" & Chr(13) & Chr(10)
        For argc = 0 To rCount
            strCode &= "COMMENT ON COLUMN " & strTableName & "." & VarList(argc).fdName & " IS ' " & VarList(argc).fdComment & " ';" & Chr(13) & Chr(10)
        Next
        strCode &= "/" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        Print(hdfile, strCode)

        strCode = "REM".PadRight(40, "*") & Chr(13) & Chr(10)
        strCode &= "REM INSERT TRIGGER FOR TABLE" & Chr(13) & Chr(10)
        strCode &= "REM" & vbTab & strTableName & Chr(13) & Chr(10)
        strCode &= "REM".PadRight(40, "*") & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        strCode &= "DROP TRIGGER ins_b_" & strTableName & ";" & Chr(13) & Chr(10)
        strCode &= "CREATE OR REPLACE TRIGGER ins_b_" & strTableName & Chr(13) & Chr(10)
        strCode &= "BEFORE INSERT ON " & strTableName & " FOR EACH ROW" & Chr(13) & Chr(10)
        strCode &= "DECLARE" & Chr(13) & Chr(10)
        strCode &= vbTab & "programm 		VARCHAR(120);" & Chr(13) & Chr(10)
        strCode &= vbTab & "user     		VARCHAR(30); " & Chr(13) & Chr(10)
        strCode &= vbTab & "session_id 		NUMBER;      " & Chr(13) & Chr(10)
        strCode &= "BEGIN" & Chr(13) & Chr(10)
        strCode &= vbTab & "SELECT userenv('SESSIONID') INTO session_id FROM dual;" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "BEGIN" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "SELECT program,username INTO programm,user FROM V$SESSION" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "WHERE audsid = session_id;" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "EXCEPTION" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "WHEN NO_DATA_FOUND THEN" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & vbTab & vbTab & "programm := 'UNKNOWN';" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & vbTab & vbTab & "user := 'UNKNOWN';" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "WHEN OTHERS THEN" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & vbTab & vbTab & "IF (session_id = 0) THEN" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & vbTab & vbTab & "programm := 'JOB';" & Chr(13) & Chr(10)
        strCode &= "			ELSE" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & vbTab & vbTab & "programm := 'UNKNOWN';" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "END IF;" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "END;" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & ":new.toc := sysdate;" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & ":new.tom := sysdate;" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & ":new.mop := substr( programm ,1 ,60);" & Chr(13) & Chr(10)
        strCode &= "END;" & Chr(13) & Chr(10)
        strCode &= "/" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        Print(hdfile, strCode)

        strCode = "REM".PadRight(40, "*") & Chr(13) & Chr(10)
        strCode &= "REM UPDATE TRIGGER FOR TABLE" & Chr(13) & Chr(10)
        strCode &= "REM" & vbTab & strTableName & Chr(13) & Chr(10)
        strCode &= "REM".PadRight(40, "*") & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        strCode &= "DROP TRIGGER upd_b_" & strTableName & ";" & Chr(13) & Chr(10)
        strCode &= "CREATE OR REPLACE TRIGGER upd_b_" & strTableName & Chr(13) & Chr(10)
        strCode &= "BEFORE UPDATE ON " & strTableName & " FOR EACH ROW" & Chr(13) & Chr(10)
        strCode &= "DECLARE" & Chr(13) & Chr(10)
        strCode &= vbTab & "programm 		VARCHAR(120);" & Chr(13) & Chr(10)
        strCode &= vbTab & "user     		VARCHAR(30); " & Chr(13) & Chr(10)
        strCode &= vbTab & "session_id 		NUMBER;      " & Chr(13) & Chr(10)
        strCode &= "BEGIN" & Chr(13) & Chr(10)
        strCode &= vbTab & "SELECT userenv('SESSIONID') INTO session_id FROM dual;" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "BEGIN" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "SELECT program,username INTO programm,user FROM V$SESSION" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "WHERE audsid = session_id;" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "EXCEPTION" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "WHEN NO_DATA_FOUND THEN" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & vbTab & vbTab & "programm := 'UNKNOWN';" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & vbTab & vbTab & "user := 'UNKNOWN';" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "WHEN OTHERS THEN" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & vbTab & vbTab & "IF (session_id = 0) THEN" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & vbTab & vbTab & "programm := 'JOB';" & Chr(13) & Chr(10)
        strCode &= "			ELSE" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & vbTab & vbTab & "programm := 'UNKNOWN';" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "END IF;" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & "END;" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & ":new.tom := sysdate;" & Chr(13) & Chr(10)
        strCode &= vbTab & vbTab & ":new.mop := substr( programm ,1 ,60);" & Chr(13) & Chr(10)
        strCode &= "END;" & Chr(13) & Chr(10)
        strCode &= "/" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        Print(hdfile, strCode)
    End Sub

    '产生头文件标准函数
    Private Sub genSourceFunctions(ByVal hdfile As Integer, ByVal fileName As String, ByVal rCount As Integer)

        Dim strCode As String
        Dim NSP As String = strTableName & "::"
        Dim argv(10) As String
        Dim argList As String = ""
        Dim argc As Integer = 0

        strCode = "// 				             " & Chr(13) & Chr(10)
        strCode &= "//C O N S T R U C T O R S    " & Chr(13) & Chr(10)
        strCode &= "//=======================    " & Chr(13) & Chr(10)
        strCode &= "//                           " & Chr(13) & Chr(10)

        strCode &= NSP & strTableName & "()" & Chr(13) & Chr(10)
        strCode &= "{" & Chr(13) & Chr(10)
        'strCode &= vbTab & "oraca.oradbgf  = 1; // gather debug informations       " & Chr(13) & Chr(10)
        'strCode &= vbTab & "oraca.oracchf  = 1; // gather cursor cache informations" & Chr(13) & Chr(10)
        'strCode &= vbTab & "oraca.orahchf  = 1; // check heap                      " & Chr(13) & Chr(10)
        'strCode &= vbTab & "oraca.orastxtf = 3; // always save last sql-statement  " & Chr(13) & Chr(10)
        'strCode &= vbTab & "                                                       " & Chr(13) & Chr(10)
        'strCode &= vbTab & "EXEC ORACLE OPTION (ORACA=YES);                        " & Chr(13) & Chr(10)
        'strCode &= vbTab & "EXEC ORACLE OPTION (HOLD_CURSOR=YES);                  " & Chr(13) & Chr(10)
        'strCode &= vbTab & "EXEC ORACLE OPTION (RELEASE_CURSOR=NO);                " & Chr(13) & Chr(10)
        'strCode &= vbTab & "EXEC ORACLE OPTION (MAXOPENCURSORS=50);                " & Chr(13) & Chr(10)
        'strCode &= vbTab & "pCatch = CatchDbaxError::instance();                   " & Chr(13) & Chr(10)
        'strCode &= vbTab & "                                                       " & Chr(13) & Chr(10)
        strCode &= vbTab & "initial();                                             " & Chr(13) & Chr(10)
        strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        Print(hdfile, strCode)

        strCode = "//					" & Chr(13) & Chr(10)
        strCode &= "//C O P Y  -  C O N S T R U C T O R " & Chr(13) & Chr(10)
        strCode &= "//==================================" & Chr(13) & Chr(10)
        strCode &= NSP & strTableName & "(const " & strTableName & " &inst)" & Chr(13) & Chr(10)
        strCode &= "{" & Chr(13) & Chr(10)

        For argc = 0 To rCount
            strCode &= "//----------------------------------------------------------" & Chr(13) & Chr(10)
            strCode &= vbTab & "this->" & VarList(argc).setAttFunName() & "(inst." & VarList(argc).getAttFunName() & "());" & Chr(13) & Chr(10)
            If VarList(argc).fdIsNull = 0 Then
                strCode &= vbTab & "this->" & VarList(argc).setAttZiFunName() & "(inst." & VarList(argc).getAttZiFunName() & "());" & Chr(13) & Chr(10)
            End If
        Next
        strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        Print(hdfile, strCode)

        strCode = "//					" & Chr(13) & Chr(10)
        strCode &= "//C O N S T R U C T O R -W I T H P A R A M E T E R S" & Chr(13) & Chr(10)
        strCode &= "//===================================================" & Chr(13) & Chr(10)
        strCode &= "//					" & Chr(13) & Chr(10)

        strCode &= NSP & strTableName & "("
        Print(hdfile, strCode)
        strCode = ""
        If PkArgc >= 1 Then
            For argc = 0 To PkArgc - 1
                strCode &= pkArgv(argc) & ","
            Next
            strCode = strCode.Substring(0, strCode.Length() - 1)
        End If
        strCode &= ")" & Chr(13) & Chr(10) & "{" & Chr(13) & Chr(10)


        strCode &= vbTab & "initial();					               " & Chr(13) & Chr(10)
        strCode &= vbTab & "setPrimKey ("
        Print(hdfile, strCode)
        strCode = ""
        If PkArgc >= 1 Then
            For argc = 0 To PkArgc - 1
                strCode &= "arg" & argc + 1 & ","
            Next
            strCode = strCode.Substring(0, strCode.Length() - 1)
        End If
        strCode &= ");    " & Chr(13) & Chr(10)
        strCode &= vbTab & "//read DB record                           " & Chr(13) & Chr(10)
        strCode &= vbTab & "dbAccess = true;                           " & Chr(13) & Chr(10)
        strCode &= vbTab & "dbMessage = readDB();                      " & Chr(13) & Chr(10)
        strCode &= vbTab & "if ( dbMessage != NULL ) dbAccess = false; " & Chr(13) & Chr(10)
        strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        Print(hdfile, strCode)

        strCode = "//D E S T R U C T O R S  " & Chr(13) & Chr(10)
        strCode &= "//=======================" & Chr(13) & Chr(10)
        strCode &= "//                       " & Chr(13) & Chr(10)
        strCode &= strTableName & "::~" & strTableName & "()" & Chr(13) & Chr(10)
        strCode &= "{" & Chr(13) & Chr(10)
        strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
        Print(hdfile, strCode)
        Call printStdFunSource(hdfile, rCount)

        ' Print(hdfile, strCode)

    End Sub
    Private Sub printStdFunSource(ByVal hdfile As Integer, ByVal rCount As Integer)
        Dim strSql As String = "select * from StdFunctions"
        Dim strTime As String = """" & DateTime.Now.Day.ToString("00") & "." & DateTime.Now.Month.ToString("00") & "." & Now.Year & " " & DateTime.Now.Hour.ToString("00:") & DateTime.Now.Minute.ToString("00:") & DateTime.Now.Second.ToString("00") & """"
        Dim strCodePub As String = ""
        Dim strCodePrv As String = ""
        Dim iField As Integer = 0
        Dim funId As String
        Dim strCode As String = ""
        Dim argc As Integer
        Dim strObj As String = "ptr" & strTableName
        NSP = strTableName & "::"
        Dim strSpilt(3) As String
        Dim strTmpCode As String = ""
        ' Print(hdfile, strCode)
        Try
            Dim dbFunSrcCmd As OleDb.OleDbCommand = New OleDb.OleDbCommand(strSql, dbConnection)
            dbFunSrcCmd = New OleDb.OleDbCommand(strSql, dbConnection)
            dbStdFunSrcReader = dbFunSrcCmd.ExecuteReader()
        Catch ex As Exception
            MsgBox(Err.Description)
        End Try
        While dbStdFunSrcReader.Read()

            funId = dbStdFunSrcReader("FunId").ToString()
            Select Case funId
                Case "2500"                         'operator+()
                    strCode = "//			         " & Chr(13) & Chr(10)
                    strCode &= "//O P E R A T O R  + " & Chr(13) & Chr(10)
                    strCode &= "//===================" & Chr(13) & Chr(10)
                    strCode &= "//                   " & Chr(13) & Chr(10)
                    strCode &= strTableName & " " & NSP & dbStdFunSrcReader("FunName").ToString() & "(const " & Trim(strTableName) & " &inst) const" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & strTableName & TAB1 & strObj & "(*this);" & Chr(13) & Chr(10)
                    'strcode & = tab4 & 
                    For argc = 0 To FieldCount
                        strCode &= "//----------------------------------------------------------" & Chr(13) & Chr(10)
                        'strCode &= vbTab & strObj & "." & VarList(argc).setAttFunName() & "(inst." & VarList(argc).getAttFunName() & "());" & Chr(10)
                        If VarList(argc).fdIsNull = 0 Then
                            strCode &= vbTab & "if(inst." & VarList(argc).getAttZiFunName() & "() != -1)" & Chr(13) & Chr(10)
                            strCode &= vbTab & "{" & Chr(13) & Chr(10)
                            strCode &= vbTab & vbTab & strObj & "." & VarList(argc).setAttFunName() & "(inst." & VarList(argc).getAttFunName() & "());" & Chr(13) & Chr(10)
                            strCode &= vbTab & vbTab & strObj & "." & VarList(argc).setAttZiFunName() & "(inst." & VarList(argc).getAttZiFunName() & "());" & Chr(13) & Chr(10)
                            strCode &= vbTab & "}" & Chr(13) & Chr(10)
                        Else
                            strCode &= vbTab & strObj & "." & VarList(argc).setAttFunName() & "(inst." & VarList(argc).getAttFunName() & "());" & Chr(13) & Chr(10)
                        End If
                    Next
                    strCode &= vbTab & "return( " & strObj & " );" & Chr(13) & Chr(10)
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)
                Case "2600"                         'operator=()
                    strCode = "//			         " & Chr(13) & Chr(10)
                    strCode &= "//O P E R A T O R  = " & Chr(13) & Chr(10)
                    strCode &= "//===================" & Chr(13) & Chr(10)
                    strCode &= "//                   " & Chr(13) & Chr(10)
                    strCode &= "const " & strTableName & "& " & NSP & dbStdFunSrcReader("FunName").ToString() & "(const " & Trim(strTableName) & " &inst)" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)
                    For argc = 0 To FieldCount
                        strCode &= "//----------------------------------------------------------" & Chr(13) & Chr(10)
                        strCode &= vbTab & "this->" & VarList(argc).setAttFunName() & "(inst." & VarList(argc).getAttFunName() & "());" & Chr(13) & Chr(10)
                        If VarList(argc).fdIsNull = 0 Then
                            strCode &= vbTab & "this->" & VarList(argc).setAttZiFunName() & "(inst." & VarList(argc).getAttZiFunName() & "());" & Chr(13) & Chr(10)
                        End If
                    Next
                    strCode &= vbTab & "return(*this);" & Chr(13) & Chr(10)
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)
                Case "2200"             'setPrimKey()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "("
                    Print(hdfile, strCode)
                    strCode = ""
                    If PkArgc >= 1 Then
                        For argc = 0 To PkArgc - 1
                            strCode &= "," & pkArgv(argc)
                        Next
                        strCode = strCode.Substring(1, strCode.Length() - 1)
                    End If
                    strCode &= ")" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)

                    For argc = 0 To PkArgc - 1
                        If pkFieldList(argc).pkType = "char" Then
                            strSpilt = pkFieldList(argc).pkAttName.Split("[")
                            strCode &= vbTab & "strncpy( (char*)" & strSpilt(0) & ", arg" & argc + 1 & ", sizeof(" & strSpilt(0) & "));" & Chr(13) & Chr(10)
                            strCode &= vbTab & strSpilt(0) & "[sizeof(" & strSpilt(0) & ")-1] = '\0';" & Chr(13) & Chr(10)
                        Else
                            strCode &= vbTab & pkFieldList(argc).pkAttName & " = arg" & argc + 1 & ";" & Chr(13) & Chr(10)
                        End If
                    Next
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)
                Case "2300"                        'initInsertKeys()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "("
                    Print(hdfile, strCode)
                    strCode = ""
                    If PkArgc >= 1 Then
                        For argc = 0 To PkArgc - 1
                            strCode &= "," & pkArgv(argc)
                        Next
                        strCode = strCode.Substring(1, strCode.Length() - 1)
                    End If
                    strCode &= ")" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & "setPrimKey("
                    If PkArgc >= 1 Then
                        For argc = 0 To PkArgc - 1
                            strCode &= "arg" & argc + 1 & ","
                        Next
                        strCode = strCode.Substring(0, strCode.Length() - 1)
                    End If
                    strCode &= ");" & Chr(13) & Chr(10)
                    For argc = 0 To PkArgc - 1
                        If pkFieldList(argc).pkType = "char" Then
                            strSpilt = pkFieldList(argc).pkStruName.Split("[")
                            strCode &= vbTab & "strncpy( (char*)" & strSpilt(0) & ", arg" & argc + 1 & ", sizeof(" & strSpilt(0) & "));" & Chr(13) & Chr(10)
                            strCode &= vbTab & strSpilt(0) & "[sizeof(" & strSpilt(0) & ")-1] = '\0';" & Chr(13) & Chr(10)
                        Else
                            strCode &= vbTab & pkFieldList(argc).pkStruName & " = arg" & argc + 1 & ";" & Chr(13) & Chr(10)
                        End If
                    Next
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)
                Case "2400"             'setKeysFromRecord()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)
                    For argc = 0 To rCount
                        If VarList(argc).fdKey <> 0 Then
                            strCode &= vbTab & VarList(argc).setPkFunName() & "( " & VarList(argc).getAttFunName() & "() );" & Chr(13) & Chr(10)
                        End If
                    Next
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)
                Case "1010"         'initial()
                    Dim strVal As String = ""
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)
                    strTmpCode = vbTab & "//initialies Primary key members" & Chr(13) & Chr(10)
                    For argc = 0 To rCount

                        If VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Or VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                            strVal = """"""
                        Else
                            strVal = "0"
                        End If
                        strCode &= vbTab & VarList(argc).setAttFunName() & "(" & strVal & ");" & Chr(13) & Chr(10)
                        If VarList(argc).fdIsNull = 0 Then
                            strCode &= vbTab & VarList(argc).setAttZiFunName() & "(-1);" & Chr(13) & Chr(10)
                        End If
                        If VarList(argc).fdKey <> 0 Then
                            strTmpCode &= vbTab & VarList(argc).setPkFunName() & "(" & strVal & ");" & Chr(13) & Chr(10)
                        End If
                    Next
                    strTmpCode &= "// Initial Oracle Options" & Chr(13) & Chr(10)
                    strTmpCode &= vbTab & "oraca.oradbgf  = 1; // gather debug informations       " & Chr(13) & Chr(10)
                    strTmpCode &= vbTab & "oraca.oracchf  = 1; // gather cursor cache informations" & Chr(13) & Chr(10)
                    strTmpCode &= vbTab & "oraca.orahchf  = 1; // check heap                      " & Chr(13) & Chr(10)
                    strTmpCode &= vbTab & "oraca.orastxtf = 3; // always save last sql-statement  " & Chr(13) & Chr(10)
                    strTmpCode &= vbTab & "                                                       " & Chr(13) & Chr(10)
                    strTmpCode &= vbTab & "EXEC ORACLE OPTION (ORACA=YES);                        " & Chr(13) & Chr(10)
                    strTmpCode &= vbTab & "EXEC ORACLE OPTION (HOLD_CURSOR=YES);                  " & Chr(13) & Chr(10)
                    strTmpCode &= vbTab & "EXEC ORACLE OPTION (RELEASE_CURSOR=NO);                " & Chr(13) & Chr(10)
                    strTmpCode &= vbTab & "EXEC ORACLE OPTION (MAXOPENCURSORS=50);                " & Chr(13) & Chr(10)
                    strTmpCode &= vbTab & "pCatch = CatchDbaxError::instance();                   " & Chr(13) & Chr(10)
                    strTmpCode &= vbTab & "                                                       " & Chr(13) & Chr(10)
                    strTmpCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)
                    Print(hdfile, strTmpCode)
                Case "1800"             'copyOracleToAttribute()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= "//copys Oracle Host variables into Object attributes." & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)
                    For argc = 0 To rCount

                        If VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Or VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                            strSpilt = VarList(argc).OraHostName().Split("[")
                            strCode &= vbTab & strSpilt(0) & ".arr[" & strSpilt(0) & ".len] = '\0';" & Chr(13) & Chr(10)
                            strCode &= vbTab & "this->" & VarList(argc).setAttFunName() & "((char*) " & strSpilt(0) & ".arr);" & Chr(13) & Chr(10)
                        Else
                            strCode &= vbTab & "this->" & VarList(argc).setAttFunName() & "((" & VarList(argc).AttType().ToLower() & ")" & VarList(argc).OraHostName() & ");" & Chr(13) & Chr(10)
                        End If
                        If VarList(argc).fdIsNull = 0 Then
                            strSpilt = VarList(argc).OraHostNameZi().Split("[")
                            strCode &= vbTab & "this->" & VarList(argc).setAttZiFunName() & "((short)" & strSpilt(0) & ");" & Chr(13) & Chr(10)
                        End If
                    Next
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)
                Case "1700"             'copyAttributeToOracle()
                    Dim oraStrSplit(3) As String
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= "//copys Object attributes into Oracle Host variables." & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & "char* ptrStr;" & Chr(13) & Chr(10)
                    For argc = 0 To rCount

                        If VarList(argc).AttType() = "char" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Or VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then

                            strSpilt = VarList(argc).StrucName().Split("[")
                            oraStrSplit = VarList(argc).OraHostName().Split("[")
                            strCode &= vbTab & "ptrStr = this->" & strSpilt(0) & "();" & Chr(13) & Chr(10)
                            strCode &= vbTab & "if( strlen(ptrStr)< sizeof(" & oraStrSplit(0) & ".arr))" & Chr(13) & Chr(10)
                            strCode &= vbTab & "{" & Chr(13) & Chr(10)
                            strCode &= vbTab & vbTab & "strncpy((char*)" & oraStrSplit(0) & ".arr, ptrStr, sizeof(" & oraStrSplit(0) & ".arr));" & Chr(13) & Chr(10)
                            strCode &= vbTab & vbTab & oraStrSplit(0) & ".len = strlen (ptrStr);" & Chr(13) & Chr(10)
                            strCode &= vbTab & "}" & Chr(13) & Chr(10)
                            strCode &= vbTab & "else" & Chr(13) & Chr(10)
                            strCode &= vbTab & "// set length to zero." & Chr(13) & Chr(10)
                            strCode &= vbTab & vbTab & oraStrSplit(0) & ".len = 0;" & Chr(13) & Chr(10)

                        Else
                            strCode &= vbTab & VarList(argc).OraHostName() & " = this->" & VarList(argc).getAttFunName() & "();" & Chr(13) & Chr(10)
                        End If
                        If VarList(argc).fdIsNull = 0 Then
                            strCode &= vbTab & VarList(argc).OraHostNameZi() & " = this->" & VarList(argc).getAttZiFunName() & "();" & Chr(10)
                        End If
                    Next
                    strCode &= "}" & Chr(10) & Chr(10)
                    Print(hdfile, strCode)
                Case "1900"             'copyKeyToHost()
                    Dim oraStrSplit(3) As String
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= "//copys Object attributes into Oralce Key variables." & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & "char* ptrStr;" & Chr(13) & Chr(10)
                    For argc = 0 To rCount
                        If VarList(argc).fdKey <> 0 Then
                            If VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Or VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                                strSpilt = VarList(argc).PkStrucName().Split("[")
                                oraStrSplit = VarList(argc).PkOraHostName().Split("[")
                                strCode &= vbTab & "ptrStr = this->" & strSpilt(0) & "();" & Chr(13) & Chr(10)
                                strCode &= vbTab & "if( strlen(ptrStr)< sizeof(" & oraStrSplit(0) & ".arr))" & Chr(13) & Chr(10)
                                strCode &= vbTab & "{" & Chr(13) & Chr(10)
                                strCode &= vbTab & vbTab & "strncpy((char*)" & oraStrSplit(0) & ".arr, ptrStr, sizeof(" & oraStrSplit(0) & ".arr));" & Chr(13) & Chr(10)
                                strCode &= vbTab & vbTab & oraStrSplit(0) & ".len = strlen (ptrStr);" & Chr(13) & Chr(10)
                                strCode &= vbTab & "}" & Chr(13) & Chr(10)
                                strCode &= vbTab & "else" & Chr(13) & Chr(10)
                                strCode &= vbTab & "// set length to zero." & Chr(13) & Chr(10)
                                strCode &= vbTab & vbTab & oraStrSplit(0) & ".len = 0;" & Chr(13) & Chr(10)
                            Else
                                strCode &= vbTab & VarList(argc).PkOraHostName() & " = this->" & VarList(argc).getPkFunName() & "();" & Chr(13) & Chr(10)

                            End If
                        End If
                    Next
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)
                Case "2000"             'copyHostTokey()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= "// copys Oracle Host Key variables into Object Key attributes." & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)
                    For argc = 0 To rCount
                        If VarList(argc).fdKey <> 0 Then
                            If VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Or VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                                strSpilt = VarList(argc).OraHostName().Split("[")
                                strCode &= vbTab & strSpilt(0) & ".arr[" & strSpilt(0) & ".len] = '\0';" & Chr(13) & Chr(10)
                                strCode &= vbTab & "this->" & VarList(argc).setPkFunName() & "((char*) " & strSpilt(0) & ".arr);" & Chr(13) & Chr(10)
                            Else
                                strCode &= vbTab & "this->" & VarList(argc).setPkFunName() & "((" & VarList(argc).AttType().ToLower() & ")" & VarList(argc).OraHostName() & ");" & Chr(13) & Chr(10)
                            End If
                        End If
                    Next
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)
                Case "2100"             'logStructueInfo()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & "LOG d(""" & NSP & dbStdFunSrcReader("FunName").ToString() & "()"");" & Chr(13) & Chr(10)
                    strCode &= vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oraca.orastxt.orastxtc[oraca.orastxt.orastxtl] = '\0';" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oraca.orasfnm.orasfnmc[oraca.orasfnm.orasfnml] = '\0';" & Chr(13) & Chr(10)
                    strCode &= vbTab & Chr(13) & Chr(10)
                    strCode &= vbTab & "//* negating a error code submitted perhaps positively." & Chr(13) & Chr(10)
                    strCode &= vbTab & "if (sqlca.sqlcode > 0) sqlca.sqlcode *= -1;" & Chr(13) & Chr(10)
                    strCode &= vbTab & Chr(13) & Chr(10)
                    strCode &= vbTab & "//* Distribute fault text, SQL statement and file in the Debug System." & Chr(13) & Chr(10)
                    strCode &= vbTab & "d << " & """ORA-Error: """ & "<< sqlca.sqlerrm.sqlerrmc; d.Info();" & Chr(13) & Chr(10)
                    strCode &= vbTab & "d << " & """OracaText: """ & "<< oraca.orastxt.orastxtc; d.Info();" & Chr(13) & Chr(10)
                    strCode &= vbTab & "d << " & """in line """ & " << oraca.oraslnr << " & """ in file """ & " << oraca.orasfnm.orasfnmc; d.Info();" & Chr(13) & Chr(10)
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)

                Case "1020"             'readDB()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//copy the host variables (k_...) to Oracle Host Keys (k_ora_..)" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "	copyKeyToHost();" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "// Do SELECT" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "EXEC SQL SELECT " & Chr(13) & Chr(10)
                    For argc = 0 To rCount
                        If VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                            strCode &= vbTab & vbTab & "TO_CHAR(" & VarList(argc).fdName & " , 'YYYYMMDDHH24MISS')" & "," & Chr(13) & Chr(10)
                        Else
                            strCode &= vbTab & vbTab & VarList(argc).fdName & "," & Chr(13) & Chr(10)
                        End If
                    Next
                    strCode = strCode.Substring(0, strCode.Length() - 3)
                    strCode &= Chr(10) & vbTab & "INTO" & Chr(13) & Chr(10)
                    For argc = 0 To rCount
                        If VarList(argc).fdIsNull = 0 Then
                            If VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Or VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                                strSpilt = VarList(argc).OraHostName().Split("[")
                                strCode &= vbTab & vbTab & ":" & strSpilt(0) & ":" & VarList(argc).OraHostNameZi() & "," & Chr(13) & Chr(10)
                            Else
                                strCode &= vbTab & vbTab & ":" & VarList(argc).OraHostName() & ":" & VarList(argc).OraHostNameZi() & "," & Chr(13) & Chr(10)
                            End If
                        Else
                            If VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Or VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                                strSpilt = VarList(argc).OraHostName().Split("[")
                                strCode &= vbTab & vbTab & ":" & strSpilt(0) & "," & Chr(13) & Chr(10)
                            Else
                                strCode &= vbTab & vbTab & ":" & VarList(argc).OraHostName() & "," & Chr(13) & Chr(10)
                            End If
                        End If
                    Next
                    strCode = strCode.Substring(0, strCode.Length() - 3) & Chr(13) & Chr(10)
                    strCode &= vbTab & "FROM " & strTableName & Chr(13) & Chr(10)
                    strCode &= vbTab & "WHERE" & Chr(13) & Chr(10)

                    For argc = 0 To rCount

                        If VarList(argc).fdKey <> 0 Then
                            If VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Or VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                                strSpilt = VarList(argc).PkOraHostName().Split("[")
                                If VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                                    strCode &= vbTab & vbTab & vbTab & vbTab & VarList(argc).fdName.PadRight(15, " ") & " = TO_DATE( :" & strSpilt(0) & ", 'YYYYMMDDHH24MISS') AND " & Chr(13) & Chr(10)
                                Else
                                    strCode &= vbTab & vbTab & vbTab & vbTab & VarList(argc).fdName.PadRight(15, " ") & " = :" & strSpilt(0) & " AND " & Chr(13) & Chr(10)
                                End If

                            Else
                                strCode &= vbTab & vbTab & vbTab & vbTab & VarList(argc).fdName.PadRight(15, " ") & " = :" & VarList(argc).PkOraHostName & " AND " & Chr(13) & Chr(10)
                            End If
                        End If
                    Next
                    strCode = strCode.Substring(0, strCode.Length() - 6)
                    strCode &= ";" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "// ORACLE Error " & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
                    strCode &= vbTab & "if ( sqlca.sqlcode != 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "logOraMessageInfo();" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "return (char*)sqlca.sqlerrm.sqlerrmc;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "// copy host variables into Class attributes" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "copyOracleToAttribute();" & Chr(13) & Chr(10)
                    strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)

                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)


                Case "1030"             'updateDB()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//copy the host variables (k_...) to Oracle Host Keys (k_ora_..)" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "	copyKeyToHost();" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//copy the attributes ( ...) to Oracle Hosts( ora_..)" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "	copyAttributeToOracle();" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "// Do UPDATE" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "EXEC SQL UPDATE " & strTableName & Chr(13) & Chr(10)
                    strCode &= vbTab & "SET " & Chr(13) & Chr(10)
                    For argc = 0 To rCount
                        ' If VarList(argc).fdName <> "toc" And VarList(argc).fdName <> "tom" And VarList(argc).fdName <> "mop" Then
                        strCode &= vbTab & vbTab & VarList(argc).fdName.PadRight(20, " ") & "="
                        If VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Then
                            strSpilt = VarList(argc).OraHostName().Split("[")
                            If VarList(argc).fdIsNull = 0 Then
                                strCode &= ":" & strSpilt(0) & ":" & VarList(argc).OraHostNameZi() & "," & Chr(13) & Chr(10)
                            Else
                                strCode &= ":" & strSpilt(0) & "," & Chr(10)
                            End If
                        ElseIf VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                            strSpilt = VarList(argc).OraHostName().Split("[")
                            If VarList(argc).fdIsNull = 0 Then
                                strCode &= "TO_DATE( :" & strSpilt(0) & ":" & VarList(argc).OraHostNameZi() & ",'YYYYMMDDHH24MISS')," & Chr(13) & Chr(10)
                            Else
                                strCode &= "TO_DATE( :" & strSpilt(0) & ",'YYYYMMDDHH24MISS')," & Chr(13) & Chr(10)
                            End If
                        Else
                            If VarList(argc).fdIsNull = 0 Then
                                strCode &= ":" & VarList(argc).OraHostName() & ":" & VarList(argc).OraHostNameZi() & "," & Chr(13) & Chr(10)
                            Else
                                strCode &= ":" & VarList(argc).OraHostName() & "," & Chr(13) & Chr(10)
                            End If
                        End If
                        '  End If
                    Next
                    strCode = strCode.Substring(0, strCode.Length() - 3) & Chr(13) & Chr(10)
                    strCode &= vbTab & "WHERE" & Chr(13) & Chr(10)
                    For argc = 0 To rCount
                        If VarList(argc).fdKey <> 0 Then
                            If VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Or VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                                strSpilt = VarList(argc).PkOraHostName().Split("[")
                                If VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                                    strCode &= vbTab & vbTab & VarList(argc).fdName.PadRight(15, " ") & " = TO_DATE( :" & strSpilt(0) & ", 'YYYYMMDDHH24MISS') AND " & Chr(13) & Chr(10)
                                Else
                                    strCode &= vbTab & vbTab & VarList(argc).fdName.PadRight(15, " ") & " = :" & strSpilt(0) & " AND " & Chr(13) & Chr(10)
                                End If

                            Else
                                strCode &= vbTab & vbTab & VarList(argc).fdName.PadRight(15, " ") & " = :" & VarList(argc).PkOraHostName & " AND " & Chr(13) & Chr(10)
                            End If
                        End If
                    Next
                    strCode = strCode.Substring(0, strCode.Length() - 6)
                    strCode &= ";" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "// ORACLE Error " & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(10)
                    strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
                    strCode &= vbTab & "if ( sqlca.sqlcode != 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "logOraMessageInfo();" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "return (char*)sqlca.sqlerrm.sqlerrmc;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)

                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)

                Case "1040"             'insertDB()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//copy the attributes ( ...) to Oracle Hosts( ora_..) " & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "	copyAttributeToOracle();" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "// Do INSERT" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "EXEC SQL INSERT INTO " & strTableName & Chr(13) & Chr(10)
                    strCode &= vbTab & "(" & Chr(13) & Chr(10)
                    For argc = 0 To rCount
                        ' If VarList(argc).fdName <> "toc" And VarList(argc).fdName <> "tom" And VarList(argc).fdName <> "mop" Then
                        strCode &= vbTab & vbTab & VarList(argc).fdName & "," & Chr(13) & Chr(10)
                        'End If
                    Next
                    strCode = strCode.Substring(0, strCode.Length() - 3) & Chr(13) & Chr(10)
                    strCode &= vbTab & ")" & Chr(13) & Chr(10)
                    strCode &= Chr(10) & vbTab & "VALUES" & Chr(13) & Chr(10)
                    strCode &= vbTab & "(" & Chr(13) & Chr(10)
                    For argc = 0 To rCount
                        'If VarList(argc).fdName <> "toc" And VarList(argc).fdName <> "tom" And VarList(argc).fdName <> "mop" Then
                        If VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Then
                            strSpilt = VarList(argc).OraHostName().Split("[")
                            If VarList(argc).fdIsNull = 0 Then
                                strCode &= vbTab & vbTab & ":" & strSpilt(0) & ":" & VarList(argc).OraHostNameZi() & "," & Chr(13) & Chr(10)
                            Else
                                strCode &= vbTab & vbTab & ":" & strSpilt(0) & "," & Chr(13) & Chr(10)
                            End If
                        ElseIf VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                            strSpilt = VarList(argc).OraHostName().Split("[")
                            If VarList(argc).fdIsNull = 0 Then
                                strCode &= vbTab & vbTab & "TO_DATE( :" & strSpilt(0) & ":" & VarList(argc).OraHostNameZi() & ",'YYYYMMDDHH24MISS')," & Chr(13) & Chr(10)
                            Else
                                strCode &= vbTab & vbTab & "TO_DATE( :" & strSpilt(0) & ",'YYYYMMDDHH24MISS')," & Chr(13) & Chr(10)
                            End If

                        Else
                            If VarList(argc).fdIsNull = 0 Then
                                strCode &= vbTab & vbTab & ":" & VarList(argc).OraHostName() & ":" & VarList(argc).OraHostNameZi() & "," & Chr(13) & Chr(10)
                            Else
                                strCode &= vbTab & vbTab & ":" & VarList(argc).OraHostName() & "," & Chr(13) & Chr(10)
                            End If
                        End If
                        ' End If
                    Next
                    strCode = strCode.Substring(0, strCode.Length() - 3) & Chr(13) & Chr(10)
                    strCode &= vbTab & ");" & Chr(13) & Chr(10)

                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "// ORACLE Error " & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
                    strCode &= vbTab & "if ( sqlca.sqlcode != 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "logOraMessageInfo();" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "return (char*)sqlca.sqlerrm.sqlerrmc;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)

                Case "1050"             'storeDB()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)

                    strCode &= vbTab & "char* ret = NULL;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "setKeysFromRecord();" & Chr(13) & Chr(10)
                    strCode &= vbTab & "ret=updateDB();" & Chr(13) & Chr(10)
                    strCode &= vbTab & "if(ret != NULL)" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "ret=insertDB();" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "if(ret != NULL)" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & vbTab & "dbAccess = false;" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & vbTab & "return(ret);" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= vbTab & "return(ret);" & Chr(13) & Chr(10)
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)

                Case "1060"             'deleteDB()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)

                    strCode &= "//" & Chr(13) & Chr(10)
                    strCode &= "//copy the host variables (k_...) to Oracle Host Keys (k_ora_..)" & Chr(13) & Chr(10)
                    strCode &= "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "copyKeyToHost();" & Chr(13) & Chr(10)
                    strCode &= Chr(10)
                    strCode &= "//" & Chr(13) & Chr(10)
                    strCode &= "// Do Delete " & Chr(13) & Chr(10)
                    strCode &= "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "EXEC SQL DELETE FROM " & strTableName & Chr(13) & Chr(10)
                    strCode &= vbTab & "WHERE" & Chr(13) & Chr(10)
                    For argc = 0 To rCount
                        If VarList(argc).fdKey <> 0 Then
                            If VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Or VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                                strSpilt = VarList(argc).PkOraHostName().Split("[")
                                If VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                                    strCode &= vbTab & vbTab & vbTab & vbTab & VarList(argc).fdName.PadRight(15, " ") & " = TO_DATE( :" & strSpilt(0) & ", 'YYYYMMDDHH24MISS') AND " & Chr(13) & Chr(10)
                                Else
                                    strCode &= vbTab & vbTab & vbTab & vbTab & VarList(argc).fdName.PadRight(15, " ") & " = :" & strSpilt(0) & " AND " & Chr(13) & Chr(10)
                                End If

                            Else
                                strCode &= vbTab & vbTab & vbTab & vbTab & VarList(argc).fdName.PadRight(15, " ") & " = :" & VarList(argc).PkOraHostName & " AND " & Chr(13) & Chr(10)
                            End If
                        End If
                    Next
                    strCode = strCode.Substring(0, strCode.Length() - 6)
                    strCode &= ";" & Chr(13) & Chr(10)
                    strCode &= Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "// ORACLE Error " & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
                    strCode &= vbTab & "if ( sqlca.sqlcode != 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "logOraMessageInfo();" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "return (char*)sqlca.sqlerrm.sqlerrmc;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)

                Case "1070"             'deleteDB()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "(const char* where,long* count)" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)

                    strCode &= vbTab & "*(count) = -1L;" & Chr(13) & Chr(10)
                    strCode &= "// Create dynamic statement." & Chr(13) & Chr(10)
                    strCode &= "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "strcpy((char*)dynstr.arr," & """DELETE"");" & Chr(13) & Chr(10)
                    strCode &= vbTab & "strcat((char*)dynstr.arr," & """ FROM " & strTableName & """);" & Chr(13) & Chr(10)
                    strCode &= vbTab & "if ( where != (char*)NULL )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "strcat( (char*)dynstr.arr,"" """ & ");" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & " strcat( (char*)dynstr.arr, where );" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= Chr(10)
                    strCode &= vbTab & "dynstr.len = strlen( (char*) dynstr.arr);"
                    strCode &= Chr(10)
                    strCode &= vbTab & "EXEC SQL EXECUTE IMMEDIATE :dynstr;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "	oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
                    strCode &= vbTab & "if (sqlca.sqlcode == 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "*(count) = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
                    strCode &= vbTab & "else " & Chr(13) & Chr(10)

                    strCode &= Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "// ORACLE Error " & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
                    strCode &= vbTab & "if ( sqlca.sqlcode != 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "logOraMessageInfo();" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "return (char*)sqlca.sqlerrm.sqlerrmc;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)

                Case "1080"             'openSetDB()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "(const char* where,char* order)" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)

                    strCode &= "//" & Chr(13) & Chr(10)
                    strCode &= "// Create dynamic statement." & Chr(13) & Chr(10)
                    strCode &= "//" & Chr(13) & Chr(10)

                    strCode &= vbTab & "strcpy((char*)dynstr.arr," & """SELECT "");" & Chr(13) & Chr(10)
                    For argc = 0 To rCount
                        If VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                            strCode &= vbTab & "strcat((char*)dynstr.arr,""" & "TO_CHAR(" & VarList(argc).fdName & " , 'YYYYMMDDHH24MISS')" & ","");" & Chr(13) & Chr(10)
                        Else
                            strCode &= vbTab & "strcat((char*)dynstr.arr,""" & VarList(argc).fdName & ","");" & Chr(13) & Chr(10)
                        End If
                    Next
                    strCode = strCode.Substring(0, strCode.Length() - 6) & """);" & Chr(13) & Chr(10)
                    strCode &= Chr(10) & vbTab & "strcat((char*)dynstr.arr,"" FROM " & strTableName & " "");" & Chr(13) & Chr(10)

                    strCode &= vbTab & "if ( where != (char*)NULL )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "strcat( (char*)dynstr.arr,"" """ & ");" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & " strcat( (char*)dynstr.arr, where);" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= vbTab & "if ( order != (char*)NULL )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "strcat( (char*)dynstr.arr,"" """ & ");" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & " strcat( (char*)dynstr.arr, order);" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= Chr(10)
                    strCode &= vbTab & "dynstr.len = strlen( (char*) dynstr.arr);"
                    strCode &= Chr(10)
                    strCode &= vbTab & "EXEC SQL PREPARE set_" & strTableName & " FROM :dynstr;" & Chr(13) & Chr(10)

                    strCode &= vbTab & "if (sqlca.sqlcode == 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "EXEC SQL DECLARE cu_" & strTableName & " CURSOR FOR set_" & strTableName & ";" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "if (sqlca.sqlcode == 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "	EXEC SQL OPEN cu_" & strTableName & ";" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)

                    strCode &= Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "// ORACLE Error " & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
                    strCode &= vbTab & "if ( sqlca.sqlcode != 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "logOraMessageInfo();" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "return (char*)sqlca.sqlerrm.sqlerrmc;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= vbTab & "cuFl = OPENED;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)

                Case "1090"             'getSetDB()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)

                    strCode &= vbTab & "if ( cuFl != OPENED ) return (""" & "No open Cursor Table:Me""" & ");" & Chr(13) & Chr(10)
                    strCode &= vbTab & "EXEC SQL FETCH cu_" & strTableName & " INTO" & Chr(13) & Chr(10)
                    For argc = 0 To rCount
                        If VarList(argc).fdIsNull = 0 Then
                            If VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Or VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                                strSpilt = VarList(argc).OraHostName().Split("[")
                                strCode &= vbTab & vbTab & ":" & strSpilt(0) & ":" & VarList(argc).OraHostNameZi() & "," & Chr(13) & Chr(10)
                            Else
                                strCode &= vbTab & vbTab & ":" & VarList(argc).OraHostName() & ":" & VarList(argc).OraHostNameZi() & "," & Chr(13) & Chr(10)
                            End If
                        Else
                            If VarList(argc).fdType = "CHAR" Or VarList(argc).fdType = "UCHAR" Or VarList(argc).fdType = "char" Or VarList(argc).fdType = "DATE" Or VarList(argc).fdType = "date" Then
                                strSpilt = VarList(argc).OraHostName().Split("[")
                                strCode &= vbTab & vbTab & ":" & strSpilt(0) & "," & Chr(13) & Chr(10)
                            Else
                                strCode &= vbTab & vbTab & ":" & VarList(argc).OraHostName() & "," & Chr(13) & Chr(10)
                            End If
                        End If
                    Next
                    strCode = strCode.Substring(0, strCode.Length() - 3) & ";" & Chr(13) & Chr(10)

                    strCode &= Chr(10) & vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)

                    strCode &= vbTab & "if ( sqlca.sqlcode != 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "return (char*) sqlca.sqlerrm.sqlerrmc ;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)

                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "// copy host variables into Class attributes" & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "copyOracleToAttribute();" & Chr(13) & Chr(10)
                    strCode &= vbTab & "copyHostToKey();" & Chr(13) & Chr(10)
                    strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)

                Case "1100"             'closeSetDB()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "()" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)

                    strCode &= vbTab & "EXEC SQL CLOSE cu_" & strTableName & ";" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;         " & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)

                    strCode &= vbTab & "if ( sqlca.sqlcode != 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "return (char*) sqlca.sqlerrm.sqlerrmc ;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)

                    strCode &= vbTab & "cuFl = CLOSED;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)


                Case "1200"             'countDB()
                    strCode = "//" & dbStdFunSrcReader("Comments").ToString() & Chr(13) & Chr(10)
                    strCode &= dbStdFunSrcReader("RetType").ToString() & TAB1 & NSP & dbStdFunSrcReader("FunName").ToString() & "(const char* where,long* count)" & Chr(13) & Chr(10)
                    strCode &= "{" & Chr(13) & Chr(10)

                    strCode &= vbTab & "*(count) = -1L;" & Chr(13) & Chr(10)
                    strCode &= "//" & Chr(13) & Chr(10)
                    strCode &= "// Create dynamic statement. " & Chr(13) & Chr(10)
                    strCode &= "//" & Chr(13) & Chr(10)

                    strCode &= vbTab & "strncpy((char*)dynstr.arr," & """SELECT count("
                    If PkArgc >= 1 Then
                        strCode &= pkFieldList(0).pkFunName & ")""" & ", sizeof(dynstr.arr));" & Chr(13) & Chr(10)
                    Else
                        strCode &= "*)""" & ", sizeof(dynstr.arr));" & Chr(13) & Chr(10)
                    End If
                    strCode &= vbTab & "strcat((char*)dynstr.arr,""" & " FROM " & strTableName & """);" & Chr(13) & Chr(10)


                    strCode &= vbTab & "if ( where != (char*)NULL )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "strcat( (char*)dynstr.arr,"" """ & ");" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & " strcat( (char*)dynstr.arr, where );" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= vbTab & "dynstr.len = strlen( (char*) dynstr.arr);" & Chr(13) & Chr(10)

                    strCode &= vbTab & "EXEC SQL PREPARE c_" & strTableName & " FROM :dynstr;" & Chr(13) & Chr(10)
                    strCode &= vbTab & Chr(13) & Chr(10)
                    strCode &= vbTab & "if (sqlca.sqlcode == 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "EXEC SQL DECLARE ct_" & strTableName & " CURSOR FOR c_" & strTableName & ";" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "if (sqlca.sqlcode == 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & vbTab & "EXEC SQL OPEN ct_" & strTableName & ";" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & vbTab & "if (sqlca.sqlcode == 0 )"
                    strCode &= vbTab & vbTab & vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & vbTab & vbTab & "EXEC SQL FETCH ct_" & strTableName & " INTO :rowCnt;" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & vbTab & vbTab & "if (sqlca.sqlcode == 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & vbTab & vbTab & "*(count) = rowCnt;" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & vbTab & "EXEC SQL CLOSE ct_" & strTableName & ";" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)

                    strCode &= Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "// ORACLE Error " & Chr(13) & Chr(10)
                    strCode &= vbTab & "//" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleSqlCode = sqlca.sqlcode;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "oracleRowsProcessed = sqlca.sqlerrd[2];" & Chr(13) & Chr(10)
                    strCode &= vbTab & "if ( sqlca.sqlcode != 0 )" & Chr(13) & Chr(10)
                    strCode &= vbTab & "{" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "logOraMessageInfo();" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "pCatch->catchError(sqlca.sqlcode);" & Chr(13) & Chr(10)
                    strCode &= vbTab & vbTab & "return (char*)sqlca.sqlerrm.sqlerrmc;" & Chr(13) & Chr(10)
                    strCode &= vbTab & "}" & Chr(13) & Chr(10)
                    strCode &= vbTab & "return ( NULL );" & Chr(13) & Chr(10)
                    strCode &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    Print(hdfile, strCode)




            End Select


        End While
        ' Print(hdfile, strCode)

    End Sub

    '产生所有函数的声明和属性访问器
    Private Sub genFunctions(ByVal hdfile As Integer, ByVal fileName As String, ByVal rCount As Integer)
        Dim i As Integer = 0
        Dim strCode As String
        Dim pkType As String
        Dim argv(10) As String
        Dim argList As String = ""
        Dim argc As Integer = 0
        PkArgc = 0

        strCode = "// 				" & Chr(13) & Chr(10)
        strCode &= "//C O N S T R U C T O R S    " & Chr(13) & Chr(10)
        strCode &= "//=======================    " & Chr(13) & Chr(10)
        strCode &= "//                           " & Chr(13) & Chr(10)
        Print(hdfile, strCode)
        Print(hdfile, "public:", Chr(10))
        strCode = strTableName & "();" & Chr(13) & Chr(10)
        Print(hdfile, strCode)

        strCode = "//D E S T R U C T O R S  " & Chr(13) & Chr(10)
        strCode &= "//=======================" & Chr(13) & Chr(10)
        strCode &= "//                       " & Chr(13) & Chr(10)
        Print(hdfile, strCode)
        strCode = "virtual ~" & strTableName & "();" & Chr(13) & Chr(10)
        Print(hdfile, strCode)

        strCode = "//					" & Chr(13) & Chr(10)
        strCode &= "//C O P Y  -  C O N S T R U C T O R " & Chr(13) & Chr(10)
        strCode &= "//==================================" & Chr(13) & Chr(10)
        Print(hdfile, strCode)
        strCode = strTableName & "(const " & strTableName & " &inst);" & Chr(13) & Chr(10)
        Print(hdfile, strCode)
        strCode = "//					" & Chr(13) & Chr(10)
        strCode &= "//C O N S T R U C T O R -W I T H P A R A M E T E R S" & Chr(13) & Chr(10)
        strCode &= "//===================================================" & Chr(13) & Chr(10)
        strCode &= "//					" & Chr(13) & Chr(10)
        Print(hdfile, strCode)

        strCode = ""

        For i = 0 To rCount

            If VarList(i).fdKey <> 0 Then
                If VarList(i).fdType = "CHAR" Or VarList(i).fdType = "char" Or VarList(i).fdType = "UCHAR" Or VarList(i).fdType = "DATE" Then
                    pkType = "char*"
                    pkFieldList(argc).pkType = "char"
                Else
                    pkType = VarList(i).AttType().ToLower()
                    pkFieldList(argc).pkType = VarList(i).AttType().ToLower()
                End If
                pkFieldList(argc).pkAttName = VarList(i).PkAttName()
                pkFieldList(argc).pkStruName = VarList(i).AttPkName()
                pkFieldList(argc).pkOraName = VarList(i).PkOraHostName()
                pkFieldList(argc).pkFunName = VarList(i).getAttFunName()
                strCode &= "//" & pkType & vbTab & VarList(i).StrucName & "= " & VarList(i).fdComment & Chr(13) & Chr(10)
                argv(argc) = pkType & TAB1 & "arg" & argc + 1
                argc += 1
                PkArgc += 1
            End If
        Next
        If argc >= 1 Then
            ReDim pkArgv(PkArgc - 1)

            Print(hdfile, strCode)
            strCode = strTableName & "( "
            For i = 0 To argc - 1
                argList &= argv(i) & ","
                pkArgv(i) = argv(i)
            Next
            argList = argList.Substring(0, argList.Length() - 1)
            strCode &= argList & ");" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
            Print(hdfile, strCode)
        End If


        Call PrintStanderFunction(hdfile) '产生公共的标准函数

        Print(hdfile, "public:", Chr(10))
        For i = 0 To rCount
            Print(hdfile, VarList(i).getAttFunCode())
            Print(hdfile, VarList(i).setAttFunCode())
            If VarList(i).fdIsNull = 0 Then
                Print(hdfile, VarList(i).getAttZiFunCode())
                Print(hdfile, VarList(i).setAttZiFunCode())
            End If
            If VarList(i).fdKey <> 0 Then
                Print(hdfile, VarList(i).getPkAttFunCode())
                Print(hdfile, VarList(i).setPkAttFunCode())
            End If
        Next
    End Sub

    '从数据表StdFunctions产生公共的标准函数
    Private Sub PrintStanderFunction(ByVal hdfile As Integer)
        Dim strSql As String = "select * from StdFunctions"
        Dim strTime As String = """" & DateTime.Now.Day.ToString("00") & "." & DateTime.Now.Month.ToString("00") & "." & Now.Year & " " & DateTime.Now.Hour.ToString("00:") & DateTime.Now.Minute.ToString("00:") & DateTime.Now.Second.ToString("00") & """"
        Dim strCodePub As String = ""
        Dim strCodePrv As String = ""
        Dim iField As Integer = 0

        ' Print(hdfile, strCode)
        Try
            Dim dbFunCmd As OleDb.OleDbCommand = New OleDb.OleDbCommand(strSql, dbConnection)
            dbFunCmd = New OleDb.OleDbCommand(strSql, dbConnection)
            dbStdFunReader = dbFunCmd.ExecuteReader()
        Catch ex As Exception
            MsgBox(Err.Description)
        End Try
        Dim argc As Integer = 1
        Dim argv As String = "const char* where, long* count"

        Dim icout As Integer = 0
        Dim rCount As Integer = 0
        While dbStdFunReader.Read()
            If dbStdFunReader("FunType").ToString() = "public" Then

                If dbStdFunReader("FunId").ToString() = 2500 Then       'operator+()
                    strCodePub &= "//		            " & EDL
                    strCodePub &= "//O P E R A T O R  + " & EDL
                    strCodePub &= "//===================" & EDL
                    strCodePub &= "//                   " & EDL
                    strCodePub &= "//methods" & EDL
                    strCodePub &= "public:" & EDL
                    strCodePub &= "//" & dbStdFunReader("Comments").ToString() & EDL
                    strCodePub &= Trim(strTableName) & TAB1 & dbStdFunReader("FunName").ToString() & "(const " & Trim(strTableName) & " &inst) const;" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    'FunList(FunCount).funId = dbStdFunReader("FunId").ToString()
                    'FunList(FunCount).funName = dbStdFunReader("FunName").ToString() & "(const " & Trim(strTableName) & " &inst)"
                ElseIf dbStdFunReader("FunId").ToString() = 2600 Then   'operator=()
                    strCodePub &= "//		            " & EDL
                    strCodePub &= "//O P E R A T O R  = " & EDL
                    strCodePub &= "//===================" & EDL
                    strCodePub &= "//                   " & EDL
                    strCodePub &= "//methods" & EDL
                    strCodePub &= "public:" & EDL
                    strCodePub &= "//" & dbStdFunReader("Comments").ToString() & EDL
                    strCodePub &= "const " & Trim(strTableName) & "& " & dbStdFunReader("FunName").ToString() & "(const " & Trim(strTableName) & " &inst);" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                Else
                    strCodePub &= "//methods" & EDL
                    strCodePub &= "public:" & EDL
                    strCodePub &= "//" & dbStdFunReader("Comments").ToString() & EDL
                    strCodePub &= dbStdFunReader("RetType") & TAB1 & dbStdFunReader("FunName").ToString() & "("

                    If dbStdFunReader("FunId").ToString() = 1070 Or dbStdFunReader("FunId").ToString() = 1200 Then
                        strCodePub &= argv & ");" & EDL
                    ElseIf dbStdFunReader("FunId").ToString() = 1080 Then
                        strCodePub &= "const char* where, char* order);" & EDL
                    ElseIf dbStdFunReader("FunId").ToString() = 1000 Then                   'getCreationTime()函数
                        strCodePub &= "){ return " & strTime & ";};" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    ElseIf dbStdFunReader("FunId").ToString() = 1400 Then                   'getName()函数
                        strCodePub &= ") { return """ & strTableName & """;};" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    ElseIf dbStdFunReader("FunId").ToString() = 1500 Then                   'getSqlCode()函数
                        strCodePub &= ") { return ( oracleSqlCode);};" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    ElseIf dbStdFunReader("FunId").ToString() = 1600 Then                   'getRowsProcessed()函数
                        strCodePub &= ") { return ( oracleRowsProcessed);};" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    ElseIf dbStdFunReader("FunId").ToString() = 1300 Then                   'fillStructure()函数

                        strCodePub &= fillStructure()

                    ElseIf dbStdFunReader("FunId").ToString() = 2200 Or dbStdFunReader("FunId").ToString() = 2300 Then 'setPrimKey() 和initInsertKeys()函数
                        If PkArgc >= 1 Then
                            For argc = 0 To PkArgc - 1
                                strCodePub &= pkArgv(argc) & ","
                            Next
                            strCodePub = strCodePub.Substring(0, strCodePub.Length() - 1) & ");" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                        Else
                            strCodePub &= ");" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                        End If
                    Else
                        strCodePub &= ");" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
                    End If
                End If
            Else
                strCodePrv &= "//methods" & EDL
                strCodePrv &= "private:" & EDL
                strCodePrv &= "//" & dbStdFunReader("Comments").ToString() & EDL
                strCodePrv &= dbStdFunReader("RetType").ToString() & TAB1 & dbStdFunReader("FunName").ToString() & "("
                strCodePrv &= ");" & Chr(13) & Chr(10) & Chr(13) & Chr(10)
            End If
        End While
        Print(hdfile, strCodePub, endl)
        Print(hdfile, strCodePrv, endl)


    End Sub

    'fillStructure
    Private Function fillStructure() As String
        Dim iField As Integer = 0
        Dim res() As String
        fillStructure = ")" & Chr(13) & Chr(10) & "{" & Chr(13) & Chr(10)

        For iField = 0 To FieldCount
            If VarList(iField).fdType = "CHAR" Or VarList(iField).fdType = "UCHAR" Or VarList(iField).fdType = "char" Or VarList(iField).fdType = "DATE" Or VarList(iField).fdType = "date" Then
                res = VarList(iField).StrucName().Split("[")
                fillStructure &= vbTab & "strncpy (struct" & strTableName & "." & res(0) & ", " & res(0) & "(), sizeof( struct" & strTableName & "." & res(0) & "));" & Chr(13) & Chr(10)
            Else
                fillStructure &= vbTab & "struct" & strTableName & "." & VarList(iField).StrucName() & " = " & VarList(iField).StrucName() & "();" & Chr(13) & Chr(10)
            End If
            If VarList(iField).fdIsNull = 0 Then
                fillStructure &= vbTab & "struct" & strTableName & "." & VarList(iField).StrucZiName() & " = " & VarList(iField).StrucZiName() & "();" & Chr(13) & Chr(10)
            End If
        Next
        fillStructure &= vbTab & "return; " & Chr(13) & Chr(10)
        fillStructure &= "}" & Chr(13) & Chr(10) & Chr(13) & Chr(10)

    End Function

    '产生hpp和pc文件的头部信息
    Private Sub genDeclarationFileHead(ByVal hdfile As Integer, ByVal fileName As String, ByVal desc As String, ByVal extension As String)
        If extension = "h" Then
            GenComments(hdfile, fileName, desc)
        ElseIf extension = "pc" Then
            GenPcComments(hdfile, fileName, desc)
        ElseIf extension = "sql" Then
            GenSqlComments(hdfile, fileName, desc)
        End If

    End Sub

    '创建输出文件句柄
    Private Function createFile(ByVal filePath As String, ByVal fileExtension As String) As Boolean
        Dim retVal As Integer = True
        If fileExtension = "h" Then
            FileOpen(hdHeaderFile, filePath, OpenMode.Output, OpenAccess.Write, OpenShare.Shared)
        ElseIf fileExtension = "pc" Then
            FileOpen(hdSourceFile, filePath, OpenMode.Output, OpenAccess.Write, OpenShare.Shared)
        ElseIf fileExtension = "sql" Then
            FileOpen(hdSQLFile, filePath, OpenMode.Output, OpenAccess.Write, OpenShare.Shared)
        ElseIf fileExtension = "bat" Then
            FileOpen(hdSQLBatFile, filePath, OpenMode.Output, OpenAccess.Write, OpenShare.Shared)
        Else
            MsgBox("File Extention " & fileExtension & " is not valid")
            retVal = False
        End If
        createFile = retVal
    End Function

    '构造输出文件路径
    Public Function makeFilePath(ByVal fileName As String, ByVal extension As String) As String

        If extension = "h" Then
            makeFilePath = hppPath & "\" & Trim(fileName) & "." & extension
        ElseIf extension = "pc" Then
            makeFilePath = cppPath & "\" & Trim(fileName) & "." & extension
        ElseIf extension = "sql" Then
            makeFilePath = sqlPath & "\" & Trim(fileName) & "." & extension
        Else
            MsgBox("File Extention " & extension & " is not valid")
            makeFilePath = ""
        End If
    End Function

    '构造输出文件名
    Public Function makeFileName(ByVal fileName As String, ByVal extension As String) As String
        If extension = "h" Then
            makeFileName = Trim(fileName) & "." & extension
        ElseIf extension = "pc" Then
            makeFileName = Trim(fileName) & "." & extension
        ElseIf extension = "sql" Then
            makeFileName = Trim(fileName) & "." & extension
        Else
            MsgBox("File Extention " & extension & " is not valid")
            makeFileName = ""
        End If
    End Function

    '选取表
    Private Sub btnSelectAll_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSelectAll.Click
        Dim iCount As Integer = 0
        Dim tabCount As Integer = lstAllTables.Items.Count
        For iCount = 0 To tabCount - 1
            lstAllTables.SetSelected(iCount, True)
        Next
        txtSelectNo.Text = tabCount
        txtRemainNo.Text = 0
    End Sub
    Private Sub btnSelNone_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSelNone.Click
        Dim iCount As Integer = 0
        Dim tabCount As Integer = lstAllTables.Items.Count
        For iCount = 0 To tabCount - 1
            lstAllTables.SetSelected(iCount, False)
        Next
        txtSelectNo.Text = 0
        txtRemainNo.Text = tabCount
    End Sub


    Private Sub lstAllTables_SelectedIndexChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles lstAllTables.SelectedIndexChanged
        Dim tabCount As Integer
        Dim selCount As Integer = 0
        Dim iCount As Integer = 0
        tabCount = lstAllTables.Items.Count()
        For iCount = 1 To tabCount
            If lstAllTables.GetSelected(iCount - 1) Then
                selCount += 1
            End If
        Next
        txtSelectNo.Text = selCount.ToString()
        txtRemainNo.Text = (tabCount - selCount).ToString()
    End Sub

    Private Sub OpenToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles OpenToolStripMenuItem.Click
        Dim dbName As String
        Dim ProjectName As String
        Dim NameList(2) As String
        reSetStatusBar()
        setStatusBar("Open Project File..")
        If OpenFileDlg.ShowDialog() = Windows.Forms.DialogResult.OK Then
            If OpenFileDlg.CheckFileExists Then

                dbName = OpenFileDlg.FileName
                If dbName = "" Then
                    ' MsgBox("plese select db file!")
                    setStatusBar("plese select project file,and try it again...")
                Else
                    Dim lastIndex As Integer = dbName.LastIndexOfAny("\")
                    'newProjectPath = filep.Substring(0, lastIndex)
                    Dim fileLen As Integer = dbName.Length() - lastIndex - 1
                    ProjectName = dbName.Substring(lastIndex + 1, fileLen)
                    NameList = ProjectName.Split(".")
                    If DBopen(dbName) = False Then
                        setStatusBar("Open project file failed.")
                        'End
                    Else
                        setStatusBar("Open project file successfully.")
                        Call InitDataTableList()
                        Call setControlStatus(True)
                        Me.Text = Me.Text & " - Project " & NameList(0)
                    End If
                End If
            End If
        Else
            setStatusBar("Project file does not exist.")
        End If
    End Sub

    '设置/重置状态条状态
    Private Sub setStatusBar(ByVal strVal As String)
        statusLab.Text = strVal
    End Sub
    Private Sub reSetStatusBar()
        statusLab.Text = "Ready"
    End Sub

    '显示DataType定义对话框
    Private Sub TablesToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles TablesToolStripMenuItem.Click
        DataTypes.ShowDialog()
    End Sub

    '显示工程设置对话框
    Private Sub SettingToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles SettingToolStripMenuItem.Click
        ProjectOptionsDlg.ShowDialog()
    End Sub

    '显示表字段编辑对话框
    Private Sub TableFieldsToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles TableFieldsToolStripMenuItem.Click
        TableFieldDlg.ShowDialog()
    End Sub

    '创建新工程菜单
    Private Sub NewToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles NewToolStripMenuItem.Click
        Dim newfile As String
        Dim filep As String
        Dim ProjectFileName As String
        Dim sourceFile As String
        Dim nameList(2) As String
        'Dim ProjectPath As String
        'Dim tp As String = My.Application.Info.DirectoryPath()
        ''ProjectPath = Application.StartupPath.Substring(0, Application.StartupPath.Length - 10)
        'ProjectPath = My.Application.Info.DirectoryPath()

        'Dim BinIndex As Integer = ProjectPath.IndexOf("bin")
        'ProjectPath = ProjectPath.Substring(0, BinIndex)

        ''  ProjectPath &= ""
        'sourceFile = ProjectPath & "My Project\Model.mfd"

        sourceFile = GetModelFilePath()  '获取Model.mfd文件路径
        If sourceFile <> "" Then
            If saveFileDlg.ShowDialog() = Windows.Forms.DialogResult.OK Then
                filep = saveFileDlg.FileName
                Dim lastIndex As Integer = filep.LastIndexOfAny("\")
                Dim fileLen As Integer = filep.Length() - lastIndex - 1
                'newProjectPath = filep.Substring(0, lastIndex)
                ProjectFileName = filep.Substring(lastIndex + 1, fileLen)
                nameList = ProjectFileName.Split(".")
                If filep <> "" Then
                    If (filep.Contains(".mfd")) Then
                        newfile = filep
                    Else
                        newfile = filep + ".mfd"
                    End If
                    If My.Computer.FileSystem.FileExists(newfile) Then
                        My.Computer.FileSystem.DeleteFile(newfile)
                    End If
                    My.Computer.FileSystem.CopyFile(sourceFile, newfile)
                    If DBopen(newfile) = False Then
                        setStatusBar("Open project file failed.")
                        'End
                    Else

                        Call clearAllData()
                        'Call SetProjectOptions(ProjectFileName, newProjectPath)
                        Call InitDataTableList()
                        Call setControlStatus(True)
                        Me.Text = Me.Text & " - Project " & namelist(0)
                        setStatusBar("Open project file successfully.")
                    End If
                    'If DBopen(newfile) Then
                    '    Call clearAllData()
                    '    setStatusBar("Open Project file Ok.")
                    'End If
                End If
            Else
                setStatusBar("Please Input Project file Name.")
            End If
        Else
            setStatusBar("Project Path Error.")
        End If
    End Sub
    Public Function GetModelFilePath() As String
        GetModelFilePath = ""
        Dim sourceFile As String
        Dim ProjectPath As String
        ProjectPath = My.Application.Info.DirectoryPath()
        Dim BinIndex As Integer = ProjectPath.IndexOf("bin")
        ProjectPath = ProjectPath.Substring(0, BinIndex)
        sourceFile = ProjectPath & "My Project\Model.mfd"
        If My.Computer.FileSystem.FileExists(sourceFile) Then
            GetModelFilePath = sourceFile
        End If
    End Function
    Private Sub SetProjectOptions(ByVal ProName As String, ByVal ProPath As String)
        Dim sqlStr As String
        'Dim indext As Integer
        sqlStr = "Update SettingData set cValue = '" & ProName & "' where name like "
        'indext = idx
        'Select Case indext
        '    Case 0
        '        sqlStr = sqlStr & txtCus.Text.ToString() & "' where name like 'Customer%'"
        '    Case 1
        '        sqlStr = sqlStr & txtProName.Text.ToString() & "' where name like 'ProjectName%'"
        '    Case 2
        '        sqlStr = sqlStr & txtProPath.Text.ToString() & "' where name like 'ProjectPath%'"
        '    Case 3
        '        sqlStr = sqlStr & txtHppPath.Text.ToString() & "' where name like 'hppPath%'"
        '    Case 4
        '        sqlStr = sqlStr & txtCppPath.Text.ToString() & "' where name like 'cppPath%'"
        '    Case 5
        '        sqlStr = sqlStr & txtSqlPath.Text.ToString() & "' where name like 'SQLPath%'"
        '    Case 6
        '        sqlStr = sqlStr & txtIncPath.Text.ToString() & "' where name like 'IncPath%'"
        'End Select
        Try
            dbCommand = New OleDb.OleDbCommand(sqlStr, dbConnection)
            dbCommand.ExecuteNonQuery()
        Catch Ex As Exception
            MsgBox(Ex.Message.ToString)
        End Try
        dbCommand.Dispose()
    End Sub

    '清除所有工程文件中的数据项
    Private Sub clearAllData()
        Dim dbCommandDelete As OleDb.OleDbCommand
        Dim sqlStr As String = ""
        Dim Ex As Exception = New Exception("Table name has already exist,please check input..")
        'sqlStr = "delete from [TableFields] where [TableName]='" & dgField.Rows(SeleRowIndex).Cells(5).Value & "' and [FieldName] =' " & dgField.Rows(SeleRowIndex).Cells(1).Value & "' "
        sqlStr = "delete from [TableFields]"
        Try
            dbCommandDelete = New OleDb.OleDbCommand(sqlStr, dbConnection)
            dbCommandDelete.ExecuteNonQuery()
        Catch Ex
            setStatusBar(Ex.Message.ToString)
            'Finally
            '    dbCommandDelete.Dispose()
            '    dbDataAdatpter.Dispose()
            'setStatusBar("Remove successfully.")
        End Try
        sqlStr = "delete from [TableInfo]"
        Try
            dbCommandDelete = New OleDb.OleDbCommand(sqlStr, dbConnection)
            dbCommandDelete.ExecuteNonQuery()
        Catch Ex
            setStatusBar(Ex.Message.ToString)
            'Finally
            '    dbCommandDelete.Dispose()
            '    dbDataAdatpter.Dispose()
            ' setStatusBar("Remove successfully.")
        End Try
        'dbCommandDelete.Dispose()
        'dbConnection.Close()
        'dbConnection.Dispose()
    End Sub

    'MouseMove Event
    Private Sub DataBaseCodeGenerator_MouseMove(ByVal sender As Object, ByVal e As System.Windows.Forms.MouseEventArgs) Handles Me.MouseMove
        setStatusBar("Ready")
    End Sub

    '菜单Generate
    Private Sub GenerateToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles GenerateToolStripMenuItem.Click
        Call btnGenerate_Click(sender, e)
    End Sub

    'Help菜单
    Private Sub AboutToolStripMenuItem1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles AboutToolStripMenuItem1.Click
        AboutMe.ShowDialog()
    End Sub

    '将Excel中的数据导入到工程文件
    Private Sub ImportExcelToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ImportExcelToolStripMenuItem.Click
        If ImporExcelDlg.ShowDialog() = Windows.Forms.DialogResult.OK Then
            Call ReadExcel()
            Call ExcClose()
            Call InitDataTableList()
        End If
        ' End If
    End Sub

    '读取Excel导入文件
    Public Sub ReadExcel()
        Dim tNo As Integer = 0
        Dim tName As String
        Dim seleRange As String
        Dim seleCount As Integer = 0
        procBarStatus.Maximum = ImpTableNo * 2
        procBarStatus.Visible = True
        For tNo = 0 To ImpTableNo - 1
            If ImpTableList(tNo).ExcImport = True Then
                seleCount = seleCount + 1
                tName = ImpTableList(tNo).ExcTabName.Trim()
                If ReadTableInfo(tName, tNo) Then
                    seleRange = tName.Replace("]", "B7:M" & (ImpTableList(tNo).ExcFieldNo + 7).ToString() & "]")
                    If ReadFieldInfo(seleRange) Then
                        Call ImportToProject(tNo)
                        procBarStatus.Value = 2 * (tNo + 1)
                    End If
                End If
            End If
        Next
        procBarStatus.Visible = False
        MessageBox.Show("There are [" & seleCount & "]Tables Import to project file.", "Import Information", MessageBoxButtons.OK, MessageBoxIcon.Information)

    End Sub
    '从Excel文件中读取导入表信息
    Public Function ReadTableInfo(ByVal ExcTName As String, ByVal index As Integer) As Boolean
        ReadTableInfo = True
        Dim seleName As String
        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim rCnt As Integer
        seleName = ExcTName.Replace("]", "C1:D5]")
        Try
            dbExcDataAdatpter = New System.Data.OleDb.OleDbDataAdapter("Select * From " & seleName, dbExcConnection)
            dbExcDataAdatpter.Fill(rs)       '从Excel中导入的原始数据   
            tb = rs.Tables(0)
        Catch ex As Exception
            setStatusBar(ex.Message)
            ReadTableInfo = False
        End Try
        If ReadTableInfo Then
            rCnt = tb.Rows.Count
            If rCnt <= 0 Then
                ReadTableInfo = False
            Else
                ImpTableList(index).ExcTabDesc = tb.Rows(1).Item(1).ToString().Trim()
                ImpTableList(index).ExcFieldNo = tb.Rows(3).Item(1)
                ImpTableList(index).ExcTabSpace = tb.Rows(2).Item(1).ToString()
            End If
        End If
        tb.Dispose()
        rs.Dispose()
    End Function

    '从Excel表中读取数据表字段信息
    Public Function ReadFieldInfo(ByVal seleRange As String) As Boolean
        ReadFieldInfo = True

        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim rCnt As Integer
        Dim index As Integer
        Try
            dbExcDataAdatpter = New System.Data.OleDb.OleDbDataAdapter("Select * From " & seleRange, dbExcConnection)
            dbExcDataAdatpter.Fill(rs)       '从Excel中导入的原始数据   
            tb = rs.Tables(0)
        Catch ex As Exception
            setStatusBar(ex.Message)
            ReadFieldInfo = False
        End Try
        If ReadFieldInfo Then
            rCnt = tb.Rows.Count
            If rCnt <= 0 Then
                ReadFieldInfo = False
            Else
                ReDim ImpTableFieldList(rCnt)
                For index = 0 To rCnt - 1
                    ImpTableFieldList(index).ExcfdNo = CInt(tb.Rows(index).Item(0).ToString())
                    ImpTableFieldList(index).ExcOuterName = tb.Rows(index).Item(1).ToString().Trim()
                    ImpTableFieldList(index).ExcOuterType = tb.Rows(index).Item(2).ToString().Trim()
                    ImpTableFieldList(index).ExcinnerName = tb.Rows(index).Item(3).ToString().Trim()
                    ImpTableFieldList(index).ExcInnerType = tb.Rows(index).Item(4).ToString().Trim()
                    ImpTableFieldList(index).ExcInnerLength = CInt(tb.Rows(index).Item(5))
                    If tb.Rows(index).Item(6).ToString().Trim() = "Y" Then
                        ImpTableFieldList(index).ExcfdKey = 1
                    Else
                        ImpTableFieldList(index).ExcfdKey = 0
                    End If
                    'ImpTableFieldList(index).ExcfdKey = tb.Rows(index).Item(6).ToString().Trim()
                    If tb.Rows(index).Item(7).ToString().Trim() = "N" Then
                        ImpTableFieldList(index).ExcfdIsNull = 1
                    ElseIf tb.Rows(index).Item(7).ToString().Trim() = "Y" Or tb.Rows(index).Item(7).ToString().Trim() = "" Then
                        ImpTableFieldList(index).ExcfdIsNull = 0
                    End If
                    ' ImpTableFieldList(index).ExcfdIsNull = tb.Rows(index).Item(7).ToString().Trim()
                    ImpTableFieldList(index).ExcUnit = tb.Rows(index).Item(8).ToString().Trim()
                    If tb.Rows(index).Item(9).ToString().Trim() <> "" Then
                        ImpTableFieldList(index).ExcULimit = tb.Rows(index).Item(9).ToString().Trim()
                    Else
                        ImpTableFieldList(index).ExcULimit = ""
                    End If
                    If tb.Rows(index).Item(10).ToString().Trim() <> "" Then
                        ImpTableFieldList(index).ExcULimit = tb.Rows(index).Item(10).ToString().Trim()
                    Else
                        ImpTableFieldList(index).ExcULimit = ""
                    End If
                    ImpTableFieldList(index).ExcComment = tb.Rows(index).Item(11).ToString().Trim()
                Next
            End If
        End If
        tb.Dispose()
        rs.Dispose()
    End Function
    Public Sub ImportToProject(ByVal index As Integer)
        Dim tName As String
        Dim ExcTName As String

        tName = ImpTableList(index).TableName
        ExcTName = ImpTableList(index).ExcTabName

        If checkTableExist(tName) = False Then
            InsertToTableInfo(index)
            InsertToField(index)
        Else
            UpdateTableInfo(index, tName)
            UpdateFieldInfo(index, tName)
        End If
    End Sub
    Private Function checkTableExist(ByVal tabName As String) As Boolean
        checkTableExist = False
        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim rcount As Integer
        Dim sqlStr As String
        sqlStr = "select * from [TableInfo] where [TableName] ='" & tabName & "'"
        Try
            dbDataAdatpter = New OleDb.OleDbDataAdapter(sqlStr, dbConnection)
            dbDataAdatpter.Fill(rs)
            tb = rs.Tables(0)
        Catch Ex As Exception
            setStatusBar(Ex.Message.ToString)
        Finally
            dbDataAdatpter.Dispose()
            rs.Dispose()
            tb.Dispose()
        End Try
        rcount = tb.Rows.Count
        If rcount > 0 Then
            checkTableExist = True
        End If

    End Function
    Private Sub InsertToTableInfo(ByVal index As Integer)
        Dim sqlStr As String = ""
        Dim Ex As Exception = New Exception("Table name has already exist,please check input..")
        sqlStr = "insert into TableInfo(TableName,TableSpace,description) values("
        sqlStr &= "'" & ImpTableList(index).TableName & "','" & ImpTableList(index).ExcTabSpace & "','" & ImpTableList(index).ExcTabDesc & "')"
        Try
            dbCommand = New OleDb.OleDbCommand(sqlStr, dbConnection)
            dbCommand.ExecuteNonQuery()
        Catch Ex
            MsgBox(Ex.Message.ToString)

        Finally
            dbCommand.Dispose()
        End Try
        dbCommand.Dispose()
        dbDataAdatpter.Dispose()
    End Sub
    Private Sub InsertToField(ByVal idx As Integer)
        Dim sqlStr As String = ""
        Dim Ex As Exception = New Exception("Field name has already exist,please check input..")
        Dim index As Integer = 0
        Dim rCnt As Integer
        Dim tName As String
        rCnt = ImpTableList(idx).ExcFieldNo
        tName = ImpTableList(idx).TableName
        Dim actLen As Integer = ImpTableFieldList.Length
        If rCnt > actLen Then
            rCnt = actLen
        End If
        For index = 0 To rCnt - 1
            If ImpTableFieldList(index).ExcinnerName <> "" Then
                sqlStr = "insert into [TableFields]([TableName],[No],[FieldName],[FieldType],[Length],[Unit],[isKey],[NotNull],[Description]) values("
                sqlStr &= "'" & tName & "'," & ImpTableFieldList(index).ExcfdNo & ",'" & ImpTableFieldList(index).ExcinnerName & "','"
                sqlStr &= ImpTableFieldList(index).ExcInnerType.ToUpper() & "'," & ImpTableFieldList(index).ExcInnerLength & ",'" & ImpTableFieldList(index).ExcUnit & "',"
                sqlStr &= ImpTableFieldList(index).ExcfdKey & "," & ImpTableFieldList(index).ExcfdIsNull & ",'" & ImpTableFieldList(index).GetComments() & "')"
                Try
                    dbCommand = New OleDb.OleDbCommand(sqlStr, dbConnection)
                    dbCommand.ExecuteNonQuery()
                    setStatusBar("One field item added successfully.")
                Catch Ex
                    setStatusBar(Ex.Message.ToString)
                Finally
                    dbCommand.Dispose()
                End Try
                dbCommand.Dispose()
                dbDataAdatpter.Dispose()
            End If
        Next
    End Sub

    Private Sub UpdateTableInfo(ByVal index As Integer, ByVal tabName As String)
        Dim deleOk As Boolean = True
        Dim sqlStr As String = ""
        sqlStr = "delete from [TableInfo] where [TableName]= '" & tabName & "'"
        Try
            dbCommand = New OleDb.OleDbCommand(sqlStr, dbConnection)
            dbCommand.ExecuteNonQuery()
        Catch Ex As Exception
            setStatusBar(Ex.Message.ToString)
            deleOk = False
        Finally
            dbCommand.Dispose()
            dbDataAdatpter.Dispose()
            setStatusBar("Remove successfully.")
        End Try
        If deleOk Then
            Call InsertToTableInfo(index)
        End If
    End Sub
    Private Sub UpdateFieldInfo(ByVal index As Integer, ByVal tabName As String)

        If DeleteFieldInfo(tabName) Then
            Call InsertToField(index)
        End If
    End Sub
    Private Function DeleteFieldInfo(ByVal tName As String) As Boolean
        DeleteFieldInfo = True

        Dim sqlStr As String = ""
        'Dim Ex As Exception = New Exception("Table name has already exist,please check input..")
        'sqlStr = "delete from [TableFields] where [TableName]='" & dgField.Rows(SeleRowIndex).Cells(5).Value & "' and [FieldName] =' " & dgField.Rows(SeleRowIndex).Cells(1).Value & "' "
        sqlStr = "delete from [TableFields] where [TableName]= '" & tName & "'"
        Try
            dbCommand = New OleDb.OleDbCommand(sqlStr, dbConnection)
            dbCommand.ExecuteNonQuery()
        Catch Ex As Exception
            setStatusBar(Ex.Message.ToString)
            DeleteFieldInfo = False
        Finally
            dbCommand.Dispose()
            dbDataAdatpter.Dispose()
            setStatusBar("Remove successfully.")
        End Try
    End Function

    Private Sub lstAllTables_DoubleClick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles lstAllTables.DoubleClick
        Dim iCount As Integer = 0
        Dim tName As String = ""
        tName = lstAllTables.SelectedItem().ToString()
        GlobSelectTableName = tName
        TableFieldDlg.ShowDialog()
    End Sub
    Private Function GetTableSpaceName(ByVal tName As String) As String
        GetTableSpaceName = ""
        Dim fd As Boolean = False
        Dim i As Integer
        For i = 0 To ImpTableNo - 1
            If ImpTableList(i).TableName.Equals(tName) = True Then
                GetTableSpaceName = ImpTableList(i).ExcTabSpace
            End If
        Next
    End Function

    Private Sub ExitToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ExitToolStripMenuItem.Click
        If dbConnection Is Nothing Then

        Else
            DBclose()
        End If
        If dbExcConnection Is Nothing Then
        Else
            ExcClose()
        End If
        Me.Close()
    End Sub
End Class