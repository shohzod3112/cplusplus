//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Muallif.h"
#include "Asosiy_oyna.h"
#include "for_picture.h"
#include "Yangi_adabiyot_qoshish.h"
#include "URLUnit.h"
#include "Constanta.h"

AnsiString BFI[] = {"", "Маҳмудов Н.", "Shoymardonov R. A.", "Avchiyev Sh. K."};
AnsiString IFI[] = {"", "Nazirov Sh. A.", "Qayimov A. K.", "Eshimov D. E."};
AnsiString UFI[] = {"", "Nazirov Sh. A.", "To`rayev Q.", "Usmonov F. R."};
AnsiString TFI[] = {"", "Lafasov M.", "Ahmedov S.", "Rashidov O. Yu."};

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm13 *Form13;
//---------------------------------------------------------------------------
__fastcall TForm13::TForm13(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm13::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TForm13::ComboBox1Change(TObject *Sender)
{
	int a = ComboBox1->ItemIndex;
	AnsiString b = Edit3->Text;
	if(a != 3)
	{
		Label3->Visible = true;
	}
	else
	{
		Label3->Visible = false;
		ComboBox1->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm13::Button4Click(TObject *Sender)
{
	int a = ComboBox1->ItemIndex;
	AnsiString b = Edit3->Text;

switch(AsosiyoynaForm->N)
	{
	case 1: if(b == BFI[select] && a == 3)
		{
			Label4->Visible = False;
			Label3->Visible = False;
			AsosiyoynaForm->SpeedButton25->Enabled = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
			Close();
			AsosiyoynaForm->Edit17->ReadOnly = True;
			AsosiyoynaForm->Edit17->Text = "^A^" + Edit3->Text + "^E^070";
			AsosiyoynaForm->Edit17->Enabled = True;
			AsosiyoynaForm->SpeedButton27->Enabled = True;
		}		break;
	case 2: if(b == IFI[select] && a == 3)
		{
			Label4->Visible = False;
			Label3->Visible = False;
			AsosiyoynaForm->SpeedButton25->Enabled = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
			Close();
			AsosiyoynaForm->Edit17->ReadOnly = True;
			AsosiyoynaForm->Edit17->Text = "^A^" + b + "^E^070";
			AsosiyoynaForm->Edit17->Enabled = True;
			AsosiyoynaForm->SpeedButton27->Enabled = True;
		}		break;
	case 3: if(b == UFI[select] && a == 3)
		{
			Label4->Visible = False;
			Label3->Visible = False;
			AsosiyoynaForm->SpeedButton25->Enabled = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
			Close();
			AsosiyoynaForm->Edit17->ReadOnly = True;
			AsosiyoynaForm->Edit17->Text = "^A^" + b + "^E^070";
			AsosiyoynaForm->Edit17->Enabled = True;
			AsosiyoynaForm->SpeedButton27->Enabled = True;
		}		break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm13::Label6MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label6->Font->Color = clRed;
	Label6->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TForm13::Label6MouseLeave(TObject *Sender)
{
	Label6->Font->Color = clBlack;
	Label6->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TForm13::Label4Click(TObject *Sender)
{
	ShowMessage("\tMuallif Familiyasi bosh harfda kiritiladi va probil qo'yiladi.\n\tIsmini birinchi harfi bosh harf bilan yozilib, nuqta qo'yiladi.\nAgar Sharifi bo'lsa, sharifini birinchi harfi bosh harf bilan yozilib, nuqta qo'yiladi. ");
}
//---------------------------------------------------------------------------

void __fastcall TForm13::Button3Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm13::Label6Click(TObject *Sender)
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
void __fastcall TForm13::Label8MouseLeave(TObject *Sender)
{
	Label8->Font->Color = clBlack;
	Label8->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------
void __fastcall TForm13::Label8MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label8->Font->Color = clRed;
	Label8->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------
void __fastcall TForm13::Edit3Change(TObject *Sender)
{
	AnsiString b = Edit3->Text;
	switch(AsosiyoynaForm->N)
	{
		case 1:
			if(b != BFI[select]) Label4->Visible = true;
			else 	Label4->Visible = false; break;
		case 2:
			if(b != IFI[select]) Label4->Visible = true;
			else 	Label4->Visible = false; break;
		case 3:
			if(b != UFI[select]) Label4->Visible = true;
			else 	Label4->Visible = false; break;
		case 4:
			if(b != TFI[select]) Label4->Visible = true;
			else 	Label4->Visible = false; break;
	}
}
//---------------------------------------------------------------------------


