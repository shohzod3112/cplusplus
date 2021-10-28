//---------------------------------------------------------------------------

#ifndef Fizik_tavsifiH
#define Fizik_tavsifiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm17 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label8;
	TLabel *Label2;
	TLabel *Label1;
	TLabel *Label7;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label9;
	TLabel *Label10;
	TEdit *Edit5;
	TEdit *Edit4;
	TEdit *Edit3;
	TEdit *Edit1;
	TButton *Button3;
	TButton *Button4;
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Label8MouseLeave(TObject *Sender);
	void __fastcall Label8MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Label8Click(TObject *Sender);
	void __fastcall Edit4Change(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm17(TComponent* Owner);
	int select;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm17 *Form17;
//---------------------------------------------------------------------------
#endif
