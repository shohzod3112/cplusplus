//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MainFormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
	TRectangle *a[100];
	TLabel *b[100], *e[100];
	TScrollBox *s = new TScrollBox(this);
	s->Parent = MainForm;
	s->Align = TAlignLayout::alClient;

	Q->SQL->Text = "SELECT * FROM CarInfo";
	Q->Active = true;
	int y = 50;
	int i = 0;

	while(Q->Eof == false)
	{
		a[i] = new TRectangle(this);
		e[i] = new TLabel (this);
		b[i] = new TLabel (this);
		a[i]->Parent = s;
		a[i]->HitTest = true;
		e[i]->Parent = a[i];
		b[i]->Parent = a[i];
		a[i]->Height = 50;
		e[i]->Align = TAlignLayout::alTop;
        b[i]->Text = i + 1;
		e[i]->TextSettings->HorzAlign =TTextAlign::Center;
		e[i]->Text = Q->FieldByName("Model")->AsString;
		Q->Next();
		a[i]->Width = 400;
		a[i]->Position->X = 100;
		a[i]->Position->Y = y;
		y += 70;
		a[i]->Name = "re" + IntToStr(i);
	   //	a[i]->Margins->Bottom = 20;
		a[i]->OnClick = Click;
		i++;
	}
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::Click(TObject* Sender)
{
	TRectangle* R = (TRectangle*)Sender;
	TLabel* L = (TLabel*)R->Children->Items[0];
	String s;
	Q->SQL->Text = "SELECT * FROM CarInfo WHERE Model = '" + L->Text + "'";
	Q->Active = true;
	s = Q->FieldByName("Info")->AsString;
	ShowMessage(s);
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::Typing(TObject* Sender){

}
