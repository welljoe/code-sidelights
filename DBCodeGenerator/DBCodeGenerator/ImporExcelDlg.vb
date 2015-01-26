'* ***************************************************************
'* *   File               :    ImporExcelDlg.vb.
'                            
'* *   Short Description  :    Import Excel file into DB Project
'                            
'* *   Author             :    Liu Weizhao.
'                            
'* *   Date & Version     :    2009.04.05. Initial Version.
'                            
'* ****************************************************************
'* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
'* ****************************************************************
Imports System.Windows.Forms

Public Class ImporExcelDlg

    Private Sub OK_Button_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles OK_Button.Click
        Dim indexChecked As Integer = 0
        Dim itemChecked As Object
        For Each itemChecked In chkImpTableList.CheckedItems
            indexChecked = chkImpTableList.Items.IndexOf(itemChecked)
            ImpTableList(indexChecked).ExcImport = True
        Next
        Me.DialogResult = System.Windows.Forms.DialogResult.OK
        Me.Close()
    End Sub

    Private Sub Cancel_Button_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Cancel_Button.Click
        Me.DialogResult = System.Windows.Forms.DialogResult.Cancel
        Me.Close()
    End Sub

    Private Sub ImporExcelDlg_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim i As Integer = 0
        chkImpTableList.Items.Clear()
        txtImpFileName.Text = ""
        'For i = 0 To 10
        '    chkImpTableList.Items.Add("test_" & i, False)
        'Next
        'Call readTableList()

    End Sub
    Private Sub readTableList()
        Dim OleDbSchemaGuid As OleDb.OleDbSchemaGuid = New OleDb.OleDbSchemaGuid
        ' Dim oleDbRs As DataSet = New DataSet
        Dim oleDbTable As DataTable = dbExcConnection.GetOleDbSchemaTable(OleDbSchemaGuid.Tables, Nothing)
        ' Dim TableNameList() As String
        'Dim oleTableList As DataTable = New DataTable
        Dim tableName As String
        Dim rCnt = oleDbTable.Rows.Count()

        ReDim ImpTableList(rCnt)
        Dim i As Integer = 0
        Dim r As Integer = 0
        For i = 0 To rCnt - 1
            tableName = oleDbTable.Rows(i)(2).ToString().Trim()
            If tableName.IndexOf("Print_Area") < 0 Then
                ImpTableList(r).TableName = tableName.Replace("$", "")
                tableName = "[" & tableName.Replace("'", " ") & "]"
                ImpTableList(r).ExcTabName = tableName
                r = r + 1
            End If   
        Next
        ImpTableNo = r          '实际的导入表个数

        Call addToList(ImpTableNo)      '填充CheckListBox

        'For i = 0 To r - 1

        '    dbExcDataAdatpter = New System.Data.OleDb.OleDbDataAdapter("Select * From " & ImpTableList(0).ExcTabName, dbExcConnection)

        '    Try
        '        dbExcDataAdatpter.Fill(oleDbRs, "Tables")       '从Excel中导入的原始数据   
        '        oleTableList = oleDbRs.Tables(0)
        '    Catch
        '        MessageBox.Show("Read excel file error.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error)
        '    End Try
        'Next
    End Sub
    Private Sub addToList(ByVal rCnt As Integer)
        Dim i As Integer
        For i = 0 To rCnt - 1
            chkImpTableList.Items.Add(ImpTableList(i).TableName, False)
        Next
    End Sub

    Private Sub chkAll_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles chkAll.CheckedChanged
        If chkAll.Checked = True Then
            Call setChecked(True)
        Else
            Call setChecked(False)
        End If
    End Sub
    Private Sub setChecked(ByVal bVal As Boolean)
        Dim indexItme As Integer = 0
        For indexItme = 0 To chkImpTableList.Items.Count - 1
            If bVal Then
                chkImpTableList.SetItemCheckState(indexItme, CheckState.Checked)
            Else
                chkImpTableList.SetItemCheckState(indexItme, CheckState.Unchecked)
            End If
        Next
    End Sub

    Private Sub btnLoad_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnLoad.Click
        Dim excname As String
        Dim ok As Boolean = True
        If ExcOpenDlg.ShowDialog() = Windows.Forms.DialogResult.OK Then
            excname = ExcOpenDlg.FileName
            txtImpFileName.Text = excname
            'If excname <> "" Then
            If ExcOpen(excname) = False Then
                MessageBox.Show("Open project file failed.", "Open file Error", MessageBoxButtons.OK, MessageBoxIcon.Error)
                ok = False
            Else
                MessageBox.Show("Open project file successfully.", "Open file Info", MessageBoxButtons.OK, MessageBoxIcon.Information)
            End If
        Else
            MessageBox.Show("pleas select file...", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information)
            ok = False
        End If
        If ok Then
            If CheckImportExcel() Then
                Call readTableList()
            End If
        End If
    End Sub
    Private Function CheckImportExcel() As Boolean
        Dim OleDbSchemaGuid As OleDb.OleDbSchemaGuid = New OleDb.OleDbSchemaGuid
        Dim dataTable As DataTable = dbExcConnection.GetOleDbSchemaTable(OleDbSchemaGuid.Tables, Nothing)
        Dim rCnt = dataTable.Rows.Count()
        If rCnt <= 0 Then
            MessageBox.Show("File format error,please check import file.", "File Format Error.", MessageBoxButtons.OK, MessageBoxIcon.Error)
            CheckImportExcel = False
        Else
            ImpTableNo = rCnt
            CheckImportExcel = True
        End If
    End Function
End Class
