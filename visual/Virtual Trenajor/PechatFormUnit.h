//---------------------------------------------------------------------------

#ifndef PechatFormUnitH
#define PechatFormUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TpechatForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *pechatPanel;
	TLabel *Label51;
	TLabel *Label1;
	TLabel *z;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *sanaLabel;
	TLabel *Label8;
	TSpeedButton *PechatSpeedButton;
	TSpeedButton *SpeedButton15;
	TPanel *bajarPanel;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
	TLabel *Label18;
	TLabel *Label19;
	TLabel *Label9;
	TLabel *sanaL;
	TLabel *qaytarLabel;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	void __fastcall SpeedButton15Click(TObject *Sender);
	void __fastcall PechatSpeedButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SpeedButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TpechatForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TpechatForm *pechatForm;
//---------------------------------------------------------------------------
#endif
