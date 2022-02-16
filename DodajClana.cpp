﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DodajClana.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormDodajClana *FormDodajClana;
//---------------------------------------------------------------------------
__fastcall TFormDodajClana::TFormDodajClana(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormDodajClana::btnPretragaClick(TObject *Sender)
{
	btnUredi->Enabled = false;
	btnDodaj->Enabled = false;
    btnIzbrisi->Enabled = false;

	TClanovi->Filtered = false;
	TLocateOptions searchOptions;
	searchOptions.Clear();
	searchOptions << loCaseInsensitive;

	if(editClanskiBroj->Text.IsEmpty())
	{
		TClanovi->Filtered = false;
		return;
	}

	if(TClanovi->Locate("clanskiBroj", editClanskiBroj->Text, searchOptions))
	{
		TClanovi->Filter = "clanskiBroj = '" + editClanskiBroj->Text.LowerCase() + "'";
		TClanovi->Filtered = true;
        editIme->Text = TClanovi->FieldByName("ime")->AsString;
		editPrezime->Text = TClanovi->FieldByName("Prezime")->AsString;
		editAdresa->Text = TClanovi->FieldByName("Adresa")->AsString;
		editTelBroj->Text = TClanovi->FieldByName("telefonskiBroj")->AsString;
		btnUredi->Enabled = true;
        btnIzbrisi->Enabled = true;
	}

	else
	{
		 ShowMessage("Član nije pronađen, možete unijeti novoga!");

		 btnDodaj->Enabled = true;
	}



}
//---------------------------------------------------------------------------
void __fastcall TFormDodajClana::btnDodajClick(TObject *Sender)
{
	TClanovi->Filtered = false;

	TLocateOptions searchOptions;
	searchOptions.Clear();
	searchOptions << loCaseInsensitive;

	try
	{
		TClanovi->Append();

		TClanovi->FieldByName("clanskiBroj")->AsString = editClanskiBroj->Text;
		TClanovi->FieldByName("ime")->AsString = editIme->Text;
		TClanovi->FieldByName("prezime")->AsString = editPrezime->Text;
		TClanovi->FieldByName("adresa")->AsString = editAdresa->Text;
		TClanovi->FieldByName("telefonskiBroj")->AsString = editTelBroj->Text;

		TClanovi->Post();

		ShowMessage("Dodali ste novog člana imena " + editIme->Text + " " + editPrezime->Text);

	} catch(...)
	{
        ShowMessage("Greška kod unosa!");
    }
}
//---------------------------------------------------------------------------

void __fastcall TFormDodajClana::btnUrediClick(TObject *Sender)
{
	TClanovi->Filtered = false;

	TLocateOptions opcija;
	opcija.Clear();
	opcija << loCaseInsensitive;

	try {
		TClanovi->Edit();

		TClanovi->FieldByName("ime")->AsString = editIme->Text;
		TClanovi->FieldByName("prezime")->AsString = editPrezime->Text;
		TClanovi->FieldByName("adresa")->AsString = editAdresa->Text;
		TClanovi->FieldByName("telefonskiBroj")->AsString = editTelBroj->Text;

		TClanovi->Post();

	} catch (...) {
        ShowMessage("Greška kod unosa!");
	}
}
//---------------------------------------------------------------------------

void __fastcall TFormDodajClana::btnIzbrisiClick(TObject *Sender)
{
	TClanovi->Filtered = false;

	TLocateOptions opcija;
	opcija.Clear();
	opcija << loCaseInsensitive;

	if(TClanovi->Locate("clanskiBroj", editClanskiBroj->Text, opcija))
	{
		if(Application->MessageBox(L"Želite li izbrisati odabranog člana?",
									L"Potvrda",
									MB_YESNO)
									== ID_YES)
		{
				TClanovi->Delete();
        }
	}
    else ShowMessage("Član nije pronađen!");
}
//---------------------------------------------------------------------------

