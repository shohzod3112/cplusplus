//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Asosiy_oyna.h"
#include "Yangi_adabiyot_qoshish.h"
#include "nolnolsakiz.h"
#include "ISBN.h"
#include "nashr_tili.h"
#include "fanlar.h"
#include "shifrlar.h"
#include "Muallif.h"
#include "ITAR.h"
#include "Sarlavxa.h"
#include "Chiqish.h"
#include "Fizik_tavsifi.h"
#include "Ochqich.h"
#include "Boshqa_mualliflar.h"
#include "Kataloglashtiruvchining_shaxsiy_kodi.h"
#include "qoshish.h"
#include "for_picture.h"
#include<ctime>
#include "URLUnit.h"
#include "Constanta.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAsosiyoynaForm *AsosiyoynaForm;

//---------------------------------------------------------------------------
__fastcall TAsosiyoynaForm::TAsosiyoynaForm(TComponent* Owner,int x)
	: TForm(Owner)
{
	N = x;
   //	soni = 0;
}
//---------------------------------------------------------------------------

void __fastcall TAsosiyoynaForm::FormCreate(TObject *Sender)
{
	int a, b, s;
	srand(time(NULL));

	switch(N)
	{
		case 1: select = rand() % 3 + 1; break;
		case 2: select = rand() % 3 + 1; break;
		case 3: select = rand() % 3 + 1; break;
		case 4: select = rand() % 3 + 1; break;
	}
 /*
	a = Screen->Width;
	b = Screen->Height;
	s = Screen->PixelsPerInch;
 */
	ScrollBox1->Visible = True;
}
//---------------------------------------------------------------------------

void __fastcall TAsosiyoynaForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	yangiadabiyotForm->Show();
	Action = caFree;
}
//---------------------------------------------------------------------------

void __fastcall TAsosiyoynaForm::SpeedButton16Click(TObject *Sender)
{
	Form7 = new TForm7(this);
	Form7->Show();
}
//---------------------------------------------------------------------------


void __fastcall TAsosiyoynaForm::SpeedButton17Click(TObject *Sender)
{
	Form8 = new TForm8(this);
	Form8->select = select;
	Form8->Show();
	Form8->Label5->Visible = False;
	Form8->Label6->Visible = False;
}
//---------------------------------------------------------------------------

void __fastcall TAsosiyoynaForm::SpeedButton20Click(TObject *Sender)
{
	Form10 = new TForm10(this);
	Form10->Show();
}
//---------------------------------------------------------------------------

