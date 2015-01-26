<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class ProjectOptionsDlg
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        If disposing AndAlso components IsNot Nothing Then
            components.Dispose()
        End If
        MyBase.Dispose(disposing)
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.TableLayoutPanel1 = New System.Windows.Forms.TableLayoutPanel
        Me.btnOk = New System.Windows.Forms.Button
        Me.btnCancel = New System.Windows.Forms.Button
        Me.openDlgForSetting = New System.Windows.Forms.FolderBrowserDialog
        Me.tabCodeGen = New System.Windows.Forms.TabPage
        Me.CheckBox4 = New System.Windows.Forms.CheckBox
        Me.CheckBox3 = New System.Windows.Forms.CheckBox
        Me.cke = New System.Windows.Forms.CheckBox
        Me.ckeSQL = New System.Windows.Forms.CheckBox
        Me.tabProSet = New System.Windows.Forms.TabPage
        Me.btnIncPath = New System.Windows.Forms.Button
        Me.btnSqlPath = New System.Windows.Forms.Button
        Me.btnCppPath = New System.Windows.Forms.Button
        Me.btnHppPath = New System.Windows.Forms.Button
        Me.btnProPath = New System.Windows.Forms.Button
        Me.Label7 = New System.Windows.Forms.Label
        Me.Label6 = New System.Windows.Forms.Label
        Me.Label5 = New System.Windows.Forms.Label
        Me.Label4 = New System.Windows.Forms.Label
        Me.Label3 = New System.Windows.Forms.Label
        Me.Label2 = New System.Windows.Forms.Label
        Me.Label1 = New System.Windows.Forms.Label
        Me.txtIncPath = New System.Windows.Forms.TextBox
        Me.txtSqlPath = New System.Windows.Forms.TextBox
        Me.txtCppPath = New System.Windows.Forms.TextBox
        Me.txtHppPath = New System.Windows.Forms.TextBox
        Me.txtProPath = New System.Windows.Forms.TextBox
        Me.txtProName = New System.Windows.Forms.TextBox
        Me.txtCus = New System.Windows.Forms.TextBox
        Me.tabCtrl = New System.Windows.Forms.TabControl
        Me.TableLayoutPanel1.SuspendLayout()
        Me.tabCodeGen.SuspendLayout()
        Me.tabProSet.SuspendLayout()
        Me.tabCtrl.SuspendLayout()
        Me.SuspendLayout()
        '
        'TableLayoutPanel1
        '
        Me.TableLayoutPanel1.Anchor = CType((System.Windows.Forms.AnchorStyles.Bottom Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.TableLayoutPanel1.ColumnCount = 2
        Me.TableLayoutPanel1.ColumnStyles.Add(New System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 50.0!))
        Me.TableLayoutPanel1.ColumnStyles.Add(New System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 50.0!))
        Me.TableLayoutPanel1.Controls.Add(Me.btnOk, 0, 0)
        Me.TableLayoutPanel1.Controls.Add(Me.btnCancel, 1, 0)
        Me.TableLayoutPanel1.Location = New System.Drawing.Point(630, 386)
        Me.TableLayoutPanel1.Name = "TableLayoutPanel1"
        Me.TableLayoutPanel1.RowCount = 1
        Me.TableLayoutPanel1.RowStyles.Add(New System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50.0!))
        Me.TableLayoutPanel1.Size = New System.Drawing.Size(146, 27)
        Me.TableLayoutPanel1.TabIndex = 0
        '
        'btnOk
        '
        Me.btnOk.Anchor = System.Windows.Forms.AnchorStyles.None
        Me.btnOk.Location = New System.Drawing.Point(3, 3)
        Me.btnOk.Name = "btnOk"
        Me.btnOk.Size = New System.Drawing.Size(67, 21)
        Me.btnOk.TabIndex = 0
        Me.btnOk.Text = "OK"
        '
        'btnCancel
        '
        Me.btnCancel.Anchor = System.Windows.Forms.AnchorStyles.None
        Me.btnCancel.DialogResult = System.Windows.Forms.DialogResult.Cancel
        Me.btnCancel.Location = New System.Drawing.Point(76, 3)
        Me.btnCancel.Name = "btnCancel"
        Me.btnCancel.Size = New System.Drawing.Size(67, 21)
        Me.btnCancel.TabIndex = 1
        Me.btnCancel.Text = "Cancel"
        '
        'tabCodeGen
        '
        Me.tabCodeGen.BackColor = System.Drawing.Color.Silver
        Me.tabCodeGen.Controls.Add(Me.CheckBox4)
        Me.tabCodeGen.Controls.Add(Me.CheckBox3)
        Me.tabCodeGen.Controls.Add(Me.cke)
        Me.tabCodeGen.Controls.Add(Me.ckeSQL)
        Me.tabCodeGen.Location = New System.Drawing.Point(4, 21)
        Me.tabCodeGen.Name = "tabCodeGen"
        Me.tabCodeGen.Size = New System.Drawing.Size(754, 343)
        Me.tabCodeGen.TabIndex = 2
        Me.tabCodeGen.Text = "Generate Options"
        '
        'CheckBox4
        '
        Me.CheckBox4.AutoSize = True
        Me.CheckBox4.Location = New System.Drawing.Point(155, 154)
        Me.CheckBox4.Name = "CheckBox4"
        Me.CheckBox4.Size = New System.Drawing.Size(78, 16)
        Me.CheckBox4.TabIndex = 3
        Me.CheckBox4.Text = "CheckBox4"
        Me.CheckBox4.UseVisualStyleBackColor = True
        '
        'CheckBox3
        '
        Me.CheckBox3.AutoSize = True
        Me.CheckBox3.Location = New System.Drawing.Point(155, 118)
        Me.CheckBox3.Name = "CheckBox3"
        Me.CheckBox3.Size = New System.Drawing.Size(78, 16)
        Me.CheckBox3.TabIndex = 2
        Me.CheckBox3.Text = "CheckBox3"
        Me.CheckBox3.UseVisualStyleBackColor = True
        '
        'cke
        '
        Me.cke.AutoSize = True
        Me.cke.Location = New System.Drawing.Point(155, 80)
        Me.cke.Name = "cke"
        Me.cke.Size = New System.Drawing.Size(78, 16)
        Me.cke.TabIndex = 1
        Me.cke.Text = "CheckBox2"
        Me.cke.UseVisualStyleBackColor = True
        '
        'ckeSQL
        '
        Me.ckeSQL.AutoSize = True
        Me.ckeSQL.Location = New System.Drawing.Point(155, 46)
        Me.ckeSQL.Name = "ckeSQL"
        Me.ckeSQL.Size = New System.Drawing.Size(138, 16)
        Me.ckeSQL.TabIndex = 0
        Me.ckeSQL.Text = "Generate SQL Script"
        Me.ckeSQL.UseVisualStyleBackColor = True
        '
        'tabProSet
        '
        Me.tabProSet.BackColor = System.Drawing.Color.Silver
        Me.tabProSet.Controls.Add(Me.btnIncPath)
        Me.tabProSet.Controls.Add(Me.btnSqlPath)
        Me.tabProSet.Controls.Add(Me.btnCppPath)
        Me.tabProSet.Controls.Add(Me.btnHppPath)
        Me.tabProSet.Controls.Add(Me.btnProPath)
        Me.tabProSet.Controls.Add(Me.Label7)
        Me.tabProSet.Controls.Add(Me.Label6)
        Me.tabProSet.Controls.Add(Me.Label5)
        Me.tabProSet.Controls.Add(Me.Label4)
        Me.tabProSet.Controls.Add(Me.Label3)
        Me.tabProSet.Controls.Add(Me.Label2)
        Me.tabProSet.Controls.Add(Me.Label1)
        Me.tabProSet.Controls.Add(Me.txtIncPath)
        Me.tabProSet.Controls.Add(Me.txtSqlPath)
        Me.tabProSet.Controls.Add(Me.txtCppPath)
        Me.tabProSet.Controls.Add(Me.txtHppPath)
        Me.tabProSet.Controls.Add(Me.txtProPath)
        Me.tabProSet.Controls.Add(Me.txtProName)
        Me.tabProSet.Controls.Add(Me.txtCus)
        Me.tabProSet.Dock = System.Windows.Forms.DockStyle.Fill
        Me.tabProSet.Font = New System.Drawing.Font("SimSun", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(134, Byte))
        Me.tabProSet.Location = New System.Drawing.Point(4, 21)
        Me.tabProSet.Name = "tabProSet"
        Me.tabProSet.Padding = New System.Windows.Forms.Padding(3)
        Me.tabProSet.Size = New System.Drawing.Size(754, 343)
        Me.tabProSet.TabIndex = 0
        Me.tabProSet.Text = "Data Setting"
        '
        'btnIncPath
        '
        Me.btnIncPath.BackColor = System.Drawing.Color.Lavender
        Me.btnIncPath.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnIncPath.Font = New System.Drawing.Font("SimSun", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(134, Byte))
        Me.btnIncPath.Location = New System.Drawing.Point(410, 295)
        Me.btnIncPath.Name = "btnIncPath"
        Me.btnIncPath.Size = New System.Drawing.Size(35, 23)
        Me.btnIncPath.TabIndex = 13
        Me.btnIncPath.Text = "Set"
        Me.btnIncPath.UseVisualStyleBackColor = False
        '
        'btnSqlPath
        '
        Me.btnSqlPath.BackColor = System.Drawing.Color.Lavender
        Me.btnSqlPath.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnSqlPath.Font = New System.Drawing.Font("SimSun", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(134, Byte))
        Me.btnSqlPath.Location = New System.Drawing.Point(410, 248)
        Me.btnSqlPath.Name = "btnSqlPath"
        Me.btnSqlPath.Size = New System.Drawing.Size(35, 23)
        Me.btnSqlPath.TabIndex = 13
        Me.btnSqlPath.Text = "Set"
        Me.btnSqlPath.UseVisualStyleBackColor = False
        '
        'btnCppPath
        '
        Me.btnCppPath.BackColor = System.Drawing.Color.Lavender
        Me.btnCppPath.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnCppPath.Font = New System.Drawing.Font("SimSun", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(134, Byte))
        Me.btnCppPath.Location = New System.Drawing.Point(410, 205)
        Me.btnCppPath.Name = "btnCppPath"
        Me.btnCppPath.Size = New System.Drawing.Size(35, 23)
        Me.btnCppPath.TabIndex = 13
        Me.btnCppPath.Text = "Set"
        Me.btnCppPath.UseVisualStyleBackColor = False
        '
        'btnHppPath
        '
        Me.btnHppPath.BackColor = System.Drawing.Color.Lavender
        Me.btnHppPath.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnHppPath.Font = New System.Drawing.Font("SimSun", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(134, Byte))
        Me.btnHppPath.Location = New System.Drawing.Point(410, 164)
        Me.btnHppPath.Name = "btnHppPath"
        Me.btnHppPath.Size = New System.Drawing.Size(35, 23)
        Me.btnHppPath.TabIndex = 13
        Me.btnHppPath.Text = "Set"
        Me.btnHppPath.UseVisualStyleBackColor = False
        '
        'btnProPath
        '
        Me.btnProPath.BackColor = System.Drawing.Color.Lavender
        Me.btnProPath.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnProPath.Font = New System.Drawing.Font("SimSun", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(134, Byte))
        Me.btnProPath.Location = New System.Drawing.Point(410, 102)
        Me.btnProPath.Name = "btnProPath"
        Me.btnProPath.Size = New System.Drawing.Size(35, 23)
        Me.btnProPath.TabIndex = 13
        Me.btnProPath.Text = "Set"
        Me.btnProPath.UseVisualStyleBackColor = False
        '
        'Label7
        '
        Me.Label7.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label7.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer))
        Me.Label7.Location = New System.Drawing.Point(68, 298)
        Me.Label7.Name = "Label7"
        Me.Label7.RightToLeft = System.Windows.Forms.RightToLeft.Yes
        Me.Label7.Size = New System.Drawing.Size(80, 14)
        Me.Label7.TabIndex = 0
        Me.Label7.Text = "Inc Paht"
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label6.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer))
        Me.Label6.Location = New System.Drawing.Point(79, 256)
        Me.Label6.Name = "Label6"
        Me.Label6.RightToLeft = System.Windows.Forms.RightToLeft.Yes
        Me.Label6.Size = New System.Drawing.Size(69, 16)
        Me.Label6.TabIndex = 12
        Me.Label6.Text = "SQL Path"
        '
        'Label5
        '
        Me.Label5.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label5.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer))
        Me.Label5.Location = New System.Drawing.Point(68, 215)
        Me.Label5.Name = "Label5"
        Me.Label5.RightToLeft = System.Windows.Forms.RightToLeft.Yes
        Me.Label5.Size = New System.Drawing.Size(80, 14)
        Me.Label5.TabIndex = 0
        Me.Label5.Text = "Cpp Path"
        '
        'Label4
        '
        Me.Label4.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label4.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer))
        Me.Label4.Location = New System.Drawing.Point(68, 174)
        Me.Label4.Name = "Label4"
        Me.Label4.RightToLeft = System.Windows.Forms.RightToLeft.Yes
        Me.Label4.Size = New System.Drawing.Size(80, 14)
        Me.Label4.TabIndex = 0
        Me.Label4.Text = "hpp Path"
        '
        'Label3
        '
        Me.Label3.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label3.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer))
        Me.Label3.Location = New System.Drawing.Point(38, 111)
        Me.Label3.Name = "Label3"
        Me.Label3.RightToLeft = System.Windows.Forms.RightToLeft.Yes
        Me.Label3.Size = New System.Drawing.Size(116, 14)
        Me.Label3.TabIndex = 0
        Me.Label3.Text = "Project Path"
        '
        'Label2
        '
        Me.Label2.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label2.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer))
        Me.Label2.Location = New System.Drawing.Point(68, 73)
        Me.Label2.Name = "Label2"
        Me.Label2.RightToLeft = System.Windows.Forms.RightToLeft.Yes
        Me.Label2.Size = New System.Drawing.Size(80, 14)
        Me.Label2.TabIndex = 0
        Me.Label2.Text = "Project Name"
        '
        'Label1
        '
        Me.Label1.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer))
        Me.Label1.Location = New System.Drawing.Point(68, 34)
        Me.Label1.Name = "Label1"
        Me.Label1.RightToLeft = System.Windows.Forms.RightToLeft.Yes
        Me.Label1.Size = New System.Drawing.Size(80, 14)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "Customer"
        '
        'txtIncPath
        '
        Me.txtIncPath.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtIncPath.Enabled = False
        Me.txtIncPath.Location = New System.Drawing.Point(160, 296)
        Me.txtIncPath.Name = "txtIncPath"
        Me.txtIncPath.Size = New System.Drawing.Size(245, 23)
        Me.txtIncPath.TabIndex = 6
        '
        'txtSqlPath
        '
        Me.txtSqlPath.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtSqlPath.Enabled = False
        Me.txtSqlPath.Location = New System.Drawing.Point(160, 249)
        Me.txtSqlPath.Name = "txtSqlPath"
        Me.txtSqlPath.Size = New System.Drawing.Size(245, 23)
        Me.txtSqlPath.TabIndex = 5
        '
        'txtCppPath
        '
        Me.txtCppPath.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtCppPath.Enabled = False
        Me.txtCppPath.Location = New System.Drawing.Point(160, 206)
        Me.txtCppPath.Name = "txtCppPath"
        Me.txtCppPath.Size = New System.Drawing.Size(245, 23)
        Me.txtCppPath.TabIndex = 4
        '
        'txtHppPath
        '
        Me.txtHppPath.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtHppPath.Enabled = False
        Me.txtHppPath.Location = New System.Drawing.Point(160, 165)
        Me.txtHppPath.Name = "txtHppPath"
        Me.txtHppPath.Size = New System.Drawing.Size(245, 23)
        Me.txtHppPath.TabIndex = 3
        '
        'txtProPath
        '
        Me.txtProPath.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtProPath.Location = New System.Drawing.Point(160, 102)
        Me.txtProPath.Name = "txtProPath"
        Me.txtProPath.Size = New System.Drawing.Size(245, 23)
        Me.txtProPath.TabIndex = 2
        '
        'txtProName
        '
        Me.txtProName.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtProName.Location = New System.Drawing.Point(160, 64)
        Me.txtProName.Name = "txtProName"
        Me.txtProName.Size = New System.Drawing.Size(245, 23)
        Me.txtProName.TabIndex = 1
        '
        'txtCus
        '
        Me.txtCus.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtCus.Location = New System.Drawing.Point(160, 25)
        Me.txtCus.Name = "txtCus"
        Me.txtCus.Size = New System.Drawing.Size(245, 23)
        Me.txtCus.TabIndex = 0
        '
        'tabCtrl
        '
        Me.tabCtrl.Controls.Add(Me.tabProSet)
        Me.tabCtrl.Controls.Add(Me.tabCodeGen)
        Me.tabCtrl.Location = New System.Drawing.Point(12, 12)
        Me.tabCtrl.Name = "tabCtrl"
        Me.tabCtrl.SelectedIndex = 0
        Me.tabCtrl.Size = New System.Drawing.Size(762, 368)
        Me.tabCtrl.TabIndex = 1
        '
        'ProjectOptionsDlg
        '
        Me.AcceptButton = Me.btnOk
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 12.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.Color.Silver
        Me.CancelButton = Me.btnCancel
        Me.ClientSize = New System.Drawing.Size(788, 424)
        Me.Controls.Add(Me.tabCtrl)
        Me.Controls.Add(Me.TableLayoutPanel1)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.MaximizeBox = False
        Me.MinimizeBox = False
        Me.Name = "ProjectOptionsDlg"
        Me.ShowInTaskbar = False
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterParent
        Me.Text = "Project Options"
        Me.TableLayoutPanel1.ResumeLayout(False)
        Me.tabCodeGen.ResumeLayout(False)
        Me.tabCodeGen.PerformLayout()
        Me.tabProSet.ResumeLayout(False)
        Me.tabProSet.PerformLayout()
        Me.tabCtrl.ResumeLayout(False)
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents TableLayoutPanel1 As System.Windows.Forms.TableLayoutPanel
    Friend WithEvents btnOk As System.Windows.Forms.Button
    Friend WithEvents btnCancel As System.Windows.Forms.Button
    Friend WithEvents openDlgForSetting As System.Windows.Forms.FolderBrowserDialog
    Friend WithEvents tabCodeGen As System.Windows.Forms.TabPage
    Friend WithEvents CheckBox4 As System.Windows.Forms.CheckBox
    Friend WithEvents CheckBox3 As System.Windows.Forms.CheckBox
    Friend WithEvents cke As System.Windows.Forms.CheckBox
    Friend WithEvents ckeSQL As System.Windows.Forms.CheckBox
    Friend WithEvents tabProSet As System.Windows.Forms.TabPage
    Friend WithEvents btnIncPath As System.Windows.Forms.Button
    Friend WithEvents btnSqlPath As System.Windows.Forms.Button
    Friend WithEvents btnCppPath As System.Windows.Forms.Button
    Friend WithEvents btnHppPath As System.Windows.Forms.Button
    Friend WithEvents btnProPath As System.Windows.Forms.Button
    Friend WithEvents Label7 As System.Windows.Forms.Label
    Friend WithEvents Label6 As System.Windows.Forms.Label
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents txtIncPath As System.Windows.Forms.TextBox
    Friend WithEvents txtSqlPath As System.Windows.Forms.TextBox
    Friend WithEvents txtCppPath As System.Windows.Forms.TextBox
    Friend WithEvents txtHppPath As System.Windows.Forms.TextBox
    Friend WithEvents txtProPath As System.Windows.Forms.TextBox
    Friend WithEvents txtProName As System.Windows.Forms.TextBox
    Friend WithEvents txtCus As System.Windows.Forms.TextBox
    Friend WithEvents tabCtrl As System.Windows.Forms.TabControl

End Class
