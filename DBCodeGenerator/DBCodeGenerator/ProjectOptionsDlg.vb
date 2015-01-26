'* ***************************************************************
'* *   File               :    ProjectOptionsDlg.vb.
'                            
'* *   Short Description  :    Project Setting Dlg.
'                            
'* *   Author             :    Liu Weizhao.
'                            
'* *   Date & Version     :    2009.04.05. Initial Version.
'                            
'* ****************************************************************
'* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
'* ****************************************************************
Imports System.Windows.Forms

Public Class ProjectOptionsDlg
    Public setFlag(7) As Integer
    Private Sub OK_Button_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnOk.Click
        ' Me.DialogResult = System.Windows.Forms.DialogResult.OK

        Dim indext As Integer
        Dim tabText As String

        indext = Me.tabCtrl.SelectedIndex
        tabText = Me.tabCtrl.TabPages(indext).Text
        Select Case tabText
            Case "Data Setting"
                Call SaveDataSet()
            Case "Generate Options"
                ' Call save()
        End Select
        Me.Close()
    End Sub

    Private Sub Cancel_Button_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnCancel.Click
        Me.DialogResult = System.Windows.Forms.DialogResult.Cancel
        Me.Close()
    End Sub

    Private Sub ProjectOptionsDlg_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Call InitDataSetting()
        Call InitGenerateOptions()
    End Sub

    Private Sub tabCtrl_Selected(ByVal sender As System.Object, ByVal e As System.Windows.Forms.TabControlEventArgs) Handles tabCtrl.Selected
        Dim indext As Integer
        Dim tabText As String

        indext = Me.tabCtrl.SelectedIndex
        tabText = Me.tabCtrl.TabPages(indext).Text
        Select Case tabText
            Case "Data Setting"
                Call InitDataSetting()
            Case "Generate Options"
                Call InitGenerateOptions()

        End Select
    End Sub

    Private Sub InitDataSetting()                   '初始化“Data Setting”页

        Dim rs As DataSet = New DataSet
        Dim tb As DataTable = New DataTable
        Dim sqlStr As String
        Dim i As Integer = 0
        sqlStr = "select * from SettingData"
        Try
            dbDataAdatpter = New OleDb.OleDbDataAdapter(sqlStr, dbConnection)
            dbDataAdatpter.Fill(rs)
            tb = rs.Tables(0)
        Catch Ex As Exception
            MsgBox(Err.Description)
            'Finally
            '    dbDataAdatpter.Dispose()
            '    rs.Dispose()
            '    tb.Dispose()
        End Try
        txtCus.Text = tb.Rows(1).Item("cValue").ToString
        txtProName.Text = tb.Rows(4).Item("cValue").ToString
        txtProPath.Text = tb.Rows(5).Item("cValue").ToString
        txtHppPath.Text = tb.Rows(2).Item("cValue").ToString
        txtCppPath.Text = tb.Rows(0).Item("cValue").ToString
        txtSqlPath.Text = tb.Rows(6).Item("cValue").ToString
        txtIncPath.Text = tb.Rows(3).Item("cValue").ToString


        dbDataAdatpter.Dispose()
        rs.Dispose()
        tb.Dispose()
        For i = 0 To 6
            setFlag(i) = 0
        Next
    End Sub
    Private Sub InitGenerateOptions()           '初始化“Generate Options”页

    End Sub

    Private Sub SaveDataSet()

        Dim i As Integer = 0
        For i = 0 To 6
            If setFlag(i) = 1 Then
                Call UpdateSetData(i)
            End If
        Next
      
    End Sub
    Private Sub UpdateSetData(ByVal idx As Integer)
        Dim sqlStr As String
        Dim indext As Integer
        sqlStr = "Update SettingData set cValue = '"
        indext = idx
        Select Case indext
            Case 0
                sqlStr = sqlStr & txtCus.Text.ToString() & "' where name like 'Customer%'"
            Case 1
                sqlStr = sqlStr & txtProName.Text.ToString() & "' where name like 'ProjectName%'"
            Case 2
                sqlStr = sqlStr & txtProPath.Text.ToString() & "' where name like 'ProjectPath%'"
            Case 3
                sqlStr = sqlStr & txtHppPath.Text.ToString() & "' where name like 'hppPath%'"
            Case 4
                sqlStr = sqlStr & txtCppPath.Text.ToString() & "' where name like 'cppPath%'"
            Case 5
                sqlStr = sqlStr & txtSqlPath.Text.ToString() & "' where name like 'SQLPath%'"
            Case 6
                sqlStr = sqlStr & txtIncPath.Text.ToString() & "' where name like 'IncPath%'"
        End Select
        Try
            dbCommand = New OleDb.OleDbCommand(sqlStr, dbConnection)
            dbCommand.ExecuteNonQuery()
        Catch Ex As Exception
            MsgBox(Ex.Message.ToString)
        End Try
        dbCommand.Dispose()
    End Sub

    Private Sub txtCus_TextChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtCus.TextChanged
        setFlag(0) = 1
    End Sub

    Private Sub txtProName_TextChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtProName.TextChanged
        setFlag(1) = 1
    End Sub

    Private Sub txtProPath_TextChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtProPath.TextChanged
        setFlag(2) = 1
        SetOtherPath(txtProPath.Text)
    End Sub

    Private Sub txtHppPath_TextChanged(ByVal sender As Object, ByVal e As System.EventArgs) Handles txtHppPath.TextChanged
        setFlag(3) = 1
    End Sub

    Private Sub txtCppPath_TextChanged(ByVal sender As Object, ByVal e As System.EventArgs) Handles txtCppPath.TextChanged
        setFlag(4) = 1
    End Sub

    Private Sub txtSqlPath_TextChanged(ByVal sender As Object, ByVal e As System.EventArgs) Handles txtSqlPath.TextChanged
        setFlag(5) = 1
    End Sub

    Private Sub txtIncPath_TextChanged(ByVal sender As Object, ByVal e As System.EventArgs) Handles txtIncPath.TextChanged
        setFlag(6) = 1
    End Sub
    Private Sub btnProPath_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnProPath.Click
        Dim floderPath As String
        openDlgForSetting.ShowDialog()
        floderPath = openDlgForSetting.SelectedPath()
        If floderPath <> "" Then
            txtProPath.Text = floderPath
            Call SetOtherPath(floderPath)
        Else
            MessageBox.Show("Please Select Project Path.", "Information", MessageBoxButtons.OK, MessageBoxIcon.Information, MessageBoxDefaultButton.Button1, MessageBoxOptions.DefaultDesktopOnly, False)
            btnCppPath.Focus()
        End If
        txtProPath.Focus()
    End Sub
    Private Sub SetOtherPath(ByVal prjPath As String)
        txtCppPath.Text = prjPath + "\src"
        txtHppPath.Text = prjPath + "\inc"
        txtSqlPath.Text = prjPath + "\sql"
        txtIncPath.Text = prjPath + "\inc"
    End Sub
    Private Sub btnHppPath_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnHppPath.Click
        Dim floderPath As String
        openDlgForSetting.ShowDialog()
        floderPath = openDlgForSetting.SelectedPath()
        If floderPath <> "" Then
            txtHppPath.Text = floderPath
        Else
            MessageBox.Show("Please Select header file Path.", "Information", MessageBoxButtons.OK, MessageBoxIcon.Information, MessageBoxDefaultButton.Button1, MessageBoxOptions.DefaultDesktopOnly, False)
        End If
        txtHppPath.Focus()
    End Sub

    Private Sub btnCppPath_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnCppPath.Click
        Dim floderPath As String
        openDlgForSetting.ShowDialog()
        floderPath = openDlgForSetting.SelectedPath()
        If floderPath <> "" Then
            txtCppPath.Text = floderPath
        Else
            MessageBox.Show("Please Select Source file Path.", "Information", MessageBoxButtons.OK, MessageBoxIcon.Information, MessageBoxDefaultButton.Button1, MessageBoxOptions.DefaultDesktopOnly, False)
            btnCppPath.Focus()
        End If
        txtCppPath.Focus()
    End Sub

    Private Sub btnSqlPath_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSqlPath.Click
        Dim floderPath As String
        openDlgForSetting.ShowDialog()
        floderPath = openDlgForSetting.SelectedPath()
        If floderPath <> "" Then
            txtSqlPath.Text = floderPath
        Else
            MessageBox.Show("Please Select SQL file Path.", "Information", MessageBoxButtons.OK, MessageBoxIcon.Information, MessageBoxDefaultButton.Button1, MessageBoxOptions.DefaultDesktopOnly, False)
            btnCppPath.Focus()
        End If
        txtSqlPath.Focus()
    End Sub

    Private Sub btnIncPath_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnIncPath.Click
        Dim floderPath As String
        openDlgForSetting.ShowDialog()
        floderPath = openDlgForSetting.SelectedPath()
        If floderPath <> "" Then
            txtIncPath.Text = floderPath
        Else
            MessageBox.Show("Please Select include file Path.", "Information", MessageBoxButtons.OK, MessageBoxIcon.Information, MessageBoxDefaultButton.Button1, MessageBoxOptions.DefaultDesktopOnly, False)
            btnCppPath.Focus()
        End If
        txtIncPath.Focus()
    End Sub
End Class
