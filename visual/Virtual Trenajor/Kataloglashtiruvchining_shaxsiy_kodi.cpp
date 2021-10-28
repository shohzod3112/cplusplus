//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Kataloglashtiruvchining_shaxsiy_kodi.h"
#include "Asosiy_oyna.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm20 *Form20;
//---------------------------------------------------------------------------
__fastcall TForm20::TForm20(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm20::Button4Click(TObject *Sender)
{
	if((Edit3->Text) == "")
	{
			Label1->Visible = True;
	}
	else {
			Label1->Visible = False;

			Form20->Close();
			Form20 = NULL;

			AsosiyoynaForm->Edit970->Text = "^A^" + Edit3->Text;
			AsosiyoynaForm->Edit970->Enabled = True;
			AsosiyoynaForm->Edit970->ReadOnly = True;
			AsosiyoynaForm->SpeedButton970->Enabled = False;
			AsosiyoynaForm->ComboBox920->Enabled = True;
			AsosiyoynaForm->ComboBox920->SetFocus();
		 }
}
//---------------------------------------------------------------------------

void __fastcall TForm20::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------

void __fastcall TForm20::Button3Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------



