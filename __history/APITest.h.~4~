//---------------------------------------------------------------------------

#ifndef APITestH
#define APITestH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.ObjectScope.hpp>
#include <REST.Client.hpp>
#include <REST.Types.hpp>
//---------------------------------------------------------------------------
class TFormREST : public TForm
{
__published:	// IDE-managed Components
	TRESTClient *RESTClient1;
	TRESTRequest *RESTRequest1;
	TRESTResponse *RESTResponse1;
	TMemo *Memo1;
	TButton *btnRest;
	TEdit *editNaslov;
	TLabel *Label1;
	void __fastcall btnRestClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormREST(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormREST *FormREST;
//---------------------------------------------------------------------------
#endif
