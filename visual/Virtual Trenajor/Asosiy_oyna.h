//---------------------------------------------------------------------------

#ifndef Asosiy_oynaH
#define Asosiy_oynaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TAsosiyoynaForm : public TForm
{
__published:	// IDE-managed Components
	TScrollBox *ScrollBox1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
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
	TLabel *Label20;
	TLabel *Label21;
	TLabel *Label22;
	TLabel *Label23;
	TLabel *Label24;
	TLabel *Label25;
	TLabel *Label26;
	TLabel *Label27;
	TLabel *L700;
	TLabel *L710;
	TLabel *L850;
	TLabel *L856;
	TLabel *L901;
	TLabel *L970;
	TLabel *Label34;
	TLabel *Label35;
	TLabel *Label36;
	TLabel *Label37;
	TLabel *L710q;
	TLabel *L856E;
	TLabel *L970K;
	TLabel *L920;
	TLabel *L900;
	TLabel *L900A;
	TImage *Image3;
	TLabel *Label46;
	TLabel *L850A;
	TLabel *L901X;
	TLabel *L927;
	TLabel *L920A;
	TLabel *L927A;
	TLabel *Label43;
	TLabel *Label52;
	TLabel *Label53;
	TLabel *Label54;
	TLabel *Label55;
	TLabel *Label56;
	TLabel *Label57;
	TLabel *Label58;
	TLabel *Label59;
	TLabel *Label60;
	TLabel *Label61;
	TLabel *Label62;
	TLabel *Label63;
	TLabel *Label64;
	TLabel *Label65;
	TLabel *Label66;
	TLabel *Label67;
	TLabel *Label68;
	TLabel *Label69;
	TLabel *L700boshqa;
	TImage *Image5;
	TSpeedButton *SpeedButton16;
	TSpeedButton *SpeedButton17;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton18;
	TSpeedButton *SpeedButton19;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton20;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton21;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton22;
	TSpeedButton *SpeedButton700;
	TSpeedButton *SpeedButton12;
	TSpeedButton *SpeedButton24;
	TSpeedButton *SpeedButton25;
	TSpeedButton *SpeedButton26;
	TSpeedButton *SpeedButton27;
	TSpeedButton *SpeedButton28;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton8;
	TSpeedButton *SpeedButton30;
	TSpeedButton *SpeedButton31;
	TSpeedButton *SpeedButton32;
	TSpeedButton *SpeedButton33;
	TSpeedButton *SpeedButton34;
	TSpeedButton *SpeedButton35;
	TSpeedButton *SpeedButton9;
	TSpeedButton *SpeedButton15;
	TSpeedButton *SpeedButton36;
	TSpeedButton *SpeedButton37;
	TSpeedButton *SpeedButton10;
	TSpeedButton *SpeedButton38;
	TSpeedButton *SpeedButton710;
	TSpeedButton *SpeedButton856;
	TSpeedButton *SpeedButton856E;
	TSpeedButton *SpeedButton970;
	TLabel *Label72;
	TLabel *Label50;
	TLabel *Label71;
	TSpeedButton *SpeedButton48;
	TLabel *L900F;
	TSpeedButton *SpeedButton29;
	TEdit *Edit9;
	TEdit *Edit10;
	TEdit *Edit11;
	TEdit *Edit12;
	TEdit *Edit13;
	TComboBox *ComboBox1;
	TEdit *Edit14;
	TEdit *Edit15;
	TEdit *Edit2;
	TEdit *Edit16;
	TEdit *Edit17;
	TEdit *Edit3;
	TEdit *Edit18;
	TEdit *Edit4;
	TEdit *Edit19;
	TEdit *Edit20;
	TEdit *Edit21;
	TEdit *Edit22;
	TEdit *Edit23;
	TEdit *Edit24;
	TEdit *Edit25;
	TMemo *Memo1;
	TEdit *Edit26;
	TEdit *Edit27;
	TEdit *Edit8;
	TEdit *Edit700;
	TEdit *Edit5E710;
	TComboBox *ComboBox850;
	TEdit *Edit856;
	TComboBox *ComboBox901;
	TButton *B900;
	TComboBox *ComboBox920;
	TComboBox *ComboBox927;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TPanel *Panel1;
	TImage *Image1;
	TSpeedButton *SpeedButton14;
	TSpeedButton *SpeedButton43;
	TSpeedButton *SpeedButton44;
	TSpeedButton *SpeedButton45;
	TSpeedButton *SpeedButton46;
	TSpeedButton *SpeedButton47;
	TImage *Image2;
	TLabel *Label74;
	TComboBox *ComboBox8;
	TComboBox *ComboBox6;
	TComboBox *ComboBox7;
	TEdit *Edit970;
	TStatusBar *StatusBar1;
	TSpeedButton *SpeedButtonboshqa;
	TSpeedButton *SpeedButton710q;
	TEdit *Edit710;
	TSpeedButton *SpeedButton50;
	TSpeedButton *SpeedButton51;
	TSpeedButton *SpeedButton850A;
	TEdit *Edit710p;
	TEdit *Edit850A;
	TSpeedButton *SpeedButton11;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SpeedButton16Click(TObject *Sender);
	void __fastcall SpeedButton17Click(TObject *Sender);
	void __fastcall SpeedButton20Click(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall ComboBox850Change(TObject *Sender);
	void __fastcall ComboBox920Change(TObject *Sender);
	void __fastcall ComboBox927Change(TObject *Sender);
	void __fastcall Memo1Change(TObject *Sender);
	void __fastcall Label24MouseLeave(TObject *Sender);
	void __fastcall Label24MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall SpeedButton21Click(TObject *Sender);
	void __fastcall SpeedButton24Click(TObject *Sender);
	void __fastcall SpeedButton25Click(TObject *Sender);
	void __fastcall SpeedButton27Click(TObject *Sender);
	void __fastcall SpeedButton29Click(TObject *Sender);
	void __fastcall SpeedButton33Click(TObject *Sender);
	void __fastcall SpeedButton34Click(TObject *Sender);
	void __fastcall SpeedButton38Click(TObject *Sender);
	void __fastcall SpeedButtonboshqaClick(TObject *Sender);
	void __fastcall SpeedButton970Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Label24Click(TObject *Sender);
	void __fastcall ComboBox8Change(TObject *Sender);
	void __fastcall SpeedButton700Click(TObject *Sender);
	//void __fastcall ](TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TAsosiyoynaForm(TComponent* Owner,int x);
   //	String __fastcall URL(String x);
	int N,  soni, select;
};
//---------------------------------------------------------------------------
extern PACKAGE TAsosiyoynaForm *AsosiyoynaForm;
//---------------------------------------------------------------------------
#endif
