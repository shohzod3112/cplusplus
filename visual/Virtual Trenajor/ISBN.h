//---------------------------------------------------------------------------

#ifndef ISBNH
#define ISBNH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <pngimage.hpp>

//---------------------------------------------------------------------------
class TForm8 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Button1;
	TButton *Button2;
	TImage *Image1;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Label2MouseLeave(TObject *Sender);
	void __fastcall Label2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label6Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Label2Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall Edit2Change(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm8(TComponent* Owner);
	int select;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
