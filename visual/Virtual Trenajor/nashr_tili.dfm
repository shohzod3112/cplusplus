object Form10: TForm10
  Left = 0
  Top = 0
  ClientHeight = 302
  ClientWidth = 891
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
    Width = 891
    Height = 302
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Align = alClient
    TabOrder = 0
    object Label1: TLabel
      Left = 39
      Top = 55
      Width = 61
      Height = 27
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = '041 A'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -23
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 144
      Top = 55
      Width = 205
      Height = 26
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Matn yozilgan til kodi'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -23
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Button1: TButton
      Left = 387
      Top = 112
      Width = 156
      Height = 38
      Cursor = crHandPoint
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Yopish'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -23
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 565
      Top = 112
      Width = 156
      Height = 38
      Cursor = crHandPoint
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = 'Tahrirlash'
      Enabled = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -23
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = Button2Click
    end
    object ComboBox1: TComboBox
      Left = 484
      Top = 52
      Width = 237
      Height = 34
      Cursor = crHandPoint
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Style = csDropDownList
      DropDownCount = 19
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -23
      Font.Name = 'Arial'
      Font.Style = []
      ItemHeight = 26
      ParentFont = False
      TabOrder = 0
      OnChange = ComboBox1Change
      Items.Strings = (
        'O'#39'zbekcha'
        'Rus'
        'Ingliz'
        'Nemis'
        'Kavaz'
        'Azarbayjon'
        'Alban'
        'Arab'
        'Armin'
        'Arman'
        'Afrika'
        'Bashqird'
        'Belorus'
        'Bolgar'
        'Buxoro'
        'Vengirya'
        'Vetnam'
        'Gollandiya'
        'Gretsiya'
        'Gruzin'
        'Dog'#39'iston'
        'Indoneziya'
        'Irland'
        'Islandiya'
        'Ispaniya'
        'Italiya'
        'Qozog'#39'iston'
        'Qirg'#39'iziston'
        'Xitoy'
        'Korea'
        'Latviya'
        'Malayziya'
        'Moldava'
        'Portugaliya'
        'Ruminiya'
        'Slovakiya'
        'Tojikiston'
        'Turkmaniston'
        'Fransiya'
        'Hindiston'
        'Shvedsariya'
        'Yaponiya')
    end
  end
end
