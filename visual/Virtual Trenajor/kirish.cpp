//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "kirish.h"
#include "login.h"
#include "Bosh_oyna.h"
#include "fanlar.h"
#include "Dastur_haqida.h"
#include "qoshish.h"
#include "FoydalnuvchiFormUnit.h"
#include "bajarishFormUnit.h"
#include "Qaytarib_olishUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TkirishForm *kirishForm;
String times;
//---------------------------------------------------------------------------
__fastcall TkirishForm::TkirishForm(TComponent* Owner)
	: TForm(Owner)
{
	t = new TStringList;
	t->Text = "";
	t->SaveToFile("time.txt");
	times = Now();
}
//---------------------------------------------------------------------------
void __fastcall TkirishForm::kirishSpeedButtonClick(TObject *Sender)
{
String a = LoginEdit->Text, b = ParolEdit->Text;
switch (s)
{
	case 5:
	case 9:
		if(a == "cat" && b == "11")
		{
			BiletLabel->Visible = False;
			loginForm = new TloginForm(this, s);
			Hide();
			loginForm->Show();
			LoginEdit->Text = "";
			ParolEdit->Text = "";
			BiletLabel->Visible = False;
		}
		else
		{
			BiletLabel->Left = 100;
			BiletLabel->Visible = True;
		}
			break;
	case 6:
		if(a == "000" && b == "000")
		{
			BiletLabel->Visible = False;
			FoydalnuvchiForm = new TFoydalnuvchiForm(this);
			Hide();
			FoydalnuvchiForm->Show();
			LoginEdit->Text = "";
			ParolEdit->Text = "";
			BiletLabel->Visible = False;
		}
		else
		{
			BiletLabel->Left = 100;
			BiletLabel->Visible = True;
		}
			break;
	case 7:
    	if(a == "bibl" && b == "11")
		{
			BiletLabel->Visible = False;
			bajarishForm = new TbajarishForm(this);
			Hide();
			bajarishForm->Show();
			LoginEdit->Text = "";
			ParolEdit->Text = "";
			BiletLabel->Visible = False;
		}
		else
		{
			BiletLabel->Left = 100;
			BiletLabel->Visible = True;
		}   break;
    case 8:
		if(a == "bibl" && b == "11")
		{
			BiletLabel->Visible = False;
			Qaytarib_olishForm = new TQaytarib_olishForm(this);
			Hide();
			Qaytarib_olishForm->Show();
			LoginEdit->Text = "";
			ParolEdit->Text = "";
			BiletLabel->Visible = False;
		}
		else
		{
			BiletLabel->Left = 100;
			BiletLabel->Visible = True;
		}   break;
}
}
//---------------------------------------------------------------------------
void __fastcall TkirishForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TkirishForm::FormCloseQuery(TObject *Sender, bool &CanClose)
{
	/*if(MessageDlg("Chiqishni xoxlaysizmi?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
		{
			Form1->Close();
		}
		else CanClose =  false; */
}
//---------------------------------------------------------------------------
void __fastcall TkirishForm::aboutSpeedButtonClick(TObject *Sender)
{
	Form22 = new TForm22(this);
	Form22->Show();
}
//---------------------------------------------------------------------------
void __fastcall TkirishForm::FoydalanuvchilarSpeedButtonClick(TObject *Sender)
{
	kirishForm->MainkirishPanel->Visible = false;
	kirishForm->LoginPanel->Enabled = true;
	LoginEdit->SetFocus();
	TSpeedButton * a = (TSpeedButton*)Sender;
	s =	a->Tag;

	Vaqt = Now();

	switch (s)
{
	case 5:
		t->Add("Foydalanuvchilarni ro'yxatdan o'tkazish");
		t->Add("Boshlandi:");
		t->Add(Now());
			break;
	case 6:
		t->Add("Adabiyotlarga buyurtma berish");
		t->Add("Boshlandi:");
		t->Add(Now());
			break;
	case 7:
		t->Add("Buyurtmalarning bajarilishi");
		t->Add("Boshlandi:");
		t->Add(Now());
			break;
	case 8:
		t->Add("Hujjatlarni qaytarib olish");
		t->Add("Boshlandi:");
		t->Add(Now());
			break;
}
		t->SaveToFile("time.txt");
}
//---------------------------------------------------------------------------
void __fastcall TkirishForm::FormCreate(TObject *Sender)
{
//	LoginEdit->Text = "";
//	ParolEdit->Text = "";
//	BiletLabel->Visible = False;
}
//---------------------------------------------------------------------------
void __fastcall TkirishForm::Timer1Timer(TObject *Sender)
{
	kirishForm->Caption = Now() - times;
}
//---------------------------------------------------------------------------



