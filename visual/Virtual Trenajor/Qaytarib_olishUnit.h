//---------------------------------------------------------------------------

#ifndef Qaytarib_olishUnitH
#define Qaytarib_olishUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <pngimage.hpp>
//---------------------------------------------------------------------------
class TQaytarib_olishForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *LeftPanel;
	TImage *ExitImage;
	TPanel *BottomPanel;
	TLabel *Label10;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton12;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton8;
	TSpeedButton *SpeedButton9;
	TPanel *TopPanel;
	TLabel *KatalogLabel;
	TImage *Image1;
	TLabel *ErrorLabel;
	TComboBox *IshchiComboBox;
	TScrollBox *ClientScrollBox3;
	TLabel *Label11;
	TLabel *Label16;
	TLabel *Label17;
	TSpeedButton *QidirishSpeedButton;
	TSpeedButton *SpeedButton14;
	TEdit *biletEdit;
	TEdit *famEdit;
	TLabel *qaytarishLabel;
	TTimer *IshchiTimer;
	TScrollBox *ClientScrollBox4;
	TImage *Image4;
	TLabel *Label32;
	TLabel *Label33;
	TLabel *Label34;
	TLabel *Label35;
	TLabel *Label36;
	TLabel *sanaLabel;
	TLabel *timeLabel;
	TSpeedButton *tanlanganSpeedButton;
	TSpeedButton *SpeedButton13;
	TPanel *FoydalanuvchiPanel;
	TImage *Image3;
	TLabel *Label18;
	TLabel *Label19;
	TLabel *Label20;
	TLabel *Label21;
	TLabel *Label22;
	TLabel *Label23;
	TLabel *Label24;
	TLabel *Label25;
	TLabel *Label26;
	TLabel *Label27;
	TLabel *Label28;
	TLabel *Label29;
	TLabel *Label30;
	TLabel *Label31;
	TCheckBox *tanlanganCheckBox;
	TLabel *biletLabel;
	void __fastcall IshchiComboBoxMouseEnter(TObject *Sender);
	void __fastcall IshchiComboBoxSelect(TObject *Sender);
	void __fastcall IshchiTimerTimer(TObject *Sender);
	void __fastcall QidirishSpeedButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall ExitImageClick(TObject *Sender);
	void __fastcall SpeedButton8Click(TObject *Sender);
	void __fastcall tanlanganCheckBoxClick(TObject *Sender);
	void __fastcall tanlanganSpeedButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TQaytarib_olishForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TQaytarib_olishForm *Qaytarib_olishForm;
//---------------------------------------------------------------------------
#endif
