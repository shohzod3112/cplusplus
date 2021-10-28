//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MainFormUnit.h"
#include "MyItemClass.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
	prev = -1;

	for(int i = 0; i < 100; i++)
	{
		I[i] = new TMyItem(this);
		I[i]->header = "Item" + IntToStr(i+1);
		I[i]->subText = "subText" + IntToStr(i+1);
		I[i]->imgUrl = "c++.jpg";
		I[i]->Parent = ListBox1;
		I[i]->Text = "Item" + IntToStr(i);
    	I[i]->Tag = i;
	}
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::ListBox1ItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)
{
	/*
		TMyItem * I = (TMyItem*)Item;
		I->header = "Shohzod";
		I->subText = "Roziyev";
		I->imgUrl = "587777.png";
		I->style(I);
	*/
	TMyItem *item = (TMyItem*)Item;
	item->header = "Shohzod";
	item->subText = "Roziyev";
	item->imgUrl = "587777.png";
	item->style(item);
	if(prev != -1)
	{
		I[prev]->header = "Item" + IntToStr(prev+1);
		I[prev]->subText = "subText" + IntToStr(prev + 1);
		I[prev]->imgUrl = "c++.jpg";
		I[prev]->style(I[prev]);
	}
	prev = item->Tag;
}
//---------------------------------------------------------------------------

