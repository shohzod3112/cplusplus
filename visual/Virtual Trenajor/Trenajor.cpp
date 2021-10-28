//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("for_picture.cpp", Form9);
USEFORM("Kataloglashtiruvchining_shaxsiy_kodi.cpp", Form20);
USEFORM("Dastur_haqida.cpp", Form22);
USEFORM("Ochqich.cpp", Form18);
USEFORM("shifrlar.cpp", Form12);
USEFORM("qoshish.cpp", Form21);
USEFORM("ITAR.cpp", Form14);
USEFORM("Yangi_adabiyot_qoshish.cpp", yangiadabiyotForm);
USEFORM("PechatFormUnit.cpp", pechatForm);
USEFORM("Qaytarib_olishUnit.cpp", Qaytarib_olishForm);
USEFORM("Chiqish.cpp", Form16);
USEFORM("fanlar.cpp", Form11);
USEFORM("nashr_tili.cpp", Form10);
USEFORM("Sarlavxa.cpp", Form15);
USEFORM("Muallif.cpp", Form13);
USEFORM("Asosiy_oyna.cpp", AsosiyoynaForm);
USEFORM("adabiyot_qoshish.cpp", adabiyotqoshishForm);
USEFORM("login.cpp", loginForm);
USEFORM("Boshqa_mualliflar.cpp", Form19);
USEFORM("nolnolsakiz.cpp", Form7);
USEFORM("Fizik_tavsifi.cpp", Form17);
USEFORM("ISBN.cpp", Form8);
USEFORM("kirish.cpp", kirishForm);
USEFORM("FoydalnuvchiFormUnit.cpp", FoydalnuvchiForm);
USEFORM("bajarishFormUnit.cpp", bajarishForm);
//---------------------------------------------------------------------------
WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TkirishForm), &kirishForm);
		Application->CreateForm(__classid(TForm9), &Form9);
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
