object FormDodajClana: TFormDodajClana
  Left = 0
  Top = 0
  Caption = 'FormDodajClana'
  ClientHeight = 456
  ClientWidth = 315
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 297
    Height = 233
    Caption = #268'lan'
    TabOrder = 0
    object Label6: TLabel
      Left = 45
      Top = 97
      Width = 37
      Height = 13
      Caption = 'prezime'
    end
    object Label8: TLabel
      Left = 49
      Top = 135
      Width = 33
      Height = 13
      Caption = 'adresa'
    end
    object Label7: TLabel
      Left = 12
      Top = 172
      Width = 70
      Height = 13
      Caption = 'Telefonski Broj'
    end
    object Label4: TLabel
      Left = 27
      Top = 24
      Width = 55
      Height = 13
      Caption = #268'lanski broj'
    end
    object Label5: TLabel
      Left = 66
      Top = 58
      Width = 16
      Height = 13
      Caption = 'ime'
    end
    object editClanskiBroj: TEdit
      Left = 88
      Top = 21
      Width = 121
      Height = 21
      MaxLength = 15
      TabOrder = 0
    end
    object btnPretraga: TButton
      Left = 215
      Top = 19
      Width = 75
      Height = 25
      Caption = 'Pretraga'
      TabOrder = 1
      OnClick = btnPretragaClick
    end
    object editIme: TEdit
      Left = 88
      Top = 55
      Width = 121
      Height = 21
      TabOrder = 2
      Text = 'editIme'
    end
    object editPrezime: TEdit
      Left = 88
      Top = 94
      Width = 121
      Height = 21
      TabOrder = 3
      Text = 'Edit1'
    end
    object editAdresa: TEdit
      Left = 88
      Top = 132
      Width = 121
      Height = 21
      TabOrder = 4
      Text = 'Edit1'
    end
    object editTelBroj: TEdit
      Left = 88
      Top = 169
      Width = 121
      Height = 21
      TabOrder = 5
      Text = 'Edit1'
    end
  end
  object btnUredi: TButton
    Left = 8
    Top = 247
    Width = 145
    Height = 42
    Caption = 'Uredi'
    Enabled = False
    TabOrder = 1
    OnClick = btnUrediClick
  end
  object btnDodaj: TButton
    Left = 8
    Top = 295
    Width = 298
    Height = 42
    Caption = 'Dodaj'
    Enabled = False
    TabOrder = 2
    OnClick = btnDodajClick
  end
  object btnIzbrisi: TButton
    Left = 161
    Top = 247
    Width = 145
    Height = 42
    Caption = 'Izbri'#353'i'
    Enabled = False
    TabOrder = 3
    OnClick = btnIzbrisiClick
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=KnjiznicaManagement;Data Source=KUKICRO' +
      '\SQLEXPRESS;Use Procedure for Prepare=1;Auto Translate=True;Pack' +
      'et Size=4096;Workstation ID=KUKICRO;Use Encryption for Data=Fals' +
      'e;Tag with column collation when possible=False'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 13
    Top = 307
  end
  object DClanovi: TDataSource
    DataSet = TClanovi
    Left = 13
    Top = 355
  end
  object TClanovi: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Clanovi'
    Left = 13
    Top = 403
    object TClanoviclanskiBroj: TWideStringField
      FieldName = 'clanskiBroj'
      Size = 50
    end
    object TClanoviime: TStringField
      FieldName = 'ime'
      Size = 50
    end
    object TClanoviprezime: TStringField
      FieldName = 'prezime'
      Size = 50
    end
    object TClanovitelefonskiBroj: TStringField
      FieldName = 'telefonskiBroj'
      Size = 30
    end
    object TClanoviadresa: TStringField
      FieldName = 'adresa'
      Size = 50
    end
  end
end