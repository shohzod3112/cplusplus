//---------------------------------------------------------------------------

#ifndef Yangi_adabiyot_qoshishH
#define Yangi_adabiyot_qoshishH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <pngimage.hpp>
//---------------------------------------------------------------------------
class TyangiadabiyotForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *KatPanel;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	TImage *Image1;
	TSpeedButton *SpeedButton7;
	TLabel *Label1;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SpeedButton7Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TyangiadabiyotForm(TComponent* Owner, int x);
	int N;
    String Vaqt;
};
//---------------------------------------------------------------------------
extern PACKAGE TyangiadabiyotForm *yangiadabiyotForm;
//---------------------------------------------------------------------------
#endif
