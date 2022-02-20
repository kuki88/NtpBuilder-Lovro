//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TformImport : public TForm
{
__published:	// IDE-managed Components
	TXMLDocument *XMLDocument1;
	TButton *btnLoad;
	TListView *listClanovi;
	TOpenDialog *dialogLoad;
	TButton *btnSync;
	TADOQuery *ADOQuery1;
	TDataSource *Rezultat;
	void __fastcall btnLoadClick(TObject *Sender);
	void __fastcall btnSyncClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TformImport(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TformImport *formImport;
//---------------------------------------------------------------------------
#endif