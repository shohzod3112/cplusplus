//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Boshqa_mualliflar.h"
#include "Asosiy_oyna.h"
#include "for_picture.h"
#include "Yangi_adabiyot_qoshish.h"
#include "Constanta.h"
#include "URLUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm19 *Form19;

AnsiString Bfi[] = {"", "׃לאנמג ְ.",     "Yo`ldoshev A. M.", "Isakov E."};
AnsiString Ifi[] = {"", "Qobulov R. V.", "Berdiyev E. T.",   "Ro`ziqulov R. F."};

AnsiString Ufi[]  = {"", "Nuraliyev F. M.",   "Burxonov S.", "Isomov R. J."};
AnsiString Ufi1[] = {"", "Aytmuratov B. Sh.", "Zokirova M.", "Xo`jayev B. O."};

AnsiString Tfi[]  = {"", "Lafasov M.",  "Ahmedov S.",    "Rashidov O. Yu."};
AnsiString Tfi1[] = {"", "Jo`rayev U.", "Qosimov B.",    "Alimov I. I."};
AnsiString Tfi2[] = {"", "Xoliqov E.",  "Qo`chqorov R.", "Toymuhamedov I. R."};
AnsiString Tfi3[] = {"", "Qodirova D.", "Rizayev Sh.",   "Tojiyev R. R."};

