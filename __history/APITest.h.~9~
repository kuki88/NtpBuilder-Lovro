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
#include <Data.Bind.EngExt.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
//---------------------------------------------------------------------------
class TFormREST : public TForm
{
__published:	// IDE-managed Components
	TRESTClient *RESTClient1;
	TRESTRequest *RESTRequest1;
	TRESTResponse *RESTResponse1;
	TButton *btnRest;
	TEdit *editNaslov;
	TLabel *Label1;
	TBindingsList *BindingsList1;
	TLinkControlToField *LinkControlToField1;
	TEdit *editRezultatNaslov;
	TEdit *editRezultatAutor;
	TEdit *editRezultatLink;
	TButton *btnNext;
	TButton *btnPrevious;
	TLabel *Label2;
	void __fastcall btnRestClick(TObject *Sender);
	void __fastcall btnNextClick(TObject *Sender);
	void __fastcall btnPreviousClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormREST(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormREST *FormREST;
//---------------------------------------------------------------------------
#endif
