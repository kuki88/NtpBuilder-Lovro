#include <vcl.h>
#include <memory>
#include <system.JSON.hpp>


bool stanjeViseOdNule(int stanje)
{
 if (stanje > 0) {
	 return true;
 }

 return false;
}

UnicodeString jsonPopis(TJSONArray* js2)
{
    UnicodeString popisPosudbi;

	for(int i = 0; i < js2->Count; i++)
	{
		popisPosudbi += js2->Items[i]->GetValue<UnicodeString>("Naziv Knjige");
        popisPosudbi += "\nPovratak:\t";
		popisPosudbi += js2->Items[i]->GetValue<UnicodeString>("Datum Povratka");
		popisPosudbi += "\n";
		if (i < js2->Count - 1)
		{
			popisPosudbi += "-----------------------------------\n";
		}
	}

    return popisPosudbi;
}
