//---------------------------------------------------------------------------

#ifndef ChiqishH
#define ChiqishH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <pngimage.hpp>
//---------------------------------------------------------------------------
class TForm16 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label5;
	TLabel *Label6;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton27;
	TLabel *Label8;
	TLabel *Label2;
	TLabel *Label1;
	TLabel *Label7;
	TSpeedButton *SpeedButton2;
	TLabel *Label13;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *Edit5;
	TEdit *Edit4;
	TEdit *Edit3;
	TButton *Button4;
	TButton *Button3;
	TImage *Image1;
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Label6MouseLeave(TObject *Sender);
	void __fastcall Label6MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Label6Click(TObject *Sender);
	void __fastcall Edit3KeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall Label8MouseLeave(TObject *Sender);
	void __fastcall Label8MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label2MouseLeave(TObject *Sender);
	void __fastcall Label2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Edit3Change(TObject *Sender);
	void __fastcall Edit4Change(TObject *Sender);
	void __fastcall Edit5Change(TObject *Sender);



private:	// User declarations
public:		// User declarations
	__fastcall TForm16(TComponent* Owner);
	int select;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm16 *Form16;
//---------------------------------------------------------------------------
#endif
