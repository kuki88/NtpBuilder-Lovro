object FormLogin: TFormLogin
  Left = 0
  Top = 0
  Caption = 'FormLogin'
  ClientHeight = 251
  ClientWidth = 237
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    237
    251)
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 80
    Top = 16
    Width = 70
    Height = 13
    Anchors = [akTop]
    Caption = 'Korisni'#269'ko ime:'
  end
  object Label2: TLabel
    Left = 96
    Top = 80
    Width = 39
    Height = 13
    Anchors = [akTop]
    Caption = 'Lozinka:'
  end
  object labelPrijava: TLabel
    Left = 8
    Top = 135
    Width = 109
    Height = 16
    Anchors = [akTop]
    Caption = 'Neuspje'#353'na prijava'
    Font.Charset = ANSI_CHARSET
    Font.Color = clRed
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object editKorisnicko: TEdit
    Left = 8
    Top = 35
    Width = 221
    Height = 30
    Anchors = [akTop]
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Calisto MT'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object btnLogin: TButton
    Left = 8
    Top = 201
    Width = 221
    Height = 42
    Anchors = [akBottom]
    Caption = 'Prijava'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = btnLoginClick
  end
  object editLozinka: TEdit
    Left = 8
    Top = 99
    Width = 221
    Height = 30
    Anchors = [akTop]
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Calisto MT'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object ADOTable1: TADOTable
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=KnjiznicaManagement;Data Source=KUKICRO' +
      '\SQLEXPRESS;Use Procedure for Prepare=1;Auto Translate=True;Pack' +
      'et Size=4096;Workstation ID=KUKICRO;Use Encryption for Data=Fals' +
      'e;Tag with column collation when possible=False'
    CursorType = ctStatic
    TableName = 'admin'
    Left = 8
    Top = 152
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 48
    Top = 152
  end
  object ADOQuery1: TADOQuery
    Parameters = <>
    Left = 88
    Top = 152
  end
end
