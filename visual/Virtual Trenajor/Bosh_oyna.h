//---------------------------------------------------------------------------

#ifndef Bosh_oynaH
#define Bosh_oynaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TBoshoynaForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TImage *Image1;
	TComboBox *ComboBox1;
	TPanel *Panel2;
	TLabel *Label6;
	TLabel *Label7;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton4;
	TImage *Image2;
	TImage *Image3;
	TEdit *Edit1;
	TEdit *Edit2;
	TPanel *MainPanel;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TLabel *MainLabel;
	TLabel *Label1;
	TLabel *Label8;
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TBoshoynaForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBoshoynaForm *BoshoynaForm;
//---------------------------------------------------------------------------
#endif
