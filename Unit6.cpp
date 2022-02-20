//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TformEbooks *formEbooks;
//---------------------------------------------------------------------------
__fastcall TformEbooks::TformEbooks(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TformEbooks::Button1Click(TObject *Sender)
{
	UnicodeString query ="Select url FROM Knjige WHERE Naziv LIKE '" + DBGrid1->SelectedField->Text
						+ "' OR Autor LIKE '" + DBGrid1->SelectedField->Text + "'";

	ADOQuery1->SQL->Add(query);
	ADOQuery1->Open();
	ADOQuery1->Prepared = true;

	OznaceniRed->DataSet = ADOQuery1;
	OznaceniRed->Enabled = true;

	UnicodeString FileLocation = "C:\\Users\\Jakov\\Downloads\\"+TEknjige->FieldByName("Naziv")->Text;
	TFileStream* fs = new TFileStream(FileLocation,fmCreate);
	Download->Get(OznaceniRed->DataSet->FieldByName("URL")->Value, fs);
	delete fs;

	//ShowMessage(DBGrid1->SelectedField->Text);
	//ShowMessage("C:\\Users\\Jakov\\"+TEknjige->FieldByName("Naziv")->Text +".pdf");
	UnicodeString query2 ="Select url FROM Knjige WHERE Naziv LIKE '" + DBGrid1->SelectedField->Text
						+ "%' OR WHERE Autor LIKE '" + DBGrid1->SelectedField->Text + "%'";
}
//---------------------------------------------------------------------------

void __fastcall TformEbooks::DownloadWorkBegin(TObject *ASender, TWorkMode AWorkMode,
          __int64 AWorkCountMax)
{
	ProgressBar1->Position = 0;
    ProgressBar1->Max = AWorkCountMax;
}
//---------------------------------------------------------------------------

void __fastcall TformEbooks::DownloadWork(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCount)

{
	ProgressBar1->Position = AWorkCount;
    Application->ProcessMessages();
}
//---------------------------------------------------------------------------


void __fastcall TformEbooks::DownloadWorkEnd(TObject *ASender, TWorkMode AWorkMode)

{
	ProgressBar1->Position = 0;
	ShowMessage("Hosana u visini!");
}
//---------------------------------------------------------------------------


