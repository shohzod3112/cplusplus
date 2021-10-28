//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ITAR.h"
#include "Asosiy_oyna.h"
#include "Yangi_adabiyot_qoshish.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm14 *Form14;
int k;
//---------------------------------------------------------------------------
__fastcall TForm14::TForm14(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm14::TreeView1Click(TObject *Sender)
{
int a = TreeView1->Selected->SelectedIndex;

switch(AsosiyoynaForm->N)
{
	case 1:
		switch(select)
		{
			case 1:
				if(a != 9)
				{
					k++;
				if(k > 7)
				{
					ShowMessage("(14.07.09) Общая методика обучения ni tanlang");
				}}
				if(a == 9)
				{

				Form14->Close();

				AsosiyoynaForm->Edit18->Text = "14.07.09";
				AsosiyoynaForm->Edit18->Enabled = True;
				AsosiyoynaForm->Edit18->ReadOnly = True;
				AsosiyoynaForm->SpeedButton27->Enabled = False;
				AsosiyoynaForm->SpeedButton29->Enabled = True;
				} break;
			case 2:
				if(a != 10)
				{
					k++;
				if(k > 7)
				{
					ShowMessage("(31.27) Биологическая химия ni tanlang");
				}}
				if(a == 10)
				{
				Form14->Close();

				AsosiyoynaForm->Edit18->Text = "31.27";
				AsosiyoynaForm->Edit18->Enabled = True;
				AsosiyoynaForm->Edit18->ReadOnly = True;
				AsosiyoynaForm->SpeedButton27->Enabled = False;
				AsosiyoynaForm->SpeedButton29->Enabled = True;
				} break;
			case 3:
				if(a != 16)
				{
					k++;
				if(k > 7)
				{
					ShowMessage("((36.01) Общие вопросы геодезии и картографии ni tanlang");
				}}
				if(a == 16)
				{
				Form14->Close();

				AsosiyoynaForm->Edit18->Text = "36.01";
				AsosiyoynaForm->Edit18->Enabled = True;
				AsosiyoynaForm->Edit18->ReadOnly = True;
				AsosiyoynaForm->SpeedButton27->Enabled = False;
				AsosiyoynaForm->SpeedButton29->Enabled = True;
				} break;

		}  break;
	case 2:
		switch(select)
		{
			case 1:
				if(a != 17)
				{
					k++;
				if(k > 7)
				{
					ShowMessage("(20.01.07) Теория и методология информатики ni tanlang");
				}}
				if(a == 17)
				{
				Form14->Close();

				AsosiyoynaForm->Edit18->Text = "20.01.07";
				AsosiyoynaForm->Edit18->Enabled = True;
				AsosiyoynaForm->Edit18->ReadOnly = True;
				AsosiyoynaForm->SpeedButton27->Enabled = False;
				AsosiyoynaForm->SpeedButton29->Enabled = True;
				} break;
			case 2:
				if(a != 12)
				{
					k++;
				if(k > 7)
				{
					ShowMessage("(05.01.09) История демографии. Персоналия ni tanlang");
				}}
				if(a == 12)
				{
				Form14->Close();

				AsosiyoynaForm->Edit18->Text = "05.01.09";
				AsosiyoynaForm->Edit18->Enabled = True;
				AsosiyoynaForm->Edit18->ReadOnly = True;
				AsosiyoynaForm->SpeedButton27->Enabled = False;
				AsosiyoynaForm->SpeedButton29->Enabled = True;
				} break;
			case 3:
				if(a != 14)
				{
					k++;
				if(k > 7)
				{
					ShowMessage("(18.46.01) Общие вопросы ni tanlang");
				}}
				if(a == 14)
				{
				Form14->Close();

				AsosiyoynaForm->Edit18->Text = "18.46.01";
				AsosiyoynaForm->Edit18->Enabled = True;
				AsosiyoynaForm->Edit18->ReadOnly = True;
				AsosiyoynaForm->SpeedButton27->Enabled = False;
				AsosiyoynaForm->SpeedButton29->Enabled = True;
				} break;
		}	break;
	case 3:
		switch(select)
		{
			case 1:
				if(a != 15)
				{
					k++;
				if(k > 7)
				{
					ShowMessage("(20.19.17) Предметизация и индексирование ni tanlang");
				}}
				if(a == 15)
				{
				Form14->Close();

				AsosiyoynaForm->Edit18->Text = "20.19.17";
				AsosiyoynaForm->Edit18->Enabled = True;
				AsosiyoynaForm->Edit18->ReadOnly = True;
				AsosiyoynaForm->SpeedButton27->Enabled = False;
				AsosiyoynaForm->SpeedButton29->Enabled = True;
				} break;
			case 2:
				if(a != 10)
				{
					k++;
				if(k > 7)
				{
					ShowMessage("(27.03) Основания математики и математическая логика ni tanlang");
				}}
				if(a == 10)
				{
				Form14->Close();

				AsosiyoynaForm->Edit18->Text = "27.03";
				AsosiyoynaForm->Edit18->Enabled = True;
				AsosiyoynaForm->Edit18->ReadOnly = True;
				AsosiyoynaForm->SpeedButton27->Enabled = False;
				AsosiyoynaForm->SpeedButton29->Enabled = True;
				} break;
			case 3:
				if(a != 22)
				{
					k++;
				if(k > 7)
				{
					ShowMessage("(27.17.25) Категории ni tanlang");
				}}
				if(a == 22)
				{
				Form14->Close();

				AsosiyoynaForm->Edit18->Text = "27.17.25";
				AsosiyoynaForm->Edit18->Enabled = True;
				AsosiyoynaForm->Edit18->ReadOnly = True;
				AsosiyoynaForm->SpeedButton27->Enabled = False;
				AsosiyoynaForm->SpeedButton29->Enabled = True;
				} break;
		}  break;
	case 4:
		switch(select)
		{
			case 1:
				if(a != 11)
				{
					k++;
				if(k > 7)
				{
					ShowMessage("(03.09.03) Всеобщая история в целом ni tanlang");
				}}
				if(a == 11)
				{
				Form14->Close();

				AsosiyoynaForm->Edit18->Text = "03.09.03";
				AsosiyoynaForm->Edit18->Enabled = True;
				AsosiyoynaForm->Edit18->ReadOnly = True;
				AsosiyoynaForm->SpeedButton27->Enabled = False;
				AsosiyoynaForm->SpeedButton29->Enabled = True;
				} break;
			case 2:
				if(a != 3112)
				{
					k++;
				if(k > 7)
				{
					ShowMessage("(17.07.21) Литература и общество ni tanlang");
				}}
				if(a == 3112)
				{
				Form14->Close();

				AsosiyoynaForm->Edit18->Text = "17.07.21";
				AsosiyoynaForm->Edit18->Enabled = True;
				AsosiyoynaForm->Edit18->ReadOnly = True;
				AsosiyoynaForm->SpeedButton27->Enabled = False;
				AsosiyoynaForm->SpeedButton29->Enabled = True;
				} break;
			case 3:
				if(a != 15)
				{
					k++;
				if(k > 7)
				{
					ShowMessage("(06.73.07) Денежные и финансовые теории и политика ni tanlang");
				}}
				if(a == 15)
				{
				Form14->Close();

				AsosiyoynaForm->Edit18->Text = "06.73.07";
				AsosiyoynaForm->Edit18->Enabled = True;
				AsosiyoynaForm->Edit18->ReadOnly = True;
				AsosiyoynaForm->SpeedButton27->Enabled = False;
				AsosiyoynaForm->SpeedButton29->Enabled = True;
				} break;
		}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm14::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------


void __fastcall TForm14::FormCreate(TObject *Sender)
{
	k = 0;
}
//---------------------------------------------------------------------------

