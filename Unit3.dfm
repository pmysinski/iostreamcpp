object Form3: TForm3
  Left = 481
  Top = 164
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsToolWindow
  Caption = 'Flagi formatowania'
  ClientHeight = 400
  ClientWidth = 480
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 481
    Height = 233
    AutoSize = False
    Caption = 
      'W programie tworzymy dwie zmienne, a nast'#281'pnie formatujemy  je s' +
      'tosuj'#261'c flagi formatowania'
    Color = clBtnHighlight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    WordWrap = True
  end
  object Button2: TButton
    Left = 64
    Top = 251
    Width = 361
    Height = 62
    Caption = 'Uruchom program'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button2Click
  end
  object Zamknij: TButton
    Left = 128
    Top = 320
    Width = 233
    Height = 57
    Caption = 'Zamknij'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = ZamknijClick
  end
end
