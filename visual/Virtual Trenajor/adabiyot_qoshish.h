//---------------------------------------------------------------------------

#ifndef adabiyot_qoshishH
#define adabiyot_qoshishH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TadabiyotqoshishForm : public TForm
{
__published:	// IDE-managed Components
	TSpeedButton *SpeedButton8;
	TSpeedButton *SpeedButton9;
	TSpeedButton *SpeedButton10;
	TSpeedButton *SpeedButton11;
	TScrollBox *ScrollBox1;
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
	TLabel *IshchiLabel;
	TLabel *KatalogLabel;
	TImage *Image1;
	TComboBox *IshchiComboBox;
	TComboBox *KatalogComboBox;
	TOpenDialog *OD;
	TPanel *ClientPanel;
	TScrollBox *FoydalanuvchiScrollBox;
	TLabel *Label11;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
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
	TLabel *photoLabel;
	TLabel *Label3;
	TLabel *Label4;
	TButton *photoButton;
	TButton *BackButton;
	TButton *ClearButton;
	TComboBox *JinsiComboBox;
	TComboBox *GuruhComboBox;
	TComboBox *KafedraComboBox;
	TComboBox *KategoriyaComboBox;
	TComboBox *MuassasaComboBox;
	TComboBox *FakultetComboBox;
	TComboBox *KursComboBox;
	TEdit *passwordEdit;
	TEdit *ManzilEdit;
	TEdit *pochtaEdit;
	TEdit *tugilganEdit;
	TEdit *PassportEdit;
	TEdit *TelEdit;
	TEdit *biletEdit;
	TEdit *famEdit;
	TButton *AddButton;
	TPanel *FoydalanuvchiPanel;
	TSpeedButton *FoydalanuvhchiSpeedButton;
	TLabel *Label1;
	TLabel *Label12;
	TLabel *Label28;
	TButton *Button1;
	TEdit *Edit6;
	TEdit *Edit7;
	TLabel *AddFoydalanuvchiLabel;
	TPanel *KatPanel;
	TLabel *AddKadabiyotLabel;
	TComboBox *ComboBox3;
	TComboBox *ComboBox4;
	TComboBox *ComboBox5;
	TComboBox *ComboBox6;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TLabel *Label2;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton13;
	TSpeedButton *SpeedButton15;
	TSpeedButton *SpeedButton16;
	TSpeedButton *SpeedButton21;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall AddFoydalanuvchiLabelClick(TObject *Sender);
	void __fastcall ExitImageClick(TObject *Sender);
	void __fastcall FoydalanuvhchiSpeedButtonClick(TObject *Sender);
	void __fastcall photoButtonClick(TObject *Sender);
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall JinsiComboBoxChange(TObject *Sender);
	void __fastcall KategoriyaComboBoxChange(TObject *Sender);
	void __fastcall FakultetComboBoxChange(TObject *Sender);
	void __fastcall KursComboBoxChange(TObject *Sender);
	void __fastcall GuruhComboBoxChange(TObject *Sender);
	void __fastcall biletEditKeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall famEditKeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall passwordEditKeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall ManzilEditKeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall pochtaEditKeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall tugilganEditKeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall PassportEditKeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall TelEditKeyPress(TObject *Sender, wchar_t &Key);
	void __fastcall AddKadabiyotLabelClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TadabiyotqoshishForm(TComponent* Owner, int x);
	int N;
};
//---------------------------------------------------------------------------
extern PACKAGE TadabiyotqoshishForm *adabiyotqoshishForm;
//---------------------------------------------------------------------------
#endif
