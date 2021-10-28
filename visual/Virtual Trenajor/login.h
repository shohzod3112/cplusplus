//---------------------------------------------------------------------------

#ifndef loginH
#define loginH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TloginForm : public TForm
{
__published:	// IDE-managed Components
	TScrollBox *ScrollBox1;
	TPanel *Panel1;
	TLabel *ErrorLabel;
	TImage *Image1;
	TImage *Image2;
	TLabel *IshchiLabel;
	TLabel *KatalogLabel;
	TPanel *Panel2;
	TLabel *Label2;
	TSpeedButton *KitobxonSpeedButton;
	TSpeedButton *ElektronSpeedButton;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton7;
	TComboBox *IshchiComboBox;
	TComboBox *KatalogComboBox;
	TTimer *IshchiTimer;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall ElektronSpeedButtonClick(TObject *Sender);
	void __fastcall IshchiTimerTimer(TObject *Sender);
	void __fastcall IshchiComboBoxMouseEnter(TObject *Sender);
	void __fastcall KitobxonSpeedButtonClick(TObject *Sender);
	void __fastcall KatalogComboBoxMouseEnter(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall KatalogComboBoxSelect(TObject *Sender);
	void __fastcall IshchiComboBoxSelect(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TloginForm(TComponent* Owner, int x);
	int N;
};
//---------------------------------------------------------------------------
extern PACKAGE TloginForm *loginForm;
//---------------------------------------------------------------------------
#endif
