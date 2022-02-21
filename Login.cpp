//---------------------------------------------------------------------------

#include <vcl.h>
#include <idhashmessagedigest.hpp>
#include <registry.hpp>
#pragma hdrstop

#include "Login.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormLogin *FormLogin;

bool uspjeh = false;
//---------------------------------------------------------------------------
__fastcall TFormLogin::TFormLogin(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormLogin::btnLoginClick(TObject *Sender)
{

	//hashiramo lozinku koja je unesena
	TIdHashMessageDigest5* md5 = new TIdHashMessageDigest5;
	UnicodeString hashLozinka = md5->HashStringAsHex(editLozinka->Text);

	//upisujemo query i provjeravamo postoji li rezultat u bazi
	UnicodeString query = "select * from admin where korisnickoIme = '" + editKorisnicko->Text +
					 "' AND lozinka = '" + hashLozinka + "'";
	ADOQuery1->ConnectionString = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=KnjiznicaManagement;Data Source=KUKICRO\\SQLEXPRESS;Use Procedure for Prepare=1;Auto Translate=True;Packet Size=4096;Workstation ID=KUKICRO;Use Encryption for Data=False;Tag with column collation when possible=False";
	ADOQuery1->SQL->Add(query);

	ADOQuery1->Prepared = true;

	try
	{
		ADOQuery1->Active = true;
	}
	catch (EADOError& e)
	{
		MessageDlg("Error spajanja", mtError,
					  TMsgDlgButtons() << mbOK, 0);
		return;
	}


	//postavljamo data source
	TDataSource* Src = new TDataSource(this);
	Src->DataSet = ADOQuery1;
	Src->Enabled = true;


	//ako nema dataset u datasource onda izlazimo iz funkcije
	if(Src->DataSet->RecordCount < 1){
		ADOQuery1->SQL->Clear();

		labelPrijava->Visible = true;
		ADOQuery1->Prepared = false;

		Src->Enabled = false;

		try{
			ADOQuery1->Active = false;
		}
		catch (EADOError& e){
			MessageDlg("Error odspajanja", mtError,
				  TMsgDlgButtons() << mbOK, 0);
		}
		return;
	}

	//uspjesna prijava, izlazimo iz login forme
    uspjeh = true;
    ModalResult = mrOk;
}
//---------------------------------------------------------------------------


void __fastcall TFormLogin::FormClose(TObject *Sender, TCloseAction &Action)
{

	if (uspjeh) {
		TIniFile* iniFile = new TIniFile(GetCurrentDir() + "\\zadnji_user.ini");

		iniFile->WriteString("ZadnjiLogin", "Korisnicko ime", editKorisnicko->Text);
	}

}
//---------------------------------------------------------------------------

void __fastcall TFormLogin::FormCreate(TObject *Sender)
{

	try {
		TIniFile* iniFile = new TIniFile(GetCurrentDir() + "\\zadnji_user.ini");
		ShowMessage("Zadnji korisnik koji je bio ulogiran: " + iniFile->ReadString("ZadnjiLogin", "Korisnicko ime", ""));

    } catch (...) {
	}
}
//---------------------------------------------------------------------------

