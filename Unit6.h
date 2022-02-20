//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <IdAuthentication.hpp>
//---------------------------------------------------------------------------
class TformEbooks : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TADOConnection *ADOConnection1;
	TADOTable *TEknjige;
	TDataSource *DEknjige;
	TStringField *TEknjigeNaziv;
	TStringField *TEknjigeAutor;
	TEdit *Edit1;
	TProgressBar *ProgressBar1;
	TButton *Button1;
	TSaveDialog *dialogSpasiMe;
	TIdHTTP *Download;
	TADOQuery *ADOQuery1;
	TDataSource *OznaceniRed;
	TADOQuery *ADOQuery2;
	TDataSource *DSearch;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall DownloadWorkBegin(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCountMax);
	void __fastcall DownloadWork(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCount);
	void __fastcall DownloadWorkEnd(TObject *ASender, TWorkMode AWorkMode);


private:	// User declarations
public:		// User declarations
	__fastcall TformEbooks(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TformEbooks *formEbooks;
//---------------------------------------------------------------------------
#endif