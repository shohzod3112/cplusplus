object Form20: TForm20
  Left = 0
  Top = 0
  ClientHeight = 320
  ClientWidth = 708
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 708
    Height = 320
    Align = alClient
    Color = clWindow
    ParentBackground = False
    TabOrder = 0
    object Label5: TLabel
      Left = 28
      Top = 38
      Width = 62
      Height = 29
      Caption = '970 A'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -24
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label6: TLabel
      Left = 104
      Top = 38
      Width = 214
      Height = 48
      Caption = 'Kataloglashtiruvchining shaxsiy ish kodi'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -21
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      WordWrap = True
    end
    object Label1: TLabel
      Left = 53
      Top = 178
      Width = 507
      Height = 76
      Caption = 
        'Familiyangizni to'#39'liq kiritib, bitta probil qo'#39'ying. So'#39'ng ismin' +
        'gizni bosh harfini kiting va nuqta qo'#39'ying.Agar sharifingizni ha' +
        'm kiritmoqchi bo'#39'lsangiz nuqtadan keyin bitta probel qo'#39'yib Shar' +
        'ifingizni bosh harfini yozing va nuqta qo'#39'ying.'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clRed
      Font.Height = -17
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      Visible = False
      WordWrap = True
    end
    object Edit3: TEdit
      Left = 371
      Top = 40
      Width = 241
      Height = 30
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -17
      Font.Name = 'Arial Narrow'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
    object Button3: TButton
      Left = 371
      Top = 87
      Width = 106
      Height = 28
      Cursor = crHandPoint
      Caption = 'Yopish'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -21
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 499
      Top = 87
      Width = 107
      Height = 28
      Cursor = crHandPoint
      Caption = 'Tahrirlash'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -21
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnClick = Button4Click
    end
  end
end
