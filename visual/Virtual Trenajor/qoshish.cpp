//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "qoshish.h"
#include "Asosiy_oyna.h"
#include "Yangi_adabiyot_qoshish.h"
#include "kirish.h"
#include "login.h"
#include "adabiyot_qoshish.h"
#include "FoydalnuvchiFormUnit.h"
#include "bajarishFormUnit.h"
#include "PechatFormUnit.h"
#include "Qaytarib_olishUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm21 *Form21;
//---------------------------------------------------------------------------
__fastcall TForm21::TForm21(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm21::ChiqishSpeedButtonClick(TObject *Sender)
{
switch(kirishForm->s)
{
	case 6:
		FoydalnuvchiForm->BuyurtmaLabel->Visible = false;
		FoydalnuvchiForm->QidirishScrollBox->Align = alNone;
		FoydalnuvchiForm->QidirishScrollBox->Visible = false;
		FoydalnuvchiForm->Close();
		kirishForm->Show();
			break;
	case 7:
		bajarishForm->Close();
		kirishForm->Show();
			break;
	case 8:
		Qaytarib_olishForm->Close();
		kirishForm->Show();
			break;

	case 5:
    	loginForm->Close();
		kirishForm->Show();
        	break;
}
switch(select)
{
	case 1:
	case 2:
	case 3:
	case 4:
    	AsosiyoynaForm->Close();
			break;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm21::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TForm21::FormCreate(TObject *Sender)
{
switch(kirishForm->s)
{
	case 5:
			Label1->Caption = "Siz foydalanuvchilarni ro'yxatdan o'tkazishni o'rgandingiz!!!\nSarflangan vaqt:" + StrToDateTime(Now() - kirishForm->Vaqt);
			kirishForm->t->Add("Tugadi:");
			kirishForm->t->Add(Now());
			kirishForm->t->Add("Sarflangan vaqt:");
			kirishForm->t->Add(StrToDateTime(Now() - kirishForm->Vaqt));
			kirishForm->t->SaveToFile("time.txt");
				break;
	case 6:
			Label1->Caption = "Siz adabiyotlarga buyurtma berishni o'rgandingiz!!!\nSarflangan vaqt:" + StrToDateTime(Now() - kirishForm->Vaqt);
			kirishForm->t->Add("Tugadi:");
			kirishForm->t->Add(Now());
			kirishForm->t->Add("Sarflangan vaqt:");
			kirishForm->t->Add(StrToDateTime(Now() - kirishForm->Vaqt));
			kirishForm->t->SaveToFile("time.txt");
				break;
	case 7:
			Label1->Caption = "Siz buyurtmani bajarishni o'rgandingiz!!!\nSarflangan vaqt:" + StrToDateTime(Now() - kirishForm->Vaqt);
			kirishForm->t->Add("Tugadi:");
			kirishForm->t->Add(Now());
			kirishForm->t->Add("Sarflangan vaqt:");
			kirishForm->t->Add(StrToDateTime(Now() - kirishForm->Vaqt));
			kirishForm->t->SaveToFile("time.txt");
				break;
	case 8:
			Label1->Caption = "Siz hujjatlarni qaytarib olishni o'rgandingiz!!!\nSarflangan vaqt:" + StrToDateTime(Now() - kirishForm->Vaqt);
			kirishForm->t->Add("Tugadi:");
			kirishForm->t->Add(Now());
			kirishForm->t->Add("Sarflangan vaqt:");
			kirishForm->t->Add(StrToDateTime(Now() - kirishForm->Vaqt));
			kirishForm->t->SaveToFile("time.txt");
				break;
	case 9:
		   switch (AsosiyoynaForm->N)
		   {
				case 1:
					Label1->Caption = "Bir   muallifli kitobni KARMAT dasturiga kiritishni o'rgandingiz!!!\nSarflangan vaqt:" + StrToDateTime(Now() - yangiadabiyotForm->Vaqt);
//					kirishForm->t->Add("Tugadi:");
//					kirishForm->t->Add(Now());
//					kirishForm->t->Add("Sarflangan vaqt:");
//					kirishForm->t->Add(StrToDateTime(Now() - yangiadabiyotForm->Vaqt));
//					kirishForm->t->SaveToFile("1.txt");
						break;
				case 2:
					Label1->Caption = "Ikki  muallifli kitobni KARMAT dasturiga kiritishni o'rgandingiz!!!\nSarflangan vaqt:" + StrToDateTime(Now() - yangiadabiyotForm->Vaqt);
//                	kirishForm->t->Add("Tugadi:");
//					kirishForm->t->Add(Now());
//					kirishForm->t->Add("Sarflangan vaqt:");
//					kirishForm->t->Add(StrToDateTime(Now() - yangiadabiyotForm->Vaqt));
//					kirishForm->t->SaveToFile("1.txt");
						break;
				case 3:
					Label1->Caption = "Uch   muallifli kitobni KARMAT dasturiga kiritishni o'rgandingiz!!!\nSarflangan vaqt:" + StrToDateTime(Now() - yangiadabiyotForm->Vaqt);
						break;
				case 4:
					Label1->Caption = "To'rt muallifli kitobni KARMAT dasturiga kiritishni o'rgandingiz!!!\nSarflangan vaqt:" + StrToDateTime(Now() - yangiadabiyotForm->Vaqt);
						break;
			}
					kirishForm->t->Add("Tugadi:");
					kirishForm->t->Add(Now());
					kirishForm->t->Add("Sarflangan vaqt:");
					kirishForm->t->Add(StrToDateTime(Now() - yangiadabiyotForm->Vaqt));
					kirishForm->t->SaveToFile("time.txt");
			break;
}
}
//---------------------------------------------------------------------------


