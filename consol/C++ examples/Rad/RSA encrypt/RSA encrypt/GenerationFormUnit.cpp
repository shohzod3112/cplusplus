//---------------------------------------------------------------------------

#include <fmx.h>
#include <ctime>
#pragma hdrstop

#include "GenerationFormUnit.h"
#include "EncryptionFormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TGenerationForm *GenerationForm;
//---------------------------------------------------------------------------
__fastcall TGenerationForm::TGenerationForm(TComponent* Owner)
	: TForm(Owner)
{
   	TrackBar1Tracking(TrackBar1);
	for(int i = 2; i <= 10000; i++){
		if(!prime[i] && i*i <= 10000){
			for(int j = i*i; j <= 10000; j+=i){
				prime[j] = true;
			}
		}
	}
	lena = 0;
	for(int i = 2; i <= 10000; i++){
		if(!prime[i]) a[lena++] = i;
	}
	cnt = 1;
	letterIndex = 1;
	index = 1;
}
//---------------------------------------------------------------------------
void __fastcall TGenerationForm::GenerationClick(TObject *Sender)
{
  /*	for(int i = 1; i <= 9; i++){
		TComponent *T = (TComponent*)FindComponent("Step"+IntToStr(i));
		if(T->Tag == 1){
			((TLabel*)T)->Opacity = 0;
		}
		else if(T->Tag == 2){
			((TEdit*)T)->Opacity = 0;
		}
	}*/
	srand(time(0));
	d = rand()%lena;
	d = a[d];
	p = StrToInt(Prime1->Text);
	q = StrToInt(Prime2->Text);
	n = p*q;
	Step1->Text = "1. Define n as the result of multiplying Prime1 on Prime2 n = Prime1*Prime2 = " + Prime1->Text + "*" + Prime2->Text + "=" + IntToStr(p*q);
	f = (p-1)*(q-1);
	k = f+1;
	Step2->Text = "2. We choose a random number, which we call d. This number must be relatively prime with multiplication (Prime1-1)*(Prime2-1) = " + IntToStr(f) + ". Let's choose as d = " + IntToStr(d);
	while(k%d!=0){
		k += f;
	}
	e = k/d;
	Step3->Text = "3. We define a number e for which the following relation  (e*d) mod ((Prime1-1)*(Prime2-1)) = 1 is true. For exaple e = " + IntToStr(e);
	Step4->Text = "4. We call the public key e and n, and the secret key - d and n";
	cnt = 1;
   //	Encrypt->Opacity = 0;
	TFloatAnimation *A = (TFloatAnimation*)FindComponent("FloatAnimation" + IntToStr(cnt));
	cnt ++;
	A->PropertyName = "Opacity";
	A->StartValue = 0;
	A->StopValue = 1;
	//A->Duration = 1;
	A->Start();
}
//---------------------------------------------------------------------------

void __fastcall TGenerationForm::FloatAnimation1Finish(TObject *Sender)
{
	if(cnt == 10) {
        Button1->Visible = true;
		return ;
    }
	if(cnt == 8) {
		Step8->Text = "Public keys: e = " + IntToStr(e) + " and n = " + IntToStr(n);
	}
	if(cnt == 9) {
		Step9->Text = "Private keys: d = " + IntToStr(d) + " and n = " + IntToStr(n);
	}
	TFloatAnimation *A = (TFloatAnimation*)FindComponent("FloatAnimation" + IntToStr(cnt));
	cnt ++;
	A->PropertyName = "Opacity";
	A->StartValue = 0;
	A->StopValue = 1;
	//A->Duration = 1;
	A->Start();
}
//---------------------------------------------------------------------------
String __fastcall TGenerationForm::ToUpperCase(String a){
   for(int i=1;i<=a.Length();i++)
	{
		if(a[i]>='a'&&a[i]<='z') a[i] = a[i]-'a'+'A';
	}
	return a;
}
//---------------------------------------------------------------------------
int __fastcall TGenerationForm::BinPow(int a, int n, int M)
{
	if(n == 0) return 1;
	if(n&1) return (((a%M)*(BinPow(a, n-1, M))%M)%M);
	int y = BinPow(a, n>>1, M)%M;
	return ((y%M)*(y%M))%M;
}
void __fastcall TGenerationForm::TimerTimer(TObject *Sender)
{
	// ProcessAnimation->Inverse = !ProcessAnimation->Inverse;
   //	ProcessAnimation->Start();
  //	Timer->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TGenerationForm::TrackBar1Tracking(TObject *Sender)
{
	for(int i = 1; i <= 9; i++){
		TFloatAnimation *t = (TFloatAnimation*)FindComponent("FloatAnimation" + IntToStr(i));
		t->Duration = TrackBar1->Value;
	}

}
//---------------------------------------------------------------------------

void __fastcall TGenerationForm::Button1Click(TObject *Sender)
{
	qop = true;
    EncryptionForm->Show();
}
//---------------------------------------------------------------------------

