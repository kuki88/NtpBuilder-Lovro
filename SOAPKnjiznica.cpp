// ************************************************************************ //
// Implementation class for interface ISOAPKnjiznica
// ************************************************************************ //
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop

#if !defined(__SOAPKnjiznica_h__)
#include "SOAPKnjiznica.h"
#endif

// ************************************************************************ //
//  TSOAPKnjiznicaImpl implements interface ISOAPKnjiznica
// ************************************************************************ //
class TSOAPKnjiznicaImpl : public TInvokableClass, public ISOAPKnjiznica
{
public:

  /* IUnknown */
  HRESULT STDMETHODCALLTYPE QueryInterface(const GUID& IID, void **Obj)
                        { return GetInterface(IID, Obj) ? S_OK : E_NOINTERFACE; }
  ULONG STDMETHODCALLTYPE AddRef() { return TInvokableClass::_AddRef();  }
  ULONG STDMETHODCALLTYPE Release() { return TInvokableClass::_Release();  }
};


static void __fastcall SOAPKnjiznicaFactory(System::TObject* &obj)
{
  static _di_ISOAPKnjiznica iInstance;
  static TSOAPKnjiznicaImpl *instance = 0;
  if (!instance)
  {
    instance = new TSOAPKnjiznicaImpl();
    instance->GetInterface(iInstance);
  }
  obj = instance;
}

// ************************************************************************ //
//  The following routine registers the interface and implementation class
// ************************************************************************ //
static void RegTypes()
{
  InvRegistry()->RegisterInterface(__delphirtti(ISOAPKnjiznica));
  InvRegistry()->RegisterInvokableClass(__classid(TSOAPKnjiznicaImpl), SOAPKnjiznicaFactory);
}
#pragma startup RegTypes 32

