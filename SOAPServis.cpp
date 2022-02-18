// ************************************************************************ //
// Implementation class for interface ISOAPServis
// ************************************************************************ //
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop

#if !defined(__SOAPServis_h__)
#include "SOAPServis.h"
#endif

// ************************************************************************ //
//  TSOAPServisImpl implements interface ISOAPServis
// ************************************************************************ //
class TSOAPServisImpl : public TInvokableClass, public ISOAPServis
{
public:

  /* IUnknown */
  HRESULT STDMETHODCALLTYPE QueryInterface(const GUID& IID, void **Obj)
                        { return GetInterface(IID, Obj) ? S_OK : E_NOINTERFACE; }
  ULONG STDMETHODCALLTYPE AddRef() { return TInvokableClass::_AddRef();  }
  ULONG STDMETHODCALLTYPE Release() { return TInvokableClass::_Release();  }
  int generiranjeISBN(String devetBrojeva)
  {
	int suma = 0;


	for (int i = 0; i < 9; i++) {
		int broj = devetBrojeva.SubString(i+1, 1).ToInt();
		suma = suma + (broj * (10 - i));
	}

	return 11 - (suma % 11);

  };
};




static void __fastcall SOAPServisFactory(System::TObject* &obj)
{
  static _di_ISOAPServis iInstance;
  static TSOAPServisImpl *instance = 0;
  if (!instance)
  {
	instance = new TSOAPServisImpl();
	instance->GetInterface(iInstance);
  }
  obj = instance;
}

// ************************************************************************ //
//  The following routine registers the interface and implementation class
// ************************************************************************ //
static void RegTypes()
{
  InvRegistry()->RegisterInterface(__delphirtti(ISOAPServis));
  InvRegistry()->RegisterInvokableClass(__classid(TSOAPServisImpl), SOAPServisFactory);
}
#pragma startup RegTypes 32
