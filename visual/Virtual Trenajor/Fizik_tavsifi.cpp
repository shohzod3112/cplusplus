//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Fizik_tavsifi.h"
#include "Asosiy_oyna.h"
#include "for_picture.h"
#include "Yangi_adabiyot_qoshish.h"
#include "Constanta.h"
#include "URLUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm17 *Form17;

AnsiString Bh[] = {"", "188 á", "352 b", "352 b"};
AnsiString Ih[] = {"", "184 b", "288 b", "272 b"};
AnsiString Uh[] = {"", "192 b", "224 b", "240 b"};
AnsiString Th[] = {"", "160 b", "352 b", "328 b"};

//---------------------------------------------------------------------------
__fastcall TForm17::TForm17(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm17::Button4Click(TObject *Sender)
{
AnsiString a = Edit4->Text;
	switch(AsosiyoynaForm->N)
	{
		case 1:
			if(a == Bh[select])
			{
				Label10->Visible = False;
				AsosiyoynaForm->SpeedButton34->Enabled = False;
				AsosiyoynaForm->Edit24->Enabled = True;
				AsosiyoynaForm->Edit24->ReadOnly = True;
				AsosiyoynaForm->Edit24->Text = "^A^" + a;
				AsosiyoynaForm->Memo1->Enabled = True;
				Close();
			}  break;
		case 2:
			if(a == Ih[select])
			{
				Label10->Visible = False;
				AsosiyoynaForm->SpeedButton34->Enabled = False;
				AsosiyoynaForm->Edit24->Enabled = True;
				AsosiyoynaForm->Edit24->ReadOnly = True;
				AsosiyoynaForm->Edit24->Text = "^A^" + a;
				AsosiyoynaForm->Memo1->Enabled = True;
				Close();
			}  break;
		case 3:
			if(a == Uh[select])
			{
				Label10->Visible = False;
				AsosiyoynaForm->SpeedButton34->Enabled = False;
				AsosiyoynaForm->Edit24->Enabled = True;
				AsosiyoynaForm->Edit24->ReadOnly = True;
				AsosiyoynaForm->Edit24->Text = "^A^" + a;
				AsosiyoynaForm->Memo1->Enabled = True;
				Close();
			}  break;
		case 4:
			if(a == Th[select])
			{
				Label10->Visible = False;
				AsosiyoynaForm->SpeedButton34->Enabled = False;
				AsosiyoynaForm->Edit24->Enabled = True;
				AsosiyoynaForm->Edit24->ReadOnly = True;
				AsosiyoynaForm->Edit24->Text = "^A^" + a;
				AsosiyoynaForm->Memo1->Enabled = True;
				Close();
			}  break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm17::Label8MouseLeave(TObject *Sender)
{
	Label8->Font->Color = clBlack;
	Label8->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TForm17::Label8MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label8->Font->Color = clRed;
	Label8->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TForm17::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------

void __fastcall TForm17::Button3Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm17::Label8Click(TObject *Sender)
{
	Form9 = new TForm9(this);
	switch(AsosiyoynaForm->N)
	{
		case 1: Form9->ochish(URL(DIRECTORY_PATH + "1m" + IntToStr(select) + ".3"));
			break;
		case 2: Form9->ochish(URL(DIRECTORY_PATH + "2m" + IntToStr(select) + ".2"));
			break;
		case 3: Form9->ochish(URL(DIRECTORY_PATH + "3m" + IntToStr(select) + ".2"));
			break;
		case 4: Form9->ochish(URL(DIRECTORY_PATH + "4m" + IntToStr(select) + ".3"));
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm17::Edit4Change(TObject *Sender)
{
	AnsiString a = Edit4->Text;
	switch(AsosiyoynaForm->N)
	{
		case 1:
			if(a != Bh[select]) Label10->Visible = true;
			else 	Label10->Visible = false; break;
		case 2:
			if(a != Ih[select]) Label10->Visible = true;
			else 	Label10->Visible = false; break;
		case 3:
			if(a != Uh[select]) Label10->Visible = true;
			else 	Label10->Visible = false; break;
		case 4:
			if(a != Th[select]) Label10->Visible = true;
			else 	Label10->Visible = false; break;
	}
}
//---------------------------------------------------------------------------

