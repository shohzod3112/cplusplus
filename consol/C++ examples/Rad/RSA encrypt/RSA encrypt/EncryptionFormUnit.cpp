//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "EncryptionFormUnit.h"
#include "GenerationFormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TEncryptionForm *EncryptionForm;
//---------------------------------------------------------------------------
__fastcall TEncryptionForm::TEncryptionForm(TComponent* Owner)
	: TForm(Owner)
{
	konstruktor();
}
//---------------------------------------------------------------------------
void __fastcall TEncryptionForm::EncryptClick(TObject *Sender)
{
	e = StrToInt(E->Text);
	n = StrToInt(N->Text);
	s = Step9->Text;
	StringGrid1->Visible = true;
	Pointer->Visible = true;
	s = Step9->Text;
	int length = s.Length();
	s = ToUpperCase(s);
	TStringColumn *t[42];
	TStringColumn *t1[42];
	Pointer->Position->X = 17;
	for(int i = 0; i < StringGrid1->ColumnCount; i++){
		StringGrid1->Columns[i]->Free();
	}
	for(int i = 0; i < StringGrid3->ColumnCount; i++){
		StringGrid3->Columns[i]->Free();
	}
	ber = "";
	konstruktor();
	for(int i = 1; i <= length; i++){
		t[i-1] = new TStringColumn(this);
		t[i-1]->Width = 30;
		t1[i-1] = new TStringColumn(this);
		t1[i-1]->Width = 30;
		StringGrid1->AddObject(t[i-1]);
		StringGrid3->AddObject(t1[i-1]);
		StringGrid1->Cells[i-1][0] = s[i];
		StringGrid3->Cells[i-1][0] = "";
	}
	int y = s[letterIndex] - 'A' + 1;
	ber = IntToStr(BinPow(y, e, n));
	Process->Text = "C1 = (Indexof(" + String(s[letterIndex]) + ")^e) % n = " + IntToStr(y) + "^" + IntToStr(e) + " % "+IntToStr(n) + " = " + ber;
	if(letterIndex <= s.Length()) ProcessAnimation->Start();
}
//---------------------------------------------------------------------------
String __fastcall TEncryptionForm::ToUpperCase(String a){
   for(int i=1;i<=a.Length();i++)
	{
		if(a[i]>='a'&&a[i]<='z') a[i] = a[i]-'a'+'A';
	}
	return a;
}
int __fastcall TEncryptionForm::BinPow(int a, int n, int M)
{
	if(n == 0) return 1;
	if(n&1) return (((a%M)*(BinPow(a, n-1, M))%M)%M);
	int y = BinPow(a, n>>1, M)%M;
	return ((y%M)*(y%M))%M;
}
void __fastcall TEncryptionForm::ProcessAnimationFinish(TObject *Sender)
{
	FloatAnimation4->Start();
}
//---------------------------------------------------------------------------
void __fastcall TEncryptionForm::FloatAnimation4Finish(TObject *Sender)
{
	StringGrid3->Cells[letterIndex-1][0] = ber;
	letterIndex++;
	if(letterIndex > s.Length()) return ;
	int y = s[letterIndex] - 'A' + 1;
	ber = IntToStr(BinPow(y, e, n));
	Process->Text = "C1 = (Indexof(" + String(s[letterIndex]) + ")^e) % n = " + IntToStr(y) + "^" + IntToStr(e) + " % "+IntToStr(n) + " = " + ber;
	Pointer->Position->X += 30;
	ProcessAnimation->Start();
}
//---------------------------------------------------------------------------
void __fastcall TEncryptionForm::DecryptClick(TObject *Sender)
{
	TStringColumn *t[42];
	TStringColumn *t1[42];
	d = StrToInt(D->Text);
	n = StrToInt(N1->Text);
	s = Text->Text;
	lenar = 0;
	s = ToUpperCase(s);
	String c[100];
	Pointer2->Position->X = 17;
	for(int i = 0; i < StringGrid2->ColumnCount; i++){
		StringGrid2->Columns[i]->Free();
	}
	for(int i = 0; i < StringGrid4->ColumnCount; i++){
		StringGrid4->Columns[i]->Free();
	}
	for(int i = 0; i < s.Length(); i++){
		if(s[i+1] != ','){
			c[lenar] += s[i+1];
		}
		else lenar++;
	}
	lenar++;
	for(int i = 0; i < lenar; i++){
		t[i] = new TStringColumn(this);
		t[i]->Width = 30;
		t1[i] = new TStringColumn(this);
		t1[i]->Width = 30;
		StringGrid2->AddObject(t[i]);
		StringGrid2->Cells[i][0] = c[i];
		StringGrid4->AddObject(t1[i]);
		StringGrid4->Cells[i][0] = "";
	}
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
	FloatAnimation15->Start();
}
//---------------------------------------------------------------------------
void __fastcall TEncryptionForm::FloatAnimation15Finish(TObject *Sender)
{
	FloatAnimation16->Start();
}
//---------------------------------------------------------------------------
void __fastcall TEncryptionForm::FloatAnimation16Finish(TObject *Sender)
{
	StringGrid4->Cells[index-1][0] = v[index];
	Pointer2->Position->X+=30;
    if(index == lenar) return ;
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
	FloatAnimation15->Start();
}
//---------------------------------------------------------------------------
void __fastcall TEncryptionForm::TrackBar1Tracking(TObject *Sender)
{
	FloatAnimation1->Duration = TrackBar1->Value;
	FloatAnimation6->Duration = TrackBar1->Value;
	FloatAnimation14->Duration = TrackBar1->Value;
	FloatAnimation10->Duration = TrackBar1->Value;
	FloatAnimation3->Duration = TrackBar1->Value;
	FloatAnimation5->Duration = TrackBar1->Value;
	FloatAnimation12->Duration = TrackBar1->Value;
	FloatAnimation2->Duration = TrackBar1->Value;
	FloatAnimation7->Duration = TrackBar1->Value;
	FloatAnimation11->Duration = TrackBar1->Value;
	FloatAnimation17->Duration = TrackBar1->Value;
	FloatAnimation4->Duration = TrackBar1->Value;
	FloatAnimation15->Duration = TrackBar1->Value;
	FloatAnimation16->Duration = TrackBar1->Value;
	FloatAnimation8->Duration = TrackBar1->Value;
	FloatAnimation9->Duration = TrackBar1->Value;
	FloatAnimation13->Duration = TrackBar1->Value;
	ProcessAnimation->Duration = TrackBar1->Value;
}
//---------------------------------------------------------------------------
void __fastcall TEncryptionForm::FormShow(TObject *Sender)
{
	if(GenerationForm->qop){
		E->Text = IntToStr(GenerationForm->e);
		D->Text = IntToStr(GenerationForm->d);
		N->Text = IntToStr(GenerationForm->n);
		N1->Text = IntToStr(GenerationForm->n);
	}
}
//---------------------------------------------------------------------------


void __fastcall TEncryptionForm::Button1Click(TObject *Sender)
{
	copy = "";
	Text->Text = "";
	for (int i = 0; i < StringGrid3->ColumnCount; i++) {
		copy += StringGrid3->Cells[i][0];
		if(i < StringGrid3->ColumnCount - 1){
        	copy += ',';
		}
	}
	for(int i = copy.Length(); i >= 1 && copy[i] == ','; i--){
		copy[i] = '\0';
	}
	Text->Text = copy;

}
//---------------------------------------------------------------------------
void __fastcall TEncryptionForm::konstruktor()
{
	TrackBar1Tracking(TrackBar1);
	letterIndex = 1;
	index = 1;
	lenar = 0;
	if(GenerationForm->qop){
		E->Text = IntToStr(GenerationForm->e);
		D->Text = IntToStr(GenerationForm->d);
		N->Text = IntToStr(GenerationForm->n);
		N1->Text = IntToStr(GenerationForm->n);
	}
}


