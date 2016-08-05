object Form2: TForm2
  Left = 305
  Top = 234
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsToolWindow
  Caption = 'Zapis/Odczyt pliku oraz jego korekta'
  ClientHeight = 476
  ClientWidth = 589
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
    Width = 577
    Height = 97
    AutoSize = False
    Caption = 
      'Dzia'#322'anie programu polega na otworzeniu pliku liczby.txt (a w ra' +
      'zie potrzeby jego utworzeniu) i zapisaniu w nim binarnie tablicy' +
      ' zmiennych double. Nast'#281'pnie otwieramy plik i  wczytujemy dane d' +
      'o kolejnej tablicy. Korygujemy dane w tablicy stosuj'#261'c'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object Label2: TLabel
    Left = 8
    Top = 104
    Width = 577
    Height = 73
    AutoSize = False
    Caption = 
      'wska'#378'niki odczytu i zapisu, a nast'#281'pnie prezentujemy zmienione d' +
      'ane (zmianie  ulegaj'#261' r'#243'wnie'#380' dane w pliku  tekstowym).'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object Button1: TButton
    Left = 120
    Top = 248
    Width = 361
    Height = 65
    Caption = 'Uruchom program'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 184
    Top = 320
    Width = 225
    Height = 57
    Caption = 'Zamknij'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = Button2Click
  end
end
