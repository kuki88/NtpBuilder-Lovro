//---------------------------------------------------------------------------

#ifndef DodajClanaH
#define DodajClanaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFormDodajClana : public TForm
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection1;
	TDataSource *DClanovi;
	TADOTable *TClanovi;
	TWideStringField *TClanoviclanskiBroj;
	TStringField *TClanoviime;
	TStringField *TClanoviprezime;
	TStringField *TClanovitelefonskiBroj;
	TStringField *TClanoviadresa;
	TGroupBox *GroupBox1;
	TEdit *editClanskiBroj;
	TButton *btnPretraga;
	TLabel *Label6;
	TLabel *Label8;
	TLabel *Label7;
	TLabel *Label4;
	TLabel *Label5;
	TButton *btnUredi;
	TButton *btnDodaj;
	TButton *btnIzbrisi;
	TEdit *editIme;
	TEdit *editPrezime;
	TEdit *editAdresa;
	TEdit *editTelBroj;
	void __fastcall btnPretragaClick(TObject *Sender);
	void __fastcall btnDodajClick(TObject *Sender);
	void __fastcall btnUrediClick(TObject *Sender);
	void __fastcall btnIzbrisiClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormDodajClana(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TFormDodajClana *FormDodajClana;
//---------------------------------------------------------------------------
#endif