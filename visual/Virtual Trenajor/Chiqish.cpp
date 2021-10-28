//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Chiqish.h"
#include "Asosiy_oyna.h"
#include "for_picture.h"
#include "Yangi_adabiyot_qoshish.h"
#include "URLUnit.h"
#include "Constanta.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm16 *Form16;

AnsiString Bn[] = {"", "Алишер Навоий номидаги Ўзбекистон Миллий кутубхонаси нашриёти", "Yangiyul poligraph service", "Voris-nashriyot"};
AnsiString Bny[] = {"", "2009", "2008", "2010"};
AnsiString Bnj[] = {"", "Тошкент", "Toshkent", "Toshkent"};

AnsiString In[] = {"", "G`afur G`ulom nomidagi nashriyot-matbaa ijodiy uyi", "Fan va texnologiya nashriyoti", "Tafakkur-bo`stoni"};
AnsiString Iny[] = {"", "2007", "2012", "2011"};
AnsiString Inj[] = {"", "Toshkent"};

AnsiString Un[] = {"", "G`afur G`ulom nomidagi nashriyot-matbaa ijodiy uyi", "Sharq nashriyot-matbaa aksiyadorlik kompaniyasi", "Noshir"};
AnsiString Uny[] = {"", "2007", "2014", "2009"};

AnsiString Tn[] = {"", "O`qituvchi nashriyot-matbaa ijodiy uyi", "Sharq nashriyot-matbaa aksiyadorlik kompaniyasi", "Cho`lpon nomidagi nashriyot-matbaa ijodiy uyi"};
AnsiString Tny[] = {"", "2010", "2007", "2011"};

