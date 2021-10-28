//---------------------------------------------------------------------------

#ifndef MainFormUnitH
#define MainFormUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.Types.hpp>
#include "MyClassUnit.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TListBox *ListBox1;
	TStyleBook *StyleBook1;
	void __fastcall ListBox1ItemClick(TCustomListBox * const Sender, TListBoxItem * const Item);




private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	TMyClass *Q[100];
	int prev;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
