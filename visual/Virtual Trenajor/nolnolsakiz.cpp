//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "nolnolsakiz.h"
#include "Asosiy_oyna.h"
#include "Yangi_adabiyot_qoshish.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
int k;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::ComboBox2Change(TObject *Sender)
{
		if(ComboBox2->ItemIndex == 1)
{
			ComboBox2->Enabled = False;
			ComboBox3->Enabled = True;
			ComboBox3->SetFocus();
}
		else ComboBox3->Enabled = False;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::ComboBox3Change(TObject *Sender)
{
	if(AsosiyoynaForm->N == 1 || AsosiyoynaForm->N == 2 || AsosiyoynaForm->N == 3)
{
	if(ComboBox3->ItemIndex == 1)
{
			Button1->Enabled = True;
			Button2->Enabled = True;
			ComboBox3->Enabled = False;
}
		else
{
			Button1->Enabled = False;
			Button2->Enabled = False;
}
}
	if(AsosiyoynaForm->N == 4)
{
		k++;

		if(k > 4)
{
	ShowMessage("Kitob для детей старшего школьного  возраста bo'limiga tegishli, menyudan для детей старшего школьного bo'limni tanglang");
}
		if(ComboBox3->ItemIndex == 7)
{
		Button1->Enabled = True;
		Button2->Enabled = True;
		ComboBox3->Enabled = False;
}
		else
{
		Button1->Enabled = False;
		Button2->Enabled = False;
}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button1Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button2Click(TObject *Sender)
{
	Close();

		AsosiyoynaForm->Edit9->Enabled = True;
		AsosiyoynaForm->Edit9->Text = "131202|||||||||uz ||||e|||||||||||uzb||";
		AsosiyoynaForm->Edit9->ReadOnly = True;
		AsosiyoynaForm->SpeedButton16->Enabled = False;
		AsosiyoynaForm->SpeedButton17->Enabled = True;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------

