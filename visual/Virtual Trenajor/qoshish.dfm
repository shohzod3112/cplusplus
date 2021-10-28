object Form21: TForm21
  Left = 0
  Top = 0
  BorderIcons = []
  BorderStyle = bsNone
  ClientHeight = 369
  ClientWidth = 629
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -14
  Font.Name = 'Tahoma'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 120
  TextHeight = 17
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 629
    Height = 369
    Align = alClient
    Color = clAqua
    ParentBackground = False
    TabOrder = 0
    DesignSize = (
      629
      369)
    object Label1: TLabel
      Left = 1
      Top = 1
      Width = 627
      Height = 367
      Margins.Top = 26
      Align = alClient
      Alignment = taCenter
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -48
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
      WordWrap = True
      ExplicitWidth = 11
      ExplicitHeight = 57
    end
    object ChiqishSpeedButton: TSpeedButton
      Left = 118
      Top = 282
      Width = 379
      Height = 68
      Cursor = crHandPoint
      Anchors = [akLeft, akRight, akBottom]
      Caption = 'Chiqish'
      Flat = True
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlue
      Font.Height = -42
      Font.Name = 'Arial Narrow'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = ChiqishSpeedButtonClick
    end
  end
end
