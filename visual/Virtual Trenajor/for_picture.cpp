//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "for_picture.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
String s;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm9::ochish(String s)
{
	Image1->Picture->LoadFromFile(s);
//
	Form9->Height = Image1->Picture->Height + 40;
	Form9->Width = Image1->Picture->Width + 20;

	Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm9::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------
