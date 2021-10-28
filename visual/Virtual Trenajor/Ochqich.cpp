//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Ochqich.h"
#include "Asosiy_oyna.h"
#include "for_picture.h"
#include "Yangi_adabiyot_qoshish.h"
#include "Constanta.h"
#include "URLUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm18 *Form18;

AnsiString Bos[] = {"", "Нутқнинг аниқлиги, Нутқнинг мантиқийлиги, Нутқнинг софлиги", "Aromatik birikmalar, Fenollar, Aromatik karbon kislotalar", "Tarmoqlar turlari, Triangulatsiya, Poligonometriya"};
AnsiString Ios[] = {"", "UML asoslari, Boshqaruvchi tuzilmalar, Massivlar bilan ishlash", "Novda, Ildiz, Gul", "Tajriba bayoni, Otlarni harakatsizlantirish, Hayvonlarni og`riqsizlantirish"};
AnsiString Uos[] = {"", "Rang, Shakl, Qatlamlar bilan ishlash", "Kimyoviy elementlar, Nobellar sulolasi, Nobel mukofoti", "Geometriya, Planimetriya, Burchaklar"};
AnsiString Tos[] = {"", "Industrial sivilizatsiya, Fransiyaning ichki siyosati, Imperiyaning tashqi siyosati", "Maqollar, Topishmoqlar, Ezop", "Pulning nazariyalari, Kredit zarurligi va mohiyati, Kreditning asosiy tamoyillari"};

//---------------------------------------------------------------------------
__fastcall TForm18::TForm18(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm18::Button2Click(TObject *Sender)
{
AnsiString a = Edit3->Text;

switch(AsosiyoynaForm->N)
	{
		case 1:
			if(a == Bos[select])
			{
				Label1->Visible = False;
				AsosiyoynaForm->Edit8->ReadOnly = True;
				AsosiyoynaForm->Edit8->Enabled = True;
				AsosiyoynaForm->Edit8->Text = "^A^" + Edit3->Text;
				AsosiyoynaForm->SpeedButton38->Enabled = False;
				AsosiyoynaForm->SpeedButtonboshqa->Enabled = True;
				Close();
			}  break;
		case 2:
			if(a == Ios[select])
			{
				Label1->Visible = False;
				AsosiyoynaForm->Edit8->ReadOnly = True;
				AsosiyoynaForm->Edit8->Enabled = True;
				AsosiyoynaForm->Edit8->Text = "^A^" + Edit3->Text;
				AsosiyoynaForm->SpeedButton38->Enabled = False;
				AsosiyoynaForm->SpeedButtonboshqa->Enabled = True;
				Close();
			}  break;
		case 3:
			if(a == Uos[select])
			{
				Label1->Visible = False;
				AsosiyoynaForm->Edit8->ReadOnly = True;
				AsosiyoynaForm->Edit8->Enabled = True;
				AsosiyoynaForm->Edit8->Text = "^A^" + Edit3->Text;
				AsosiyoynaForm->SpeedButton38->Enabled = False;
				AsosiyoynaForm->SpeedButtonboshqa->Enabled = True;
				Close();
			}  break;
		case 4:
			if(a == Tos[select])
			{
				Label1->Visible = False;
				AsosiyoynaForm->Edit8->ReadOnly = True;
				AsosiyoynaForm->Edit8->Enabled = True;
				AsosiyoynaForm->Edit8->Text = "^A^" + Edit3->Text;
				AsosiyoynaForm->SpeedButton38->Enabled = False;
				AsosiyoynaForm->SpeedButtonboshqa->Enabled = True;
				Close();
			}  break;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm18::Label6MouseLeave(TObject *Sender)
{
	Label6->Font->Color = clBlack;
	Label6->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------
void __fastcall TForm18::Label6MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label6->Font->Color = clRed;
	Label6->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------
void __fastcall TForm18::Label1Click(TObject *Sender)
{
	ShowMessage("Ochqich so'zlarni har biridan so'ng vergul va bitta probel qo'ying");
}
//---------------------------------------------------------------------------
void __fastcall TForm18::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TForm18::Button1Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Label6Click(TObject *Sender)
{
    Form9 = new TForm9(this);
	switch(AsosiyoynaForm->N)
	{
		case 1: Form9->ochish(URL(DIRECTORY_PATH + "1m" + IntToStr(select) + ".7"));
			break;
		case 2: Form9->ochish(URL(DIRECTORY_PATH + "2m" + IntToStr(select) + ".7"));
			break;
		case 3: Form9->ochish(URL(DIRECTORY_PATH + "3m" + IntToStr(select) + ".7"));
			break;
		case 4: Form9->ochish(URL(DIRECTORY_PATH + "4m" + IntToStr(select) + ".7"));
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Edit3KeyPress(TObject *Sender, wchar_t &Key)
{
	if(Key == 39)
	{
		ShowMessage("O`zbek tili lotin grafikasida (`) belgi qo`yiladi");
		Image1->Visible = true;
	}
	else	Image1->Visible = False;
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Edit3Change(TObject *Sender)
{
	AnsiString a = Edit3->Text;
	switch(AsosiyoynaForm->N)
	{
		case 1:
			if(a != Bos[select]) Label1->Visible = true;
			else 	Label1->Visible = false; break;
		case 2:
			if(a != Ios[select]) Label1->Visible = true;
			else 	Label1->Visible = false; break;
		case 3:
			if(a != Uos[select]) Label1->Visible = true;
			else 	Label1->Visible = false; break;
		case 4:
			if(a != Tos[select]) Label1->Visible = true;
			else 	Label1->Visible = false; break;
	}
}
//---------------------------------------------------------------------------

