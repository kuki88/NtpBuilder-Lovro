//---------------------------------------------------------------------------

#include <vcl.h>
#include <string>
#pragma hdrstop

#include "DodajKnjigu.h"
#include "ISOAPServis.h"
#include "isbnservice.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormUnosKnjige *FormUnosKnjige;
//---------------------------------------------------------------------------
__fastcall TFormUnosKnjige::TFormUnosKnjige(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormUnosKnjige::btnGenerirajClick(TObject *Sender)
{
	if (editISBNDevet->Text.Length() < 9) {
		ShowMessage("Neispravan format, unesite 9 brojeva!");
		return;
	}

	_di_ISOAPServis soapInt = GetISOAPServis();
	_di_ISBNServiceSoapType soapWeb = GetISBNServiceSoapType();


	String validniIsbn = editISBNDevet->Text + soapInt->generiranjeISBN(editISBNDevet->Text);
	ShowMessage(validniIsbn);

	if (soapWeb->IsValidISBN10(validniIsbn)) {

	}
}
//---------------------------------------------------------------------------

