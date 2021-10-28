//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FoydalnuvchiFormUnit.h"
#include "kirish.h"
#include "qoshish.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFoydalnuvchiForm *FoydalnuvchiForm;
//---------------------------------------------------------------------------
__fastcall TFoydalnuvchiForm::TFoydalnuvchiForm(TComponent* Owner)
	: TForm(Owner)
{
	FoydalanuvchiPanel->Visible = True;
	FoydalanuvchiPanel->Align = alClient;
	muallifLabel->Enabled = true;
	sarlavxaLabel->Enabled = true;
	yilLabel->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TFoydalnuvchiForm::FormClose(TObject *Sender, TCloseAction &Action)
{
    kirishForm->Show();
	kirishForm->MainkirishPanel->Visible = true;
	kirishForm->LoginPanel->Enabled = false;
	Action = caFree;
	FoydalnuvchiForm = NULL;
}
//---------------------------------------------------------------------------
void __fastcall TFoydalnuvchiForm::ExitImageClick(TObject *Sender)
{
	kirishForm->Show();
	kirishForm->MainkirishPanel->Visible = true;
	kirishForm->LoginPanel->Enabled = false;
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFoydalnuvchiForm::IshchiTimerTimer(TObject *Sender)
{
	KatalogComboBox->Visible = ! KatalogComboBox->Visible;
}
//---------------------------------------------------------------------------
void __fastcall TFoydalnuvchiForm::KatalogComboBoxMouseEnter(TObject *Sender)
{
	KatalogComboBox->Visible = True;
	IshchiTimer->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TFoydalnuvchiForm::SearchSpeedButtonClick(TObject *Sender)
{
String a = KatalogComboBox->ItemIndex;
	if(a == 1)
	{
		KatalogComboBox->Enabled = false;
		FoydalanuvchiPanel->Align = alNone;
		FoydalanuvchiPanel->Visible = false;
		QidirishScrollBox->Visible = true;
        QidirishScrollBox->Align = alClient;
	}
	else
    	BiletLabel->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TFoydalnuvchiForm::MuallifEditKeyPress(TObject *Sender, wchar_t &Key)
{
	String a = MuallifEdit->Text;
if(Key == 13)
{
	if(a == "Nazirov Sh.")
	{
		SarlavhaEdit->Enabled = true;
		MuallifEdit->ReadOnly = true;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
}
//---------------------------------------------------------------------------

void __fastcall TFoydalnuvchiForm::SarlavhaEditKeyPress(TObject *Sender, wchar_t &Key)
{
	String a = SarlavhaEdit->Text;
if(Key == 13)
{
	if(a == "Rastr va vektor grafika")
	{
		YilEdit->Enabled = true;
		SarlavhaEdit->ReadOnly = true;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
}
//---------------------------------------------------------------------------

void __fastcall TFoydalnuvchiForm::YilEditKeyPress(TObject *Sender, wchar_t &Key)
{
String a = YilEdit->Text;
if(Key == 13)
{
	if(a == "2007")
	{
		QidirishSpeedButton->Enabled = true;
		YilEdit->ReadOnly = true;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
}
//---------------------------------------------------------------------------
void __fastcall TFoydalnuvchiForm::QidirishSpeedButtonClick(TObject *Sender)
{
	QidirishScrollBox->Align = alNone;
	QidirishScrollBox->Visible = false;
	QidirishSpeedButton->Enabled = false;
	muallifLabel->Enabled = false;
	sarlavxaLabel->Enabled = false;
	yilLabel->Enabled = false;
	NatijaPanel->Visible = true;
	NatijaPanel->Align = alClient;
}
//---------------------------------------------------------------------------
void __fastcall TFoydalnuvchiForm::BuyurtmaSpeedButtonClick(TObject *Sender)
{
	if(BuyurtmaCheckBox->Checked)
	{
		NatijaPanel->Align = alNone;
		NatijaPanel->Visible = false;
		BuyurtmaPanel->Visible = true;
		BuyurtmaPanel->Align = alClient;
	}
	else ShowMessage("Buyurtma berayotgan adabiyotingizni belgilang!!!");
}
//---------------------------------------------------------------------------
void __fastcall TFoydalnuvchiForm::KatalogComboBoxSelect(TObject *Sender)
{
	if(KatalogComboBox->ItemIndex == 1)
	{
		KatalogComboBox->Enabled = false;
		IshchiTimer->Enabled = false;
    }
}
//---------------------------------------------------------------------------
void __fastcall TFoydalnuvchiForm::SpeedButton14Click(TObject *Sender)
{
	BuyurtmaPanel->Align = alNone;
	BuyurtmaPanel->Visible = false;
	QidirishScrollBox->Visible = true;
	QidirishScrollBox->Align = alClient;
	BuyurtmaLabel->Visible = true;
	Form21 = new TForm21(this);
	Form21->Show();
}
//---------------------------------------------------------------------------
void __fastcall TFoydalnuvchiForm::muallifLabelClick(TObject *Sender)
{
	ShowMessage("Topshiriq: Shodmon Nazirovning 2007-yilda nashr qilingan 'Rastr va vektor grafika' nomli kitobiga buyurtma bering");
}
//---------------------------------------------------------------------------








