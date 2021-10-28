//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Qaytarib_olishUnit.h"
#include "kirish.h"
#include "qoshish.h"
#include "PechatFormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TQaytarib_olishForm *Qaytarib_olishForm;
//---------------------------------------------------------------------------
__fastcall TQaytarib_olishForm::TQaytarib_olishForm(TComponent* Owner)
	: TForm(Owner)
{
	//sanaLabel->Caption = pechatForm->sanaLabel->Caption;
	timeLabel->Caption = Now().CurrentDate() + 20;
}
//---------------------------------------------------------------------------
void __fastcall TQaytarib_olishForm::IshchiComboBoxMouseEnter(TObject *Sender)
{
	IshchiComboBox->Visible = true;
	IshchiTimer->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TQaytarib_olishForm::IshchiComboBoxSelect(TObject *Sender)
{
	if(IshchiComboBox->ItemIndex == 1)
	{
		IshchiComboBox->Enabled = false;
		IshchiTimer->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TQaytarib_olishForm::IshchiTimerTimer(TObject *Sender)
{
   	IshchiComboBox->Visible = ! IshchiComboBox->Visible;
}
//---------------------------------------------------------------------------
void __fastcall TQaytarib_olishForm::QidirishSpeedButtonClick(TObject *Sender)
{
	if(biletEdit->Text == "000" || famEdit->Text == "Fayzullayev A. Z.")
	{
		ClientScrollBox3->Align = alNone;
		ClientScrollBox3->Visible = false;
        biletLabel->Visible = false;
		ClientScrollBox4->Visible = true;
		ClientScrollBox4->Align = alClient;
	}
	else
		biletLabel->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TQaytarib_olishForm::FormClose(TObject *Sender, TCloseAction &Action)

{
	kirishForm->Show();
	kirishForm->MainkirishPanel->Visible = true;
	kirishForm->LoginPanel->Enabled = false;
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TQaytarib_olishForm::ExitImageClick(TObject *Sender)
{
	kirishForm->Show();
	kirishForm->MainkirishPanel->Visible = true;
	kirishForm->LoginPanel->Enabled = false;
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TQaytarib_olishForm::SpeedButton8Click(TObject *Sender)
{
	if(IshchiComboBox->ItemIndex == 1)
	{
		ErrorLabel->Visible = false;
		qaytarishLabel->Visible = false;
		ClientScrollBox3->Visible = true;
		ClientScrollBox3->Align = alClient;
	}
	else
	{
		ErrorLabel->Visible = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TQaytarib_olishForm::tanlanganCheckBoxClick(TObject *Sender)
{
	if(tanlanganCheckBox->Checked)
	{
		tanlanganSpeedButton->Enabled = true;
		tanlanganCheckBox->Checked = true;
		tanlanganCheckBox->Enabled = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TQaytarib_olishForm::tanlanganSpeedButtonClick(TObject *Sender)
{
 	tanlanganSpeedButton->Align = alNone;
	tanlanganSpeedButton->Enabled = false;
	Form21 = new TForm21(this);
    Hide();
	Form21->Show();
}
//---------------------------------------------------------------------------




