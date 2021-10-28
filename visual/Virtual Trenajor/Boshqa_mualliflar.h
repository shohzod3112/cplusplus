//---------------------------------------------------------------------------

#ifndef Boshqa_mualliflarH
#define Boshqa_mualliflarH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <pngimage.hpp>
//---------------------------------------------------------------------------
class TForm19 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TSpeedButton *SpeedButton27;
	TLabel *Label3;
	TLabel *Label1;
	TLabel *Label2;
	TButton *Button3;
	TButton *Button4;
	TEdit *Edit4;
	TComboBox *ComboBox1;
	TImage *Image1;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Label6MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label6MouseLeave(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall Label1Click(TObject *Sender);
	void __fastcall Label6Click(TObject *Sender);
	void __fastcall Label2MouseLeave(TObject *Sender);
	void __fastcall Label2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Edit4KeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall Edit4Change(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm19(TComponent* Owner);
  	int select, soni;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm19 *Form19;
//---------------------------------------------------------------------------
#endif
