﻿//---------------------------------------------------------------------------

#ifndef DodajKnjiguH
#define DodajKnjiguH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TFormUnosKnjige : public TForm
{
__published:	// IDE-managed Components
	TDataSource *DKnjige;
	TADOTable *TKnjige;
	TWideStringField *TKnjigeNazivKnjige;
	TWideStringField *TKnjigeKategorija;
	TIntegerField *TKnjigeKoličina;
	TWideStringField *TKnjigeISBN;
	TWideStringField *TKnjigeAutor;
	TADOConnection *ADOConnection1;
	TEdit *editNazivKnjige;
	TEdit *editKategorija;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TEdit *editKolicina;
	TEdit *editISBNDevet;
	TEdit *editAutor;
	TEdit *editISBN10;
	TButton *btnGeneriraj;
	TButton *btnTraziNaz;
	TButton *btnTraziAut;
	TButton *btnIzbrisi;
	TButton *btnUredi;
	TButton *btnDodaj;
	void __fastcall btnGenerirajClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormUnosKnjige(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormUnosKnjige *FormUnosKnjige;
//---------------------------------------------------------------------------
#endif