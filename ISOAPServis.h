// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : D:\C++ Builder Projects\NtpBuilder-Lovro\ISOAPServis.xml
// Version  : 1.0
// (17.2.2022. 15:14:23 - - $Rev: 96726 $)
// ************************************************************************ //

#ifndef   ISOAPServisH
#define   ISOAPServisH

#include <System.hpp>
#include <Soap.InvokeRegistry.hpp>
#include <Soap.XSBuiltIns.hpp>
#include <Soap.SOAPHTTPClient.hpp>

#if !defined(SOAP_REMOTABLE_CLASS)
#define SOAP_REMOTABLE_CLASS __declspec(delphiclass)
#endif

namespace NS_ISOAPServis {

// ************************************************************************ //
// The following types, referred to in the WSDL document are not being represented
// in this file. They are either aliases[@] of other types represented or were referred
// to but never[!] declared in the document. The types from the latter category
// typically map to predefined/known XML or Embarcadero types; however, they could also 
// indicate incorrect WSDL documents that failed to declare or import a schema type.
// ************************************************************************ //
// !:string          - "http://www.w3.org/2001/XMLSchema"[]
// !:int             - "http://www.w3.org/2001/XMLSchema"[]


// ************************************************************************ //
// Namespace : urn:SOAPServis-ISOAPServis
// soapAction: urn:SOAPServis-ISOAPServis#generiranjeISBN
// transport : http://schemas.xmlsoap.org/soap/http
// style     : rpc
// use       : encoded
// binding   : ISOAPServisbinding
// service   : ISOAPServisservice
// port      : ISOAPServisPort
// URL       : http://localhost:8080/soap/ISOAPServis
// ************************************************************************ //
__interface INTERFACE_UUID("{6C89AB2B-17EE-6CC0-E926-1F3419C4EB11}") ISOAPServis : public IInvokable
{
public:
  virtual int             generiranjeISBN(const UnicodeString devetBrojeva) = 0; 
};
typedef DelphiInterface<ISOAPServis> _di_ISOAPServis;

_di_ISOAPServis GetISOAPServis(bool useWSDL=false, System::String addr= System::String(), Soaphttpclient::THTTPRIO* HTTPRIO=0);


};     // NS_ISOAPServis

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace NS_ISOAPServis;
#endif



#endif // ISOAPServisH
