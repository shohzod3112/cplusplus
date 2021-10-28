//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "fanlar.h"
#include "Asosiy_oyna.h"
#include "Yangi_adabiyot_qoshish.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm11 *Form11;
int k = 0;
//---------------------------------------------------------------------------
__fastcall TForm11::TForm11(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm11::TreeView1Click(TObject *Sender)
{
	int a = TreeView1->Selected->SelectedIndex;

	switch(AsosiyoynaForm->N)
{
	case 1:
		switch(select)
		{
			case 1:
				if(a != 102)
				{
					k++;
				if(k > 4)
				{
					ShowMessage("(0102) Falsafa (etika, estetika, mantiq)ni tanlang");
				}}
				if(a == 102)
				{
				Close();

				AsosiyoynaForm->Edit14->Text = "0102";
				AsosiyoynaForm->Edit14->Enabled = True;
				AsosiyoynaForm->Edit14->ReadOnly = True;
				AsosiyoynaForm->SpeedButton21->Enabled = False;
				AsosiyoynaForm->SpeedButton24->Enabled = True;
				} break;
			case 2:
				if(a != 104)
				{
					k++;
				if(k > 4)
				{
					ShowMessage("(0104)Kimyoni tanlang");
				}}
				if(a == 104)
				{
				Close();

				AsosiyoynaForm->Edit14->Text = "0104";
				AsosiyoynaForm->Edit14->Enabled = True;
				AsosiyoynaForm->Edit14->ReadOnly = True;
				AsosiyoynaForm->SpeedButton21->Enabled = False;
				AsosiyoynaForm->SpeedButton24->Enabled = True;
				} break;
			case 3:
					if(a != 327)
				{
					k++;
				if(k > 4)
				{
					ShowMessage("(0327)Amaliy Geodeziyani tanlang");
				}}
				if(a == 327)
				{
				Close();

				AsosiyoynaForm->Edit14->Text = "0327";
				AsosiyoynaForm->Edit14->Enabled = True;
				AsosiyoynaForm->Edit14->ReadOnly = True;
				AsosiyoynaForm->SpeedButton21->Enabled = False;
				AsosiyoynaForm->SpeedButton24->Enabled = True;
				} break;
		}  break;
	case 2:
		switch(select)
		{
			case 1:
				if(a != 326)
				{
					k++;
				if(k > 5)
				{
					ShowMessage("(0326) Dasturlash tillarini tanlang");
				}}
				if(a == 326)
				{
					Close();

					AsosiyoynaForm->Edit14->Text = "0326";
					AsosiyoynaForm->Edit14->Enabled = True;
					AsosiyoynaForm->Edit14->ReadOnly = True;
					AsosiyoynaForm->SpeedButton21->Enabled = False;
					AsosiyoynaForm->SpeedButton24->Enabled = True;
				}  break;
			case 2:
				if(a != 328)
				{
					k++;
				if(k > 5)
				{
					ShowMessage("(0328) Dendrologiyani tanlang");
				}}
				if(a == 328)
				{
					Close();

					AsosiyoynaForm->Edit14->Text = "0328";
					AsosiyoynaForm->Edit14->Enabled = True;
					AsosiyoynaForm->Edit14->ReadOnly = True;
					AsosiyoynaForm->SpeedButton21->Enabled = False;
					AsosiyoynaForm->SpeedButton24->Enabled = True;
				}  break;
			case 3:
				if(a != 202)
				{
					k++;
				if(k > 5)
				{
					ShowMessage("(0202) Hayvonlar fziologiyasi va patofiziologiyasini tanlang");
				}}
				if(a == 202)
				{
					Close();

					AsosiyoynaForm->Edit14->Text = "0202";
					AsosiyoynaForm->Edit14->Enabled = True;
					AsosiyoynaForm->Edit14->ReadOnly = True;
					AsosiyoynaForm->SpeedButton21->Enabled = False;
					AsosiyoynaForm->SpeedButton24->Enabled = True;
				}  break;
		}	break;
	case 3:
		switch(select)
		{
			case 1:
				if(a != 326)
				{
					k++;
				if(k > 5)
				{
					ShowMessage("(0326) Dasturlash tillarini tanlang");
				}}
				if(a == 326)
				{
				Close();

				AsosiyoynaForm->Edit14->Text = "0326";
				AsosiyoynaForm->Edit14->Enabled = True;
				AsosiyoynaForm->Edit14->ReadOnly = True;
				AsosiyoynaForm->SpeedButton21->Enabled = False;
				AsosiyoynaForm->SpeedButton24->Enabled = True;
				}   break;
			case 2:
				if(a != 105)
				{
					k++;
				if(k > 5)
				{
					ShowMessage("(0105) Matematikani tanlang");
				}}
				if(a == 105)
				{
				Close();

				AsosiyoynaForm->Edit14->Text = "0105";
				AsosiyoynaForm->Edit14->Enabled = True;
				AsosiyoynaForm->Edit14->ReadOnly = True;
				AsosiyoynaForm->SpeedButton21->Enabled = False;
				AsosiyoynaForm->SpeedButton24->Enabled = True;
				}   break;
			case 3:
				if(a != 105)
				{
					k++;
				if(k > 5)
				{
					ShowMessage("(0105) Matematikani tanlang");
				}}
				if(a == 105)
				{
				Close();

				AsosiyoynaForm->Edit14->Text = "0105";
				AsosiyoynaForm->Edit14->Enabled = True;
				AsosiyoynaForm->Edit14->ReadOnly = True;
				AsosiyoynaForm->SpeedButton21->Enabled = False;
				AsosiyoynaForm->SpeedButton24->Enabled = True;
				}   break;
		}  break;

	case 4:
		switch(select)
		{
			case 1:
				if(a != 103)
				{
					k++;
				if(k > 5)
				{
					ShowMessage("(0103) Tarix bo'limini tanlang");
				}}
				if(a == 103)
				{
					Close();

					AsosiyoynaForm->Edit14->Text = "0103";
					AsosiyoynaForm->Edit14->Enabled = True;
					AsosiyoynaForm->Edit14->ReadOnly = True;
					AsosiyoynaForm->SpeedButton21->Enabled = False;
					AsosiyoynaForm->SpeedButton24->Enabled = True;
				}  break;
			case 2:
				if(a != 106)
				{
					k++;
				if(k > 5)
				{
					ShowMessage("(0106) Adabiyot bo'limini tanlang");
				}}
				if(a == 106)
				{
					Close();

					AsosiyoynaForm->Edit14->Text = "0106";
					AsosiyoynaForm->Edit14->Enabled = True;
					AsosiyoynaForm->Edit14->ReadOnly = True;
					AsosiyoynaForm->SpeedButton21->Enabled = False;
					AsosiyoynaForm->SpeedButton24->Enabled = True;
				}  break;
			case 3:
				if(a != 402)
				{
					k++;
				if(k > 5)
				{
					ShowMessage("(0402) Pul, Kredit va banklar bo'limini tanlang");
				}}
				if(a == 402)
				{
					Close();

					AsosiyoynaForm->Edit14->Text = "0402";
					AsosiyoynaForm->Edit14->Enabled = True;
					AsosiyoynaForm->Edit14->ReadOnly = True;
					AsosiyoynaForm->SpeedButton21->Enabled = False;
					AsosiyoynaForm->SpeedButton24->Enabled = True;
				}  break;

		}

}
}
//---------------------------------------------------------------------------
void __fastcall TForm11::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TForm11::FormCreate(TObject *Sender)
{
	k = 0;
}
//---------------------------------------------------------------------------


