//---------------------------------------------------------------------------

#ifndef FoydalnuvchiFormUnitH
#define FoydalnuvchiFormUnitH
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
class TFoydalnuvchiForm : public TForm
{
__published:	// IDE-managed Components
	TTimer *IshchiTimer;
	TPanel *LeftPanel;
	TImage *ExitImage;
	TPanel *LeftClientPanel;
	TLabel *Label10;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SearchSpeedButton;
	TSpeedButton *SpeedButton7;
	TLabel *Label1;
	TSpeedButton *SpeedButton1;
	TPanel *TopPanel;
	TImage *Image1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TComboBox *KatalogComboBox;
	TPanel *FoydalanuvchiPanel;
	TImage *Image2;
	TLabel *Label6;
	TLabel *Label14;
	TLabel *Label7;
	TLabel *Label15;
	TLabel *Label8;
	TLabel *Label16;
	TLabel *Label9;
	TLabel *Label17;
	TLabel *Label18;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label19;
	TLabel *Label13;
	TLabel *Label20;
	TLabel *TopshiriqLabel;
	TLabel *BiletLabel;
	TScrollBox *QidirishScrollBox;
	TPanel *NatijaPanel;
	TSpeedButton *SpeedButton10;
	TSpeedButton *BuyurtmaSpeedButton;
	TLabel *Label32;
	TLabel *Label33;
	TLabel *Label34;
	TLabel *Label35;
	TLabel *Label36;
	TLabel *Label37;
	TLabel *Label38;
	TLabel *Label39;
	TLabel *Label40;
	TLabel *Label41;
	TLabel *Label42;
	TLabel *Label43;
	TLabel *Label44;
	TCheckBox *BuyurtmaCheckBox;
	TLabel *Label45;
	TComboBox *ComboBox8;
	TLabel *Label46;
	TPanel *BuyurtmaPanel;
	TSpeedButton *SpeedButton12;
	TSpeedButton *SpeedButton14;
	TLabel *Label47;
	TLabel *Label48;
	TLabel *Label49;
	TLabel *Label50;
	TLabel *Label51;
	TEdit *Edit2;
	TLabel *BuyurtmaLabel;
	TCheckBox *CheckBox1;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TComboBox *ComboBox4;
	TComboBox *ComboBox5;
	TComboBox *ComboBox6;
	TComboBox *ComboBox7;
	TEdit *Edit1;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TLabel *muallifLabel;
	TLabel *Label22;
	TLabel *Label23;
	TLabel *sarlavxaLabel;
	TLabel *Label25;
	TLabel *Label26;
	TLabel *Label27;
	TLabel *Label28;
	TLabel *yilLabel;
	TLabel *Label30;
	TLabel *Label31;
	TEdit *MuallifEdit;
	TSpeedButton *QidirishSpeedButton;
	TEdit *SarlavhaEdit;
	TSpeedButton *SpeedButton13;
	TSpeedButton *SpeedButton16;
	TSpeedButton *SpeedButton21;
	TSpeedButton *SpeedButton8;
	TSpeedButton *SpeedButton9;
	TEdit *YilEdit;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall ExitImageClick(TObject *Sender);
	void __fastcall IshchiTimerTimer(TObject *Sender);
	void __fastcall KatalogComboBoxMouseEnter(TObject *Sender);
	void __fastcall SearchSpeedButtonClick(TObject *Sender);
	void __fastcall MuallifEditKeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall SarlavhaEditKeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall YilEditKeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall QidirishSpeedButtonClick(TObject *Sender);
	void __fastcall BuyurtmaSpeedButtonClick(TObject *Sender);
	void __fastcall KatalogComboBoxSelect(TObject *Sender);
	void __fastcall SpeedButton14Click(TObject *Sender);
	void __fastcall muallifLabelClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFoydalnuvchiForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFoydalnuvchiForm *FoydalnuvchiForm;
//---------------------------------------------------------------------------
#endif
