// ************************************************************************ //
// Implementation class for interface IKnjiznicaSOAP
// ************************************************************************ //
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop

#if !defined(__KnjiznicaSOAP_h__)
#include "KnjiznicaSOAP.h"
#endif

// ************************************************************************ //
//  TKnjiznicaSOAPImpl implements interface IKnjiznicaSOAP
// ************************************************************************ //
class TKnjiznicaSOAPImpl : public TInvokableClass, public IKnjiznicaSOAP
{
public:
    /* Sample methods of IKnjiznicaSOAP */
  SampleEnum     echoEnum(SampleEnum eValue);
  TDoubleArray   echoDoubleArray(const TDoubleArray daValue);
  TSampleStruct* echoStruct(const TSampleStruct* pStruct);
  double         echoDouble(double dValue);

  /* IUnknown */
  HRESULT STDMETHODCALLTYPE QueryInterface(const GUID& IID, void **Obj)
                        { return GetInterface(IID, Obj) ? S_OK : E_NOINTERFACE; }
  ULONG STDMETHODCALLTYPE AddRef() { return TInvokableClass::_AddRef();  }
  ULONG STDMETHODCALLTYPE Release() { return TInvokableClass::_Release();  }
};


SampleEnum TKnjiznicaSOAPImpl::echoEnum(SampleEnum eValue)
{
  /* TODO : Implement method echoEnum */
  return eValue;
}

TDoubleArray TKnjiznicaSOAPImpl::echoDoubleArray(TDoubleArray daValue)
{
  /* TODO : Implement method echoDoubleArray */
  return daValue;
}

TSampleStruct* TKnjiznicaSOAPImpl::echoStruct(const TSampleStruct* pEmployee)
{
  /* TODO : Implement method echoMyEmployee */
  return new TSampleStruct();
}

double TKnjiznicaSOAPImpl::echoDouble(const double dValue)
{
  /* TODO : Implement method echoDouble */
  return dValue;
}


static int generirajISBN(String devetBrojeva)
{
	int suma = 0;
	for (int i = 0; i < 9; i++) {
		suma = suma + ((int)devetBrojeva[i] * (10 - i));
	}

	return suma % 11;
}

static void __fastcall KnjiznicaSOAPFactory(System::TObject* &obj)
{
  static _di_IKnjiznicaSOAP iInstance;
  static TKnjiznicaSOAPImpl *instance = 0;
  if (!instance)
  {
    instance = new TKnjiznicaSOAPImpl();
    instance->GetInterface(iInstance);
  }
  obj = instance;
}




// ************************************************************************ //
//  The following routine registers the interface and implementation class
//  as well as the type used by the methods of the interface
// ************************************************************************ //
static void RegTypes()
{
  InvRegistry()->RegisterInterface(__delphirtti(IKnjiznicaSOAP));
  InvRegistry()->RegisterInvokableClass(__classid(TKnjiznicaSOAPImpl), KnjiznicaSOAPFactory);
}
#pragma startup RegTypes 32
