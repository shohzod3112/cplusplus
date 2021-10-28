//---------------------------------------------------------------------------

#ifndef GenerationFormUnitH
#define GenerationFormUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TGenerationForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *And;
	TLabel *EnterMainKeys;
	TButton *Generation;
	TLabel *Header;
	TEdit *Prime1;
	TEdit *Prime2;
	TLabel *Step1;
	TFloatAnimation *FloatAnimation1;
	TLabel *Step2;
	TFloatAnimation *FloatAnimation2;
	TLabel *Step3;
	TFloatAnimation *FloatAnimation3;
	TLabel *Step4;
	TFloatAnimation *FloatAnimation4;
	TLabel *Step5;
	TFloatAnimation *FloatAnimation5;
	TLabel *Step6;
	TFloatAnimation *FloatAnimation6;
	TLabel *Step7;
	TFloatAnimation *FloatAnimation7;
	TTimer *Timer;
	TLabel *Step8;
	TFloatAnimation *FloatAnimation8;
	TLabel *Step9;
	TFloatAnimation *FloatAnimation9;
	TLabel *Label1;
	TTrackBar *TrackBar1;
	TButton *Button1;
	void __fastcall GenerationClick(TObject *Sender);
	void __fastcall FloatAnimation1Finish(TObject *Sender);
	void __fastcall TimerTimer(TObject *Sender);
	String __fastcall ToUpperCase(String text);
	int __fastcall BinPow(int a, int n, int M);
	void __fastcall TrackBar1Tracking(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TGenerationForm(TComponent* Owner);
	int cnt, n, e,d, p, q, k, f, letterIndex, a[20000], index, lena;
bool prime[20000], as;
char v[100];
String ber;
String s;
bool qop;
};
//---------------------------------------------------------------------------
extern PACKAGE TGenerationForm *GenerationForm;


//---------------------------------------------------------------------------
#endif
