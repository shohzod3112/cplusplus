//---------------------------------------------------------------------------

#ifndef SarlavxaH
#define SarlavxaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <pngimage.hpp>
//---------------------------------------------------------------------------
class TForm15 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label9;
	TLabel *Label8;
	TLabel *Label7;
	TLabel *Label6;
	TLabel *Label5;
	TLabel *Label4;
	TLabel *Label3;
	TLabel *Label2;
	TLabel *Label12;
	TLabel *Label11;
	TLabel *Label10;
	TLabel *Label1;
	TSpeedButton *SpeedButton27;
	TSpeedButton *SpeedButton1;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TEdit *Edit5;
	TEdit *Edit4;
	TEdit *Edit3;
	TEdit *Edit2;
	TEdit *Edit1;
	TComboBox *ComboBox1;
	TButton *Button4;
	TButton *Button3;
	TImage *Image1;
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Label2MouseLeave(TObject *Sender);
	void __fastcall Label2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Label2Click(TObject *Sender);
	void __fastcall Edit3KeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall Edit1KeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall Label8MouseLeave(TObject *Sender);
	void __fastcall Label8MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Edit3Change(TObject *Sender);
	void __fastcall Edit1Change(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm15(TComponent* Owner);
		int select;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm15 *Form15;
//---------------------------------------------------------------------------
#endif
