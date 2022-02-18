//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("NovaPosudbaForma.cpp", FormPosudba);
USEFORM("Main.cpp", FormMain);
USEFORM("Login.cpp", FormLogin);
USEFORM("TcpKlijentTestForma.cpp", FormTCP);
USEFORM("DodajClana.cpp", FormDodajClana);
USEFORM("ClanoviPosudbeForma.cpp", FormClanoviPosudbe);
USEFORM("DodajKnjigu.cpp", FormUnosKnjige);
USEFORM("APITest.cpp", FormREST);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFormREST), &FormREST);
		Application->CreateForm(__classid(TFormTCP), &FormTCP);
		Application->CreateForm(__classid(TFormUnosKnjige), &FormUnosKnjige);
		Application->CreateForm(__classid(TFormDodajClana), &FormDodajClana);
		Application->CreateForm(__classid(TFormLogin), &FormLogin);
		Application->CreateForm(__classid(TFormMain), &FormMain);
		Application->CreateForm(__classid(TFormClanoviPosudbe), &FormClanoviPosudbe);
		Application->CreateForm(__classid(TFormPosudba), &FormPosudba);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
