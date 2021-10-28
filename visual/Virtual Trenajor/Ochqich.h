//---------------------------------------------------------------------------

#ifndef OchqichH
#define OchqichH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <pngimage.hpp>
//---------------------------------------------------------------------------
class TForm18 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label5;
	TLabel *Label6;
	TSpeedButton *SpeedButton27;
	TLabel *Label1;
	TButton *Button1;
	TButton *Button2;
	TEdit *Edit3;
	TImage *Image1;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Label6MouseLeave(TObject *Sender);
	void __fastcall Label6MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label1Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Label6Click(TObject *Sender);
	void __fastcall Edit3KeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall Edit3Change(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm18(TComponent* Owner);
	int select;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm18 *Form18;
//---------------------------------------------------------------------------
#endif
