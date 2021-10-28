//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ISBN.h"
#include "for_picture.h"
#include "Asosiy_oyna.h"
#include "Yangi_adabiyot_qoshish.h"
#include "URLUnit.h"
#include "Constanta.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;

AnsiString s[] = {"","5000 ñ¢ì", "5000 so`m", "5000 so`m"};
AnsiString B[]={"", "978-9943-06-070-8",  "978-9943-309-70-8",  "978-9943-375-32-1"};
AnsiString I[]={"", "978-9943-03-041-1",  "978-9943-10-619-2",  "978-9943-362-33-8"};
AnsiString U[]={"", "978-9943-03-032-9",  "978-9943-26-129-7",  "978-9943-353-17-6"};
AnsiString T[]={"", "978-9943-02-292-8",  "978-9943-00-160-2",  "978-9943-05-403-5"};
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button2Click(TObject *Sender)
{
switch(AsosiyoynaForm->N)
	{
	case 1:
		if((Edit1->Text == B[select]) && (Edit2->Text == s[select]))
	{
		ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
		AsosiyoynaForm->Edit10->Enabled = True;
		AsosiyoynaForm->Edit10->Text = "^C^" + Form8->Edit1->Text + "^A^" + Form8->Edit2->Text;
		AsosiyoynaForm->Edit10->ReadOnly = True;
		AsosiyoynaForm->SpeedButton20->Enabled = True;
		AsosiyoynaForm->SpeedButton17->Enabled = False;
		Close();
	}		break;
	case 2:
		if((Edit1->Text == I[select]) && (Edit2->Text == s[2]))
	{
		ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
		AsosiyoynaForm->Edit10->Enabled = True;
		AsosiyoynaForm->Edit10->Text = "^C^" + Form8->Edit1->Text + "^A^" + Form8->Edit2->Text;
		AsosiyoynaForm->Edit10->ReadOnly = True;
		AsosiyoynaForm->SpeedButton20->Enabled = True;
		AsosiyoynaForm->SpeedButton17->Enabled = False;
		Close();
	}		break;
	case 3:
		if((Edit1->Text == U[select]) && (Edit2->Text == s[2]))
	{
		ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
		AsosiyoynaForm->Edit10->Enabled = True;
		AsosiyoynaForm->Edit10->Text = "^C^" + Form8->Edit1->Text + "^A^" + Form8->Edit2->Text;
		AsosiyoynaForm->Edit10->ReadOnly = True;
		AsosiyoynaForm->SpeedButton20->Enabled = True;
		AsosiyoynaForm->SpeedButton17->Enabled = False;
		Close();
	}		break;
	case 4:
		if((Edit1->Text == T[select]) && (Edit2->Text == s[2]))
	{
		ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
		AsosiyoynaForm->Edit10->Enabled = True;
		AsosiyoynaForm->Edit10->Text = "^C^" + Form8->Edit1->Text + "^A^" + Form8->Edit2->Text;
		AsosiyoynaForm->Edit10->ReadOnly = True;
		AsosiyoynaForm->SpeedButton20->Enabled = True;
		AsosiyoynaForm->SpeedButton17->Enabled = False;
		Close();
	}		break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Label2MouseLeave(TObject *Sender)
{
	Label2->Font->Color = clBlack;
	Label2->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Label2MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label2->Font->Color = clRed;
	Label2->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Label6Click(TObject *Sender)
{
	if(AsosiyoynaForm->N == 1 && select == 1)
		ShowMessage("Kitob elektron shaklda va o'zbek krill alifbosida yozilganligi sababli krill harflar bilan 5000 ñ¢ì deb yozish qabul qilindi.");
	else
		ShowMessage("Kitob elektron shaklda va o'zbek lotin alifbosida yozilganligi sababli lotin harflar bilan 5000 so`m deb yozish qabul qilindi.");
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button1Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Label2Click(TObject *Sender)
{
	Form9 = new TForm9(this);
	switch(AsosiyoynaForm->N)
	{
		case 1: Form9->ochish(URL(DIRECTORY_PATH + "1m" + IntToStr(select) + ".6"));
			break;
		case 2: Form9->ochish(URL(DIRECTORY_PATH + "2m" + IntToStr(select) + ".6"));
			break;
		case 3: Form9->ochish(URL(DIRECTORY_PATH + "3m" + IntToStr(select) + ".6"));
			break;
		case 4: Form9->ochish(URL(DIRECTORY_PATH + "4m" + IntToStr(select) + ".6"));
			break;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm8::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Edit1Change(TObject *Sender)
{
	switch(AsosiyoynaForm->N)
	{
		case 1:
			if(Edit1->Text != B[select]) Label5->Visible = true;
			else 	Label5->Visible = false; break;
		case 2:
			if(Edit1->Text != I[select]) Label5->Visible = true;
			else 	Label5->Visible = false; break;
		case 3:
			if(Edit1->Text != U[select]) Label5->Visible = true;
			else 	Label5->Visible = false; break;
		case 4:
			if(Edit1->Text != T[select]) Label5->Visible = true;
			else 	Label5->Visible = false; break;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Edit2Change(TObject *Sender)
{
	if(Edit2->Text.Pos("'")>0)
	{
		ShowMessage("O`zbek tili lotin grafikasida (`) belgi qo`yiladi");
		Image1->Visible = true;
	}
	else
	{
		 Image1->Visible = false;
	}

	if(AsosiyoynaForm->N == 1)
	{
		 switch(select)
			{
			case 1:
					if(Edit2->Text != s[1])
				{
					Label6->Caption = "Narxini 5000 ñ¢ì kiriting!!!";	Label6->Visible = true;
				}
					else
				{
					Label6->Caption = "Narxini 5000 ñ¢ì kiriting!!!";	Label6->Visible = false;
				}
				break;
			case 2:
			case 3:
			case 4:
					if(Edit2->Text != s[3])
				{
					Label6->Caption = "Narxini 5000 so`m kiriting!!!"; Label6->Visible = true;
				}
				else
				{
					Label6->Caption = "Narxini 5000 ñ¢ì kiriting!!!";	Label6->Visible = false;
				}
				break;
			}
	}
	else
	{
		if(Edit2->Text != s[3])
			{
				Label6->Caption = "Narxini 5000 so`m kiriting!!!"; Label6->Visible = true;
			}
		else
            	Label6->Visible = false;
			}
}
//---------------------------------------------------------------------------

