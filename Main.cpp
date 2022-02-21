//---------------------------------------------------------------------------
#pragma hdrstop
#include <tchar.h>

#include <vcl.h>
#include <memory>
#include <idhashmessagedigest.hpp>
#include <registry.hpp>
#pragma hdrstop

#include "Main.h"
#include "Login.h"
#include "DodajClana.h"
#include "DodajKnjigu.h"
#include "ClanoviPosudbeForma.h"
#include "TcpKlijentTestForma.h"
#include "APITest.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------




void __fastcall TFormMain::btnKnjigeClick(TObject *Sender)
{
	std::unique_ptr<TFormUnosKnjige> FormUnosKnjige(new TFormUnosKnjige(NULL));

	FormUnosKnjige->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::btnClanoviClick(TObject *Sender)
{
	std::unique_ptr<TFormDodajClana> FormDodajClana(new TFormDodajClana(NULL));

	FormDodajClana->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::btnUvidUPosudbeClick(TObject *Sender)
{
	std::unique_ptr<TFormClanoviPosudbe> FormClanoviPosudbe(new TFormClanoviPosudbe(NULL));

	FormClanoviPosudbe->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::btnPosudbePoDatumimaClick(TObject *Sender)
{
	std::unique_ptr<TFormTCP> FormTCP(new TFormTCP(NULL));

	FormTCP->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::btnPretragaWebClick(TObject *Sender)
{
	std::unique_ptr<TFormREST> FormREST(new TFormREST(NULL));

	FormREST->ShowModal();
}
//---------------------------------------------------------------------------