void __fastcall TAsosiyoynaForm::ComboBox1Change(TObject *Sender)
{
String s = ComboBox1->ItemIndex;
int c = ComboBox1->ItemIndex;
switch(N)
{
	case 1:
		switch (select)
		{
			case 1:
				if(c == 15)
				{
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
					ComboBox1->Enabled = False;
					SpeedButton21->Enabled = True;
				}
				else	ShowMessage("Bu kitob ta'lim sohasiga tegishli, menyudan ta'limni tanlang");   break;

			case 2:
				if(c == 22)
				{
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
					ComboBox1->Enabled = False;
					SpeedButton21->Enabled = True;
				}
				else	ShowMessage("Bu kitob Kimyo sohasiga tegishli, menyudan Kimyoni tanlang"); 		break;

			case 3:
				if(c == 15)
				{
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
					ComboBox1->Enabled = False;
					SpeedButton21->Enabled = True;
				}
				else	ShowMessage("Bu kitob ta'lim sohasiga tegishli, menyudan ta'limni tanlang");	break;
		}
		break;

	case 2:
		switch(select)
		{
			case 1:
				if(c == 7)
				{
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
					ComboBox1->Enabled = False;
					SpeedButton21->Enabled = True;
				}
				else	ShowMessage("Bu kitob Ommaviy axborot vositalari sohasiga tegishli, menyudan Ommaviy axborot vositalarini tanlang");	break;
			case 2:
				if(c == 15)
				{
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
					ComboBox1->Enabled = False;
					SpeedButton21->Enabled = True;
				}
				else	ShowMessage("Bu kitob ta'lim sohasiga tegishli, menyudan ta'limni tanlang");	break;
			case 3:
				if(c == 15)
				{
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
					ComboBox1->Enabled = False;
					SpeedButton21->Enabled = True;
				}
				else	ShowMessage("Bu kitob ta'lim sohasiga tegishli, menyudan ta'limni tanlang");	break;
		}
			break;
	case 3:
		switch(select)
		{
			case 1:
				if(c == 20)
				{
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
					ComboBox1->Enabled = False;
					SpeedButton21->Enabled = True;
				}
				else	ShowMessage("Bu kitob Informatika fanlari sohasiga tegishli, menyudan Informatika bo'limini tanlang");	break;
			case 2:
				if(c == 21)
				{
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
					ComboBox1->Enabled = False;
					SpeedButton21->Enabled = True;
				}
				else	ShowMessage("Bu kitob Matematika sohasiga tegishli, menyudan Matematikani tanlang");	break;
			case 3:
				if(c == 21)
				{
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
					ComboBox1->Enabled = False;
					SpeedButton21->Enabled = True;
				}
				else	ShowMessage("Bu kitob Matematika sohasiga tegishli, menyudan Matematikani tanlang");	break;
		}
			break;
   	case 4:
		switch(select)
		{
			case 1:
				if(c == 14)
				{
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
					ComboBox1->Enabled = False;
					SpeedButton21->Enabled = True;
				}
				else	ShowMessage("Bu kitob Tarix fanlari sohasiga tegishli, menyudan Tarix bo'limini tanlang");  break;
			case 2:
				if(c == 10)
				{
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
					ComboBox1->Enabled = False;
					SpeedButton21->Enabled = True;
				}
				else	ShowMessage("Bu kitob Adabiyot sohasiga tegishli, menyudan Adabiyotni tanlang");	break;
			case 3:
				if(c == 3)
				{
					ShowMessage("   Keyingi maydonni to'ldirishingiz mumkin!!!      \n\t\tMarhamat!!!");
					ComboBox1->Enabled = False;
					SpeedButton21->Enabled = True;
				}
				else	ShowMessage("Bu kitob Iqtisod sohasiga tegishli, menyudan Iqtisodni tanlang");	break;
		}
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TAsosiyoynaForm::ComboBox850Change(TObject *Sender)
{
	if((ComboBox850->ItemIndex) != 2)
   {
		ShowMessage("Ushbu menyuni to'g'ri to'ldiring!!!");
		SpeedButton970->Enabled = False;
   }
   else
   {
		ComboBox850->Enabled = False;
		SpeedButton970->Enabled = True;
   }
}
//---------------------------------------------------------------------------

void __fastcall TAsosiyoynaForm::ComboBox920Change(TObject *Sender)
{
	if((ComboBox920->ItemIndex) != 1)
	{
		ShowMessage("Ushbu menyuni to'g'ri to'ldiring!!!");
	}
	else
		{
			ComboBox920->Enabled = False;
			ComboBox927->Enabled = True;
			ComboBox927->SetFocus();
		}
}
//---------------------------------------------------------------------------

void __fastcall TAsosiyoynaForm::ComboBox927Change(TObject *Sender)
{
int a = ComboBox927->ItemIndex;

switch(N)
	{
		case 1:
			switch(select)
			{
				case 1:
                case 3:
					if(a == 3)
					{
						ComboBox927->Enabled = False;
						Button2->Enabled = True;
					}
					else
					{
					  //	Button2->Enabled = False;
						ShowMessage("Ushbu menyuni to'g'ri to'ldiring!!!");
					}  break;
				case 2:
					if(a == 4)
					{
						ComboBox927->Enabled = False;
						Button2->Enabled = True;
					}
					else
					{
						//Button2->Enabled = False;
						ShowMessage("Ushbu menyuni to'g'ri to'ldiring!!!");
					}  break;
			} break;
		case 2:
			switch(select)
			{
				case 1:
				case 3:
					if(a == 4)
					{
						ComboBox927->Enabled = False;
						Button2->Enabled = True;
					}
					else
					{
					   //	Button2->Enabled = False;
						ShowMessage("Ushbu menyuni to'g'ri to'ldiring!!!");
					}  break;
				case 2:
					if(a == 3)
					{
						ComboBox927->Enabled = False;
						Button2->Enabled = True;
					}
					else
					{
					   //	Button2->Enabled = False;
						ShowMessage("Ushbu menyuni to'g'ri to'ldiring!!!");
					}  break;
			} break;
		case 3:
			switch(select)
			{
				case 1:
				case 3:
					if(a == 4)
					{
						ComboBox927->Enabled = False;
						Button2->Enabled = True;
					}
					else
					{
					   //	Button2->Enabled = False;
						ShowMessage("Ushbu menyuni to'g'ri to'ldiring!!!");
					}  break;
				case 2:
					if(a == 6)
					{
						ComboBox927->Enabled = False;
						Button2->Enabled = True;
					}
					else
					{
						//Button2->Enabled = False;
						ShowMessage("Ushbu menyuni to'g'ri to'ldiring!!!");
					}  break;
			} break;
		case 4:
			switch(select)
			{
				case 1:
				case 2:
				case 3:
					if(a == 3)
					{
						ComboBox927->Enabled = False;
						Button2->Enabled = True;
					}
					else
					{
						//Button2->Enabled = False;
						ShowMessage("Ushbu menyuni to'g'ri to'ldiring!!!");
					}  break;
			} break;
}}
//---------------------------------------------------------------------------

void __fastcall TAsosiyoynaForm::Memo1Change(TObject *Sender)
{
	if(Memo1->Modified)
	{
        Memo1->ReadOnly = false;
		SpeedButton38->Enabled = True;
	}
}
//---------------------------------------------------------------------------

void __fastcall TAsosiyoynaForm::Label24MouseLeave(TObject *Sender)
{
	Label24->Font->Color = clBlack;
	Label24->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TAsosiyoynaForm::Label24MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label24->Font->Color = clRed;

	Label24->Font->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------
void __fastcall TAsosiyoynaForm::SpeedButton21Click(TObject *Sender)
{
	Form11 = new TForm11(this);
	Form11->select = select;
	Form11->Show();
}
//---------------------------------------------------------------------------

void __fastcall TAsosiyoynaForm::SpeedButton24Click(TObject *Sender)
{
	Form12 = new TForm12(this);
	Form12->select = select;
	Form12->Show();
}
//---------------------------------------------------------------------------

void __fastcall TAsosiyoynaForm::SpeedButton25Click(TObject *Sender)
{
	Form13 = new TForm13(this);
	Form13->select = select;
	Form13->Show();
}
//---------------------------------------------------------------------------
void __fastcall TAsosiyoynaForm::SpeedButton27Click(TObject *Sender)
{
	Form14 = new TForm14(this);
	Form14->select = select;
	Form14->Show();
}
//---------------------------------------------------------------------------
void __fastcall TAsosiyoynaForm::SpeedButton29Click(TObject *Sender)
{
	Form15 = new TForm15(this);
	Form15->select = select;
	Form15->Show();
}
//-------------------------------------------------------------------------
void __fastcall TAsosiyoynaForm::SpeedButton33Click(TObject *Sender)
{
	Form16 = new TForm16(this);
	Form16->select = select;
	Form16->Show();
}
//---------------------------------------------------------------------------
void __fastcall TAsosiyoynaForm::SpeedButton34Click(TObject *Sender)
{
	Form17 = new TForm17(this);
    Form17->select = select;
	Form17->Show();
}
//---------------------------------------------------------------------------
void __fastcall TAsosiyoynaForm::SpeedButton38Click(TObject *Sender)
{
	Form18 = new TForm18 (this);
    Form18->select = select;
	Form18->Show();
}
//---------------------------------------------------------------------------
void __fastcall TAsosiyoynaForm::SpeedButtonboshqaClick(TObject *Sender)
{
	Form19 = new TForm19 (this);
	Form19->select = select;
	Form19->soni = soni;
	Form19->Show();
}
//---------------------------------------------------------------------------
void __fastcall TAsosiyoynaForm::SpeedButton970Click(TObject *Sender)
{
	Form20 = new TForm20 (this);
	Form20->Show();
}
//---------------------------------------------------------------------------
void __fastcall TAsosiyoynaForm::Button2Click(TObject *Sender)
{
	Form21 = new TForm21 (this);
	Form21->select = select;
	Form21->Show();
}
//---------------------------------------------------------------------------
void __fastcall TAsosiyoynaForm::Image1Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TAsosiyoynaForm::Label24Click(TObject *Sender)
{
	Form9 = new TForm9(this);
	switch(AsosiyoynaForm->N)
	{
		case 1: Form9->ochish(URL(DIRECTORY_PATH + "1m" + IntToStr(select) + ".5"));
			break;
		case 2: Form9->ochish(URL(DIRECTORY_PATH + "2m" + IntToStr(select) + ".5"));
			break;
		case 3: Form9->ochish(URL(DIRECTORY_PATH + "3m" + IntToStr(select) + ".5"));
			break;
		case 4: Form9->ochish(URL(DIRECTORY_PATH + "4m" + IntToStr(select) + ".5"));
			break;
	}
}
//---------------------------------------------------------------------------
void __fastcall TAsosiyoynaForm::ComboBox8Change(TObject *Sender)
{
	int  c = ComboBox8->ItemIndex;

	switch (N)
	{
		case 1:
			switch(c)
			{
				case 0:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "1m" + IntToStr(select) + ".1")); break;
				case 1:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "1m" + IntToStr(select) + ".2")); break;
				case 2:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "1m" + IntToStr(select) + ".3")); break;
				case 3:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "1m" + IntToStr(select) + ".4")); break;
			} break;
		case 2:
            switch(c)
			{
				case 0:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "2m" + IntToStr(select) + ".1")); break;
				case 1:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "2m" + IntToStr(select) + ".2")); break;
				case 2:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "2m" + IntToStr(select) + ".3")); break;
				case 3:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "2m" + IntToStr(select) + ".4")); break;
			} break;
		case 3:
			switch(c)
			{
				case 0:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "3m" + IntToStr(select) + ".1")); break;
				case 1:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "3m" + IntToStr(select) + ".2")); break;
				case 2:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "3m" + IntToStr(select) + ".3")); break;
				case 3:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "3m" + IntToStr(select) + ".4")); break;
			} break;
		case 4:
			switch(c)
			{
				case 0:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "4m" + IntToStr(select) + ".1")); break;
				case 1:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "4m" + IntToStr(select) + ".2")); break;
				case 2:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "4m" + IntToStr(select) + ".3")); break;
				case 3:
					Form9 = new TForm9(this);
					Form9->ochish(URL(DIRECTORY_PATH + "4m" + IntToStr(select) + ".4")); break;
			} break;
	}
}
//---------------------------------------------------------------------------
void __fastcall TAsosiyoynaForm::SpeedButton700Click(TObject *Sender)
{
soni++;
switch(soni)
{
	case 1:
		{
			Edit710->Visible = true;
			SpeedButton710q->Visible =true;
			SpeedButton710q->Enabled = true;
				break;
		}
	case 2:
		{
        	SpeedButton850A->Visible = true;
			SpeedButton850A->Enabled = true;
			Edit710p->Visible = true;
			break;
		}
	case 3:
		{
			SpeedButton11->Visible = true;
			SpeedButton11->Enabled = true;
			Edit850A->Visible = true;
			break;
		}

}
	L710->Top += 40;
	L710q->Top += 40;
	SpeedButton710->Top += 50;
	Edit5E710->Top += 50;

	L850->Top += 40;
	L850A->Top += 40;
	ComboBox850->Top += 40;

	L856->Top += 40;
	L856E->Top += 40;
	SpeedButton856->Top += 40;
	Edit856->Top += 40;
	SpeedButton856E->Top += 40;

	L901->Top += 40;
	L901X->Top += 40;
	ComboBox901->Top += 40;

	L970->Top += 40;
	L970K->Top += 40;

	Edit970->Top += 40;
	SpeedButton970->Top += 40;

	L900->Top += 40;
	L900A->Top += 40;

	B900->Top += 40;
	L900F->Top += 40;

	L920->Top += 40;
	L920A->Top += 40;
	ComboBox920->Top += 40;

	L927->Top += 40;
	L927A->Top += 40;
	ComboBox927->Top += 40;

	Button1->Top += 40;
	Button2->Top += 40;
	Button3->Top += 40;

    SpeedButton700->Enabled = False;
}
//---------------------------------------------------------------------------





