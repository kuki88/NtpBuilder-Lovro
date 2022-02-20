
// ********************************************************************************** //
//                                                                                  
//                                 XML Data Binding                                 
//                                                                                  
//         Generated on: 17.2.2022. 4:22:03                                         
//       Generated from: C:\Users\Jakov\Documents\GitHub\NtpBuilder\something.xml   
//   Settings stored in: C:\Users\Jakov\Documents\GitHub\NtpBuilder\something.xdb   
//                                                                                  
// ********************************************************************************** //

#include <System.hpp>
#pragma hdrstop

#include "something.h"


// Global Functions 

_di_IXMLclanoviType __fastcall Getclanovi(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLclanoviType) Doc->GetDocBinding("clanovi", __classid(TXMLclanoviType), TargetNamespace);
};

_di_IXMLclanoviType __fastcall Getclanovi(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getclanovi(DocIntf);
};

_di_IXMLclanoviType __fastcall Loadclanovi(const System::UnicodeString& FileName)
{
  return (_di_IXMLclanoviType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("clanovi", __classid(TXMLclanoviType), TargetNamespace);
};

_di_IXMLclanoviType __fastcall  Newclanovi()
{
  return (_di_IXMLclanoviType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("clanovi", __classid(TXMLclanoviType), TargetNamespace);
};

// TXMLclanoviType 

void __fastcall TXMLclanoviType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("clan"), __classid(TXMLclanType));
  ItemTag = "clan";
  ItemInterface = __uuidof(IXMLclanType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLclanType __fastcall TXMLclanoviType::Get_clan(int Index)
{
  return (_di_IXMLclanType) List->Nodes[Index];
};

_di_IXMLclanType __fastcall TXMLclanoviType::Add()
{
  return (_di_IXMLclanType) AddItem(-1);
};

_di_IXMLclanType __fastcall TXMLclanoviType::Insert(const int Index)
{
  return (_di_IXMLclanType) AddItem(Index);
};

// TXMLclanType 

System::UnicodeString __fastcall TXMLclanType::Get_clanski_broj()
{
  return GetChildNodes()->Nodes[System::UnicodeString("clanski_broj")]->Text;
};

void __fastcall TXMLclanType::Set_clanski_broj(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("clanski_broj")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLclanType::Get_ime()
{
  return GetChildNodes()->Nodes[System::UnicodeString("ime")]->Text;
};

void __fastcall TXMLclanType::Set_ime(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("ime")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLclanType::Get_prezime()
{
  return GetChildNodes()->Nodes[System::UnicodeString("prezime")]->Text;
};

void __fastcall TXMLclanType::Set_prezime(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("prezime")]->NodeValue = Value;
};

int __fastcall TXMLclanType::Get_telefonski_broj()
{
  return GetChildNodes()->Nodes[System::UnicodeString("telefonski_broj")]->NodeValue.operator int();
};

void __fastcall TXMLclanType::Set_telefonski_broj(int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("telefonski_broj")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLclanType::Get_adresa()
{
  return GetChildNodes()->Nodes[System::UnicodeString("adresa")]->Text;
};

void __fastcall TXMLclanType::Set_adresa(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("adresa")]->NodeValue = Value;
};
