//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "FirstFormUnit.h"
#include "MainFormUnit.h"
#include "GenerationFormUnit.h"
#include "EncryptionFormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TFirstForm *FirstForm;
//---------------------------------------------------------------------------
__fastcall TFirstForm::TFirstForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFirstForm::ExitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFirstForm::EncryptDecryptClick(TObject *Sender)
{
	GenerationForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TFirstForm::DecryptClick(TObject *Sender)
{
	EncryptionForm->E->Text = "";
	EncryptionForm->D->Text = "";
	EncryptionForm->N->Text = "";
	EncryptionForm->N1->Text = "";
	GenerationForm->qop = false;
	EncryptionForm->Show();
}
//---------------------------------------------------------------------------

