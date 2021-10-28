//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "login.h"
#include "Bosh_oyna.h"
#include "adabiyot_qoshish.h"
#include "kirish.h"
#include "qoshish.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TloginForm *loginForm;
//---------------------------------------------------------------------------
__fastcall TloginForm::TloginForm(TComponent* Owner, int x)
	: TForm(Owner)
{
	N = x;
switch (N)
{
	case 5:
		KatalogComboBox->Enabled = true;
		IshchiComboBox->Enabled = false; break;
	case 9:
		KatalogComboBox->Enabled = false;
		IshchiComboBox->Enabled = true; break;
}
}
//---------------------------------------------------------------------------
void __fastcall TloginForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	ErrorLabel->Visible = False;
	kirishForm->Show();
	kirishForm->MainkirishPanel->Visible = true;
	kirishForm->LoginPanel->Enabled = false;
	Action = caFree;
	loginForm = NULL;
}
//---------------------------------------------------------------------------
void __fastcall TloginForm::Image2Click(TObject *Sender)
{
	ErrorLabel->Visible = False;
	kirishForm->Show();
	kirishForm->MainkirishPanel->Visible = true;
	kirishForm->LoginPanel->Enabled = false;
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TloginForm::ElektronSpeedButtonClick(TObject *Sender)
{
String a = IshchiComboBox->ItemIndex;
switch (N)
{
	case 9:
		if(a == 0)
	{
		ErrorLabel->Visible = False;
		IshchiComboBox->ItemIndex = 16;
		adabiyotqoshishForm = new TadabiyotqoshishForm(this, N);
		adabiyotqoshishForm->Show();

		Hide();
	}
	 else
	 {
		ErrorLabel->Visible = True;
		ErrorLabel->Caption = "1. Ishchi sahifa menyusidan\nKataloglashtirishni tanlang\n2. Elektron katalog bo'limini tanlang";
	 }
}
}
//---------------------------------------------------------------------------
void __fastcall TloginForm::IshchiTimerTimer(TObject *Sender)
{
switch (N)
{
	case 5:
		//KatalogLabel->Visible = ! KatalogLabel->Visible;
		KatalogComboBox->Visible = ! KatalogComboBox->Visible;
			break;
	case 9:
		//IshchiLabel->Visible = ! IshchiLabel->Visible;
		IshchiComboBox->Visible = ! IshchiComboBox->Visible;
        	break;
}
}
//---------------------------------------------------------------------------
void __fastcall TloginForm::IshchiComboBoxMouseEnter(TObject *Sender)
{
	IshchiComboBox->Visible = true;
	IshchiTimer->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TloginForm::KitobxonSpeedButtonClick(TObject *Sender)
{
String a = KatalogComboBox->ItemIndex;
	switch (N)
{
	case 5:
		if(a == 1)
	{
		ErrorLabel->Visible = False;
		KatalogComboBox->ItemIndex = 0;
		adabiyotqoshishForm = new TadabiyotqoshishForm(this, N);
		adabiyotqoshishForm->Show();
		Hide();
	}
	 else
		{
			ErrorLabel->Visible = True;
			ErrorLabel->Caption = "1. Katalog menyusidan\naxborot resurs markazini tanlang\n2. Kitobxon bo'limini tanlang";
		}
}
}
//---------------------------------------------------------------------------
void __fastcall TloginForm::KatalogComboBoxMouseEnter(TObject *Sender)
{
	KatalogComboBox->Visible = true;
	IshchiTimer->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TloginForm::FormShow(TObject *Sender)
{
	IshchiTimer->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TloginForm::KatalogComboBoxSelect(TObject *Sender)
{
	if(KatalogComboBox->ItemIndex == 1)
	{
		KatalogComboBox->Enabled = false;
		IshchiTimer->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TloginForm::IshchiComboBoxSelect(TObject *Sender)
{
	if(IshchiComboBox->ItemIndex == 0)
	{
		IshchiComboBox->Enabled = false;
		IshchiTimer->Enabled = false;
	}
}
//---------------------------------------------------------------------------



