//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "nashr_tili.h"
#include "Asosiy_oyna.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm10::ComboBox1Change(TObject *Sender)
{
	if((ComboBox1->ItemIndex) == 0)
{
		ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
        ComboBox1->Enabled = false;
		Button2->Enabled = True;
}
		else Button2->Enabled = False;
}
//---------------------------------------------------------------------------

void __fastcall TForm10::Button2Click(TObject *Sender)
{
	AsosiyoynaForm->Edit13->Enabled = True;
	AsosiyoynaForm->Edit13->Text = "^A^uzb";
	AsosiyoynaForm->Edit13->ReadOnly = True;
	AsosiyoynaForm->SpeedButton20->Enabled = False;
	AsosiyoynaForm->ComboBox1->Enabled = True;
	AsosiyoynaForm->ComboBox1->SetFocus();
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------

void __fastcall TForm10::Button1Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------



