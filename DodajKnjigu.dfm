﻿object FormUnosKnjige: TFormUnosKnjige
  Left = 0
  Top = 0
  Caption = 'FormUnosKnjige'
  ClientHeight = 311
  ClientWidth = 302
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label7: TLabel
    Left = 118
    Top = 48
    Width = 55
    Height = 13
    Caption = 'NazivKnjige'
  end
  object Label8: TLabel
    Left = 124
    Top = 128
    Width = 49
    Height = 13
    Caption = 'Kategorija'
  end
  object Label9: TLabel
    Left = 138
    Top = 168
    Width = 35
    Height = 13
    Caption = 'Koli'#269'ina'
  end
  object Label10: TLabel
    Left = 150
    Top = 8
    Width = 23
    Height = 13
    Caption = 'ISBN'
  end
  object Label11: TLabel
    Left = 146
    Top = 88
    Width = 27
    Height = 13
    Caption = 'Autor'
  end
  object editNazivKnjige: TEdit
    Left = 8
    Top = 61
    Width = 165
    Height = 21
    TabOrder = 0
  end
  object editKategorija: TEdit
    Left = 8
    Top = 141
    Width = 165
    Height = 21
    TabOrder = 1
  end
  object editKolicina: TEdit
    Left = 8
    Top = 181
    Width = 165
    Height = 21
    TabOrder = 2
  end
  object editISBNDevet: TEdit
    Left = 8
    Top = 21
    Width = 165
    Height = 21
    MaxLength = 9
    TabOrder = 3
  end
  object editAutor: TEdit
    Left = 8
    Top = 101
    Width = 165
    Height = 21
    TabOrder = 4
  end
  object editISBN10: TEdit
    Left = 179
    Top = 21
    Width = 22
    Height = 21
    TabOrder = 5
  end
  object btnGeneriraj: TButton
    Left = 207
    Top = 19
    Width = 82
    Height = 25
    Caption = 'Generiraj ISBN'
    TabOrder = 6
    OnClick = btnGenerirajClick
  end
  object btnTraziNaz: TButton
    Left = 179
    Top = 57
    Width = 110
    Height = 25
    Caption = 'Tra'#382'i po nazivu'
    TabOrder = 7
  end
  object btnTraziAut: TButton
    Left = 179
    Top = 99
    Width = 110
    Height = 25
    Caption = 'Tra'#382'i po autoru'
    TabOrder = 8
  end
  object btnIzbrisi: TButton
    Left = 8
    Top = 216
    Width = 135
    Height = 41
    Caption = 'Izbri'#353'i'
    Enabled = False
    TabOrder = 9
  end
  object btnUredi: TButton
    Left = 154
    Top = 216
    Width = 135
    Height = 41
    Caption = 'Uredi'
    Enabled = False
    TabOrder = 10
  end
  object btnDodaj: TButton
    Left = 8
    Top = 263
    Width = 281
    Height = 42
    Caption = 'Dodaj'
    Enabled = False
    TabOrder = 11
  end
  object DKnjige: TDataSource
    DataSet = TKnjige
    Left = 18
    Top = 328
  end
  object TKnjige: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Knjige'
    Left = 98
    Top = 328
    object TKnjigeNazivKnjige: TWideStringField
      FieldName = 'NazivKnjige'
      Size = 50
    end
    object TKnjigeKategorija: TWideStringField
      FieldName = 'Kategorija'
      Size = 50
    end
    object TKnjigeKoličina: TIntegerField
      FieldName = 'Koli'#269'ina'
    end
    object TKnjigeISBN: TWideStringField
      FieldName = 'ISBN'
      Size = 25
    end
    object TKnjigeAutor: TWideStringField
      FieldName = 'Autor'
      Size = 50
    end
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=KnjiznicaManagement;Data Source=KUKICRO' +
      '\SQLEXPRESS;Use Procedure for Prepare=1;Auto Translate=True;Pack' +
      'et Size=4096;Workstation ID=KUKICRO;Use Encryption for Data=Fals' +
      'e;Tag with column collation when possible=False'
    Provider = 'SQLOLEDB.1'
    Left = 58
    Top = 328
  end
end