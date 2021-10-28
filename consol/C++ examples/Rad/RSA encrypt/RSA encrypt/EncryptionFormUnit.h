//---------------------------------------------------------------------------

#ifndef EncryptionFormUnitH
#define EncryptionFormUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <System.Rtti.hpp>
//---------------------------------------------------------------------------
class TEncryptionForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Header;
	TLabel *Label1;
	TTrackBar *TrackBar1;
	TButton *Encrypt;
	TFloatAnimation *FloatAnimation10;
	TRectangle *Pointer;
	TFloatAnimation *FloatAnimation11;
	TLabel *Step8;
	TFloatAnimation *FloatAnimation8;
	TEdit *Step9;
	TFloatAnimation *FloatAnimation9;
	TStringGrid *StringGrid1;
	TEdit *E;
	TFloatAnimation *FloatAnimation1;
	TEdit *N;
	TFloatAnimation *FloatAnimation2;
	TLabel *Label2;
	TFloatAnimation *FloatAnimation3;
	TLabel *Process;
	TFloatAnimation *ProcessAnimation;
	TLabel *Label3;
	TFloatAnimation *FloatAnimation4;
	TLabel *Label4;
	TLabel *Label5;
	TFloatAnimation *FloatAnimation5;
	TEdit *D;
	TFloatAnimation *FloatAnimation6;
	TEdit *N1;
	TFloatAnimation *FloatAnimation7;
	TLabel *Label6;
	TFloatAnimation *FloatAnimation12;
	TEdit *Text;
	TFloatAnimation *FloatAnimation13;
	TButton *Decrypt;
	TFloatAnimation *FloatAnimation14;
	TStringGrid *StringGrid2;
	TLabel *Process2;
	TFloatAnimation *FloatAnimation15;
	TFloatAnimation *FloatAnimation16;
	TRectangle *Pointer2;
	TFloatAnimation *FloatAnimation17;
	TStringGrid *StringGrid3;
	TStringGrid *StringGrid4;
	TButton *Button1;
	void __fastcall EncryptClick(TObject *Sender);
	void __fastcall ProcessAnimationFinish(TObject *Sender);
	void __fastcall FloatAnimation4Finish(TObject *Sender);
	void __fastcall DecryptClick(TObject *Sender);
	void __fastcall FloatAnimation15Finish(TObject *Sender);
	void __fastcall FloatAnimation16Finish(TObject *Sender);
	void __fastcall TrackBar1Tracking(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TEncryptionForm(TComponent* Owner);
	String __fastcall ToUpperCase(String text);
	int __fastcall BinPow(int a, int n, int M);
	void __fastcall konstruktor();
	int cnt, n, e,d, p, q, k, f, letterIndex, a[20000], index, lena;
bool prime[20000], as;
char v[100];
String ber;
String s, copy;
int lenar;
};
//---------------------------------------------------------------------------
extern PACKAGE TEncryptionForm *EncryptionForm;

//---------------------------------------------------------------------------
#endif
