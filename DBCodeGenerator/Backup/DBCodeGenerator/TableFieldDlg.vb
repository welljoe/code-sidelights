'* ***************************************************************
'* *   File               :    TableFieldDlg.vb.
'                            
'* *   Short Description  :    Create and Manage Db Table fields.
'                            
'* *   Author             :    Liu Weizhao.
'                            
'* *   Date & Version     :    2009.04.05. Initial Version.
'                            
'* ****************************************************************
'* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
'* ****************************************************************

Public Class TableFieldDlg
    ' 初始化CombBox，列出所有的存在的表名
    Public SeleRowIndex As Integer
    Public Sub InitCombBoxValue()
        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim sqlStr As String
        cmbTables.Items.Clear()
        sqlStr = "select TableName from TableInfo"
        Try
            dbDataAdatpter = New OleDb.OleDbDataAdapter(sqlStr, dbConnection)
            dbDataAdatpter.Fill(rs)
            tb = rs.Tables(0)
        Catch Ex As Exception
            MsgBox(Err.Description)
        End Try
        setStatusBar("Begin to read all data tables...")
        Dim rCount As Integer = tb.Rows.Count
        Dim i As Integer = 1
        If rCount > 0 Then
            cmbTables.Items.Add("")
            For i = 1 To rCount
                cmbTables.Items.Add(tb.Rows(i - 1).Item("TableName").ToString)
            Next
            'cmbTables.SelectedText = tb.Rows(0).Item("TableName").ToString
            'cmbTables.SelectedText = "All"
            If GlobSelectTableName <> "" Then
                cmbTables.Text = GlobSelectTableName
            Else
                cmbTables.Text = ""
            End If

        End If
        dbDataAdatpter.Dispose()
        rs.Dispose()
        tb.Dispose()
        setStatusBar("Data table ready")
    End Sub
    '初始化DataGridView，显示数据表中所有的字段
    Private Sub InitDataView()
        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim sqlStr As String
        If cmbTables.Text <> "" Then
            sqlStr = "select [No],[TableName],[FieldName],[FieldType],[Length],[Unit],[isKey],[NotNull],[Description] from TableFields where TableName = '" & cmbTables.Text() & "' order by [No]"
        Else
            sqlStr = "select [No],[TableName],[FieldName],[FieldType],[Length],[Unit],[isKey],[NotNull],[Description]  from TableFields order by [No]"
        End If
        Dim iRow As Integer = dgField.Rows.Count
        Dim i As Integer = 1

        If iRow > 0 Then
            For i = 0 To iRow - 1
                dgField.Rows.RemoveAt(0)
            Next
        End If
        Try
            dbDataAdatpter = New OleDb.OleDbDataAdapter(sqlStr, dbConnection)
            dbDataAdatpter.Fill(rs)
            tb = rs.Tables(0)
        Catch Ex As Exception
            MsgBox(Err.Description)
        End Try
        Dim rCount As Integer = tb.Rows.Count
        If rCount > 0 Then
            dgField.DataSource = tb

            dgField.Columns(0).Width = dgField.Width * 0.05
            dgField.Columns(1).Width = dgField.Width * 0.12
            dgField.Columns(2).Width = dgField.Width * 0.12
            dgField.Columns(3).Width = dgField.Width * 0.12
            dgField.Columns(4).Width = dgField.Width * 0.07
            dgField.Columns(5).Width = dgField.Width * 0.08
            dgField.Columns(6).Width = dgField.Width * 0.05
            dgField.Columns(7).Width = dgField.Width * 0.08
            dgField.Columns(8).Width = dgField.Width * 0.31
            dgField.Update()
        Else
            setStatusBar("no data in this table,please press <Insert Field> to add new item....")
        End If
        dbDataAdatpter.Dispose()
        rs.Dispose()
        tb.Dispose()
    End Sub
    ' 更新DataGridView，显示某一个数据表中的字段
    Private Sub UpdateDataView(ByVal FieldName As String)
        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim sqlStr As String
        ' Dim sqlType As String
        sqlStr = "select [No],[TableName],[FieldName],[FieldType],[Length],[Unit],[isKey],[NotNull],[Description]  from TableFields where [FieldName] like'" & FieldName & "%' order by [No]"

        Dim iRow As Integer = dgField.Rows.Count
        Dim i As Integer = 1

        If iRow > 0 Then
            For i = 0 To iRow - 1
                dgField.Rows.RemoveAt(0)
            Next
        End If
        ' sqlType = "selct TypeName from BaseType"
        Try
            dbDataAdatpter = New OleDb.OleDbDataAdapter(sqlStr, dbConnection)
            dbDataAdatpter.Fill(rs)
            tb = rs.Tables(0)
        Catch Ex As Exception
            MsgBox(Err.Description)
        End Try

        Dim rCount As Integer = tb.Rows.Count
        If rCount > 0 Then
            dgField.DataSource = tb
            dgField.Columns(0).Width = dgField.Width * 0.05
            dgField.Columns(1).Width = dgField.Width * 0.12
            dgField.Columns(2).Width = dgField.Width * 0.12
            dgField.Columns(3).Width = dgField.Width * 0.12
            dgField.Columns(4).Width = dgField.Width * 0.1
            dgField.Columns(5).Width = dgField.Width * 0.05
            dgField.Columns(6).Width = dgField.Width * 0.05
            dgField.Columns(7).Width = dgField.Width * 0.08
            dgField.Columns(8).Width = dgField.Width * 0.31
            dgField.Update()
        Else
            setStatusBar("no data in this table,please press <Insert Field> to add new item....")
        End If

        dbDataAdatpter.Dispose()
        rs.Dispose()
        tb.Dispose()
        dbDataAdatpter.Dispose()
        rs.Dispose()
        tb.Dispose()
    End Sub
    '查询表中某一字段是否存在
    Private Sub btnFind_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnFind.Click
        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim sqlStr As String
        Dim isExit As Boolean
        setStatusBar("find field from all tables.")
        If txtFind.Text <> "" Then

            sqlStr = "select * from TableFields where FieldName like '" & txtFind.Text.ToString() & "%'"
            Try
                dbDataAdatpter = New OleDb.OleDbDataAdapter(sqlStr, dbConnection)
                dbDataAdatpter.Fill(rs)
                tb = rs.Tables(0)
            Catch Ex As Exception
                MsgBox(Err.Description)
            End Try
            Dim rCount As Integer = tb.Rows.Count
            If rCount > 0 Then
                isExit = True
                setStatusBar("Found :[" & rCount & "]")
                Call UpdateDataView(txtFind.Text)
            Else
                isExit = False
                setStatusBar("Not found.")
            End If

        End If

        dbDataAdatpter.Dispose()
        rs.Dispose()
        tb.Dispose()
        txtFind.Text = ""
    End Sub
    '用TableFields表中数据填充DataGridView中isKey 列
    Private Sub FillIsKey(ByVal rowNo As Integer, ByVal val As String)
        Dim dgChkBox As DataGridViewCheckBoxCell = dgField.Rows(rowNo).Cells(6)
        dgChkBox.Value = val
    End Sub
    '用TableFields表中数据填充DataGridView中NotNull 列
    Private Sub FillNotNull(ByVal rowNo As Integer, ByVal val As String)
        Dim dgChkBox As DataGridViewCheckBoxCell = dgField.Rows(rowNo).Cells(7)
        dgChkBox.Value = val
    End Sub
    Private Sub SetDetailStatus(ByVal bVal As Boolean)
        txtNo.Enabled = bVal
        txtFieldName.Enabled = bVal
        txtComments.Enabled = bVal
        txtLength.Enabled = bVal
        txtUnit.Enabled = bVal
        cmbBaseType.Enabled = bVal
        chkNotNul.Enabled = bVal
        chkPKey.Enabled = bVal
    End Sub

    Private Sub ClearDetail()
        txtNo.Text = ""
        txtFieldName.Text = ""
        txtComments.Text = ""
        txtLength.Text = ""
        txtUnit.Text = ""
        cmbBaseType.Text = ""
        chkNotNul.Checked = False
        chkPKey.Checked = False
    End Sub
    Private Sub fillDetailValues(ByVal index As Integer)
        txtNo.Text = dgField.Rows(index).Cells(0).Value
        txtFieldName.Text = dgField.Rows(index).Cells(2).Value
        txtComments.Text = dgField.Rows(index).Cells(8).Value
        txtLength.Text = dgField.Rows(index).Cells(4).Value
        cmbBaseType.Text = dgField.Rows(index).Cells(3).Value
        txtUnit.Text = dgField.Rows(index).Cells(5).Value
        chkNotNul.Checked = dgField.Rows(index).Cells(7).Value
        chkPKey.Checked = dgField.Rows(index).Cells(6).Value
        cmbTables.Text = dgField.Rows(index).Cells(1).Value
    End Sub
    Private Sub FillBaseType()
        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim sqlStr As String

        sqlStr = "select * from BaseType"

        Try
            dbDataAdatpter = New OleDb.OleDbDataAdapter(sqlStr, dbConnection)
            dbDataAdatpter.Fill(rs)
            tb = rs.Tables(0)
        Catch Ex As Exception
            MsgBox(Err.Description)
        End Try
        Dim rCount As Integer = tb.Rows.Count
        Dim i As Integer = 0
        For i = 1 To rCount
            cmbBaseType.Items.Add(tb.Rows(i - 1).Item("TypeName").ToString)
        Next
        dbDataAdatpter.Dispose()
        rs.Dispose()
        tb.Dispose()
    End Sub
    Private Sub btnInsert_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnInsert.Click
        If btnInsert.Text = "New" Then
            btnInsert.Text = "Save"
            Call ClearDetail()
            Call SetDetailStatus(True)
        ElseIf btnInsert.Text = "Save" Then
            Call InsertDB()
            Call InitDataView()
            Call ClearDetail()
            btnInsert.Text = "New"
            Call SetDetailStatus(False)
        End If

    End Sub
    Private Sub InsertDB()
        Dim sqlStr As String = ""
        Dim Ex As Exception = New Exception("Field name has already exist,please check input..")
        Dim strTableName As String
        strTableName = cmbTables.Text
        If strTableName <> "" Then
            sqlStr = "insert into [TableFields]([TableName],[No],[FieldName],[FieldType],[Length],[Unit],[isKey],[NotNull],[Description]) values("
            If txtNo.Text <> "" And txtFieldName.Text <> "" Then
                sqlStr &= "'" & strTableName & "'," & txtNo.Text() & ",'" & txtFieldName.Text.ToString() & "','"
                If cmbBaseType.Text <> "" And txtLength.Text <> "" Then
                    sqlStr &= cmbBaseType.Text() & "'," & txtLength.Text() & ",'" & txtUnit.Text.ToString() & "',"

                    If chkPKey.Checked Then
                        sqlStr &= 1 & ","
                    Else
                        sqlStr &= 0 & ","
                    End If
                    If chkNotNul.Checked Then
                        sqlStr &= 1 & ","
                    Else
                        sqlStr &= 0 & ","
                    End If
                    sqlStr &= "'" & txtComments.Text & "')"
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
                Else
                    setStatusBar("D-Type and Length are NOT NULL")
                End If
            Else
                setStatusBar("Field name or Position are NOT NULL")
            End If
        End If

    End Sub
    Private Sub UpdateDB(ByVal rowNo As Integer)
        Dim sqlStr As String = ""
        Dim Ex As Exception = New Exception("Field name has already exist,please check input..")
        Dim strTableName As String
        strTableName = cmbTables.Text
        If strTableName <> "" Then
            sqlStr = "update [TableFields] set [TableName]='" & cmbTables.Text & "',"
            sqlStr &= "[No]=" & txtNo.Text & ","
            sqlStr &= "[FieldName]='" & txtFieldName.Text & "',"
            sqlStr &= "[FieldType]='" & cmbBaseType.Text & "',"
            sqlStr &= "[Length]=" & txtLength.Text & ","
            sqlStr &= "[Unit]='" & txtUnit.Text & "',"
            If chkPKey.Checked Then
                sqlStr &= "[isKey]= 1,"
            Else
                sqlStr &= "[isKey]= 0,"
            End If
            If chkNotNul.Checked Then
                sqlStr &= "[NotNull]=1,"
            Else
                sqlStr &= "[NotNull]=0,"
            End If
            sqlStr &= "[Description]='" & txtComments.Text & "' where index = " & rowNo
            Try
                dbCommand = New OleDb.OleDbCommand(sqlStr, dbConnection)
                dbCommand.ExecuteNonQuery()
                setStatusBar("One item update successfully.")
            Catch Ex
                setStatusBar(Ex.Message.ToString)
                setStatusBar("One item update Field")
            Finally
                dbCommand.Dispose()
            End Try
            dbCommand.Dispose()
            dbDataAdatpter.Dispose()
        End If

    End Sub
    '用BaseType表中数据填充DataGridView中D-Type 列
    Private Sub FillDType(ByVal rowNo As Integer, ByVal showName As String)
        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim sqlStr As String

        sqlStr = "select * from BaseType"

        Try
            dbDataAdatpter = New OleDb.OleDbDataAdapter(sqlStr, dbConnection)
            dbDataAdatpter.Fill(rs)
            tb = rs.Tables(0)
        Catch Ex As Exception
            MsgBox(Err.Description)
        End Try
        Dim rCount As Integer = tb.Rows.Count
        Dim i As Integer = 0
        Dim dgComboBox As DataGridViewComboBoxCell = dgField.Rows(rowNo).Cells(2) 'as DataGridViewComboBoxCell

        For i = 1 To rCount
            dgComboBox.Items.Add(tb.Rows(i - 1).Item("TypeName").ToString)
        Next

        dgComboBox.Value = showName
        dbDataAdatpter.Dispose()
        rs.Dispose()
        tb.Dispose()
    End Sub
    '用Tables表中数据填充DataGridView中T-Type 列
    Private Sub FillTType(ByVal rowNo As Integer, ByVal showName As String)
        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim sqlStr As String

        sqlStr = "select * from TableInfo"

        Try
            dbDataAdatpter = New OleDb.OleDbDataAdapter(sqlStr, dbConnection)
            dbDataAdatpter.Fill(rs)
            tb = rs.Tables(0)
        Catch Ex As Exception
            MsgBox(Err.Description)
        End Try
        Dim rCount As Integer = tb.Rows.Count
        Dim i As Integer = 0
        Dim dgComboBox As DataGridViewComboBoxCell = dgField.Rows(rowNo).Cells(5) 'as DataGridViewComboBoxCell

        For i = 1 To rCount
            dgComboBox.Items.Add(tb.Rows(i - 1).Item("TableName").ToString)
        Next

        dgComboBox.Value = showName
        dbDataAdatpter.Dispose()
        rs.Dispose()
        tb.Dispose()
    End Sub
    Private Sub cmbTables_SelectedValueChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles cmbTables.SelectedValueChanged
        reSetStatusBar()
        Call InitDataView()
    End Sub
    Private Sub setStatusBar(ByVal strVal As String)
        statLab.Text = strVal
    End Sub
    Private Sub reSetStatusBar()
        statLab.Text = "Ready"
    End Sub

    Private Sub TableField_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Call InitCombBoxValue()             '初始化CombBox，显示Tables表中的数据
        Call InitDataView()                 '初始化DataGridView，显示TableFields表中的数据
        Call SetDetailStatus(False)
        setStatusBar("Ready")
    End Sub

    Private Sub dgField_CellClick(ByVal sender As Object, ByVal e As System.Windows.Forms.DataGridViewCellEventArgs) Handles dgField.CellClick
        SeleRowIndex = e.RowIndex()
        If SeleRowIndex > 0 Then
            Call fillDetailValues(SeleRowIndex)
        End If
    End Sub

    Private Sub cmbBaseType_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles cmbBaseType.Click
        Call FillBaseType()
    End Sub

    Private Sub btnEditField_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnEditField.Click
        Dim rowNo As Integer
        Dim index As Integer = dgField.Rows.Count
        If index > 0 Then
            If btnEditField.Text = "Edit" Then
                btnEditField.Text = "Update"
                Call SetDetailStatus(True)
            ElseIf btnEditField.Text = "Update" Then
                rowNo = GetSeleRowIndex(SeleRowIndex)
                Call UpdateDB(rowNo)
                Call InitDataView()
                btnEditField.Text = "Edit"
                Call SetDetailStatus(False)
            End If
        Else
            setStatusBar("The table is empty,no item for editing...")
        End If
    End Sub
    Private Function GetSeleRowIndex(ByVal seleRow As Integer) As Integer
        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim sqlStr As String

        sqlStr = "select index from TableFields where TableName='" & dgField.Rows(seleRow).Cells(1).Value & "' and FieldName ='" & dgField.Rows(seleRow).Cells(2).Value & "'"

        Try
            dbDataAdatpter = New OleDb.OleDbDataAdapter(sqlStr, dbConnection)
            dbDataAdatpter.Fill(rs)
            tb = rs.Tables(0)
        Catch Ex As Exception
            setStatusBar(Err.Description)
        End Try
        GetSeleRowIndex = tb.Rows(0).Item("index")


        dbDataAdatpter.Dispose()
        rs.Dispose()
        tb.Dispose()

    End Function
    Private Sub DeleteDB(ByVal rowNo As Integer)
        Dim sqlStr As String = ""
        Dim Ex As Exception = New Exception("Table name has already exist,please check input..")
        'sqlStr = "delete from [TableFields] where [TableName]='" & dgField.Rows(SeleRowIndex).Cells(5).Value & "' and [FieldName] =' " & dgField.Rows(SeleRowIndex).Cells(1).Value & "' "
        sqlStr = "delete from [TableFields] where [index]= " & rowNo
        Try
            dbCommand = New OleDb.OleDbCommand(sqlStr, dbConnection)
            dbCommand.ExecuteNonQuery()
        Catch Ex
            setStatusBar(Ex.Message.ToString)
        Finally
            dbCommand.Dispose()
            dbDataAdatpter.Dispose()
            setStatusBar("Remove successfully.")
        End Try

    End Sub
    Private Sub btnRemove_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnRemove.Click
        Dim rowNo As Integer
        setStatusBar("Remove fields from < " & cmbTables.Text & " >")

        Dim index As Integer = dgField.Rows.Count
        If index > 0 Then
            rowNo = GetSeleRowIndex(SeleRowIndex)
            Call DeleteDB(rowNo)
            Call InitDataView()
        Else
            setStatusBar("The table is empty,no item for removing...")
        End If
    End Sub

    Private Sub TableField_MouseMove(ByVal sender As System.Object, ByVal e As System.Windows.Forms.MouseEventArgs) Handles MyBase.MouseMove
        setStatusBar("Ready")
    End Sub

    Private Sub btnCancel_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnCancel.Click
        If SeleRowIndex > 0 Then
            Call fillDetailValues(SeleRowIndex)
            btnEditField.Text = "Edit"
            btnInsert.Text = "New"
            Call SetDetailStatus(False)
        End If
    End Sub

    Private Sub btnExit_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub dgField_ColumnHeaderMouseClick(ByVal sender As System.Object, ByVal e As System.Windows.Forms.DataGridViewCellMouseEventArgs) Handles dgField.ColumnHeaderMouseClick
        setStatusBar("No Sort Event.")
    End Sub
End Class