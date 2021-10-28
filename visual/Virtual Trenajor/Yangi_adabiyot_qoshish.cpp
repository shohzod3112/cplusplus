//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Yangi_adabiyot_qoshish.h"
#include "adabiyot_qoshish.h"
#include "login.h"
#include "kirish.h"
#include "Bosh_oyna.h"
#include "Asosiy_oyna.h"
#include "Dastur_haqida.h"
#include "Ikki_muallifli_asosiy_forma.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TyangiadabiyotForm *yangiadabiyotForm;
//int Sana[5];
//---------------------------------------------------------------------------
__fastcall TyangiadabiyotForm::TyangiadabiyotForm(TComponent* Owner, int x)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TyangiadabiyotForm::SpeedButton1Click(TObject *Sender)
{
	TSpeedButton* t = (TSpeedButton*)Sender;
	AsosiyoynaForm = new TAsosiyoynaForm(this,t->Tag);
	AsosiyoynaForm->Show();
	yangiadabiyotForm->Hide();

	Vaqt = Now();

switch (t->Tag)
{
	case 1:
		kirishForm->t->Add("Bir muallifli kitob");
	 //	t->SaveToFile("1.txt");
			break;
	case 2:
		kirishForm->t->Add("Ikki muallifli kitob");
		//->SaveToFile("1.txt");
			break;
	case 3:
		kirishForm->t->Add("Uch muallifli kitob");
	   //	t->SaveToFile("1.txt");
			break;
	case 4:
		kirishForm->t->Add("To'rt muallifli kitob");
		//->SaveToFile("1.txt");
			break;
}
		kirishForm->t->Add("Boshlandi:");
		kirishForm->t->Add(Now());
		kirishForm->t->SaveToFile("time.txt");
}
//---------------------------------------------------------------------------
void __fastcall TyangiadabiyotForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	loginForm->Close();
	kirishForm->Show();
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TyangiadabiyotForm::SpeedButton7Click(TObject *Sender)
{
	loginForm->Close();
	kirishForm->Show();
}
//---------------------------------------------------------------------------



