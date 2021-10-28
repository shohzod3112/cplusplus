//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "shifrlar.h"
#include "Asosiy_oyna.h"
#include "for_picture.h"
#include "Yangi_adabiyot_qoshish.h"
#include "Constanta.h"
#include "URLUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm12 *Form12;

AnsiString Bmb[] = {"", "Ì 37", "Sh 74", "A 24"}, Bji[] = {"", "81.2", "24.2", "26.12"};

AnsiString Imb[] = {"", "N 18",  "Q 17",  "E 99"}, Iji[] = {"", "32.973.202-018.2", "630.6(075)", "619:612(075)"};

AnsiString Umb[] = {"", "N 18", "T-76", "U 73"}, Uji[] = {"", "85.15", "5(075)", "22.1"};

AnsiString Tmb[] = {"", "J 39",  "A 29",  "P 92"}, Tji[] = {"", "63.3(0)53ÿ72", "83.3(5U)ya72", "65.262ya7"};

//---------------------------------------------------------------------------
__fastcall TForm12::TForm12(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm12::Button4Click(TObject *Sender)
{
switch(AsosiyoynaForm->N)
{
	case 1:
		if((Edit3->Text == Bji[select]) && (Edit4->Text == Bmb[select]))
		{
			AsosiyoynaForm->SpeedButton24->Enabled = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
			AsosiyoynaForm->SpeedButton25->Enabled = True;
			AsosiyoynaForm->Edit16->Text = "^A^" + Edit3->Text + "^X^" + Edit4->Text;
			AsosiyoynaForm->Edit16->Enabled = True;
			AsosiyoynaForm->Edit16->ReadOnly = True;
			Label2->Visible = False;
			Close();
		}      break;
	case 2:
		if((Edit3->Text == Iji[select]) && (Edit4->Text == Imb[select]))
		{
			AsosiyoynaForm->SpeedButton24->Enabled = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
			AsosiyoynaForm->SpeedButton25->Enabled = True;
			AsosiyoynaForm->Edit16->Text = "^A^" + Edit3->Text + "^X^" + Edit4->Text;
			AsosiyoynaForm->Edit16->Enabled = True;
			AsosiyoynaForm->Edit16->ReadOnly = True;
			Label2->Visible = False;
			Close();
		}      break;
	case 3:
		if((Edit3->Text == Uji[select]) && (Edit4->Text == Umb[select]))
		{
			AsosiyoynaForm->SpeedButton24->Enabled = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
			AsosiyoynaForm->SpeedButton25->Enabled = True;
			AsosiyoynaForm->Edit16->Text = "^A^" + Edit3->Text + "^X^" + Edit4->Text;
			AsosiyoynaForm->Edit16->Enabled = True;
			AsosiyoynaForm->Edit16->ReadOnly = True;
			Label2->Visible = False;
			Close();
		}      break;
	case 4:
		if((Edit3->Text == Tji[select]) && (Edit4->Text == Tmb[select]))
		{
			AsosiyoynaForm->SpeedButton24->Enabled = False;
			ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
			AsosiyoynaForm->SpeedButton27->Enabled = True;
			AsosiyoynaForm->Edit16->Text = "^A^" + Edit3->Text + "^X^" + Edit4->Text;
			AsosiyoynaForm->Edit16->Enabled = True;
			AsosiyoynaForm->Edit16->ReadOnly = True;
			Label2->Visible = False;
			Close();
		}      break;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm12::Button3Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm12::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TForm12::Label6Click(TObject *Sender)
{
Form9 = new TForm9(this);

switch(AsosiyoynaForm->N)	{
		case 1:
			switch(select)
			{
				case 1:		Form9->ochish(URL(DIRECTORY_PATH + "1m" + IntToStr(select) + ".3"));  	break;
				case 2:
				case 3:		Form9->ochish(URL(DIRECTORY_PATH + "1m" + IntToStr(select) + ".2"));	break;
			}		break;

		case 2:
			switch(select)
			{
				case 1:
				case 2:
				case 3:		Form9->ochish(URL(DIRECTORY_PATH + "2m" + IntToStr(select) + ".2"));	break;
			}		break;
		case 3:
			switch(select)
			{
				case 1:
				case 2:
				case 3:		Form9->ochish(URL(DIRECTORY_PATH + "3m" + IntToStr(select) + ".2"));	break;
			}		break;
		case 4:
			switch(select)
			{
				case 1:     Form9->ochish(URL(DIRECTORY_PATH + "4m" + IntToStr(select) + ".3"));  	break;
				case 2:
				case 3:     Form9->ochish(URL(DIRECTORY_PATH + "4m" + IntToStr(select) + ".2"));	break;
			}		break;
	}
}//---------------------------------------------------------------------------
void __fastcall TForm12::Label6MouseLeave(TObject *Sender)
{
	Label6->Font->Color = clBlack;
	Label6->Font->Style = TFontStyles();
}
//--------------------------------------------------------------------------
void __fastcall TForm12::Label6MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label6->Font->Color = clRed;
	Label6->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------
void __fastcall TForm12::Label1MouseLeave(TObject *Sender)
{
	Label1->Font->Color = clBlack;
	Label1->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------
void __fastcall TForm12::Label1MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label1->Font->Color = clRed;
	Label1->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------
void __fastcall TForm12::Edit3Change(TObject *Sender)
{
	switch(AsosiyoynaForm->N)
	{
		case 1:
			if(Edit3->Text != Bji[select]) Label2->Visible = true;
			else 	Label2->Visible = false; break;
		case 2:
			if(Edit3->Text != Iji[select]) Label2->Visible = true;
			else 	Label2->Visible = false; break;
		case 3:
			if(Edit3->Text != Uji[select]) Label2->Visible = true;
			else 	Label2->Visible = false; break;
		case 4:
			if(Edit3->Text != Tji[select]) Label2->Visible = true;
			else 	Label2->Visible = false; break;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm12::Edit4Change(TObject *Sender)
{
	switch(AsosiyoynaForm->N)
	{
		case 1:
			if(Edit4->Text != Bmb[select]) Label3->Visible = true;
			else 	Label3->Visible = false; break;
		case 2:
			if(Edit4->Text != Imb[select]) Label3->Visible = true;
			else 	Label3->Visible = false; break;
		case 3:
			if(Edit4->Text != Umb[select]) Label3->Visible = true;
			else 	Label3->Visible = false; break;
		case 4:
			if(Edit4->Text != Tmb[select]) Label3->Visible = true;
			else 	Label3->Visible = false; break;
	}
}
//---------------------------------------------------------------------------
