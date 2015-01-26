'* ***************************************************************
'* *   File               :    DataTypes.vb.
'                            
'* *   Short Description  :    Create Base Type and Table Type.
'                            
'* *   Author             :    Liu Weizhao.
'                            
'* *   Date & Version     :    2009.04.05. Initial Version.
'                            
'* ****************************************************************
'* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
'* ****************************************************************
Imports System.Windows.Forms

Public Class DataTypes

    Private Sub OK_Button_Click(ByVal sender As System.Object, ByVal e As System.EventArgs)
        Me.DialogResult = System.Windows.Forms.DialogResult.OK
        Me.Close()
    End Sub

    Private Sub Cancel_Button_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Cancel_Button.Click
        Me.DialogResult = System.Windows.Forms.DialogResult.Cancel
        Call DataBaseCodeGenerator.InitDataTableList()
        '  Call DataBaseCodeGenerator.setControlStatus(True)
        Me.Close()
    End Sub

    Private Sub DataTypes_FormClosed(ByVal sender As Object, ByVal e As System.Windows.Forms.FormClosedEventArgs) Handles Me.FormClosed
        Call DataBaseCodeGenerator.InitDataTableList()
    End Sub

    Private Sub DataTypes_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Call setStatuText(False)
        Call UpdateDgrid("Base")
        Call UpdateDgrid("Table")
    End Sub

    Private Sub dgridBase_CellClick(ByVal sender As Object, ByVal e As System.Windows.Forms.DataGridViewCellEventArgs) Handles dgridBase.CellClick
        Dim index As Integer
        index = e.RowIndex()
        txtBaseName.Text = dgridBase.Rows(index).Cells(0).Value
        txtBaseLength.Text = dgridBase.Rows(index).Cells(1).Value
        'setStatusBar("the data is empty,no item for remove...")
    End Sub

    Private Sub btnDelete_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnDelete.Click
        Dim indext As Integer
        Dim tabText As String
        indext = Me.tabCtrl.SelectedIndex
        tabText = Me.tabCtrl.TabPages(indext).Text
        Select Case tabText
            Case "Base Type"
                Call DeleteDB("Base")
                Call UpdateDgrid("Base")
            Case "Table Type"
                Call DeleteDB("Table")
                Call UpdateDgrid("Table")
        End Select

        
    End Sub
    Private Sub UpdateDgrid(ByVal typeVal As String)
        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim dgWidth As Integer = 0
        Dim sqlStr As String = ""
        If typeVal = "Base" Then
            sqlStr = "select * from BaseType"
        ElseIf typeVal = "Table" Then
            sqlStr = "select * from TableInfo"
        End If
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
        Dim rCount As Integer = tb.Rows.Count
        Dim i As Integer = 0
        If typeVal = "Base" Then
            dgridBase.DataSource = tb
            dgridBase.Update()
            dgWidth = dgridBase.Width
            dgridBase.Columns(0).Width = dgWidth * 0.6
            dgridBase.Columns(1).Width = dgWidth * 0.4
            'dgridBase.Columns(0).Width = (dgridBase.Width - 60) / 2
            'dgridBase.Columns(1).Width = (dgridBase.Width - 60) / 2
        ElseIf typeVal = "Table" Then
            dgDataType.DataSource = tb
            dgDataType.Update()
            dgWidth = dgDataType.Width
            dgDataType.Columns(0).Width = dgWidth * 0.3
            dgDataType.Columns(1).Width = dgWidth * 0.2
            dgDataType.Columns(2).Width = dgWidth * 0.5
            'dgDataType.Columns(0).Width = (dgridBase.Width - 60) / 2
            'dgDataType.Columns(1).Width = (dgridBase.Width - 60) / 2
        End If
        tb.Dispose()
        rs.Dispose()
        dbDataAdatpter.Dispose()
    End Sub

    Private Sub btnNew_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnNew.Click

        Dim indext As Integer
        Dim tabText As String

        indext = Me.tabCtrl.SelectedIndex
        tabText = Me.tabCtrl.TabPages(indext).Text
        Select Case tabText
            Case "Base Type"
                If btnNew.Text = "New" Then
                    Call clearText()
                    Call setStatuText(True)
                    btnNew.Text = "Save"
                ElseIf btnNew.Text = "Save" Then
                    Call InsertDB("Base")
                    btnNew.Text = "New"
                    Call UpdateDgrid("Base")
                    Call setStatuText(False)
                End If
            Case "Table Type"
                If btnNew.Text = "New" Then
                    Call clearText()
                    Call setStatuText(True)
                    btnNew.Text = "Save"
                ElseIf btnNew.Text = "Save" Then
                    Call InsertDB("Table")
                    btnNew.Text = "New"
                    Call UpdateDgrid("Table")
                    Call setStatuText(False)
                End If

        End Select
    End Sub
    Private Sub clearText()
        txtBaseLength.Text = ""
        txtBaseName.Text = ""
        txtDataType.Text = ""
        txtDesp.Text = ""
        txtTableSpace.Text = ""
    End Sub
    Private Sub InsertDB(ByVal typeVal As String)
        Dim sqlStr As String = ""
        Dim Ex As Exception = New Exception("Table name has already exist,please check input..")
        If typeVal = "Base" Then
            sqlStr = "insert into BaseType(TypeName,length) values("
            If txtBaseName.Text = "" And txtBaseLength.Text = "" Then
                MsgBox("BaseType name and length Is NOT NULL")
            Else
                sqlStr = sqlStr & "'" & txtBaseName.Text.ToString() & "','" & txtBaseLength.Text.ToString() & "')"
            End If
        ElseIf typeVal = "Table" Then
            sqlStr = "insert into TableInfo(TableName,TableSpace,description) values("
            If txtDataType.Text = "" And txtDesp.Text = "" Or txtTableSpace.Text = "" Then
                MsgBox("Table Type or TableSpace or Comments Is NOT NULL")
            Else
                sqlStr = sqlStr & "'" & txtDataType.Text.ToString() & "','" & txtTableSpace.Text.ToString() & "','" & txtDesp.Text.ToString() & "')"
            End If
        End If
        Try
            dbCommand = New OleDb.OleDbCommand(sqlStr, dbConnection)
            dbCommand.ExecuteNonQuery()
        Catch Ex
            MsgBox(Ex.Message.ToString)

        Finally
            dbCommand.Dispose()
        End Try
        Call clearText()
        dbCommand.Dispose()
        dbDataAdatpter.Dispose()
    End Sub
    Private Sub DeleteDB(ByVal typeVal As String)
        Dim sqlStr As String = ""
        Dim Ex As Exception = New Exception("Table name has already exist,please check input..")
        If typeVal = "Base" Then
            sqlStr = "delete from BaseType where TypeName = '" & txtBaseName.Text & "'"
        ElseIf typeVal = "Table" Then
            sqlStr = "delete from TableInfo where TableName = '" & txtDataType.Text & "'"
        End If
        Try
            dbCommand = New OleDb.OleDbCommand(sqlStr, dbConnection)
            dbCommand.ExecuteNonQuery()
        Catch Ex
            MsgBox(Ex.Message.ToString)

        Finally
            dbCommand.Dispose()
        End Try
        Call clearText()
        dbCommand.Dispose()
        dbDataAdatpter.Dispose()
    End Sub

    Private Sub setStatuText(ByVal bVal As Boolean)
        txtBaseLength.Enabled = bVal
        txtBaseName.Enabled = bVal
        txtDataType.Enabled = bVal
        txtDesp.Enabled = bVal
        txtTableSpace.Enabled = bVal
    End Sub

    Private Sub tabCtrl_Selected(ByVal sender As Object, ByVal e As System.Windows.Forms.TabControlEventArgs) Handles tabCtrl.Selected
        Dim indext As Integer
        Dim tabText As String

        indext = Me.tabCtrl.SelectedIndex
        tabText = Me.tabCtrl.TabPages(indext).Text
        Select Case tabText
            Case "Base Type"
                Call UpdateDgrid("Base")
            Case "Table Type"
                Call UpdateDgrid("Table")
        End Select
    End Sub

    Private Sub dgDataType_CellClick(ByVal sender As System.Object, ByVal e As System.Windows.Forms.DataGridViewCellEventArgs) Handles dgDataType.CellClick
        Dim index As Integer
        index = e.RowIndex()
        txtDataType.Text = dgDataType.Rows(index).Cells(0).Value
        txtDesp.Text = dgDataType.Rows(index).Cells(2).Value
        txtTableSpace.Text = dgDataType.Rows(index).Cells(1).Value
    End Sub
End Class
