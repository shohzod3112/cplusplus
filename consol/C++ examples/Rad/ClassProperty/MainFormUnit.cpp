//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MainFormUnit.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	prev = -1;
	for (int i = 0; i < 100; i++)
	{
		Q[i] = new TMyClass(this);
		Q[i]->Parent = ListBox1;
		Q[i]->Header = "Fam" + IntToStr(i + 1);
		Q[i]->SubText = "Ism" + IntToStr(i + 1);
		Q[i]->ImgUrl = "a.png";
		Q[i]->Tag = i;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ListBox1ItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	//
	TMyClass *a = (TMyClass*)Item;
	if(prev != -1)
	{
		Q[prev]->Header = "Fam" + IntToStr(prev + 1);
		Q[prev]->SubText = "Ism" + IntToStr(prev + 1);
   //		Q[prev]->style(Q[prev]);
	}
	prev = a->Tag;
	a->Header = "Ro'ziyev";
	a->SubText = "Shohzod";
  //	a->style(a);
}
//---------------------------------------------------------------------------

