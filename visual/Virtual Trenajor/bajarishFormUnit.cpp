//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "bajarishFormUnit.h"
#include "kirish.h"
#include "for_picture.h"
#include "Constanta.h"
#include "URLUnit.h"
#include "PechatFormUnit.h"
#include "qoshish.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TbajarishForm *bajarishForm;
int soni;
//---------------------------------------------------------------------------
__fastcall TbajarishForm::TbajarishForm(TComponent* Owner)
	: TForm(Owner)
{
	
}
//---------------------------------------------------------------------------
void __fastcall TbajarishForm::ExitImageClick(TObject *Sender)
{
    kirishForm->Show();
	kirishForm->MainkirishPanel->Visible = true;
	kirishForm->LoginPanel->Enabled = false;
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TbajarishForm::FormClose(TObject *Sender, TCloseAction &Action)
{
    kirishForm->Show();
	kirishForm->MainkirishPanel->Visible = true;
	kirishForm->LoginPanel->Enabled = false;
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TbajarishForm::IshchiTimerTimer(TObject *Sender)
{
    IshchiComboBox->Visible = ! IshchiComboBox->Visible;
}
//---------------------------------------------------------------------------

void __fastcall TbajarishForm::IshchiComboBoxMouseEnter(TObject *Sender)
{
	IshchiComboBox->Visible = True;
	IshchiTimer->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TbajarishForm::IshchiComboBoxSelect(TObject *Sender)
{
	if(IshchiComboBox->ItemIndex == 1)
	{
		IshchiComboBox->Enabled = false;
		IshchiTimer->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TbajarishForm::SpeedButton12Click(TObject *Sender)
{
	if(IshchiComboBox->ItemIndex == 1)
	{
		ErrorLabel->Visible = false;
		bajarishLabel->Visible = false;
		ClientScrollBox->Visible = true;
		ClientScrollBox->Align = alClient;
		needCheckBox->Enabled = true;
	}
	else
	{
		ErrorLabel->Visible = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TbajarishForm::needCheckBoxClick(TObject *Sender)
{
	if(needCheckBox->Checked)
	{
     	searchComboBox->Enabled = true;
		ornatButton->Enabled = true;
		needCheckBox->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TbajarishForm::searchComboBoxSelect(TObject *Sender)
{

//	if(soni == 0 && searchComboBox->ItemIndex == 0)
//	{
//		ornatButton->Enabled = true;
//		searchComboBox->Enabled = false;
//	}
//	if(soni == 1 && searchComboBox->ItemIndex == 1)
//	{
//		ornatButton->Enabled = true;
//		searchComboBox->Enabled = false;
//	}
}
//---------------------------------------------------------------------------
void __fastcall TbajarishForm::ornatButtonClick(TObject *Sender)
{
	if(soni == 0 && searchComboBox->ItemIndex == 0)
	{
		armLabel->Caption = "Qidirilmoqda";
		searchComboBox->Enabled = false;
		ornatButton->Enabled = false;
		needCheckBox->Checked = false;
		needCheckBox->Enabled = true;
		soni++;
	}
	if(soni == 1 && searchComboBox->ItemIndex == 1)
	{
		armLabel->Caption = "Tayyor";
		searchComboBox->Enabled = false;
		ornatButton->Enabled = false;
		bajarishSpeedButton->Enabled = true;
		soni = 0;
	}
}
//---------------------------------------------------------------------------
void __fastcall TbajarishForm::bajarishSpeedButtonClick(TObject *Sender)
{
	bajarishSpeedButton->Enabled = false;
   //	ClientScrollBox->Align = alNone;
	//ClientScrollBox->Visible = false;
	ClientScrollBox2->Visible = true;
	ClientScrollBox2->Align = alClient;
}
//---------------------------------------------------------------------------
void __fastcall TbajarishForm::KitobxonSpeedButtonClick(TObject *Sender)
{
	Form9 = new TForm9(this);
	Form9->ochish(URL(DIRECTORY_PATH + "kitobxon"));
	inventarComboBox->Enabled = true;
	KitobxonSpeedButton->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TbajarishForm::inventarComboBoxChange(TObject *Sender)
{
	String a = sanaEdit->Text;
   if(inventarComboBox->ItemIndex == 0)
   {
	   sanaEdit->Text = Now().CurrentDate() + 20;
	   sanaEdit->ReadOnly = true;
	   sanaEdit->Enabled = true;
	   RadioButton1->Enabled = true;
	   RadioButton2->Enabled = true;
	   inventarComboBox->Enabled = false;
   }
}
//---------------------------------------------------------------------------

void __fastcall TbajarishForm::RadioButton1Click(TObject *Sender)
{
	if(RadioButton1->Checked)
	{
        RadioButton1->Enabled = false;
		RadioButton2->Checked = false;
		RadioButton2->Enabled = false;
		PechatSpeedButton->Enabled = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TbajarishForm::PechatSpeedButtonClick(TObject *Sender)
{
	pechatForm = new TpechatForm(this);
	pechatForm->Show();
	pechatForm->pechatPanel->Visible = true;
	pechatForm->pechatPanel->Align = alClient;
}
//---------------------------------------------------------------------------
void __fastcall TbajarishForm::RadioButton2Click(TObject *Sender)
{
	PechatSpeedButton->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TbajarishForm::bajarSpeedButtonClick(TObject *Sender)
{
	pechatForm = new TpechatForm(this);
	pechatForm->Show();
	pechatForm->bajarPanel->Visible = true;
	pechatForm->bajarPanel->Align = alClient;
}
//---------------------------------------------------------------------------













