// ************************************************************************ //
// Invokable interface declaration header for SOAPServis
// ************************************************************************ //
#ifndef   SOAPServisH
#define   SOAPServisH

#include <System.hpp>
#include <Soap.InvokeRegistry.hpp>
#include <Soap.XSBuiltIns.hpp>
#include <System.Types.hpp>



// ************************************************************************ //
//  Invokable interfaces must derive from IInvokable
//  The methods of the interface will be exposed via SOAP
// ************************************************************************ //
__interface INTERFACE_UUID("{F7BD718C-B1D2-4FA1-8027-48AE2AAA2641}") ISOAPServis : public IInvokable
{
public:
    virtual int generiranjeISBN(String devetBrojeva) = 0;
};
typedef DelphiInterface<ISOAPServis> _di_ISOAPServis;


#endif // SOAPServisH
//---------------------------------------------------------------------------

