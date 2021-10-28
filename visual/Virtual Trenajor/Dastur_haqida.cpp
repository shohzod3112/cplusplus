//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Dastur_haqida.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm22 *Form22;
//---------------------------------------------------------------------------
__fastcall TForm22::TForm22(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm22::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------

void __fastcall TForm22::SpeedButton1Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------





