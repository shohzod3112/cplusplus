//---------------------------------------------------------------------------

#ifndef MuallifH
#define MuallifH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm13 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *Edit3;
	TEdit *Edit4;
	TButton *Button3;
	TButton *Button4;
	TComboBox *ComboBox1;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Label6MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label6MouseLeave(TObject *Sender);
	void __fastcall Label4Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Label6Click(TObject *Sender);
	void __fastcall Label8MouseLeave(TObject *Sender);
	void __fastcall Label8MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Edit3Change(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm13(TComponent* Owner);
	int select;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm13 *Form13;
//---------------------------------------------------------------------------
#endif