//---------------------------------------------------------------------------
__fastcall TForm16::TForm16(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm16::Button4Click(TObject *Sender)
{
AnsiString a = Edit3->Text, b = Edit4->Text, c = Edit5->Text;

switch(AsosiyoynaForm->N)
	{
	case 1:
		if(a == Bn[select] && b == Bny[select] && c == Bnj[select])
		{
			Label13->Visible = False;
			Label3->Visible = False;
			Label4->Visible = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

			Form9 = NULL;

			AsosiyoynaForm->SpeedButton33->Enabled = False;
			AsosiyoynaForm->SpeedButton34->Enabled = True;
			AsosiyoynaForm->Edit23->ReadOnly = True;
			AsosiyoynaForm->Edit23->Text = "^B^" + a + "^C^" + b + "^A^" + c;
			AsosiyoynaForm->Edit23->Enabled = True;
			Close();
		}   break;
	case 2:
		if(a == In[select] && b == Iny[select] && c == Inj[1])
		{
			Label13->Visible = False;
			Label3->Visible = False;
			Label4->Visible = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

			Form9 = NULL;

			AsosiyoynaForm->SpeedButton33->Enabled = False;
			AsosiyoynaForm->SpeedButton34->Enabled = True;
			AsosiyoynaForm->Edit23->ReadOnly = True;
			AsosiyoynaForm->Edit23->Text = "^B^" + a + "^C^" + b + "^A^" + c;
			AsosiyoynaForm->Edit23->Enabled = True;
			Close();
		}   break;
	case 3:
		if(a == Un[select] && b == Uny[select] && c == Inj[1])
		{
			Label13->Visible = False;
			Label3->Visible = False;
			Label4->Visible = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

			Form9 = NULL;

			AsosiyoynaForm->SpeedButton33->Enabled = False;
			AsosiyoynaForm->SpeedButton34->Enabled = True;
			AsosiyoynaForm->Edit23->ReadOnly = True;
			AsosiyoynaForm->Edit23->Text = "^B^" + a + "^C^" + b + "^A^" + c;
			AsosiyoynaForm->Edit23->Enabled = True;
			Close();
		}   break;
	case 4:
		if(a == Tn[select] && b == Tny[select] && c == Inj[1])
		{
			Label13->Visible = False;
			Label3->Visible = False;
			Label4->Visible = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

			Form9 = NULL;

			AsosiyoynaForm->SpeedButton33->Enabled = False;
			AsosiyoynaForm->SpeedButton34->Enabled = True;
			AsosiyoynaForm->Edit23->ReadOnly = True;
			AsosiyoynaForm->Edit23->Text = "^B^" + a + "^C^" + b + "^A^" + c;
			AsosiyoynaForm->Edit23->Enabled = True;
			Close();
		}   break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm16::Label6MouseLeave(TObject *Sender)
{
	Label6->Font->Color = clBlack;
	Label6->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TForm16::Label6MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label6->Font->Color = clRed;
	Label6->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TForm16::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------

void __fastcall TForm16::Button3Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm16::Label6Click(TObject *Sender)
{
	Form9 = new TForm9(this);
	switch(AsosiyoynaForm->N)
	{
		case 1: Form9->ochish(URL(DIRECTORY_PATH + "1m" + IntToStr(select) + ".1"));
			break;
		case 2: Form9->ochish(URL(DIRECTORY_PATH + "2m" + IntToStr(select) + ".1"));
			break;
		case 3: Form9->ochish(URL(DIRECTORY_PATH + "3m" + IntToStr(select) + ".1"));
			break;
		case 4: Form9->ochish(URL(DIRECTORY_PATH + "4m" + IntToStr(select) + ".1"));
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm16::Edit3KeyPress(TObject *Sender, wchar_t &Key)
{
	if(Key == 39)
	{
		ShowMessage("O`zbek tili lotin grafikasida (`) belgi qo`yiladi");
		Image1->Visible = true;
	}
	else	Image1->Visible = False;
}
//---------------------------------------------------------------------------

void __fastcall TForm16::Label8MouseLeave(TObject *Sender)
{
	Label8->Font->Color = clBlack;
	Label8->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TForm16::Label8MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label8->Font->Color = clRed;
	Label8->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TForm16::Label2MouseLeave(TObject *Sender)
{
	Label2->Font->Color = clBlack;
	Label2->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TForm16::Label2MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	Label2->Font->Color = clRed;
	Label2->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TForm16::Edit3Change(TObject *Sender)
{
	AnsiString a = Edit3->Text;
	switch(AsosiyoynaForm->N)
	{
		case 1:
			if(a != Bn[select]) Label13->Visible = true;
			else 	Label13->Visible = false; break;
		case 2:
			if(a != In[select]) Label13->Visible = true;
			else 	Label13->Visible = false; break;
		case 3:
			if(a != Un[select]) Label13->Visible = true;
			else 	Label13->Visible = false; break;
		case 4:
			if(a != Tn[select]) Label13->Visible = true;
			else 	Label13->Visible = false; break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm16::Edit4Change(TObject *Sender)
{
	AnsiString b = Edit4->Text;
	switch(AsosiyoynaForm->N)
	{
		case 1:
			if(b != Bny[select]) Label3->Visible = true;
			else 	Label3->Visible = false; break;
		case 2:
			if(b != Iny[select]) Label3->Visible = true;
			else 	Label3->Visible = false; break;
		case 3:
			if(b != Uny[select]) Label3->Visible = true;
			else 	Label3->Visible = false; break;
		case 4:
			if(b != Tny[select]) Label3->Visible = true;
			else 	Label3->Visible = false; break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm16::Edit5Change(TObject *Sender)
{
	AnsiString c = Edit5->Text;
	switch(AsosiyoynaForm->N)
	{
		case 1:
			if(c != Bnj[select]) Label4->Visible = true;
			else 	Label4->Visible = false; break;
		case 2:
		case 3:
		case 4:		if(c != Inj[1]) Label4->Visible = true;
			else 	Label4->Visible = false; break;
	}
}
//---------------------------------------------------------------------------

