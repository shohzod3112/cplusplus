//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "adabiyot_qoshish.h"
#include "login.h"
#include "kirish.h"
#include "Bosh_oyna.h"
#include "Yangi_adabiyot_qoshish.h"
#include "for_picture.h"
#include "Constanta.h"
#include "URLUnit.h"
#include <String>
#include "qoshish.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TadabiyotqoshishForm *adabiyotqoshishForm;
//---------------------------------------------------------------------------
__fastcall TadabiyotqoshishForm::TadabiyotqoshishForm(TComponent* Owner, int x)
	: TForm(Owner)
{
	N = x;

switch (N)
{
	case 5:
		FoydalanuvchiPanel->Visible = true;
		FoydalanuvchiPanel->Align = alClient;
			break;
	case 9:
		KatPanel->Visible = true;
		KatPanel->Align = alClient;
			break;
}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	loginForm->Close();
	kirishForm->Show();
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::AddFoydalanuvchiLabelClick(TObject *Sender)
{
	FoydalanuvchiPanel->Align = alNone;
	FoydalanuvchiPanel->Visible = false;
	FoydalanuvchiScrollBox->Visible = true;
	FoydalanuvchiScrollBox->Align = alClient;
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::ExitImageClick(TObject *Sender)
{
	loginForm->Close();
	kirishForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::FoydalanuvhchiSpeedButtonClick(TObject *Sender)
{
	Form9 = new TForm9(this);
	Form9->ochish(URL(DIRECTORY_PATH + "kitobxon"));
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::AddButtonClick(TObject *Sender)
{
	FoydalanuvchiScrollBox->Align = alNone;
	FoydalanuvchiScrollBox->Visible = false;
	Form21 = new TForm21(this);
	Hide();
	Form21->Show();
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::biletEditKeyPress(TObject *Sender, wchar_t &Key)
{
String a = biletEdit->Text;

	if(Key == 13)
	{
		if(a == "000")
		{
			famEdit->Enabled = true;
			biletEdit->ReadOnly = true;
		}
		else
		{
			ShowMessage("To'g'ri kiritilmadi");
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::famEditKeyPress(TObject *Sender, wchar_t &Key)
{
String a = famEdit->Text;

if(Key == 13)
{
	if(a == "Fayzullayev A. Z.")
	{
		passwordEdit->Enabled = true;
		famEdit->ReadOnly = true;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::passwordEditKeyPress(TObject *Sender, wchar_t &Key)
{
String a = passwordEdit->Text;

if(Key == 13)
{
	if(a == "000")
	{
		ManzilEdit->Enabled = true;
		passwordEdit->ReadOnly = true;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::ManzilEditKeyPress(TObject *Sender, wchar_t &Key)
{
String a = ManzilEdit->Text;
if(Key == 13)
{
	if(a == "Samarqand v. Jomboy t. Alisher Navoiy mahallasi, Oromgoh k. 4-uy.")
	{
		pochtaEdit->Enabled = true;
		ManzilEdit->ReadOnly = true;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::pochtaEditKeyPress(TObject *Sender, wchar_t &Key)
{
String a = pochtaEdit->Text;
if(Key == 13)
{
	if(a == "abbos_fayzullayev_96@mail.ru")
	{
		tugilganEdit->Enabled = true;
		pochtaEdit->ReadOnly = true;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::tugilganEditKeyPress(TObject *Sender, wchar_t &Key)
{
String a = tugilganEdit->Text;
if(Key == 13)
{
	if(a == "19960130")
	{
		JinsiComboBox->Enabled = true;
		tugilganEdit->ReadOnly = true;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::JinsiComboBoxChange(TObject *Sender)
{
String a = JinsiComboBox->ItemIndex;

	if(a == 1)
	{
		KategoriyaComboBox->Enabled = true;
		JinsiComboBox->Enabled = false;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::KategoriyaComboBoxChange(TObject *Sender)
{
String a = KategoriyaComboBox->ItemIndex;

	if(a == 5)
	{
		FakultetComboBox->Enabled = true;
		KategoriyaComboBox->Enabled = false;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::FakultetComboBoxChange(TObject *Sender)
{
String a = FakultetComboBox->ItemIndex;

	if(a == 1)
	{
		KursComboBox->Enabled = true;
		FakultetComboBox->Enabled = false;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::KursComboBoxChange(TObject *Sender)
{
String a = KursComboBox->ItemIndex;

	if(a == 0)
	{
		GuruhComboBox->Enabled = true;
		KursComboBox->Enabled = false;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::GuruhComboBoxChange(TObject *Sender)
{
String a = GuruhComboBox->ItemIndex;

	if(a == 2)
	{
		PassportEdit->Enabled = true;
		GuruhComboBox->Enabled = false;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::PassportEditKeyPress(TObject *Sender, wchar_t &Key)
{
String a = PassportEdit->Text;
if(Key == 13)
{
	if(a == "AA 0591646")
	{
		TelEdit->Enabled = true;
		PassportEdit->ReadOnly = true;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::TelEditKeyPress(TObject *Sender, wchar_t &Key)
{
String a = TelEdit->Text;
if(Key == 13)
{
	if(a == "+998902857877")
	{
		photoButton->Enabled = true;
		TelEdit->ReadOnly = true;
	}
	else
	{
		ShowMessage("To'g'ri kiritilmadi");
	}
}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::photoButtonClick(TObject *Sender)
{
String s;
	if(OD->Execute())
	{
		s = OD->FileName;
		photoLabel->Caption = s;
		s = s.SubString(s.Length()-20, s.Length());
		if(s == "Fayzullayev A. Z..JPG")
		{
            photoButton->Enabled = false;
			AddButton->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TadabiyotqoshishForm::AddKadabiyotLabelClick(TObject *Sender)
{
	KatPanel->Align = alNone;
	KatPanel->Visible = false;
	yangiadabiyotForm = new TyangiadabiyotForm(this, N);
	yangiadabiyotForm->Show();
	Hide();
}
//---------------------------------------------------------------------------







