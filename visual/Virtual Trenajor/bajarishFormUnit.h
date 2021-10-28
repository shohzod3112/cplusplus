//---------------------------------------------------------------------------

#ifndef bajarishFormUnitH
#define bajarishFormUnitH
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
class TbajarishForm : public TForm
{
__published:	// IDE-managed Components
	TScrollBox *ClientScrollBox;
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
	TPanel *TopPanel;
	TLabel *KatalogLabel;
	TImage *Image1;
	TComboBox *IshchiComboBox;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton8;
	TSpeedButton *SpeedButton9;
	TTimer *IshchiTimer;
	TLabel *ErrorLabel;
	TLabel *armLabel;
	TSpeedButton *bajarishSpeedButton;
	TImage *Image2;
	TLabel *Label1;
	TLabel *Label13;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TCheckBox *needCheckBox;
	TButton *ornatButton;
	TComboBox *searchComboBox;
	TSpeedButton *SpeedButton11;
	TScrollBox *ClientScrollBox2;
	TComboBox *inventarComboBox;
	TComboBox *ComboBox2;
	TEdit *sanaEdit;
	TLabel *z;
	TLabel *Label12;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label48;
	TLabel *Label49;
	TLabel *Label50;
	TLabel *Label51;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TSpeedButton *bajarSpeedButton;
	TSpeedButton *KitobxonSpeedButton;
	TSpeedButton *PechatSpeedButton;
	TSpeedButton *SpeedButton15;
	TLabel *bajarishLabel;
	void __fastcall ExitImageClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall IshchiTimerTimer(TObject *Sender);
	void __fastcall IshchiComboBoxMouseEnter(TObject *Sender);
	void __fastcall IshchiComboBoxSelect(TObject *Sender);
	void __fastcall SpeedButton12Click(TObject *Sender);
	void __fastcall needCheckBoxClick(TObject *Sender);
	void __fastcall searchComboBoxSelect(TObject *Sender);
	void __fastcall ornatButtonClick(TObject *Sender);
	void __fastcall bajarishSpeedButtonClick(TObject *Sender);
	void __fastcall KitobxonSpeedButtonClick(TObject *Sender);
	void __fastcall inventarComboBoxChange(TObject *Sender);
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall PechatSpeedButtonClick(TObject *Sender);
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall bajarSpeedButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TbajarishForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TbajarishForm *bajarishForm;
//---------------------------------------------------------------------------
#endif
