<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class DataTypes
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
        Me.Panel1 = New System.Windows.Forms.Panel
        Me.tabCtrl = New System.Windows.Forms.TabControl
        Me.tabBase = New System.Windows.Forms.TabPage
        Me.GroupBox2 = New System.Windows.Forms.GroupBox
        Me.dgridBase = New System.Windows.Forms.DataGridView
        Me.GroupBox1 = New System.Windows.Forms.GroupBox
        Me.Label2 = New System.Windows.Forms.Label
        Me.Label1 = New System.Windows.Forms.Label
        Me.txtBaseLength = New System.Windows.Forms.TextBox
        Me.txtBaseName = New System.Windows.Forms.TextBox
        Me.tabTable = New System.Windows.Forms.TabPage
        Me.GroupBox4 = New System.Windows.Forms.GroupBox
        Me.dgDataType = New System.Windows.Forms.DataGridView
        Me.GroupBox3 = New System.Windows.Forms.GroupBox
        Me.txtDesp = New System.Windows.Forms.TextBox
        Me.Label8 = New System.Windows.Forms.Label
        Me.Label9 = New System.Windows.Forms.Label
        Me.txtDataType = New System.Windows.Forms.TextBox
        Me.btnDelete = New System.Windows.Forms.Button
        Me.btnNew = New System.Windows.Forms.Button
        Me.GroupBox5 = New System.Windows.Forms.GroupBox
        Me.Cancel_Button = New System.Windows.Forms.Button
        Me.lbSpace = New System.Windows.Forms.Label
        Me.txtTableSpace = New System.Windows.Forms.TextBox
        Me.Panel1.SuspendLayout()
        Me.tabCtrl.SuspendLayout()
        Me.tabBase.SuspendLayout()
        Me.GroupBox2.SuspendLayout()
        CType(Me.dgridBase, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.GroupBox1.SuspendLayout()
        Me.tabTable.SuspendLayout()
        Me.GroupBox4.SuspendLayout()
        CType(Me.dgDataType, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.GroupBox3.SuspendLayout()
        Me.GroupBox5.SuspendLayout()
        Me.SuspendLayout()
        '
        'Panel1
        '
        Me.Panel1.Controls.Add(Me.tabCtrl)
        Me.Panel1.Location = New System.Drawing.Point(9, 12)
        Me.Panel1.Name = "Panel1"
        Me.Panel1.Size = New System.Drawing.Size(662, 373)
        Me.Panel1.TabIndex = 1
        '
        'tabCtrl
        '
        Me.tabCtrl.Controls.Add(Me.tabBase)
        Me.tabCtrl.Controls.Add(Me.tabTable)
        Me.tabCtrl.Font = New System.Drawing.Font("Arial", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.tabCtrl.Location = New System.Drawing.Point(3, 3)
        Me.tabCtrl.Name = "tabCtrl"
        Me.tabCtrl.SelectedIndex = 0
        Me.tabCtrl.Size = New System.Drawing.Size(651, 369)
        Me.tabCtrl.TabIndex = 0
        '
        'tabBase
        '
        Me.tabBase.BackColor = System.Drawing.Color.Silver
        Me.tabBase.Controls.Add(Me.GroupBox2)
        Me.tabBase.Controls.Add(Me.GroupBox1)
        Me.tabBase.Font = New System.Drawing.Font("SimSun", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(134, Byte))
        Me.tabBase.Location = New System.Drawing.Point(4, 24)
        Me.tabBase.Name = "tabBase"
        Me.tabBase.Padding = New System.Windows.Forms.Padding(3)
        Me.tabBase.Size = New System.Drawing.Size(643, 341)
        Me.tabBase.TabIndex = 0
        Me.tabBase.Text = "Base Type"
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.dgridBase)
        Me.GroupBox2.Font = New System.Drawing.Font("Arial", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.GroupBox2.Location = New System.Drawing.Point(6, 93)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(620, 245)
        Me.GroupBox2.TabIndex = 1
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "Base Type Information"
        '
        'dgridBase
        '
        Me.dgridBase.AllowUserToAddRows = False
        Me.dgridBase.AllowUserToDeleteRows = False
        Me.dgridBase.BackgroundColor = System.Drawing.SystemColors.ControlLightLight
        Me.dgridBase.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize
        Me.dgridBase.GridColor = System.Drawing.Color.FromArgb(CType(CType(128, Byte), Integer), CType(CType(128, Byte), Integer), CType(CType(255, Byte), Integer))
        Me.dgridBase.Location = New System.Drawing.Point(9, 22)
        Me.dgridBase.MultiSelect = False
        Me.dgridBase.Name = "dgridBase"
        Me.dgridBase.ReadOnly = True
        Me.dgridBase.RowTemplate.Height = 23
        Me.dgridBase.ScrollBars = System.Windows.Forms.ScrollBars.Vertical
        Me.dgridBase.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect
        Me.dgridBase.Size = New System.Drawing.Size(605, 207)
        Me.dgridBase.TabIndex = 0
        '
        'GroupBox1
        '
        Me.GroupBox1.BackColor = System.Drawing.Color.Silver
        Me.GroupBox1.Controls.Add(Me.Label2)
        Me.GroupBox1.Controls.Add(Me.Label1)
        Me.GroupBox1.Controls.Add(Me.txtBaseLength)
        Me.GroupBox1.Controls.Add(Me.txtBaseName)
        Me.GroupBox1.Font = New System.Drawing.Font("Arial", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.GroupBox1.Location = New System.Drawing.Point(7, 6)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(620, 81)
        Me.GroupBox1.TabIndex = 0
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Type Items"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.Label2.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label2.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer))
        Me.Label2.Location = New System.Drawing.Point(10, 53)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(56, 16)
        Me.Label2.TabIndex = 4
        Me.Label2.Text = "Length:"
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.Label1.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer))
        Me.Label1.Location = New System.Drawing.Point(10, 23)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(48, 16)
        Me.Label1.TabIndex = 3
        Me.Label1.Text = "Name:"
        '
        'txtBaseLength
        '
        Me.txtBaseLength.BackColor = System.Drawing.SystemColors.HighlightText
        Me.txtBaseLength.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtBaseLength.Font = New System.Drawing.Font("Arial", 9.0!)
        Me.txtBaseLength.Location = New System.Drawing.Point(82, 48)
        Me.txtBaseLength.Name = "txtBaseLength"
        Me.txtBaseLength.Size = New System.Drawing.Size(90, 21)
        Me.txtBaseLength.TabIndex = 2
        '
        'txtBaseName
        '
        Me.txtBaseName.BackColor = System.Drawing.SystemColors.HighlightText
        Me.txtBaseName.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtBaseName.Font = New System.Drawing.Font("Arial", 9.0!)
        Me.txtBaseName.Location = New System.Drawing.Point(82, 18)
        Me.txtBaseName.Name = "txtBaseName"
        Me.txtBaseName.Size = New System.Drawing.Size(183, 21)
        Me.txtBaseName.TabIndex = 1
        '
        'tabTable
        '
        Me.tabTable.BackColor = System.Drawing.Color.Silver
        Me.tabTable.Controls.Add(Me.GroupBox4)
        Me.tabTable.Controls.Add(Me.GroupBox3)
        Me.tabTable.Location = New System.Drawing.Point(4, 24)
        Me.tabTable.Name = "tabTable"
        Me.tabTable.Padding = New System.Windows.Forms.Padding(3)
        Me.tabTable.Size = New System.Drawing.Size(643, 341)
        Me.tabTable.TabIndex = 1
        Me.tabTable.Text = "Table Type"
        Me.tabTable.UseVisualStyleBackColor = True
        '
        'GroupBox4
        '
        Me.GroupBox4.BackColor = System.Drawing.Color.Silver
        Me.GroupBox4.Controls.Add(Me.dgDataType)
        Me.GroupBox4.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.GroupBox4.Location = New System.Drawing.Point(6, 93)
        Me.GroupBox4.Name = "GroupBox4"
        Me.GroupBox4.Size = New System.Drawing.Size(631, 238)
        Me.GroupBox4.TabIndex = 7
        Me.GroupBox4.TabStop = False
        Me.GroupBox4.Text = "Table Type Infromation"
        '
        'dgDataType
        '
        Me.dgDataType.AllowUserToAddRows = False
        Me.dgDataType.AllowUserToDeleteRows = False
        Me.dgDataType.BackgroundColor = System.Drawing.SystemColors.ControlLightLight
        Me.dgDataType.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize
        Me.dgDataType.GridColor = System.Drawing.Color.FromArgb(CType(CType(128, Byte), Integer), CType(CType(128, Byte), Integer), CType(CType(255, Byte), Integer))
        Me.dgDataType.Location = New System.Drawing.Point(6, 20)
        Me.dgDataType.MultiSelect = False
        Me.dgDataType.Name = "dgDataType"
        Me.dgDataType.ReadOnly = True
        Me.dgDataType.RowHeadersWidth = 10
        Me.dgDataType.RowTemplate.Height = 23
        Me.dgDataType.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect
        Me.dgDataType.Size = New System.Drawing.Size(619, 212)
        Me.dgDataType.TabIndex = 3
        '
        'GroupBox3
        '
        Me.GroupBox3.BackColor = System.Drawing.Color.Silver
        Me.GroupBox3.Controls.Add(Me.txtTableSpace)
        Me.GroupBox3.Controls.Add(Me.lbSpace)
        Me.GroupBox3.Controls.Add(Me.txtDesp)
        Me.GroupBox3.Controls.Add(Me.Label8)
        Me.GroupBox3.Controls.Add(Me.Label9)
        Me.GroupBox3.Controls.Add(Me.txtDataType)
        Me.GroupBox3.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.GroupBox3.Location = New System.Drawing.Point(6, 6)
        Me.GroupBox3.Name = "GroupBox3"
        Me.GroupBox3.Size = New System.Drawing.Size(631, 81)
        Me.GroupBox3.TabIndex = 6
        Me.GroupBox3.TabStop = False
        Me.GroupBox3.Text = "Type Items"
        '
        'txtDesp
        '
        Me.txtDesp.BackColor = System.Drawing.SystemColors.HighlightText
        Me.txtDesp.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtDesp.Location = New System.Drawing.Point(88, 47)
        Me.txtDesp.Name = "txtDesp"
        Me.txtDesp.Size = New System.Drawing.Size(493, 21)
        Me.txtDesp.TabIndex = 4
        '
        'Label8
        '
        Me.Label8.AutoSize = True
        Me.Label8.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label8.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer))
        Me.Label8.Location = New System.Drawing.Point(7, 20)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(74, 16)
        Me.Label8.TabIndex = 2
        Me.Label8.Text = "Data Type"
        '
        'Label9
        '
        Me.Label9.AutoSize = True
        Me.Label9.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label9.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer))
        Me.Label9.Location = New System.Drawing.Point(7, 52)
        Me.Label9.Name = "Label9"
        Me.Label9.Size = New System.Drawing.Size(75, 16)
        Me.Label9.TabIndex = 3
        Me.Label9.Text = "Comments"
        '
        'txtDataType
        '
        Me.txtDataType.BackColor = System.Drawing.SystemColors.HighlightText
        Me.txtDataType.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtDataType.Location = New System.Drawing.Point(88, 15)
        Me.txtDataType.Name = "txtDataType"
        Me.txtDataType.Size = New System.Drawing.Size(151, 21)
        Me.txtDataType.TabIndex = 5
        '
        'btnDelete
        '
        Me.btnDelete.BackColor = System.Drawing.Color.Lavender
        Me.btnDelete.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnDelete.Font = New System.Drawing.Font("Arial", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnDelete.Location = New System.Drawing.Point(144, 14)
        Me.btnDelete.Name = "btnDelete"
        Me.btnDelete.Size = New System.Drawing.Size(74, 25)
        Me.btnDelete.TabIndex = 5
        Me.btnDelete.Text = "Delete"
        Me.btnDelete.UseVisualStyleBackColor = False
        '
        'btnNew
        '
        Me.btnNew.BackColor = System.Drawing.Color.Lavender
        Me.btnNew.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnNew.Font = New System.Drawing.Font("Arial", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnNew.Location = New System.Drawing.Point(56, 14)
        Me.btnNew.Name = "btnNew"
        Me.btnNew.Size = New System.Drawing.Size(74, 25)
        Me.btnNew.TabIndex = 0
        Me.btnNew.Text = "New"
        Me.btnNew.UseVisualStyleBackColor = False
        '
        'GroupBox5
        '
        Me.GroupBox5.Controls.Add(Me.Cancel_Button)
        Me.GroupBox5.Controls.Add(Me.btnDelete)
        Me.GroupBox5.Controls.Add(Me.btnNew)
        Me.GroupBox5.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.GroupBox5.Location = New System.Drawing.Point(9, 389)
        Me.GroupBox5.Name = "GroupBox5"
        Me.GroupBox5.Size = New System.Drawing.Size(654, 45)
        Me.GroupBox5.TabIndex = 2
        Me.GroupBox5.TabStop = False
        Me.GroupBox5.Text = "Command"
        '
        'Cancel_Button
        '
        Me.Cancel_Button.Anchor = System.Windows.Forms.AnchorStyles.None
        Me.Cancel_Button.BackColor = System.Drawing.Color.Lavender
        Me.Cancel_Button.DialogResult = System.Windows.Forms.DialogResult.Cancel
        Me.Cancel_Button.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.Cancel_Button.Font = New System.Drawing.Font("Arial", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Cancel_Button.Location = New System.Drawing.Point(570, 14)
        Me.Cancel_Button.Name = "Cancel_Button"
        Me.Cancel_Button.Size = New System.Drawing.Size(74, 25)
        Me.Cancel_Button.TabIndex = 1
        Me.Cancel_Button.Text = "Exit"
        Me.Cancel_Button.UseVisualStyleBackColor = False
        '
        'lbSpace
        '
        Me.lbSpace.AutoSize = True
        Me.lbSpace.Font = New System.Drawing.Font("Arial", 10.5!)
        Me.lbSpace.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer))
        Me.lbSpace.Location = New System.Drawing.Point(259, 17)
        Me.lbSpace.Name = "lbSpace"
        Me.lbSpace.Size = New System.Drawing.Size(84, 16)
        Me.lbSpace.TabIndex = 6
        Me.lbSpace.Text = "TableSpace"
        '
        'txtTableSpace
        '
        Me.txtTableSpace.BackColor = System.Drawing.SystemColors.HighlightText
        Me.txtTableSpace.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtTableSpace.Location = New System.Drawing.Point(360, 14)
        Me.txtTableSpace.Name = "txtTableSpace"
        Me.txtTableSpace.Size = New System.Drawing.Size(151, 21)
        Me.txtTableSpace.TabIndex = 7
        '
        'DataTypes
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 12.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.Color.Silver
        Me.ClientSize = New System.Drawing.Size(672, 439)
        Me.Controls.Add(Me.GroupBox5)
        Me.Controls.Add(Me.Panel1)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.MaximizeBox = False
        Me.MinimizeBox = False
        Me.Name = "DataTypes"
        Me.ShowInTaskbar = False
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterParent
        Me.Text = "Data Types"
        Me.Panel1.ResumeLayout(False)
        Me.tabCtrl.ResumeLayout(False)
        Me.tabBase.ResumeLayout(False)
        Me.GroupBox2.ResumeLayout(False)
        CType(Me.dgridBase, System.ComponentModel.ISupportInitialize).EndInit()
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        Me.tabTable.ResumeLayout(False)
        Me.GroupBox4.ResumeLayout(False)
        CType(Me.dgDataType, System.ComponentModel.ISupportInitialize).EndInit()
        Me.GroupBox3.ResumeLayout(False)
        Me.GroupBox3.PerformLayout()
        Me.GroupBox5.ResumeLayout(False)
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents Panel1 As System.Windows.Forms.Panel
    Friend WithEvents tabCtrl As System.Windows.Forms.TabControl
    Friend WithEvents tabBase As System.Windows.Forms.TabPage
    Friend WithEvents tabTable As System.Windows.Forms.TabPage
    Friend WithEvents GroupBox2 As System.Windows.Forms.GroupBox
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents btnNew As System.Windows.Forms.Button
    Friend WithEvents dgridBase As System.Windows.Forms.DataGridView
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents txtBaseLength As System.Windows.Forms.TextBox
    Friend WithEvents txtBaseName As System.Windows.Forms.TextBox
    Friend WithEvents btnDelete As System.Windows.Forms.Button
    Friend WithEvents txtDesp As System.Windows.Forms.TextBox
    Friend WithEvents Label9 As System.Windows.Forms.Label
    Friend WithEvents txtDataType As System.Windows.Forms.TextBox
    Friend WithEvents Label8 As System.Windows.Forms.Label
    Friend WithEvents GroupBox4 As System.Windows.Forms.GroupBox
    Friend WithEvents GroupBox3 As System.Windows.Forms.GroupBox
    Friend WithEvents dgDataType As System.Windows.Forms.DataGridView
    Friend WithEvents GroupBox5 As System.Windows.Forms.GroupBox
    Friend WithEvents Cancel_Button As System.Windows.Forms.Button
    Friend WithEvents txtTableSpace As System.Windows.Forms.TextBox
    Friend WithEvents lbSpace As System.Windows.Forms.Label

End Class