//---------------------------------------------------------------------------
__fastcall TForm19::TForm19(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm19::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TForm19::Button4Click(TObject *Sender)
{
int a = ComboBox1->ItemIndex;
AnsiString b = Edit4->Text;

Form9 = new TForm9(this);
switch(AsosiyoynaForm->N)
{
	case 1:
		switch(select)
		{
			case 1:
				if(b == Bfi[select] && a == 6)
				{
					Label1->Visible = False;
					Label3->Visible = False;
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

					AsosiyoynaForm->Edit700->Text = "^E^340^A^" + Edit4->Text;
					AsosiyoynaForm->ComboBox850->Enabled = True;
					AsosiyoynaForm->ComboBox850->SetFocus();
					AsosiyoynaForm->SpeedButtonboshqa->Enabled = False;
					AsosiyoynaForm->Edit700->Enabled = True;
					Close();
				}   break;
			case 2:
			case 3:
				if(b == Bfi[select] && a == 34)
				{
					Label1->Visible = False;
					Label3->Visible = False;
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

					AsosiyoynaForm->Edit700->Text = "^E^340^A^" + Edit4->Text;
					AsosiyoynaForm->ComboBox850->Enabled = True;
					AsosiyoynaForm->ComboBox850->SetFocus();
					AsosiyoynaForm->SpeedButtonboshqa->Enabled = False;
					AsosiyoynaForm->Edit700->Enabled = True;
					Close();
				}   break;
		}	break;
	case 2:
			if(b == Ifi[select] && a == 3)
			{
				Label1->Visible = False;
				Label3->Visible = False;
				ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

				AsosiyoynaForm->Edit700->Text = "^E^340^A^" + Edit4->Text;
				AsosiyoynaForm->ComboBox850->Enabled = True;
				AsosiyoynaForm->ComboBox850->SetFocus();
				AsosiyoynaForm->SpeedButtonboshqa->Enabled = False;
				AsosiyoynaForm->Edit700->Enabled = True;
				Close();
			}   break;
	case 3:
			if(b == Ufi[select] && a == 3 && soni == 0)
			{
				Label1->Visible = False;
				Label3->Visible = False;
				ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

				AsosiyoynaForm->Edit700->Text = "^E^340^A^" + Edit4->Text;
				AsosiyoynaForm->SpeedButtonboshqa->Enabled = False;
				AsosiyoynaForm->Edit700->Enabled = True;
				AsosiyoynaForm->SpeedButton700->Enabled = True;
				Close();   break;
			}
			if(b == Ufi1[select] && a == 3 && soni == 1)
			{
				Label1->Visible = False;
				Label3->Visible = False;
				ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

				AsosiyoynaForm->Edit710->Text = "^E^340^A^" + Edit4->Text;
				AsosiyoynaForm->ComboBox850->Enabled = True;
				AsosiyoynaForm->ComboBox850->SetFocus();
				AsosiyoynaForm->SpeedButton710q->Enabled = False;
				AsosiyoynaForm->Edit700->Enabled = True;
				Close();   break;
			}
			   break;
	case 4:
			if(b == Tfi[select] && a == 3 && soni == 0)
			{
				Label1->Visible = False;
				Label3->Visible = False;
				ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

				AsosiyoynaForm->Edit700->Text = "^E^340^A^" + Edit4->Text;
				AsosiyoynaForm->SpeedButtonboshqa->Enabled = False;
				AsosiyoynaForm->Edit700->Enabled = True;
				AsosiyoynaForm->SpeedButton700->Enabled = True;
				Close();  break;
			}
			if(b == Tfi1[select] && a == 3 && soni == 1)
			{
				Label1->Visible = False;
				Label3->Visible = False;
				ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

				AsosiyoynaForm->Edit710->Text = "^E^340^A^" + Edit4->Text;
				AsosiyoynaForm->SpeedButton710q->Enabled = False;
				AsosiyoynaForm->SpeedButton700->Enabled = True;
				Close();   break;
			}
				if(b == Tfi2[select] && a == 3 && soni == 2)
			{
				Label1->Visible = False;
				Label3->Visible = False;
				ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

				AsosiyoynaForm->Edit710p->Text = "^E^340^A^" + Edit4->Text;
				AsosiyoynaForm->SpeedButton850A->Enabled = False;
				AsosiyoynaForm->SpeedButton700->Enabled = True;
				Close();   break;
			}
			if(b == Tfi3[select] && a == 3 && soni == 3)
			{
				Label1->Visible = False;
				Label3->Visible = False;
				ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");

				AsosiyoynaForm->Edit850A->Text = "^E^340^A^" + Edit4->Text;
				AsosiyoynaForm->ComboBox850->Enabled = True;
				AsosiyoynaForm->ComboBox850->SetFocus();
				AsosiyoynaForm->SpeedButton11->Enabled = False;
				Close();   break;
			}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm19::Label6MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label6->Font->Color = clRed;
	Label6->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TForm19::Label6MouseLeave(TObject *Sender)
{
	Label6->Font->Color = clBlack;
	Label6->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TForm19::Button3Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm19::ComboBox1Change(TObject *Sender)
{
int a = ComboBox1->ItemIndex;

switch(AsosiyoynaForm->N)
{
	case 1:
		switch(select)
		{
			case 1:
				if(a == 6)
				{
					ComboBox1->Enabled = false;
					Label3->Visible = False;
				}
				else	Label3->Visible = True;  break;
			case 2:
			case 3:
				if(a == 34)
				{
					ComboBox1->Enabled = false;
					Label3->Visible = False;
				}
				else	Label3->Visible = True;  break;
		}	break;
	case 2:
	case 3:
	case 4:
			if(a == 3)
			{
				ComboBox1->Enabled = false;
				Label3->Visible = False;
			}
				else	Label3->Visible = True;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm19::Label1Click(TObject *Sender)
{
	ShowMessage("\tMuallif Familiyasi bosh harfda kiritiladi va probil qo'yiladi.\n\tIsmini birinchi harfi bosh harf bilan yozilib, nuqta qo'yiladi.\nAgar Sharifi bo'lsa, sharifini birinchi harfi bosh harf bilan yozilib, nuqta qo'yiladi. ");
}
//---------------------------------------------------------------------------

void __fastcall TForm19::Label6Click(TObject *Sender)
{
Form9 = new TForm9(this);
	switch(AsosiyoynaForm->N)
	{
		case 1: Form9->ochish(URL(DIRECTORY_PATH + "1m" + IntToStr(select) + ".2"));
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

void __fastcall TForm19::Label2MouseLeave(TObject *Sender)
{
	Label2->Font->Color = clBlack;
	Label2->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TForm19::Label2MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label2->Font->Color = clRed;
	Label2->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TForm19::Edit4KeyPress(TObject *Sender, wchar_t &Key)
{
	if(Key == 39)
	{
		ShowMessage("O`zbek tili lotin grafikasida (`) belgi qo`yiladi");
		Image1->Visible = true;
	}
	else
		Image1->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm19::Edit4Change(TObject *Sender)
{
	AnsiString b = Edit4->Text;
	switch(AsosiyoynaForm->N)
	{
		case 1:
			if(b != Bfi[select]) Label1->Visible = true;
			else 	Label1->Visible = false; break;
		case 2:
			if(b != Ifi[select]) Label1->Visible = true;
			else 	Label1->Visible = false; break;
		case 3:
			{
				if(soni == 0)
					{
						if(b != Ufi[select]) Label1->Visible = true;
						else 	Label1->Visible = false;
					}
				if(soni == 1)
					{
						if(b != Ufi1[select]) Label1->Visible = true;
						else 	Label1->Visible = false;
					}
				break;
			}

		case 4:
			{
				if(soni == 0)
					{
						if(b != Tfi[select]) Label1->Visible = true;
						else 	Label1->Visible = false;
					}
				if(soni == 1)
					{
						if(b != Tfi1[select]) Label1->Visible = true;
						else 	Label1->Visible = false;
					}
				if(soni == 2)
					{
						if(b != Tfi2[select]) Label1->Visible = true;
						else 	Label1->Visible = false;
					}
				if(soni == 3)
					{
						if(b != Tfi3[select]) Label1->Visible = true;
						else 	Label1->Visible = false;
					}
				break;
			}
	}
}
//---------------------------------------------------------------------------


