//---------------------------------------------------------------------------

#ifndef MainFormUnitH
#define MainFormUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Layouts.hpp>
#include <System.Rtti.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Objects.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Header;
	TLabel *EnterMainKeys;
	TEdit *Prime1;
	TLabel *And;
	TEdit *Prime2;
	TButton *Generation;
	TLabel *Step1;
	TLabel *Step2;
	TLabel *Step3;
	TLabel *Step4;
	TLabel *Step5;
	TLabel *Step6;
	TLabel *Step7;
	TLabel *Step8;
	TEdit *Step9;
	TButton *Encrypt;
	TStringGrid *StringGrid1;
	TFloatAnimation *FloatAnimation3;
	TFloatAnimation *FloatAnimation4;
	TFloatAnimation *FloatAnimation5;
	TFloatAnimation *FloatAnimation6;
	TFloatAnimation *FloatAnimation7;
	TFloatAnimation *FloatAnimation8;
	TFloatAnimation *FloatAnimation9;
	TFloatAnimation *FloatAnimation10;
	TFloatAnimation *FloatAnimation1;
	TFloatAnimation *FloatAnimation2;
	TRectangle *Pointer;
	TFloatAnimation *FloatAnimation11;
	TLabel *Process;
	TTimer *Timer;
	TFloatAnimation *ProcessAnimation;
	TButton *Decrypt;
	TLabel *Step10;
	TFloatAnimation *FloatAnimation12;
	TStringGrid *StringGrid2;
	TLabel *Process2;
	TFloatAnimation *FloatAnimation13;
	TFloatAnimation *FloatAnimation14;
	TTrackBar *TrackBar1;
	TLabel *Label1;
	void __fastcall EncryptClick(TObject *Sender);
	void __fastcall GenerationClick(TObject *Sender);
	void __fastcall FloatAnimation1Finish(TObject *Sender);
	String __fastcall ToUpperCase(String text);
	int __fastcall BinPow(int a, int n, int M);
	void __fastcall TimerTimer(TObject *Sender);
	void __fastcall ProcessAnimationFinish(TObject *Sender);
	void __fastcall DecryptClick(TObject *Sender);
	void __fastcall FloatAnimation12Finish(TObject *Sender);
	void __fastcall FloatAnimation13Finish(TObject *Sender);
	void __fastcall FloatAnimation14Finish(TObject *Sender);
	void __fastcall TrackBar1Tracking(TObject *Sender);
	void __fastcall Decrypt1Click(TObject *Sender);
	void __fastcall FloatAnimation10Finish(TObject *Sender);
	void __fastcall FloatAnimation15Finish(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
int cnt, n, e,d, p, q, k, f, letterIndex, a[20000], index, lena;
bool prime[20000], as;
char v[100];
String ber;
String s;
//---------------------------------------------------------------------------
#endif
