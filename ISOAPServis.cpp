// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : D:\C++ Builder Projects\NtpBuilder-Lovro\ISOAPServis.xml
// Version  : 1.0
// (17.2.2022. 15:14:23 - - $Rev: 96726 $)
// ************************************************************************ //

#include <System.hpp>
#pragma hdrstop

#include "ISOAPServis.h"



namespace NS_ISOAPServis {

_di_ISOAPServis GetISOAPServis(bool useWSDL, System::String addr, Soaphttpclient::THTTPRIO* HTTPRIO)
{
  static const char* defWSDL= "D:\\C++ Builder Projects\\NtpBuilder-Lovro\\ISOAPServis.xml";
  static const char* defURL = "http://localhost:8080/soap/ISOAPServis";
  static const char* defSvc = "ISOAPServisservice";
  static const char* defPrt = "ISOAPServisPort";
  if (addr=="")
    addr = useWSDL ? defWSDL : defURL;
  Soaphttpclient::THTTPRIO* rio = HTTPRIO ? HTTPRIO : new Soaphttpclient::THTTPRIO(0);
  if (useWSDL) {
    rio->WSDLLocation = addr;
    rio->Service = defSvc;
    rio->Port = defPrt;
  } else {
    rio->URL = addr;
  }
  _di_ISOAPServis service;
  rio->QueryInterface(service);
  if (!service && !HTTPRIO)
    delete rio;
  return service;
}


// ************************************************************************ //
// This routine registers the interfaces and types exposed by the WebService.
// ************************************************************************ //
static void RegTypes()
{
  /* ISOAPServis */
  InvRegistry()->RegisterInterface(__delphirtti(ISOAPServis), L"urn:SOAPServis-ISOAPServis", L"");
  InvRegistry()->RegisterDefaultSOAPAction(__delphirtti(ISOAPServis), L"urn:SOAPServis-ISOAPServis#generiranjeISBN");
  /* ISOAPServis->generiranjeISBN */
  InvRegistry()->RegisterParamInfo(__delphirtti(ISOAPServis), "generiranjeISBN", "return_", L"return", L"");
}
#pragma startup RegTypes 32

};     // NS_ISOAPServis
