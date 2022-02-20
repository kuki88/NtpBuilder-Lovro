//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TFormClanoviPosudbe : public TForm
{
__published:	// IDE-managed Components
	TADOTable *TKnjige;
	TADOTable *TPosudbe;
	TDataSource *DKnjige;
	TDataSource *DPosudbe;
	TLabel *Label1;
	TDBGrid *gridClanovi;
	TADOTable *TClanovi;
	TDataSource *DClanovi;
	TAutoIncField *TPosudbeId;
	TWideStringField *TPosudbeisbnKnjige;
	TDateTimeField *TPosudbedatumPosudbe;
	TDateTimeField *TPosudbedatumPovratka;
	TWideStringField *TPosudbeclanskiBroj;
	TWideStringField *TClanoviclanskiBroj;
	TStringField *TClanoviime;
	TStringField *TClanoviprezime;
	TStringField *TClanovitelefonskiBroj;
	TStringField *TClanoviadresa;
	TEdit *editPrezime;
	TButton *btnTrazi;
	TGroupBox *GroupBox1;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TDBEdit *dbEditClanskiBroj;
	TDBEdit *dbEditIme;
	TDBEdit *dbEditPrezime;
	TDBEdit *dbEditTelBroj;
	TDBEdit *dbeditAdresa;
	TStringField *TPosudbeNazivKnjige;
	TADOConnection *ADOConnection1;
	TDBNavigator *DBNavigator1;
	TMainMenu *MainMenu1;
	TMenuItem *Menu;
	TMenuItem *Import1;
	TMenuItem *Export1;
	TMenuItem *Ebooks;
	TMenuItem *Download1;
	void __fastcall btnTraziClick(TObject *Sender);
	void __fastcall btnNovaPosudbaClick(TObject *Sender);
	void __fastcall gridClanoviDblClick(TObject *Sender);
	void __fastcall Import1Click(TObject *Sender);
	void __fastcall Download1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormClanoviPosudbe(TComponent* Owner);
};
int nom;
//---------------------------------------------------------------------------
extern PACKAGE TFormClanoviPosudbe *FormClanoviPosudbe;
//---------------------------------------------------------------------------
#endif