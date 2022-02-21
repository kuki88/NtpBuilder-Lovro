//---------------------------------------------------------------------------

#include <vcl.h>
#include <memory>
#include <system.JSON.hpp>
#include <vector>
#pragma hdrstop

#include "TcpKlijentTestForma.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormTCP *FormTCP;

UnicodeString jsonPopis(TJSONArray* js2);
bool stanjeViseOdNule(int stanje);

//---------------------------------------------------------------------------
__fastcall TFormTCP::TFormTCP(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TFormTCP::btnConnDiscClick(TObject *Sender)
{

	//spajanje na tcp server

	if (TCPKlijent->Connected()){
		TCPKlijent->Disconnect();
		labelSpojeno->Caption = "Odspojeno";
		btnConnDisc->Caption = "Spoji";
	}
    else {
		TCPKlijent->Connect();
        btnConnDisc->Caption = "Odspoji";
		labelSpojeno->Caption = "Spojeno";
	}



}
//---------------------------------------------------------------------------

void __fastcall TFormTCP::TCPServerExecute(TIdContext *AContext)
{
//
//	if(AContext->Connection->Socket->ReadLn() == "greska"){
//		ShowMessage("Korisnik nema posudbi!");
//        return;
//	}

	TThread::Synchronize(TThread::CurrentThread,
		[&](){
		//primamo json file
		UnicodeString naziv = AContext->Connection->Socket->ReadLn();
		int velicina = AContext->Connection->Socket->ReadInt64();

		std::unique_ptr<TFileStream> jsonFile(new TFileStream(naziv, fmCreate));
		AContext->Connection->Socket->ReadStream(jsonFile.get(), velicina);
	});

	AContext->Connection->Disconnect();

	//ucitavamo json kao unique ptr i postavljamo njegov datastring u varijablu

	std::unique_ptr<TStringStream> jsonFinal (new TStringStream);
	jsonFinal->LoadFromFile("datumi.json");
	UnicodeString jsonContent = jsonFinal->DataString;

//	vector<TJSONArray*> vec;
	TJSONObject* js1 = (TJSONObject*)TJSONObject::ParseJSONValue(jsonFinal->DataString);
	TJSONArray* js2 = (TJSONArray*)TJSONObject::ParseJSONValue(js1->GetValue("Posudbe")->ToString());

//	ShowMessage(js2);

//	UnicodeString popisPosudbi;
//	for(int i = 0; i < js2->Count; i++)
//	{
//		popisPosudbi += js2->Items[i]->GetValue<UnicodeString>("Naziv Knjige");
//        popisPosudbi += "\nPovratak:\t";
//		popisPosudbi += js2->Items[i]->GetValue<UnicodeString>("Datum Povratka");
//		popisPosudbi += "\n";
//		popisPosudbi += "-----------------------------------\n";
//	}
//
	ShowMessage(jsonPopis(js2));
}
//---------------------------------------------------------------------------


void __fastcall TFormTCP::Button1Click(TObject *Sender)
{
	TThread::Synchronize(TThread::CurrentThread,
		[&](){
		//saljemo na tcp server podatke
		TCPKlijent->Socket->WriteLn(editPodatak->Text);
	});
}
//---------------------------------------------------------------------------

