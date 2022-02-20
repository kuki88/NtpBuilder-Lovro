//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.WinXCalendars.hpp>
#include <string>
//---------------------------------------------------------------------------
class TformPosudbe : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *gridPosudbe;
	TDataSource *DKnjige;
	TADOTable *TKnjige;
	TDataSource *DPosudbe;
	TADOTable *TPosudbe;
	TAutoIncField *TPosudbeId;
	TWideStringField *TPosudbeisbnKnjige;
	TDateTimeField *TPosudbedatumPosudbe;
	TDateTimeField *TPosudbedatumPovratka;
	TWideStringField *TPosudbeclanskiBroj;
	TStringField *TPosudbeNazivKnjige;
	TDataSource *DClanovi;
	TADOTable *TClanovi;
	TWideStringField *TClanoviclanskiBroj;
	TStringField *TClanoviime;
	TStringField *TClanoviprezime;
	TStringField *TClanovitelefonskiBroj;
	TStringField *TClanoviadresa;
	TADOConnection *ADOConnection1;
	TButton *btnNovaPosudba;
	TButton *btnObrisi;
	TButton *btnProdulji;
	TMonthCalendar *Kalendar2;
	TDateTimePicker *Kalendar;
	void __fastcall btnNovaPosudbaClick(TObject *Sender);
	void __fastcall btnObrisiClick(TObject *Sender);
	void __fastcall gridPosudbeCellClick(TColumn *Column);
	void __fastcall btnProduljiClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TformPosudbe(TComponent* Owner);
};

class Datum{
	public:
	int godina;
	int mjesec;
	int datum;
};
//---------------------------------------------------------------------------
extern PACKAGE TformPosudbe *formPosudbe;
//---------------------------------------------------------------------------
#endif