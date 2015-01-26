<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class DataBaseCodeGenerator
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
        Me.Label4 = New System.Windows.Forms.Label
        Me.TableFieldsToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.OptionsToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.UserToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.SettingToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.LinencesToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.ToolStripSeparator1 = New System.Windows.Forms.ToolStripSeparator
        Me.ImportExcelToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.ExitToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.TablesToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.EditViewToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.btnSelectAll = New System.Windows.Forms.Button
        Me.statusLab = New System.Windows.Forms.ToolStripStatusLabel
        Me.OpenFileDlg = New System.Windows.Forms.OpenFileDialog
        Me.AboutToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.AboutToolStripMenuItem1 = New System.Windows.Forms.ToolStripMenuItem
        Me.GenerateToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.StatusStrip1 = New System.Windows.Forms.StatusStrip
        Me.Label1 = New System.Windows.Forms.Label
        Me.btnGenerate = New System.Windows.Forms.Button
        Me.Label3 = New System.Windows.Forms.Label
        Me.TableLayoutPanel1 = New System.Windows.Forms.TableLayoutPanel
        Me.Cancel_Button = New System.Windows.Forms.Button
        Me.chkDb = New System.Windows.Forms.CheckBox
        Me.Label2 = New System.Windows.Forms.Label
        Me.btnSelNone = New System.Windows.Forms.Button
        Me.txtRemainNo = New System.Windows.Forms.TextBox
        Me.ApplicationToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.NewToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.OpenToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.SaveToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.MenuStrip1 = New System.Windows.Forms.MenuStrip
        Me.labtable = New System.Windows.Forms.Label
        Me.lstAllTables = New System.Windows.Forms.ListBox
        Me.txtSelectNo = New System.Windows.Forms.TextBox
        Me.SplitContainer2 = New System.Windows.Forms.SplitContainer
        Me.PictureBox1 = New System.Windows.Forms.PictureBox
        Me.SplitContainer1 = New System.Windows.Forms.SplitContainer
        Me.procBarStatus = New System.Windows.Forms.ProgressBar
        Me.chkBatch = New System.Windows.Forms.CheckBox
        Me.saveFileDlg = New System.Windows.Forms.SaveFileDialog
        Me.StatusStrip1.SuspendLayout()
        Me.TableLayoutPanel1.SuspendLayout()
        Me.MenuStrip1.SuspendLayout()
        Me.SplitContainer2.Panel1.SuspendLayout()
        Me.SplitContainer2.Panel2.SuspendLayout()
        Me.SplitContainer2.SuspendLayout()
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SplitContainer1.Panel1.SuspendLayout()
        Me.SplitContainer1.Panel2.SuspendLayout()
        Me.SplitContainer1.SuspendLayout()
        Me.SuspendLayout()
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label4.ForeColor = System.Drawing.Color.Red
        Me.Label4.Location = New System.Drawing.Point(41, 313)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(376, 16)
        Me.Label4.TabIndex = 11
        Me.Label4.Text = "ATTENTION: Generating will overwrite previous files."
        '
        'TableFieldsToolStripMenuItem
        '
        Me.TableFieldsToolStripMenuItem.Name = "TableFieldsToolStripMenuItem"
        Me.TableFieldsToolStripMenuItem.Size = New System.Drawing.Size(155, 22)
        Me.TableFieldsToolStripMenuItem.Text = "Table Fields"
        '
        'OptionsToolStripMenuItem
        '
        Me.OptionsToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.UserToolStripMenuItem, Me.SettingToolStripMenuItem, Me.LinencesToolStripMenuItem})
        Me.OptionsToolStripMenuItem.Name = "OptionsToolStripMenuItem"
        Me.OptionsToolStripMenuItem.Size = New System.Drawing.Size(71, 21)
        Me.OptionsToolStripMenuItem.Text = "Options"
        '
        'UserToolStripMenuItem
        '
        Me.UserToolStripMenuItem.Name = "UserToolStripMenuItem"
        Me.UserToolStripMenuItem.Size = New System.Drawing.Size(129, 22)
        Me.UserToolStripMenuItem.Text = "User"
        '
        'SettingToolStripMenuItem
        '
        Me.SettingToolStripMenuItem.Name = "SettingToolStripMenuItem"
        Me.SettingToolStripMenuItem.Size = New System.Drawing.Size(129, 22)
        Me.SettingToolStripMenuItem.Text = "Settings"
        '
        'LinencesToolStripMenuItem
        '
        Me.LinencesToolStripMenuItem.Name = "LinencesToolStripMenuItem"
        Me.LinencesToolStripMenuItem.Size = New System.Drawing.Size(129, 22)
        Me.LinencesToolStripMenuItem.Text = "Lience"
        '
        'ToolStripSeparator1
        '
        Me.ToolStripSeparator1.Name = "ToolStripSeparator1"
        Me.ToolStripSeparator1.Size = New System.Drawing.Size(160, 6)
        '
        'ImportExcelToolStripMenuItem
        '
        Me.ImportExcelToolStripMenuItem.Name = "ImportExcelToolStripMenuItem"
        Me.ImportExcelToolStripMenuItem.Size = New System.Drawing.Size(163, 22)
        Me.ImportExcelToolStripMenuItem.Text = "Import(Excel)"
        '
        'ExitToolStripMenuItem
        '
        Me.ExitToolStripMenuItem.Name = "ExitToolStripMenuItem"
        Me.ExitToolStripMenuItem.Size = New System.Drawing.Size(163, 22)
        Me.ExitToolStripMenuItem.Text = "&Exit"
        '
        'TablesToolStripMenuItem
        '
        Me.TablesToolStripMenuItem.Name = "TablesToolStripMenuItem"
        Me.TablesToolStripMenuItem.Size = New System.Drawing.Size(155, 22)
        Me.TablesToolStripMenuItem.Text = "DataType"
        '
        'EditViewToolStripMenuItem
        '
        Me.EditViewToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.TablesToolStripMenuItem, Me.TableFieldsToolStripMenuItem})
        Me.EditViewToolStripMenuItem.Name = "EditViewToolStripMenuItem"
        Me.EditViewToolStripMenuItem.Size = New System.Drawing.Size(51, 21)
        Me.EditViewToolStripMenuItem.Text = "View"
        '
        'btnSelectAll
        '
        Me.btnSelectAll.BackColor = System.Drawing.Color.Lavender
        Me.btnSelectAll.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnSelectAll.ForeColor = System.Drawing.SystemColors.ControlText
        Me.btnSelectAll.Location = New System.Drawing.Point(44, 120)
        Me.btnSelectAll.Name = "btnSelectAll"
        Me.btnSelectAll.Size = New System.Drawing.Size(90, 30)
        Me.btnSelectAll.TabIndex = 2
        Me.btnSelectAll.Text = "Select All"
        Me.btnSelectAll.UseVisualStyleBackColor = False
        '
        'statusLab
        '
        Me.statusLab.BorderStyle = System.Windows.Forms.Border3DStyle.Adjust
        Me.statusLab.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Text
        Me.statusLab.Font = New System.Drawing.Font("Arial", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.statusLab.ForeColor = System.Drawing.Color.Red
        Me.statusLab.Name = "statusLab"
        Me.statusLab.Overflow = System.Windows.Forms.ToolStripItemOverflow.Always
        Me.statusLab.Size = New System.Drawing.Size(45, 17)
        Me.statusLab.Text = "Ready"
        '
        'OpenFileDlg
        '
        Me.OpenFileDlg.Filter = "Project File(*.mfd)|*.mfd"
        '
        'AboutToolStripMenuItem
        '
        Me.AboutToolStripMenuItem.BackColor = System.Drawing.Color.Silver
        Me.AboutToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.AboutToolStripMenuItem1})
        Me.AboutToolStripMenuItem.Name = "AboutToolStripMenuItem"
        Me.AboutToolStripMenuItem.Size = New System.Drawing.Size(49, 21)
        Me.AboutToolStripMenuItem.Text = "Help"
        '
        'AboutToolStripMenuItem1
        '
        Me.AboutToolStripMenuItem1.Name = "AboutToolStripMenuItem1"
        Me.AboutToolStripMenuItem1.Size = New System.Drawing.Size(113, 22)
        Me.AboutToolStripMenuItem1.Text = "&About"
        '
        'GenerateToolStripMenuItem
        '
        Me.GenerateToolStripMenuItem.BackColor = System.Drawing.Color.Silver
        Me.GenerateToolStripMenuItem.Name = "GenerateToolStripMenuItem"
        Me.GenerateToolStripMenuItem.Size = New System.Drawing.Size(80, 21)
        Me.GenerateToolStripMenuItem.Text = "Generate"
        '
        'StatusStrip1
        '
        Me.StatusStrip1.BackColor = System.Drawing.Color.Transparent
        Me.StatusStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.statusLab})
        Me.StatusStrip1.Location = New System.Drawing.Point(0, 532)
        Me.StatusStrip1.Name = "StatusStrip1"
        Me.StatusStrip1.Size = New System.Drawing.Size(689, 22)
        Me.StatusStrip1.TabIndex = 19
        Me.StatusStrip1.Text = "StatusStrip1"
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.Label1.Location = New System.Drawing.Point(166, 123)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(110, 16)
        Me.Label1.TabIndex = 5
        Me.Label1.Text = "Selected Tables"
        Me.Label1.TextAlign = System.Drawing.ContentAlignment.TopCenter
        '
        'btnGenerate
        '
        Me.btnGenerate.BackColor = System.Drawing.Color.Lavender
        Me.btnGenerate.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnGenerate.Location = New System.Drawing.Point(3, 3)
        Me.btnGenerate.Name = "btnGenerate"
        Me.btnGenerate.Size = New System.Drawing.Size(99, 31)
        Me.btnGenerate.TabIndex = 2
        Me.btnGenerate.Text = "Generate"
        Me.btnGenerate.UseVisualStyleBackColor = False
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.BackColor = System.Drawing.Color.Transparent
        Me.Label3.Font = New System.Drawing.Font("Arial Black", 26.25!, CType((System.Drawing.FontStyle.Bold Or System.Drawing.FontStyle.Italic), System.Drawing.FontStyle), System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label3.ForeColor = System.Drawing.Color.SaddleBrown
        Me.Label3.Location = New System.Drawing.Point(15, 5)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(392, 50)
        Me.Label3.TabIndex = 7
        Me.Label3.Text = "DBCode Generator"
        '
        'TableLayoutPanel1
        '
        Me.TableLayoutPanel1.Anchor = CType((System.Windows.Forms.AnchorStyles.Bottom Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.TableLayoutPanel1.ColumnCount = 2
        Me.TableLayoutPanel1.ColumnStyles.Add(New System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 50.0!))
        Me.TableLayoutPanel1.ColumnStyles.Add(New System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 50.0!))
        Me.TableLayoutPanel1.Controls.Add(Me.Cancel_Button, 1, 0)
        Me.TableLayoutPanel1.Controls.Add(Me.btnGenerate, 0, 0)
        Me.TableLayoutPanel1.Location = New System.Drawing.Point(44, 261)
        Me.TableLayoutPanel1.Name = "TableLayoutPanel1"
        Me.TableLayoutPanel1.RowCount = 1
        Me.TableLayoutPanel1.RowStyles.Add(New System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50.0!))
        Me.TableLayoutPanel1.Size = New System.Drawing.Size(210, 38)
        Me.TableLayoutPanel1.TabIndex = 0
        '
        'Cancel_Button
        '
        Me.Cancel_Button.Anchor = System.Windows.Forms.AnchorStyles.None
        Me.Cancel_Button.BackColor = System.Drawing.Color.Lavender
        Me.Cancel_Button.DialogResult = System.Windows.Forms.DialogResult.Cancel
        Me.Cancel_Button.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.Cancel_Button.Location = New System.Drawing.Point(108, 3)
        Me.Cancel_Button.Name = "Cancel_Button"
        Me.Cancel_Button.Size = New System.Drawing.Size(99, 31)
        Me.Cancel_Button.TabIndex = 1
        Me.Cancel_Button.Text = "Exit"
        Me.Cancel_Button.UseVisualStyleBackColor = False
        '
        'chkDb
        '
        Me.chkDb.AutoSize = True
        Me.chkDb.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.chkDb.Font = New System.Drawing.Font("Arial", 10.5!)
        Me.chkDb.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.chkDb.Location = New System.Drawing.Point(44, 57)
        Me.chkDb.Name = "chkDb"
        Me.chkDb.Size = New System.Drawing.Size(201, 20)
        Me.chkDb.TabIndex = 9
        Me.chkDb.Text = "Generate DBStdAccess File"
        Me.chkDb.UseVisualStyleBackColor = True
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label2.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.Label2.Location = New System.Drawing.Point(166, 158)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(122, 16)
        Me.Label2.TabIndex = 6
        Me.Label2.Text = "Remaining Tables"
        '
        'btnSelNone
        '
        Me.btnSelNone.BackColor = System.Drawing.Color.Lavender
        Me.btnSelNone.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.btnSelNone.Location = New System.Drawing.Point(44, 160)
        Me.btnSelNone.Name = "btnSelNone"
        Me.btnSelNone.Size = New System.Drawing.Size(90, 30)
        Me.btnSelNone.TabIndex = 2
        Me.btnSelNone.Text = "Select None"
        Me.btnSelNone.UseVisualStyleBackColor = False
        '
        'txtRemainNo
        '
        Me.txtRemainNo.Anchor = CType((((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Bottom) _
                    Or System.Windows.Forms.AnchorStyles.Left) _
                    Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.txtRemainNo.BackColor = System.Drawing.SystemColors.Desktop
        Me.txtRemainNo.BorderStyle = System.Windows.Forms.BorderStyle.None
        Me.txtRemainNo.Font = New System.Drawing.Font("Batang", 14.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtRemainNo.ForeColor = System.Drawing.Color.White
        Me.txtRemainNo.Location = New System.Drawing.Point(291, 153)
        Me.txtRemainNo.Name = "txtRemainNo"
        Me.txtRemainNo.ReadOnly = True
        Me.txtRemainNo.Size = New System.Drawing.Size(49, 22)
        Me.txtRemainNo.TabIndex = 4
        Me.txtRemainNo.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'ApplicationToolStripMenuItem
        '
        Me.ApplicationToolStripMenuItem.BackColor = System.Drawing.Color.Silver
        Me.ApplicationToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.NewToolStripMenuItem, Me.OpenToolStripMenuItem, Me.SaveToolStripMenuItem, Me.ImportExcelToolStripMenuItem, Me.ToolStripSeparator1, Me.ExitToolStripMenuItem})
        Me.ApplicationToolStripMenuItem.Name = "ApplicationToolStripMenuItem"
        Me.ApplicationToolStripMenuItem.Size = New System.Drawing.Size(90, 21)
        Me.ApplicationToolStripMenuItem.Text = "Application"
        '
        'NewToolStripMenuItem
        '
        Me.NewToolStripMenuItem.Name = "NewToolStripMenuItem"
        Me.NewToolStripMenuItem.Size = New System.Drawing.Size(163, 22)
        Me.NewToolStripMenuItem.Text = "&New"
        '
        'OpenToolStripMenuItem
        '
        Me.OpenToolStripMenuItem.Name = "OpenToolStripMenuItem"
        Me.OpenToolStripMenuItem.Size = New System.Drawing.Size(163, 22)
        Me.OpenToolStripMenuItem.Text = "&Load"
        '
        'SaveToolStripMenuItem
        '
        Me.SaveToolStripMenuItem.Name = "SaveToolStripMenuItem"
        Me.SaveToolStripMenuItem.Size = New System.Drawing.Size(163, 22)
        Me.SaveToolStripMenuItem.Text = "&Save"
        '
        'MenuStrip1
        '
        Me.MenuStrip1.BackColor = System.Drawing.Color.Silver
        Me.MenuStrip1.Font = New System.Drawing.Font("Arial", 11.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.MenuStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.ApplicationToolStripMenuItem, Me.EditViewToolStripMenuItem, Me.OptionsToolStripMenuItem, Me.GenerateToolStripMenuItem, Me.AboutToolStripMenuItem})
        Me.MenuStrip1.Location = New System.Drawing.Point(0, 0)
        Me.MenuStrip1.Name = "MenuStrip1"
        Me.MenuStrip1.RenderMode = System.Windows.Forms.ToolStripRenderMode.System
        Me.MenuStrip1.Size = New System.Drawing.Size(689, 25)
        Me.MenuStrip1.TabIndex = 18
        Me.MenuStrip1.Text = "MenuStrip1"
        '
        'labtable
        '
        Me.labtable.AutoSize = True
        Me.labtable.Font = New System.Drawing.Font("Arial", 10.5!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.labtable.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.labtable.Location = New System.Drawing.Point(8, 8)
        Me.labtable.Name = "labtable"
        Me.labtable.Size = New System.Drawing.Size(116, 16)
        Me.labtable.TabIndex = 12
        Me.labtable.Text = "Available Tables:"
        '
        'lstAllTables
        '
        Me.lstAllTables.BackColor = System.Drawing.SystemColors.Desktop
        Me.lstAllTables.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lstAllTables.Font = New System.Drawing.Font("Courier New", 10.5!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lstAllTables.ForeColor = System.Drawing.SystemColors.Info
        Me.lstAllTables.FormattingEnabled = True
        Me.lstAllTables.HorizontalScrollbar = True
        Me.lstAllTables.ImeMode = System.Windows.Forms.ImeMode.Hiragana
        Me.lstAllTables.ItemHeight = 16
        Me.lstAllTables.Location = New System.Drawing.Point(6, 32)
        Me.lstAllTables.Name = "lstAllTables"
        Me.lstAllTables.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended
        Me.lstAllTables.Size = New System.Drawing.Size(218, 370)
        Me.lstAllTables.TabIndex = 11
        '
        'txtSelectNo
        '
        Me.txtSelectNo.Anchor = CType((((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Bottom) _
                    Or System.Windows.Forms.AnchorStyles.Left) _
                    Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.txtSelectNo.BackColor = System.Drawing.SystemColors.Desktop
        Me.txtSelectNo.BorderStyle = System.Windows.Forms.BorderStyle.None
        Me.txtSelectNo.Font = New System.Drawing.Font("Batang", 14.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtSelectNo.ForeColor = System.Drawing.Color.White
        Me.txtSelectNo.Location = New System.Drawing.Point(291, 117)
        Me.txtSelectNo.Name = "txtSelectNo"
        Me.txtSelectNo.ReadOnly = True
        Me.txtSelectNo.Size = New System.Drawing.Size(49, 22)
        Me.txtSelectNo.TabIndex = 4
        Me.txtSelectNo.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'SplitContainer2
        '
        Me.SplitContainer2.BackColor = System.Drawing.Color.Transparent
        Me.SplitContainer2.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.SplitContainer2.ForeColor = System.Drawing.Color.LightGreen
        Me.SplitContainer2.Location = New System.Drawing.Point(12, 35)
        Me.SplitContainer2.Name = "SplitContainer2"
        '
        'SplitContainer2.Panel1
        '
        Me.SplitContainer2.Panel1.BackColor = System.Drawing.SystemColors.Control
        Me.SplitContainer2.Panel1.Controls.Add(Me.PictureBox1)
        '
        'SplitContainer2.Panel2
        '
        Me.SplitContainer2.Panel2.BackColor = System.Drawing.Color.Silver
        Me.SplitContainer2.Panel2.Controls.Add(Me.Label3)
        Me.SplitContainer2.Panel2.ForeColor = System.Drawing.SystemColors.GradientActiveCaption
        Me.SplitContainer2.Size = New System.Drawing.Size(673, 59)
        Me.SplitContainer2.SplitterDistance = 234
        Me.SplitContainer2.TabIndex = 17
        '
        'PictureBox1
        '
        Me.PictureBox1.BackColor = System.Drawing.Color.Transparent
        Me.PictureBox1.Image = Global.DBCodeGenerator.My.Resources.Resources.log
        Me.PictureBox1.Location = New System.Drawing.Point(2, 3)
        Me.PictureBox1.Name = "PictureBox1"
        Me.PictureBox1.Size = New System.Drawing.Size(226, 52)
        Me.PictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.PictureBox1.TabIndex = 0
        Me.PictureBox1.TabStop = False
        '
        'SplitContainer1
        '
        Me.SplitContainer1.BackColor = System.Drawing.Color.Transparent
        Me.SplitContainer1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.SplitContainer1.Location = New System.Drawing.Point(12, 100)
        Me.SplitContainer1.Name = "SplitContainer1"
        '
        'SplitContainer1.Panel1
        '
        Me.SplitContainer1.Panel1.Controls.Add(Me.labtable)
        Me.SplitContainer1.Panel1.Controls.Add(Me.lstAllTables)
        Me.SplitContainer1.Panel1.ForeColor = System.Drawing.Color.Transparent
        '
        'SplitContainer1.Panel2
        '
        Me.SplitContainer1.Panel2.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Center
        Me.SplitContainer1.Panel2.Controls.Add(Me.procBarStatus)
        Me.SplitContainer1.Panel2.Controls.Add(Me.chkBatch)
        Me.SplitContainer1.Panel2.Controls.Add(Me.Label4)
        Me.SplitContainer1.Panel2.Controls.Add(Me.Label1)
        Me.SplitContainer1.Panel2.Controls.Add(Me.btnSelectAll)
        Me.SplitContainer1.Panel2.Controls.Add(Me.TableLayoutPanel1)
        Me.SplitContainer1.Panel2.Controls.Add(Me.btnSelNone)
        Me.SplitContainer1.Panel2.Controls.Add(Me.chkDb)
        Me.SplitContainer1.Panel2.Controls.Add(Me.Label2)
        Me.SplitContainer1.Panel2.Controls.Add(Me.txtSelectNo)
        Me.SplitContainer1.Panel2.Controls.Add(Me.txtRemainNo)
        Me.SplitContainer1.Size = New System.Drawing.Size(673, 420)
        Me.SplitContainer1.SplitterDistance = 233
        Me.SplitContainer1.TabIndex = 16
        '
        'procBarStatus
        '
        Me.procBarStatus.BackColor = System.Drawing.Color.Silver
        Me.procBarStatus.ForeColor = System.Drawing.Color.LimeGreen
        Me.procBarStatus.Location = New System.Drawing.Point(44, 220)
        Me.procBarStatus.Name = "procBarStatus"
        Me.procBarStatus.Size = New System.Drawing.Size(288, 23)
        Me.procBarStatus.TabIndex = 13
        '
        'chkBatch
        '
        Me.chkBatch.AutoSize = True
        Me.chkBatch.FlatStyle = System.Windows.Forms.FlatStyle.Popup
        Me.chkBatch.Font = New System.Drawing.Font("Arial", 10.5!)
        Me.chkBatch.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.chkBatch.Location = New System.Drawing.Point(45, 87)
        Me.chkBatch.Name = "chkBatch"
        Me.chkBatch.Size = New System.Drawing.Size(135, 20)
        Me.chkBatch.TabIndex = 12
        Me.chkBatch.Text = "Create Batch File"
        Me.chkBatch.UseVisualStyleBackColor = True
        '
        'saveFileDlg
        '
        Me.saveFileDlg.Filter = "Project File|*.mfd"
        '
        'DataBaseCodeGenerator
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 12.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.Color.Silver
        Me.ClientSize = New System.Drawing.Size(689, 554)
        Me.Controls.Add(Me.StatusStrip1)
        Me.Controls.Add(Me.MenuStrip1)
        Me.Controls.Add(Me.SplitContainer2)
        Me.Controls.Add(Me.SplitContainer1)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle
        Me.MaximizeBox = False
        Me.Name = "DataBaseCodeGenerator"
        Me.Text = "DBCodeGenerator"
        Me.StatusStrip1.ResumeLayout(False)
        Me.StatusStrip1.PerformLayout()
        Me.TableLayoutPanel1.ResumeLayout(False)
        Me.MenuStrip1.ResumeLayout(False)
        Me.MenuStrip1.PerformLayout()
        Me.SplitContainer2.Panel1.ResumeLayout(False)
        Me.SplitContainer2.Panel2.ResumeLayout(False)
        Me.SplitContainer2.Panel2.PerformLayout()
        Me.SplitContainer2.ResumeLayout(False)
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).EndInit()
        Me.SplitContainer1.Panel1.ResumeLayout(False)
        Me.SplitContainer1.Panel1.PerformLayout()
        Me.SplitContainer1.Panel2.ResumeLayout(False)
        Me.SplitContainer1.Panel2.PerformLayout()
        Me.SplitContainer1.ResumeLayout(False)
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents TableFieldsToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents OptionsToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents UserToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents SettingToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents LinencesToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents ToolStripSeparator1 As System.Windows.Forms.ToolStripSeparator
    Friend WithEvents ImportExcelToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents ExitToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents TablesToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents EditViewToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents btnSelectAll As System.Windows.Forms.Button
    Friend WithEvents PictureBox1 As System.Windows.Forms.PictureBox
    Friend WithEvents OpenFileDlg As System.Windows.Forms.OpenFileDialog
    Friend WithEvents AboutToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents AboutToolStripMenuItem1 As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents GenerateToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents StatusStrip1 As System.Windows.Forms.StatusStrip
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents btnGenerate As System.Windows.Forms.Button
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents TableLayoutPanel1 As System.Windows.Forms.TableLayoutPanel
    Friend WithEvents Cancel_Button As System.Windows.Forms.Button
    Friend WithEvents chkDb As System.Windows.Forms.CheckBox
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents btnSelNone As System.Windows.Forms.Button
    Friend WithEvents txtRemainNo As System.Windows.Forms.TextBox
    Friend WithEvents ApplicationToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents OpenToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents SaveToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents MenuStrip1 As System.Windows.Forms.MenuStrip
    Friend WithEvents labtable As System.Windows.Forms.Label
    Friend WithEvents lstAllTables As System.Windows.Forms.ListBox
    Friend WithEvents txtSelectNo As System.Windows.Forms.TextBox
    Friend WithEvents SplitContainer2 As System.Windows.Forms.SplitContainer
    Friend WithEvents SplitContainer1 As System.Windows.Forms.SplitContainer
    Friend WithEvents NewToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents saveFileDlg As System.Windows.Forms.SaveFileDialog
    Friend WithEvents chkBatch As System.Windows.Forms.CheckBox
    Friend WithEvents procBarStatus As System.Windows.Forms.ProgressBar
    Public WithEvents statusLab As System.Windows.Forms.ToolStripStatusLabel
End Class
