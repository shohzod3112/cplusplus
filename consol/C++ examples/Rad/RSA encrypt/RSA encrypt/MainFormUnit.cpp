//---------------------------------------------------------------------------

#include <fmx.h>
#include <ctime>
#pragma hdrstop

#include "MainFormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
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
void __fastcall TMainForm::EncryptClick(TObject *Sender)
{
	StringGrid1->Visible = true;
	Pointer->Visible = true;
	s = Step9->Text;
	int length = s.Length();
	s = ToUpperCase(s);
	TStringColumn *t[42];
	for(int i = 1; i <= length; i++){
		t[i-1] = new TStringColumn(this);
		t[i-1]->Width = 40;
		StringGrid1->AddObject(t[i-1]);
		StringGrid1->Cells[i-1][0] = s[i];
	}
	int y = s[letterIndex] - 'A' + 1;
	ber = IntToStr(BinPow(y, e, n));
	Process->Text = "C1 = (Indexof(" + String(s[letterIndex]) + ")^e) % n = " + IntToStr(y) + "^" + IntToStr(e) + " % "+IntToStr(n) + " = " + ber;
	letterIndex++;
	ProcessAnimation->Inverse = false;
	if(letterIndex <= s.Length()) ProcessAnimation->Start();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::GenerationClick(TObject *Sender)
{
	for(int i = 1; i <= 9; i++){
		TComponent *T = (TComponent*)FindComponent("Step"+IntToStr(i));
		if(T->Tag == 1){
			((TLabel*)T)->Opacity = 0;
		}
		else if(T->Tag == 2){
			((TEdit*)T)->Opacity = 0;
		}
	}
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
	Encrypt->Opacity = 0;
	TFloatAnimation *A = (TFloatAnimation*)FindComponent("FloatAnimation" + IntToStr(cnt));
	cnt ++;
	if(cnt == 13) cnt = 15;
	A->PropertyName = "Opacity";
	A->StartValue = 0;
	A->StopValue = 1;
	//A->Duration = 1;
	A->Start();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FloatAnimation1Finish(TObject *Sender)
{
	TFloatAnimation *A = (TFloatAnimation*)FindComponent("FloatAnimation" + IntToStr(cnt));
	cnt ++;
	if(cnt == 13) cnt = 15;
	A->PropertyName = "Opacity";
	A->StartValue = 0;
	A->StopValue = 1;
	//A->Duration = 1;
	A->Start();
}
//---------------------------------------------------------------------------
String __fastcall TMainForm::ToUpperCase(String a){
   for(int i=1;i<=a.Length();i++)
	{
		if(a[i]>='a'&&a[i]<='z') a[i] = a[i]-'a'+'A';
	}
	return a;
}
//---------------------------------------------------------------------------
int __fastcall TMainForm::BinPow(int a, int n, int M)
{
	if(n == 0) return 1;
	if(n&1) return (((a%M)*(BinPow(a, n-1, M))%M)%M);
	int y = BinPow(a, n>>1, M)%M;
	return ((y%M)*(y%M))%M;
}
void __fastcall TMainForm::TimerTimer(TObject *Sender)
{
	ProcessAnimation->Inverse = !ProcessAnimation->Inverse;
	ProcessAnimation->Start();
	Timer->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::ProcessAnimationFinish(TObject *Sender)
{
	if(letterIndex > s.Length()){
		int q = s[letterIndex-1]-'A'+1;
		StringGrid1->Cells[letterIndex-2][0] = IntToStr(BinPow(q, e, n));
		Decrypt->Opacity = 1;
		return ;
	}
	int y = s[letterIndex] - 'A' + 1;
	int q = s[letterIndex-1]-'A'+1;
	//ShowMessage(n);
	if(ProcessAnimation->Inverse)
	{
		StringGrid1->Cells[letterIndex-2][0] = ber;
		if(s[letterIndex] == ' ') {
			ber = " ";
			Process->Text = "Empty";
		}
		else {
			ber = IntToStr(BinPow(y, e, n));

			Process->Text = "C"+IntToStr(letterIndex) + " = (Indexof(" + String(s[letterIndex]) + ")^e) % n = " + IntToStr(y) + "^" + IntToStr(e) + " % "+IntToStr(n) + " = " + ber;
			//ShowMessage(letterIndex);
		}

		ProcessAnimation->Inverse = !ProcessAnimation->Inverse;
		Pointer->Position->X += 40;

		if(letterIndex <= s.Length()) ProcessAnimation->Start();
		letterIndex++;
	}
	else Timer->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::DecryptClick(TObject *Sender)
{
	FloatAnimation12->Start();
	StringGrid2->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FloatAnimation12Finish(TObject *Sender)
{

	Pointer->Visible = true;
	Pointer->Opacity = 1;
	TStringColumn *t[42];
	if(!as)
	{
		Pointer->Position->X = 25;
		Pointer->Position->Y = 555;
		for(int i = 0; i < s.Length(); i++){
			t[i] = new TStringColumn(this);
			t[i]->Width = 40;
			StringGrid2->AddObject(t[i]);
			StringGrid2->Cells[i][0] = StringGrid1->Cells[i][0];
		}
	}
	/*else
	{
		String g = Ed->Text;
		String f[1000];
		int y = 1;
		for(int i = 1; i <= g.Length(); i++)
		{
			if(g[i] == ','){
				y++;
			}
			else{
				f[y] += g[i];
            }
		}
        for(int i = 0; i < s.Length(); i++){
			t[i] = new TStringColumn(this);
			t[i]->Width = 30;
			StringGrid2->AddObject(t[i]);
			StringGrid2->Cells[i][0] = f[i+1];
		}
	} */
	String z = StringGrid2->Cells[index-1][0];
	if(z == " "){
		Process2->Text = "Empty";
		v[index] = ' ';
	}
	else {
		int h = BinPow(StrToInt(z), d, n);
		Process2->Text = "M"+IntToStr(index)+" = (C" + IntToStr(index) + "^d) % n = " + z + "^" + IntToStr(d) + " % "+IntToStr(n) + " = " + h + " = " + char(h+'A'-1);
		v[index] = char(h+'A'-1);
	}
	FloatAnimation13->Start();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FloatAnimation13Finish(TObject *Sender)
{
	//Sleep(1000);
	FloatAnimation14->Start();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FloatAnimation14Finish(TObject *Sender)
{

	StringGrid2->Cells[index-1][0] = v[index];
	Pointer->Position->X+=40;
	if(index == s.Length()) return ;
	index++;
	String z = StringGrid2->Cells[index-1][0];
	if(z == " "){
		Process2->Text = "Empty";
		v[index] = ' ';
	}
	else {
		int h = BinPow(StrToInt(z), d, n);
		Process2->Text = "M"+IntToStr(index)+" = (C" + IntToStr(index) + "^d) % n = (" + z + "^" + IntToStr(d) + ") % "+IntToStr(n) + " = " + h + " = " + char(h+'A'-1);
		v[index] = char(h+'A'-1);
	}
	FloatAnimation13->Start();
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::TrackBar1Tracking(TObject *Sender)
{
    for(int i = 1; i <= 7; i++){
		TFloatAnimation *t = (TFloatAnimation*)FindComponent("FloatAnimation" + IntToStr(i));
		t->Duration = TrackBar1->Value;
	}
	ProcessAnimation->Duration = TrackBar1->Value;
	FloatAnimation13->Duration = TrackBar1->Value;
	//FloatAnimation14->Duration = TrackBar1->Value;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Decrypt1Click(TObject *Sender)
{
	as = true;
	Step10->Margins->Top = 100;
	StringGrid2->Position->Y = 450;
	Process2->Margins->Top = 250;
	DecryptClick(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FloatAnimation10Finish(TObject *Sender)
{
  //	FloatAnimation15->Start();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FloatAnimation15Finish(TObject *Sender)
{
  //	FloatAnimation16->Start();
}
//---------------------------------------------------------------------------

