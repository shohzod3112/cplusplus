object Form13: TForm13
  Left = 0
  Top = 0
  ClientHeight = 472
  ClientWidth = 999
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -14
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  PixelsPerInch = 120
  TextHeight = 17
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 999
    Height = 472
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Align = alClient
    TabOrder = 0
    object Label5: TLabel
      Left = 39
      Top = 55
      Width = 56
      Height = 26
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = '100 A'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -22
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label6: TLabel
      Left = 144
      Top = 55
      Width = 217
      Height = 25
      Cursor = crHandPoint
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Familiyasi, ismi, sharifi'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -22
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      OnClick = Label6Click
      OnMouseMove = Label6MouseMove
      OnMouseLeave = Label6MouseLeave
    end
    object Label7: TLabel
      Left = 88
      Top = 105
      Width = 15
      Height = 26
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      BiDiMode = bdRightToLeft
      Caption = 'E'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -22
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentBiDiMode = False
      ParentFont = False
    end
    object Label8: TLabel
      Left = 145
      Top = 105
      Width = 94
      Height = 25
      Cursor = crHandPoint
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Shaxs roli'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -22
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      OnClick = Label6Click
      OnMouseMove = Label8MouseMove
      OnMouseLeave = Label8MouseLeave
    end
    object Label1: TLabel
      Left = 89
      Top = 145
      Width = 17
      Height = 26
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      BiDiMode = bdRightToLeft
      Caption = 'Q'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -22
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentBiDiMode = False
      ParentFont = False
    end
    object Label2: TLabel
      Left = 145
      Top = 145
      Width = 90
      Height = 25
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'To'#39'liq ism'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -22
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 417
      Top = 370
      Width = 379
      Height = 25
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Shaxs rolini menyudan to'#39'g'#39'ri belgilang!!!'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clRed
      Font.Height = -22
      Font.Name = 'Arial'
      Font.Style = [fsUnderline]
      ParentFont = False
      Visible = False
    end
    object Label4: TLabel
      Left = 417
      Top = 305
      Width = 316
      Height = 25
      Cursor = crHandPoint
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Muallif familiyasini to'#39'g'#39'ri kiriting!!!'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clRed
      Font.Height = -22
      Font.Name = 'Arial'
      Font.Style = [fsUnderline]
      ParentFont = False
      Visible = False
      OnClick = Label4Click
    end
    object Edit3: TEdit
      Left = 468
      Top = 41
      Width = 396
      Height = 33
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -22
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnChange = Edit3Change
    end
    object Edit4: TEdit
      Left = 468
      Top = 139
      Width = 396
      Height = 33
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Enabled = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -22
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 4
    end
    object Button3: TButton
      Left = 417
      Top = 204
      Width = 224
      Height = 44
      Cursor = crHandPoint
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Yopish'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -22
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 664
      Top = 204
      Width = 223
      Height = 44
      Cursor = crHandPoint
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Tahrirlash'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -22
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnClick = Button4Click
    end
    object ComboBox1: TComboBox
      Left = 467
      Top = 88
      Width = 403
      Height = 34
      Cursor = crHandPoint
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Style = csDropDownList
      DropDownCount = 20
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -22
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ItemHeight = 26
      ParentFont = False
      TabOrder = 1
      OnChange = ComboBox1Change
      Items.Strings = (
        ''
        #1072#1088#1072#1085#1078#1080#1088#1086#1074#1082#1072#1083#1086#1074#1095#1080
        #1088#1072#1089#1089#1086#1084
        #1084#1091#1072#1083#1083#1080#1092
        #1089#1118#1079#1073#1086#1096#1080' '#1084#1091#1072#1083#1083#1080#1092#1080
        #1089#1094#1077#1085#1072#1088#1080#1081' '#1084#1091#1072#1083#1083#1080#1092#1080
        #1082#1080#1090#1086#1073' '#1089#1086#1090#1091#1074#1095#1080
        #1093#1072#1088#1080#1090#1072#1083#1072#1088' '#1090#1091#1079#1091#1074#1095#1080' '#1084#1091#1090#1072#1203#1072#1089#1089#1080#1089
        #1094#1077#1085#1079#1091#1088#1072' '#1179#1080#1083#1091#1074#1095#1080' '#1096#1072#1093#1089
        #1096#1072#1088#1203#1083#1086#1074#1095#1080
        #1090#1091#1079#1091#1074#1095#1080
        #1073#1072#1089#1090#1072#1082#1086#1088
        #1076#1080#1088#1080#1078#1105#1088#1095#1080
        #1084#1091#1072#1083#1083#1080#1092#1083#1080#1082' '#1203#1091#1179#1091#1179#1080' '#1077#1075#1072#1089#1080
        #1073#1072#1171#1080#1096#1083#1072#1085#1072#1105#1090#1075#1072#1085' '#1086#1073#1100#1077#1082#1090
        #1073#1072#1171#1080#1096#1083#1086#1074#1095#1080' '#1084#1091#1072#1076#1076#1080#1092
        #1088#1077#1078#1080#1089#1089#1105#1088
        #1089#1086#1074#1171#1072' '#1179#1080#1083#1075#1072#1085' '#1082#1080#1096#1080
        #1090#1072#1089#1076#1080#1179#1083#1072#1085#1084#1072#1075#1072#1085' ('#1080#1089#1073#1086#1090#1083#1072#1085#1084#1072#1075#1072#1085') '#1084#1091#1072#1083#1083#1080#1092
        #1084#1091#1203#1072#1088#1088#1080#1088
        #1089#1086#1073#1080#1179' '#1077#1075#1072#1089#1080
        #1073#1102#1088#1090#1084#1072#1095#1080
        #1082#1080#1090#1086#1073', '#1078#1091#1088#1085#1072#1083' '#1074#1072' '#1096#1102#1082#1102#1085#1080' '#1073#1077#1079#1086#1074#1095#1080' '#1088#1072#1089#1089#1086#1084
        #1084#1091#1072#1083#1083#1080#1092#1085#1080#1085#1075' '#1093#1072#1076#1103' '#1179#1080#1083'('#1080#1085')'#1075#1072#1085#1083#1080#1082' '#1203#1072#1179#1080#1076#1072#1075#1080' '#1105#1079#1091#1074#1080
        #1080#1085#1090#1077#1088#1074#1102' '#1073#1077#1088#1072#1105#1090#1075#1072#1085' '#1096#1072#1093#1089
        #1078#1091#1088#1085#1072#1083#1080#1089#1090
        #1083#1080#1073#1088#1077#1090#1090#1086' '#1105#1079#1091#1074#1095#1080#1089#1080
        #1083#1080#1088#1080#1082' '#1096#1086#1080#1088
        #1076#1080#1082#1090#1086#1088
        #1084#1072#1089#1083#1072#1203#1072#1090#1095#1080
        #1080#1078#1088#1086#1095#1080
        #1092#1086#1090#1086#1089#1091#1088#1072#1090#1095#1080
        #1087#1088#1086#1076#1102#1089#1077#1088
        #1085#1072#1096#1088' '#1077#1090#1091#1074#1095#1080
        #1090#1072#1179#1088#1080#1079#1095#1080
        #1090#1072#1088#1078#1080#1084#1086#1085
        #1073#1086#1096#1179#1072#1083#1072#1088)
    end
  end
end
