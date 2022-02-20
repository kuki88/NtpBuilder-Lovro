object FormClanoviPosudbe: TFormClanoviPosudbe
  Left = 0
  Top = 0
  Caption = 'FormClanoviPosudbe'
  ClientHeight = 460
  ClientWidth = 735
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  DesignSize = (
    735
    460)
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 14
    Width = 56
    Height = 19
    Anchors = [akTop]
    Caption = #268'lanovi:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object gridClanovi: TDBGrid
    Left = 8
    Top = 39
    Width = 700
    Height = 185
    Anchors = [akTop]
    DataSource = DClanovi
    ReadOnly = True
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnDblClick = gridClanoviDblClick
    Columns = <
      item
        Expanded = False
        FieldName = 'clanskiBroj'
        Title.Caption = #269'lanski broj'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'ime'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'prezime'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'telefonskiBroj'
        Title.Caption = 'Telefonski Broj'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'adresa'
        Width = 150
        Visible = True
      end>
  end
  object editPrezime: TEdit
    Left = 500
    Top = 12
    Width = 128
    Height = 21
    Anchors = [akTop]
    TabOrder = 1
  end
  object btnTrazi: TButton
    Left = 634
    Top = 10
    Width = 75
    Height = 25
    Anchors = [akTop]
    Caption = 'Tra'#382'i'
    TabOrder = 2
    OnClick = btnTraziClick
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 283
    Width = 425
    Height = 169
    TabOrder = 3
    object Label4: TLabel
      Left = 3
      Top = 20
      Width = 55
      Height = 13
      Caption = #268'lanski broj'
      FocusControl = dbEditClanskiBroj
    end
    object Label5: TLabel
      Left = 3
      Top = 67
      Width = 16
      Height = 13
      Caption = 'ime'
      FocusControl = dbEditIme
    end
    object Label6: TLabel
      Left = 214
      Top = 67
      Width = 37
      Height = 13
      Caption = 'prezime'
      FocusControl = dbEditPrezime
    end
    object Label7: TLabel
      Left = 214
      Top = 108
      Width = 70
      Height = 13
      Caption = 'Telefonski Broj'
      FocusControl = dbEditTelBroj
    end
    object Label8: TLabel
      Left = 3
      Top = 108
      Width = 33
      Height = 13
      Caption = 'adresa'
      FocusControl = dbeditAdresa
    end
    object dbEditClanskiBroj: TDBEdit
      Left = 3
      Top = 33
      Width = 200
      Height = 21
      DataField = 'clanskiBroj'
      DataSource = DClanovi
      ReadOnly = True
      TabOrder = 0
    end
    object dbEditIme: TDBEdit
      Left = 3
      Top = 81
      Width = 200
      Height = 21
      DataField = 'ime'
      DataSource = DClanovi
      TabOrder = 1
    end
    object dbEditPrezime: TDBEdit
      Left = 214
      Top = 81
      Width = 200
      Height = 21
      DataField = 'prezime'
      DataSource = DClanovi
      TabOrder = 2
    end
    object dbEditTelBroj: TDBEdit
      Left = 214
      Top = 124
      Width = 200
      Height = 21
      DataField = 'telefonskiBroj'
      DataSource = DClanovi
      TabOrder = 3
    end
    object dbeditAdresa: TDBEdit
      Left = 3
      Top = 124
      Width = 200
      Height = 21
      DataField = 'adresa'
      DataSource = DClanovi
      TabOrder = 4
    end
  end
  object DBNavigator1: TDBNavigator
    Left = 8
    Top = 240
    Width = 240
    Height = 25
    DataSource = DClanovi
    TabOrder = 4
  end
  object TKnjige: TADOTable
    Active = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=KnjiznicaManagement;Data Source=DESKTOP' +
      '-N5RRRS5\SQLEXPRESS'
    CursorType = ctStatic
    IndexFieldNames = 'ISBN'
    MasterFields = 'isbnKnjige'
    MasterSource = DPosudbe
    TableName = 'Knjige'
    Left = 88
    Top = 187
  end
  object TPosudbe: TADOTable
    Active = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=KnjiznicaManagement;Data Source=DESKTOP' +
      '-N5RRRS5\SQLEXPRESS'
    CursorType = ctStatic
    IndexFieldNames = 'clanskiBroj'
    MasterFields = 'clanskiBroj'
    MasterSource = DClanovi
    TableName = 'Posudbe'
    Left = 136
    Top = 187
    object TPosudbeId: TAutoIncField
      FieldName = 'Id'
      ReadOnly = True
    end
    object TPosudbeisbnKnjige: TWideStringField
      FieldName = 'isbnKnjige'
      Size = 25
    end
    object TPosudbedatumPosudbe: TDateTimeField
      FieldName = 'datumPosudbe'
    end
    object TPosudbedatumPovratka: TDateTimeField
      FieldName = 'datumPovratka'
    end
    object TPosudbeclanskiBroj: TWideStringField
      FieldName = 'clanskiBroj'
      Size = 50
    end
    object TPosudbeNazivKnjige: TStringField
      FieldKind = fkLookup
      FieldName = 'Naziv Knjige'
      LookupDataSet = TKnjige
      LookupKeyFields = 'ISBN'
      LookupResultField = 'NazivKnjige'
      KeyFields = 'isbnKnjige'
      Size = 100
      Lookup = True
    end
  end
  object DKnjige: TDataSource
    DataSet = TKnjige
    Left = 88
    Top = 147
  end
  object DPosudbe: TDataSource
    DataSet = TPosudbe
    Left = 136
    Top = 147
  end
  object TClanovi: TADOTable
    Active = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=KnjiznicaManagement;Data Source=DESKTOP' +
      '-N5RRRS5\SQLEXPRESS'
    CursorType = ctStatic
    Filter = 'prezime LIKE "K%"'
    TableName = 'Clanovi'
    Left = 184
    Top = 187
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
  object DClanovi: TDataSource
    DataSet = TClanovi
    Left = 184
    Top = 147
  end
  object ADOConnection1: TADOConnection
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=KnjiznicaManagement;Data Source=DESKTOP' +
      '-N5RRRS5\SQLEXPRESS'
    Provider = 'SQLOLEDB.1'
    Left = 32
    Top = 160
  end
  object MainMenu1: TMainMenu
    Left = 680
    Top = 248
    object Menu: TMenuItem
      Caption = 'Edit'
      object Import1: TMenuItem
        Caption = 'Import'
        OnClick = Import1Click
      end
      object Export1: TMenuItem
        Caption = 'Export'
      end
    end
    object Ebooks: TMenuItem
      Caption = 'Ebooks'
      object Download1: TMenuItem
        Caption = 'Download'
        OnClick = Download1Click
      end
    end
  end
end