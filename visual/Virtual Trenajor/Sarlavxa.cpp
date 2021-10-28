//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Sarlavxa.h"
#include "Asosiy_oyna.h"
#include "for_picture.h"
#include "Yangi_adabiyot_qoshish.h"
#include "URLUnit.h"
#include "Constanta.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm15 *Form15;

AnsiString Bsd[] = {"", "дарслик", "o`quv qo`llanma", "darslik"};
AnsiString Bas[] = {"", "Ўқитувчи нутқи маданияти", "Organik kimyo", "Amaliy geodeziya"};

AnsiString Isd[] = {"", "o`quv qo`llanma", "darslik", "o`quv qo`llanma"};
AnsiString Ias[] = {"", "Obyektga mo`ljallangan dasturlash", "Dendrologiya", "Hayvonlar fiziologiyasi va patofiziologiyasi"};

AnsiString Usd[] = {"", "o`quv qo`llanma", "Qo`llanma", "o`quv qo`llanma"};
AnsiString Uas[] = {"", "Rastr va vektor grafika", "Qiziqarli bilimlar olamida", "Matematikadan qo`llanma"};

AnsiString Tsd[] = {"", "darslik", "darslik", "darslik"};
AnsiString Tas[] = {"", "Jahon tarixi", "Adabiyot", "Pul, kredit va banklar"};

//---------------------------------------------------------------------------
__fastcall TForm15::TForm15(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm15::ComboBox1Change(TObject *Sender)
{
	 if((ComboBox1->ItemIndex) == 8)
	 {
		Label14->Visible = false;
		ComboBox1->Enabled = false;
	 }
	  else	Label14->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm15::Button4Click(TObject *Sender)
{
int a = ComboBox1->ItemIndex;
AnsiString b = Edit3->Text, c = Edit1->Text;

switch(AsosiyoynaForm->N)
	{
	case 1:
		if(b == Bsd[select] && c == Bas[select] && a == 8)
		{
			Label13->Visible = False;
			Label14->Visible = False;
			Label15->Visible = False;
			AsosiyoynaForm->SpeedButton29->Enabled = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

			AsosiyoynaForm->SpeedButton33->Enabled = True;
			AsosiyoynaForm->Edit19->ReadOnly = True;
			AsosiyoynaForm->Edit19->Text = "^B^" + Edit3->Text +"^A^" + Edit1->Text + "^H^001";
			AsosiyoynaForm->Edit19->Enabled = True;

			Close();
		}   break;
	case 2:
		if(b == Isd[select] && c == Ias[select] && a == 8)
		{
			Label13->Visible = False;
			Label14->Visible = False;
			Label15->Visible = False;
			AsosiyoynaForm->SpeedButton29->Enabled = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

			AsosiyoynaForm->SpeedButton33->Enabled = True;
			AsosiyoynaForm->Edit19->ReadOnly = True;
			AsosiyoynaForm->Edit19->Text = "^B^" + Edit3->Text +"^A^" + Edit1->Text + "^H^001";
			AsosiyoynaForm->Edit19->Enabled = True;

			Close();
		}   break;
	case 3:
		if(b == Usd[select] && c == Uas[select] && a == 8)
		{
			Label13->Visible = False;
			Label14->Visible = False;
			Label15->Visible = False;
			AsosiyoynaForm->SpeedButton29->Enabled = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

			AsosiyoynaForm->SpeedButton33->Enabled = True;
			AsosiyoynaForm->Edit19->ReadOnly = True;
			AsosiyoynaForm->Edit19->Text = "^B^" + Edit3->Text +"^A^" + Edit1->Text + "^H^001";
			AsosiyoynaForm->Edit19->Enabled = True;

			Close();
		}   break;
	case 4:
		if(b == Tsd[select] && c == Tas[select] && a == 8)
		{
			Label13->Visible = False;
			Label14->Visible = False;
			Label15->Visible = False;
			AsosiyoynaForm->SpeedButton29->Enabled = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

			AsosiyoynaForm->SpeedButton33->Enabled = True;
			AsosiyoynaForm->Edit19->ReadOnly = True;
			AsosiyoynaForm->Edit19->Text = "^B^" + Edit3->Text +"^A^" + Edit1->Text + "^H^001";
			AsosiyoynaForm->Edit19->Enabled = True;

			Close();
		}   break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm15::Label2MouseLeave(TObject *Sender)
{
	Label2->Font->Color = clBlack;
	Label2->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TForm15::Label2MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label2->Font->Color = clRed;
	Label2->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TForm15::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------

void __fastcall TForm15::Button3Click(TObject *Sender)
{
	Form15->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm15::Label2Click(TObject *Sender)
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


void __fastcall TForm15::Edit3KeyPress(TObject *Sender, wchar_t &Key)
{
	if(Key == 39)
	{
		ShowMessage("O`zbek tili lotin grafikasida (`) belgi qo`yiladi");
		Image1->Visible = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm15::Edit1KeyPress(TObject *Sender, wchar_t &Key)
{
	if(Key == 39)
	{
		ShowMessage("O`zbek tili lotin grafikasida (`) belgi qo`yiladi");
		Image1->Visible = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm15::Label8MouseLeave(TObject *Sender)
{
	Label8->Font->Color = clBlack;
	Label8->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TForm15::Label8MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label8->Font->Color = clRed;
	Label8->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TForm15::Edit3Change(TObject *Sender)
{
	AnsiString b = Edit3->Text;
	switch(AsosiyoynaForm->N)
	{
		case 1:
			if(b != Bsd[select]) Label13->Visible = true;
			else 	Label13->Visible = false; break;
		case 2:
			if(b != Isd[select]) Label13->Visible = true;
			else 	Label13->Visible = false; break;
		case 3:
			if(b != Usd[select]) Label13->Visible = true;
			else 	Label13->Visible = false; break;
		case 4:
			if(b != Tsd[select]) Label13->Visible = true;
			else 	Label13->Visible = false; break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm15::Edit1Change(TObject *Sender)
{
	AnsiString b = Edit1->Text;
	switch(AsosiyoynaForm->N)
	{
		case 1:
			if(b != Bas[select]) Label15->Visible = true;
			else 	Label15->Visible = false; break;
		case 2:
			if(b != Ias[select]) Label15->Visible = true;
			else 	Label15->Visible = false; break;
		case 3:
			if(b != Uas[select]) Label15->Visible = true;
			else 	Label15->Visible = false; break;
		case 4:
			if(b != Tas[select]) Label15->Visible = true;
			else 	Label15->Visible = false; break;
	}
}
//---------------------------------------------------------------------------

