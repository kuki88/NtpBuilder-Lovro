//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <ctime>
#include "Clanovi.h"


#include "NovaPosudbaForma.h"
#include "ClanoviPosudbeForma.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormPosudba *FormPosudba;
//---------------------------------------------------------------------------
__fastcall TFormPosudba::TFormPosudba(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormPosudba::FormCreate(TObject *Sender)
{
	datePocetna->Date = Date();
	datePovratak->Date = Date() + 14;
}
//---------------------------------------------------------------------------
void __fastcall TFormPosudba::PosudiClick(TObject *Sender)
{
//	if(!((dbEditBrojPosudbi->Text).ToInt() > 5))
//	{
//		TPosudba->FieldByName("isbnKnjige")->AsString = ->Text;
//		TPosudba->FieldByName("clanskiBroj")->AsString = editClanskiBroj->Text;
//		TPosudba->FieldByName("isbnKnjige")->AsString = editISBN->Text;
//		TPosudba->FieldByName("isbnKnjige")->AsString = editISBN->Text;
//		TPosudba->FieldByName("isbnKnjige")->AsString = editISBN->Text;
//	}
}
//---------------------------------------------------------------------------