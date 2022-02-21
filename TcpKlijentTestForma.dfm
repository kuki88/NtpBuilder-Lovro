object FormTCP: TFormTCP
  Left = 0
  Top = 0
  Caption = 'FormTCP'
  ClientHeight = 217
  ClientWidth = 193
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 45
    Top = 8
    Width = 45
    Height = 13
    Caption = 'Server IP'
  end
  object labelSpojeno: TLabel
    Left = 8
    Top = 87
    Width = 52
    Height = 13
    Caption = 'Odspojeno'
  end
  object editServerIp: TEdit
    Left = 8
    Top = 24
    Width = 177
    Height = 21
    TabOrder = 0
    Text = '127.0.0.1'
  end
  object btnConnDisc: TButton
    Left = 8
    Top = 51
    Width = 177
    Height = 30
    Caption = 'Spoji'
    TabOrder = 1
    OnClick = btnConnDiscClick
  end
  object editPodatak: TEdit
    Left = 8
    Top = 114
    Width = 177
    Height = 21
    TabOrder = 2
  end
  object Button1: TButton
    Left = 8
    Top = 141
    Width = 177
    Height = 36
    Caption = 'Po'#353'alji '#269'lanski broj'
    TabOrder = 3
    OnClick = Button1Click
  end
  object TCPKlijent: TIdTCPClient
    ConnectTimeout = 0
    Host = '127.1.0.0'
    IPVersion = Id_IPv4
    Port = 4567
    ReadTimeout = -1
    Left = 16
    Top = 184
  end
  object TCPServer: TIdTCPServer
    Active = True
    Bindings = <
      item
        IP = '0.0.0.0'
        Port = 4568
      end>
    DefaultPort = 4568
    OnExecute = TCPServerExecute
    Left = 48
    Top = 184
  end
end
