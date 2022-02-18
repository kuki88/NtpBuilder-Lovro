// ************************************************************************ //
// Invokable interface declaration header for SOAPKnjiznica
// ************************************************************************ //
#ifndef   SOAPKnjiznicaH
#define   SOAPKnjiznicaH

#include <System.hpp>
#include <Soap.InvokeRegistry.hpp>
#include <Soap.XSBuiltIns.hpp>
#include <System.Types.hpp>



// ************************************************************************ //
//  Invokable interfaces must derive from IInvokable
//  The methods of the interface will be exposed via SOAP
// ************************************************************************ //
__interface INTERFACE_UUID("{7DE548B9-350E-4C69-B57D-BB05698F1DD9}") ISOAPKnjiznica : public IInvokable
{
public:
    static int generirajISBN(String devetBrojeva);
};
typedef DelphiInterface<ISOAPKnjiznica> _di_ISOAPKnjiznica;


#endif // SOAPKnjiznicaH
//---------------------------------------------------------------------------


