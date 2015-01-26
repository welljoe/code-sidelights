<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class TableFieldDlg
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
        Dim DataGridViewCellStyle1 As System.Windows.Forms.DataGridViewCellStyle = New System.Windows.Forms.DataGridViewCellStyle
        Dim DataGridViewCellStyle2 As System.Windows.Forms.DataGridViewCellStyle = New System.Windows.Forms.DataGridViewCellStyle
        Dim DataGridViewCellStyle3 As System.Windows.Forms.DataGridViewCellStyle = New System.Windows.Forms.DataGridViewCellStyle
        Dim DataGridViewCellStyle4 As System.Windows.Forms.DataGridViewCellStyle = New System.Windows.Forms.DataGridViewCellStyle
        Me.GroupBox1 = New System.Windows.Forms.GroupBox
        Me.txtFind = New System.Windows.Forms.TextBox
        Me.btnFind = New System.Windows.Forms.Button
        Me.cmbTables = New System.Windows.Forms.ComboBox
        Me.Label1 = New System.Windows.Forms.Label
        Me.StatusStrip1 = New System.Windows.Forms.StatusStrip
        Me.statLab = New System.Windows.Forms.ToolStripStatusLabel
        Me.GroupBox4 = New System.Windows.Forms.GroupBox
        Me.dgField = New System.Windows.Forms.DataGridView
        Me.GroupBox2 = New System.Windows.Forms.GroupBox
        Me.chkNotNul = New System.Windows.Forms.CheckBox
        Me.chkPKey = New System.Windows.Forms.CheckBox
        Me.cmbBaseType = New System.Windows.Forms.ComboBox
        Me.txtComments = New System.Windows.Forms.TextBox
        Me.Label4 = New System.Windows.Forms.Label
        Me.txtFieldName = New System.Windows.Forms.TextBox
        Me.Label6 = New System.Windows.Forms.Label
        Me.Label3 = New System.Windows.Forms.Label
        Me.txtUnit = New System.Windows.Forms.TextBox
        Me.txtLength = New System.Windows.Forms.TextBox
        Me.Label8 = New System.Windows.Forms.Label
        Me.Label7 = New System.Windows.Forms.Label
        Me.txtNo = New System.Windows.Forms.TextBox
        Me.Label2 = New System.Windows.Forms.Label
        Me.GroupBox3 = New System.Windows.Forms.GroupBox
        Me.btnExit = New System.Windows.Forms.Button
        Me.btnCancel = New System.Windows.Forms.Button
        Me.btnEditField = New System.Windows.Forms.Button
        Me.btnRemove = New System.Windows.Forms.Button
        Me.btnInsert = New System.Windows.Forms.Button
        Me.GroupBox1.SuspendLayout()
        Me.StatusStrip1.SuspendLayout()
        Me.GroupBox4.SuspendLayout()
        CType(Me.dgField, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.GroupBox2.SuspendLayout()
        Me.GroupBox3.SuspendLayout()
        Me.SuspendLayout()
        '
        'GroupBox1
        '
        Me.GroupBox1.BackColor = System.Drawing.Color.Silver
        Me.GroupBox1.Controls.Add(Me.txtFind)
        Me.GroupBox1.Controls.Add(Me.btnFind)
        Me.GroupBox1.Controls.Add(Me.cmbTables)
        Me.GroupBox1.Controls.Add(Me.Label1)
        Me.GroupBox1.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.GroupBox1.Location = New System.Drawing.Point(5, 0)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(917, 59)
        Me.GroupBox1.TabIndex = 1
        Me.GroupBox1.TabStop = False
        '
        'txtFind
        '
        Me.txtFind.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtFind.Font = New System.Drawing.Font("SimSun", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(134, Byte))
        Me.txtFind.ForeColor = System.Drawing.Color.Navy
        Me.txtFind.Location = New System.Drawing.Point(303, 20)
        Me.txtFind.Name = "txtFind"
        Me.txtFind.Size = New System.Drawing.Size(157, 23)
        Me.txtFind.TabIndex = 1
        '
        'btnFind
        '
        Me.btnFind.BackColor = System.Drawing.Color.Lavender
        Me.btnFind.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnFind.Location = New System.Drawing.Point(468, 20)
        Me.btnFind.Name = "btnFind"
        Me.btnFind.Size = New System.Drawing.Size(69, 23)
        Me.btnFind.TabIndex = 2
        Me.btnFind.Text = "Find"
        Me.btnFind.UseVisualStyleBackColor = False
        '
        'cmbTables
        '
        Me.cmbTables.DropDownHeight = 108
        Me.cmbTables.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.cmbTables.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.cmbTables.FormattingEnabled = True
        Me.cmbTables.IntegralHeight = False
        Me.cmbTables.Location = New System.Drawing.Point(114, 23)
        Me.cmbTables.Name = "cmbTables"
        Me.cmbTables.Size = New System.Drawing.Size(127, 20)
        Me.cmbTables.TabIndex = 0
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.ForeColor = System.Drawing.Color.Navy
        Me.Label1.Location = New System.Drawing.Point(12, 27)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(98, 16)
        Me.Label1.TabIndex = 10
        Me.Label1.Text = "Select Tables:"
        '
        'StatusStrip1
        '
        Me.StatusStrip1.BackColor = System.Drawing.Color.Transparent
        Me.StatusStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.statLab})
        Me.StatusStrip1.Location = New System.Drawing.Point(0, 699)
        Me.StatusStrip1.Name = "StatusStrip1"
        Me.StatusStrip1.Size = New System.Drawing.Size(926, 22)
        Me.StatusStrip1.TabIndex = 4
        Me.StatusStrip1.Text = "StatusStrip1"
        '
        'statLab
        '
        Me.statLab.ForeColor = System.Drawing.Color.Red
        Me.statLab.Name = "statLab"
        Me.statLab.Size = New System.Drawing.Size(43, 17)
        Me.statLab.Text = "Ready"
        '
        'GroupBox4
        '
        Me.GroupBox4.Controls.Add(Me.dgField)
        Me.GroupBox4.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.GroupBox4.Location = New System.Drawing.Point(5, 65)
        Me.GroupBox4.Name = "GroupBox4"
        Me.GroupBox4.Size = New System.Drawing.Size(917, 420)
        Me.GroupBox4.TabIndex = 3
        Me.GroupBox4.TabStop = False
        Me.GroupBox4.Text = "Table Fieds"
        '
        'dgField
        '
        Me.dgField.AllowUserToAddRows = False
        Me.dgField.AllowUserToDeleteRows = False
        DataGridViewCellStyle1.SelectionBackColor = System.Drawing.Color.FromArgb(CType(CType(128, Byte), Integer), CType(CType(128, Byte), Integer), CType(CType(255, Byte), Integer))
        DataGridViewCellStyle1.SelectionForeColor = System.Drawing.Color.White
        Me.dgField.AlternatingRowsDefaultCellStyle = DataGridViewCellStyle1
        Me.dgField.AutoSizeRowsMode = System.Windows.Forms.DataGridViewAutoSizeRowsMode.DisplayedCellsExceptHeaders
        Me.dgField.BackgroundColor = System.Drawing.SystemColors.ControlLightLight
        Me.dgField.CausesValidation = False
        Me.dgField.CellBorderStyle = System.Windows.Forms.DataGridViewCellBorderStyle.Raised
        DataGridViewCellStyle2.Alignment = System.Windows.Forms.DataGridViewContentAlignment.MiddleCenter
        DataGridViewCellStyle2.BackColor = System.Drawing.SystemColors.Control
        DataGridViewCellStyle2.Font = New System.Drawing.Font("SimSun", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(134, Byte))
        DataGridViewCellStyle2.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer))
        DataGridViewCellStyle2.SelectionBackColor = System.Drawing.SystemColors.Highlight
        DataGridViewCellStyle2.SelectionForeColor = System.Drawing.SystemColors.HighlightText
        DataGridViewCellStyle2.WrapMode = System.Windows.Forms.DataGridViewTriState.[True]
        Me.dgField.ColumnHeadersDefaultCellStyle = DataGridViewCellStyle2
        Me.dgField.ColumnHeadersHeight = 20
        Me.dgField.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.DisableResizing
        Me.dgField.GridColor = System.Drawing.Color.FromArgb(CType(CType(128, Byte), Integer), CType(CType(128, Byte), Integer), CType(CType(255, Byte), Integer))
        Me.dgField.Location = New System.Drawing.Point(6, 17)
        Me.dgField.MultiSelect = False
        Me.dgField.Name = "dgField"
        Me.dgField.ReadOnly = True
        Me.dgField.RightToLeft = System.Windows.Forms.RightToLeft.No
        Me.dgField.RowHeadersBorderStyle = System.Windows.Forms.DataGridViewHeaderBorderStyle.[Single]
        DataGridViewCellStyle3.Alignment = System.Windows.Forms.DataGridViewContentAlignment.MiddleLeft
        DataGridViewCellStyle3.BackColor = System.Drawing.SystemColors.Control
        DataGridViewCellStyle3.Font = New System.Drawing.Font("SimSun", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(134, Byte))
        DataGridViewCellStyle3.ForeColor = System.Drawing.SystemColors.WindowText
        DataGridViewCellStyle3.SelectionBackColor = System.Drawing.Color.DarkGoldenrod
        DataGridViewCellStyle3.SelectionForeColor = System.Drawing.SystemColors.HighlightText
        DataGridViewCellStyle3.WrapMode = System.Windows.Forms.DataGridViewTriState.[True]
        Me.dgField.RowHeadersDefaultCellStyle = DataGridViewCellStyle3
        Me.dgField.RowHeadersWidthSizeMode = System.Windows.Forms.DataGridViewRowHeadersWidthSizeMode.AutoSizeToDisplayedHeaders
        DataGridViewCellStyle4.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        DataGridViewCellStyle4.SelectionBackColor = System.Drawing.Color.DarkGoldenrod
        Me.dgField.RowsDefaultCellStyle = DataGridViewCellStyle4
        Me.dgField.RowTemplate.Height = 23
        Me.dgField.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect
        Me.dgField.Size = New System.Drawing.Size(905, 391)
        Me.dgField.TabIndex = 0
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.chkNotNul)
        Me.GroupBox2.Controls.Add(Me.chkPKey)
        Me.GroupBox2.Controls.Add(Me.cmbBaseType)
        Me.GroupBox2.Controls.Add(Me.txtComments)
        Me.GroupBox2.Controls.Add(Me.Label4)
        Me.GroupBox2.Controls.Add(Me.txtFieldName)
        Me.GroupBox2.Controls.Add(Me.Label6)
        Me.GroupBox2.Controls.Add(Me.Label3)
        Me.GroupBox2.Controls.Add(Me.txtUnit)
        Me.GroupBox2.Controls.Add(Me.txtLength)
        Me.GroupBox2.Controls.Add(Me.Label8)
        Me.GroupBox2.Controls.Add(Me.Label7)
        Me.GroupBox2.Controls.Add(Me.txtNo)
        Me.GroupBox2.Controls.Add(Me.Label2)
        Me.GroupBox2.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.GroupBox2.Location = New System.Drawing.Point(5, 491)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(917, 144)
        Me.GroupBox2.TabIndex = 2
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "Fieds Detail"
        '
        'chkNotNul
        '
        Me.chkNotNul.AutoSize = True
        Me.chkNotNul.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.chkNotNul.Location = New System.Drawing.Point(380, 26)
        Me.chkNotNul.Name = "chkNotNul"
        Me.chkNotNul.Size = New System.Drawing.Size(70, 16)
        Me.chkNotNul.TabIndex = 2
        Me.chkNotNul.Text = "Not NULL"
        Me.chkNotNul.UseVisualStyleBackColor = True
        '
        'chkPKey
        '
        Me.chkPKey.AutoSize = True
        Me.chkPKey.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.chkPKey.Location = New System.Drawing.Point(259, 28)
        Me.chkPKey.Name = "chkPKey"
        Me.chkPKey.Size = New System.Drawing.Size(88, 16)
        Me.chkPKey.TabIndex = 1
        Me.chkPKey.Text = "Primary Key"
        Me.chkPKey.UseVisualStyleBackColor = True
        '
        'cmbBaseType
        '
        Me.cmbBaseType.BackColor = System.Drawing.SystemColors.HighlightText
        Me.cmbBaseType.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.cmbBaseType.FormattingEnabled = True
        Me.cmbBaseType.Location = New System.Drawing.Point(303, 57)
        Me.cmbBaseType.Name = "cmbBaseType"
        Me.cmbBaseType.Size = New System.Drawing.Size(130, 20)
        Me.cmbBaseType.TabIndex = 4
        '
        'txtComments
        '
        Me.txtComments.BackColor = System.Drawing.SystemColors.HighlightText
        Me.txtComments.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtComments.Font = New System.Drawing.Font("Arial", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtComments.Location = New System.Drawing.Point(93, 92)
        Me.txtComments.Name = "txtComments"
        Me.txtComments.Size = New System.Drawing.Size(610, 21)
        Me.txtComments.TabIndex = 7
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Location = New System.Drawing.Point(31, 101)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(53, 12)
        Me.Label4.TabIndex = 0
        Me.Label4.Text = "Comments"
        '
        'txtFieldName
        '
        Me.txtFieldName.BackColor = System.Drawing.SystemColors.HighlightText
        Me.txtFieldName.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtFieldName.Font = New System.Drawing.Font("Arial", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtFieldName.Location = New System.Drawing.Point(93, 56)
        Me.txtFieldName.Name = "txtFieldName"
        Me.txtFieldName.Size = New System.Drawing.Size(133, 21)
        Me.txtFieldName.TabIndex = 3
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Location = New System.Drawing.Point(257, 61)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(41, 12)
        Me.Label6.TabIndex = 0
        Me.Label6.Text = "D-Type"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(31, 65)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(59, 12)
        Me.Label3.TabIndex = 0
        Me.Label3.Text = "FieldName"
        '
        'txtUnit
        '
        Me.txtUnit.BackColor = System.Drawing.SystemColors.HighlightText
        Me.txtUnit.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtUnit.Font = New System.Drawing.Font("Arial", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtUnit.Location = New System.Drawing.Point(645, 56)
        Me.txtUnit.Name = "txtUnit"
        Me.txtUnit.Size = New System.Drawing.Size(58, 21)
        Me.txtUnit.TabIndex = 6
        '
        'txtLength
        '
        Me.txtLength.BackColor = System.Drawing.SystemColors.HighlightText
        Me.txtLength.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtLength.Font = New System.Drawing.Font("Arial", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtLength.Location = New System.Drawing.Point(539, 56)
        Me.txtLength.Name = "txtLength"
        Me.txtLength.Size = New System.Drawing.Size(45, 21)
        Me.txtLength.TabIndex = 5
        '
        'Label8
        '
        Me.Label8.AutoSize = True
        Me.Label8.Location = New System.Drawing.Point(468, 63)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(65, 12)
        Me.Label8.TabIndex = 0
        Me.Label8.Text = "Array Size"
        '
        'Label7
        '
        Me.Label7.AutoSize = True
        Me.Label7.Location = New System.Drawing.Point(610, 63)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(29, 12)
        Me.Label7.TabIndex = 0
        Me.Label7.Text = "Unit"
        '
        'txtNo
        '
        Me.txtNo.BackColor = System.Drawing.SystemColors.HighlightText
        Me.txtNo.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtNo.Font = New System.Drawing.Font("Arial", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtNo.Location = New System.Drawing.Point(93, 24)
        Me.txtNo.Name = "txtNo"
        Me.txtNo.Size = New System.Drawing.Size(44, 21)
        Me.txtNo.TabIndex = 0
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(31, 28)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(47, 12)
        Me.Label2.TabIndex = 0
        Me.Label2.Text = "FieldNo"
        '
        'GroupBox3
        '
        Me.GroupBox3.Controls.Add(Me.btnExit)
        Me.GroupBox3.Controls.Add(Me.btnCancel)
        Me.GroupBox3.Controls.Add(Me.btnEditField)
        Me.GroupBox3.Controls.Add(Me.btnRemove)
        Me.GroupBox3.Controls.Add(Me.btnInsert)
        Me.GroupBox3.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.GroupBox3.Location = New System.Drawing.Point(5, 641)
        Me.GroupBox3.Name = "GroupBox3"
        Me.GroupBox3.Size = New System.Drawing.Size(917, 54)
        Me.GroupBox3.TabIndex = 3
        Me.GroupBox3.TabStop = False
        Me.GroupBox3.Text = "Command"
        '
        'btnExit
        '
        Me.btnExit.BackColor = System.Drawing.Color.Lavender
        Me.btnExit.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnExit.Location = New System.Drawing.Point(816, 17)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(77, 28)
        Me.btnExit.TabIndex = 4
        Me.btnExit.Text = "Exit"
        Me.btnExit.UseVisualStyleBackColor = False
        '
        'btnCancel
        '
        Me.btnCancel.BackColor = System.Drawing.Color.Lavender
        Me.btnCancel.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnCancel.Location = New System.Drawing.Point(421, 16)
        Me.btnCancel.Name = "btnCancel"
        Me.btnCancel.Size = New System.Drawing.Size(77, 28)
        Me.btnCancel.TabIndex = 3
        Me.btnCancel.Text = "Cancel"
        Me.btnCancel.UseVisualStyleBackColor = False
        '
        'btnEditField
        '
        Me.btnEditField.BackColor = System.Drawing.Color.Lavender
        Me.btnEditField.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnEditField.Location = New System.Drawing.Point(189, 16)
        Me.btnEditField.Name = "btnEditField"
        Me.btnEditField.Size = New System.Drawing.Size(77, 28)
        Me.btnEditField.TabIndex = 1
        Me.btnEditField.Text = "Edit"
        Me.btnEditField.UseVisualStyleBackColor = False
        '
        'btnRemove
        '
        Me.btnRemove.BackColor = System.Drawing.Color.Lavender
        Me.btnRemove.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnRemove.Location = New System.Drawing.Point(311, 16)
        Me.btnRemove.Name = "btnRemove"
        Me.btnRemove.Size = New System.Drawing.Size(77, 28)
        Me.btnRemove.TabIndex = 2
        Me.btnRemove.Text = "Remove"
        Me.btnRemove.UseVisualStyleBackColor = False
        '
        'btnInsert
        '
        Me.btnInsert.BackColor = System.Drawing.Color.Lavender
        Me.btnInsert.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnInsert.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft
        Me.btnInsert.Location = New System.Drawing.Point(69, 16)
        Me.btnInsert.Name = "btnInsert"
        Me.btnInsert.Size = New System.Drawing.Size(77, 28)
        Me.btnInsert.TabIndex = 0
        Me.btnInsert.Text = "New"
        Me.btnInsert.UseVisualStyleBackColor = False
        '
        'TableFieldDlg
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 12.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.Color.Silver
        Me.ClientSize = New System.Drawing.Size(926, 721)
        Me.Controls.Add(Me.GroupBox3)
        Me.Controls.Add(Me.GroupBox2)
        Me.Controls.Add(Me.GroupBox4)
        Me.Controls.Add(Me.GroupBox1)
        Me.Controls.Add(Me.StatusStrip1)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.MaximizeBox = False
        Me.Name = "TableFieldDlg"
        Me.Text = "TableField"
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        Me.StatusStrip1.ResumeLayout(False)
        Me.StatusStrip1.PerformLayout()
        Me.GroupBox4.ResumeLayout(False)
        CType(Me.dgField, System.ComponentModel.ISupportInitialize).EndInit()
        Me.GroupBox2.ResumeLayout(False)
        Me.GroupBox2.PerformLayout()
        Me.GroupBox3.ResumeLayout(False)
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents StatusStrip1 As System.Windows.Forms.StatusStrip
    Friend WithEvents statLab As System.Windows.Forms.ToolStripStatusLabel
    Friend WithEvents GroupBox4 As System.Windows.Forms.GroupBox
    Friend WithEvents dgField As System.Windows.Forms.DataGridView
    Friend WithEvents txtFind As System.Windows.Forms.TextBox
    Friend WithEvents btnFind As System.Windows.Forms.Button
    Friend WithEvents cmbTables As System.Windows.Forms.ComboBox
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents GroupBox2 As System.Windows.Forms.GroupBox
    Friend WithEvents chkNotNul As System.Windows.Forms.CheckBox
    Friend WithEvents chkPKey As System.Windows.Forms.CheckBox
    Friend WithEvents cmbBaseType As System.Windows.Forms.ComboBox
    Friend WithEvents txtComments As System.Windows.Forms.TextBox
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents txtFieldName As System.Windows.Forms.TextBox
    Friend WithEvents Label6 As System.Windows.Forms.Label
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents txtNo As System.Windows.Forms.TextBox
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents txtUnit As System.Windows.Forms.TextBox
    Friend WithEvents Label8 As System.Windows.Forms.Label
    Friend WithEvents Label7 As System.Windows.Forms.Label
    Friend WithEvents GroupBox3 As System.Windows.Forms.GroupBox
    Friend WithEvents btnEditField As System.Windows.Forms.Button
    Friend WithEvents btnRemove As System.Windows.Forms.Button
    Friend WithEvents btnInsert As System.Windows.Forms.Button
    Friend WithEvents txtLength As System.Windows.Forms.TextBox
    Friend WithEvents btnCancel As System.Windows.Forms.Button
    Friend WithEvents btnExit As System.Windows.Forms.Button
End Class
