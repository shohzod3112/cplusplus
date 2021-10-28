object pechatForm: TpechatForm
  Left = 0
  Top = 0
  ClientHeight = 520
  ClientWidth = 1117
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 120
  TextHeight = 16
  object pechatPanel: TPanel
    Left = 8
    Top = 85
    Width = 998
    Height = 504
    TabOrder = 0
    Visible = False
    DesignSize = (
      998
      504)
    object Label51: TLabel
      Left = 39
      Top = 68
      Width = 99
      Height = 35
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Anchors = [akLeft, akTop, akRight, akBottom]
      Caption = 'Katalog:'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -30
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label1: TLabel
      Left = 39
      Top = 25
      Width = 116
      Height = 35
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Anchors = [akLeft, akTop, akRight, akBottom]
      Caption = 'Kitobhon:'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -30
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object z: TLabel
      Left = 170
      Top = 28
      Width = 550
      Height = 32
      Margins.Top = 10
      Alignment = taCenter
      Anchors = [akLeft, akTop, akRight, akBottom]
      Caption = ' 000 (Kategoriyasi Talaba) - Fayzullayev A. Z.'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 178
      Top = 73
      Width = 308
      Height = 32
      Margins.Top = 10
      Alignment = taCenter
      Anchors = [akLeft, akTop, akRight, akBottom]
      Caption = #1040#1093#1073#1086#1088#1086#1090' '#1088#1077#1089#1091#1088#1089' '#1084#1072#1088#1082#1072#1079#1080
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 39
      Top = 111
      Width = 167
      Height = 70
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Anchors = [akLeft, akTop, akRight, akBottom]
      Caption = '85.15   Nazirov Sh. A.'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -30
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
      WordWrap = True
    end
    object Label4: TLabel
      Left = 39
      Top = 196
      Width = 901
      Height = 96
      Margins.Top = 10
      Alignment = taCenter
      Anchors = [akLeft, akTop, akRight, akBottom]
      Caption = 
        'Rastr va vektor grafika : o`quv qo`llanma / Nazirov Sh. A., Nura' +
        'liyev F. M., Aytmuratov B. Sh.. - Toshkent : G`afur G`ulom nomid' +
        'agi nashriyot-matbaa ijodiy uyi, 2007. - 192 b;. - ISBN 978-9943' +
        '-03-032-9 : 5000 so`m. '
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      WordWrap = True
    end
    object Label5: TLabel
      Left = 39
      Top = 304
      Width = 209
      Height = 35
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Anchors = [akLeft, akTop, akRight, akBottom]
      Caption = 'Buyurtma sanasi:'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -30
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label6: TLabel
      Left = 39
      Top = 347
      Width = 284
      Height = 35
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Anchors = [akLeft, akTop, akRight, akBottom]
      Caption = 'Buyurtma bajarilmagan '
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -30
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label7: TLabel
      Left = 31
      Top = 390
      Width = 268
      Height = 35
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Anchors = [akLeft, akTop, akRight, akBottom]
      Caption = ' Beriladigan nusxalari:'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -30
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object sanaLabel: TLabel
      Left = 266
      Top = 308
      Width = 25
      Height = 32
      Margins.Top = 10
      Alignment = taCenter
      Anchors = [akLeft, akTop, akRight, akBottom]
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label8: TLabel
      Left = 320
      Top = 396
      Width = 75
      Height = 32
      Margins.Top = 10
      Alignment = taCenter
      Anchors = [akLeft, akTop, akRight, akBottom]
      Caption = '18744'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object PechatSpeedButton: TSpeedButton
      Left = 380
      Top = 446
      Width = 130
      Height = 34
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Anchors = [akLeft, akBottom]
      Caption = 'Pechat'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -22
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = PechatSpeedButtonClick
    end
    object SpeedButton15: TSpeedButton
      Left = 553
      Top = 446
      Width = 130
      Height = 34
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Anchors = [akLeft, akBottom]
      Caption = 'Yopish'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -22
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = SpeedButton15Click
    end
  end
  object bajarPanel: TPanel
    Left = 36
    Top = -151
    Width = 1097
    Height = 547
    Align = alCustom
    TabOrder = 1
    Visible = False
    object Label10: TLabel
      Left = 39
      Top = 103
      Width = 127
      Height = 93
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = '85.15   Nazirov Sh. A.'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
      WordWrap = True
    end
    object Label11: TLabel
      Left = 39
      Top = 64
      Width = 88
      Height = 31
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Katalog:'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
      WordWrap = True
    end
    object Label12: TLabel
      Left = 190
      Top = 69
      Width = 308
      Height = 32
      Margins.Top = 10
      Alignment = taCenter
      Caption = #1040#1093#1073#1086#1088#1086#1090' '#1088#1077#1089#1091#1088#1089' '#1084#1072#1088#1082#1072#1079#1080
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label13: TLabel
      Left = 162
      Top = 26
      Width = 550
      Height = 32
      Margins.Top = 10
      Alignment = taCenter
      Caption = ' 000 (Kategoriyasi Talaba) - Fayzullayev A. Z.'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label14: TLabel
      Left = 39
      Top = 25
      Width = 106
      Height = 31
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Kitobhon:'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
      WordWrap = True
    end
    object Label15: TLabel
      Left = 39
      Top = 283
      Width = 185
      Height = 31
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Buyurtma sanasi:'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label16: TLabel
      Left = 39
      Top = 328
      Width = 216
      Height = 31
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Qaytariladigan sana:'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label17: TLabel
      Left = 39
      Top = 371
      Width = 204
      Height = 31
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = ' Beriladigan nusxa:'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label18: TLabel
      Left = 291
      Top = 375
      Width = 75
      Height = 32
      Margins.Top = 10
      Alignment = taCenter
      Caption = '18744'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label19: TLabel
      Left = 39
      Top = 417
      Width = 297
      Height = 31
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Imzo ____________________'
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label9: TLabel
      Left = 67
      Top = 174
      Width = 971
      Height = 96
      Margins.Top = 10
      Alignment = taCenter
      Caption = 
        'Rastr va vektor grafika : o`quv qo`llanma / Nazirov Sh. A., Nura' +
        'liyev F. M., Aytmuratov B. Sh.. - Toshkent : G`afur G`ulom nomid' +
        'agi nashriyot-matbaa ijodiy uyi, 2007. - 192 b;. - ISBN 978-9943' +
        '-03-032-9 : 5000 so`m. '
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      WordWrap = True
    end
    object sanaL: TLabel
      Left = 274
      Top = 284
      Width = 8
      Height = 32
      Margins.Top = 10
      Alignment = taCenter
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object qaytarLabel: TLabel
      Left = 299
      Top = 327
      Width = 8
      Height = 32
      Margins.Top = 10
      Alignment = taCenter
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -27
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object SpeedButton1: TSpeedButton
      Left = 450
      Top = 476
      Width = 130
      Height = 34
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Pechat'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -22
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = SpeedButton1Click
    end
    object SpeedButton2: TSpeedButton
      Left = 638
      Top = 476
      Width = 130
      Height = 34
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Yopish'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -22
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = SpeedButton15Click
    end
  end
end
