//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PechatFormUnit.h"
#include "bajarishFormUnit.h"
#include "qoshish.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TpechatForm *pechatForm;
//---------------------------------------------------------------------------
__fastcall TpechatForm::TpechatForm(TComponent* Owner)
	: TForm(Owner)
{
	sanaLabel->Caption = Now().CurrentDate();
	sanaL->Caption = Now().CurrentDate();
	qaytarLabel->Caption = Now().CurrentDate() + 20;
}
//---------------------------------------------------------------------------
void __fastcall TpechatForm::SpeedButton15Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TpechatForm::PechatSpeedButtonClick(TObject *Sender)
{
	//pechatPanel->Align = alNone;
	pechatPanel->Visible = false;
	bajarishForm->bajarSpeedButton->Enabled = true;
	bajarishForm->PechatSpeedButton->Enabled = false;
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TpechatForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------


void __fastcall TpechatForm::SpeedButton1Click(TObject *Sender)
{
	bajarPanel->Align = alNone;
	bajarPanel->Visible = false;
	bajarishForm->bajarSpeedButton->Enabled = false;
	Form21 = new TForm21(this);
    Hide();
	Form21->Show();
}
//---------------------------------------------------------------------------







