object Form2: TForm2
  Left = 613
  Top = 212
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsToolWindow
  Caption = 'Form2'
  ClientHeight = 481
  ClientWidth = 412
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 144
    Top = 112
    Width = 75
    Height = 37
    Caption = 'OPIS'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 24
    Top = 352
    Width = 361
    Height = 65
    Caption = 'Zapis/Odczyt pliku oraz jego korekta (ios_bin_korekta.exe)'
    TabOrder = 0
    OnClick = Button1Click
  end
end
