//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Bosh_oyna.h"
#include "kirish.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBoshoynaForm *BoshoynaForm;
//---------------------------------------------------------------------------
__fastcall TBoshoynaForm::TBoshoynaForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TBoshoynaForm::SpeedButton2Click(TObject *Sender)
{
	Close();
	kirishForm->Show();
	kirishForm->MainkirishPanel->Visible = false;
	kirishForm->LoginPanel->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TBoshoynaForm::SpeedButton3Click(TObject *Sender)
{
	Close();
	kirishForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TBoshoynaForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------


