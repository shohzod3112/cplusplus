//---------------------------------------------------------------------------

#ifndef kirishH
#define kirishH
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
class TkirishForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TImage *Image1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TComboBox *ComboBox1;
	TPanel *LoginPanel;
	TLabel *Label6;
	TLabel *Label7;
	TSpeedButton *kirishSpeedButton;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton4;
	TImage *AvtorlashtirishImage;
	TImage *Image3;
	TEdit *LoginEdit;
	TEdit *ParolEdit;
	TPanel *Panel3;
	TLabel *BiletLabel;
	TPanel *MainkirishPanel;
	TLabel *MainLabel;
	TSpeedButton *FoydalanuvchilarSpeedButton;
	TSpeedButton *adabiyotlarSpeedButton;
	TSpeedButton *BuyurtmaSpeedButton;
	TSpeedButton *HujjatSpeedButton;
	TSpeedButton *kataloglashtirishSpeedButton;
	TSpeedButton *aboutSpeedButton;
	TLabel *Label1;
	TTimer *Timer1;
	void __fastcall kirishSpeedButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
	void __fastcall aboutSpeedButtonClick(TObject *Sender);
	void __fastcall FoydalanuvchilarSpeedButtonClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TkirishForm(TComponent* Owner);
	int s;
	String Vaqt, soat, minut, sekund;
	TStringList * t;
};
//---------------------------------------------------------------------------
extern PACKAGE TkirishForm *kirishForm;
//---------------------------------------------------------------------------
#endif
