//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Ikki_muallifli_asosiy_forma.h"
#include "for_picture.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm23 *Form23;
//---------------------------------------------------------------------------
__fastcall TForm23::TForm23(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm23::FormClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;

	Form23 = NULL;
}
//---------------------------------------------------------------------------
void __fastcall TForm23::FormCreate(TObject *Sender)
{
	int a, b, s;
	a = Screen->Width;
	b = Screen->Height;
	s = Screen->PixelsPerInch;

	if((a == 1024 && b == 768 && s == 96) || (a == 1024 && b == 768 && s == 100))
{
	Image5->Top = 5;
	Image5->Width = 400;
	Image5->Height = 80;

	Panel1->Height = 550;
	Panel1->Width = 240;
	Image1->Width = 270;
	Image1->Height = 150;
	Image2->Width = 270;
	Image2->Height = 150;
	Image2->Top = 135;
	Image2->Left = -15;
	Label74->Top = 200;
	Label74->Font->Size = 17;
	SpeedButton14->Font->Size = 15;
	SpeedButton14->Top = 230;
	SpeedButton43->Font->Size = 15;
	SpeedButton43->Top = 270;
	SpeedButton44->Font->Size = 15;
	SpeedButton44->Top = 310;
	SpeedButton45->Font->Size = 15;
	SpeedButton45->Top = 370;
	SpeedButton46->Font->Size = 15;
	SpeedButton46->Top = 410;
	SpeedButton47->Font->Size = 15;
	SpeedButton47->Top = 450;
	SpeedButton47->Width = 300;

	Label50->Font->Size = 20;
	Label50->Left = 670;
	ComboBox6->Width = 180;
	ComboBox6->Left = 835;
	ComboBox6->Font->Size = 16;
	Label71->Font->Size = 20;
	Label71->Left = 1030;
	ComboBox7->Left = 1135;
	ComboBox7->Font->Size = 16;

	Label72->Left = 500;
	Label72->Font->Size = 20;
	ComboBox8->Left = 550;
	ComboBox8->Font->Size = 18;
	ComboBox8->Width = 650;
//
	Label1->Left = 800;

	Label2->Left = 250;
	Label2->Font->Size = 15;
	Label43->Left = 300;
	Label43->Font->Size = 14;
	Edit9->Width = 700;
	Edit9->Left = 575;
	SpeedButton16->Left = 1280;

	Label3->Left = 250;
	Label3->Font->Size = 15;
	Label52->Left = 430;
	Label52->Left = 300;
	Label52->Font->Size = 14;
	SpeedButton1->Left = 545;
	Edit10->Width = 700;
	Edit10->Left = 575;
	SpeedButton17->Left = 1280;

	Label4->Left = 250;
	Label4->Font->Size = 15;
	Label53->Left = 300;
	Label53->Font->Size = 14;
	Edit11->Width = 700;
	Edit11->Left = 575;
	SpeedButton18->Left = 1280;

	Label5->Left = 250;
	Label5->Font->Size = 15;
	Label54->Left = 300;
	Label54->Font->Size = 14;
	Edit12->Width = 700;
	Edit12->Left = 575;
	SpeedButton19->Left = 1280;

	Label6->Left = 250;
	Label6->Font->Size = 15;
	Label55->Left = 430;
	Label55->Left = 300;
	Label55->Font->Size = 14;
	SpeedButton2->Left = 545;
	Edit13->Width = 700;
	Edit13->Left = 575;
	SpeedButton20->Left = 1280;

	Label7->Left = 250;
	Label7->Font->Size = 15;
	Label36->Left = 430;
	Label36->Left = 300;
	Label36->Font->Size = 14;
	SpeedButton48->Left = 545;
	ComboBox1->Width = 700;
	ComboBox1->Left = 575;
	ComboBox1->Font->Size = 15;

	Label8->Left = 250;
	Label8->Font->Size = 15;
	Label56->Left = 430;
	Label56->Left = 300;
	Label56->Font->Size = 14;
	SpeedButton4->Left = 545;
	Edit14->Width = 700;
	Edit14->Left = 575;
	SpeedButton21->Left = 1280;

	Label9->Left = 250;
	Label9->Font->Size = 15;
	Label58->Left = 430;
	Label58->Left = 300;
	Label58->Font->Size = 14;
	SpeedButton5->Left = 545;
	Edit15->Width = 700;
	Edit15->Left = 575;
	SpeedButton3->Left = 1280;

	Label10->Left = 250;
	Label10->Font->Size = 15;
	Label34->Left = 430;
	Label34->Left = 300;
	Label34->Font->Size = 14;
	Label34->Width = 250;
	SpeedButton12->Left = 545;
	Edit2->Width = 700;
	Edit2->Left = 575;
	SpeedButton22->Left = 1280;

	Label11->Left = 250;
	Label11->Font->Size = 15;
	Label57->Left = 300;
	Label57->Font->Size = 14;
	Edit16->Width = 700;
	Edit16->Left = 575;
	SpeedButton24->Left = 1280;

	Label12->Left = 250;
	Label12->Font->Size = 15;
	Label59->Left = 300;
	Label59->Font->Size = 14;
	Edit17->Width = 700;
	Edit17->Left = 575;
	SpeedButton25->Left = 1280;

	Label13->Left = 250;
	Label13->Font->Size = 15;
	Label35->Left = 300;
	Label35->Font->Size = 14;
	Edit3->Width = 700;
	Edit3->Left = 575;
	SpeedButton26->Left = 1280;

	Label14->Left = 250;
	Label14->Font->Size = 15;
	Label60->Left = 300;
	Label60->Font->Size = 14;
	Edit18->Width = 700;
	Edit18->Left = 575;
	SpeedButton27->Left = 1280;

	Label15->Left = 250;
	Label15->Font->Size = 15;
	Label37->Left = 430;
	Label37->Left = 300;
	Label37->Font->Size = 14;
	SpeedButton6->Left = 545;
	Edit4->Width = 700;
	Edit4->Left = 575;
	SpeedButton28->Left = 1280;

	Label16->Left = 250;
	Label16->Font->Size = 15;
	Label61->Left = 430;
	Label61->Left = 300;
	Label61->Font->Size = 14;
	SpeedButton7->Left = 545;
	Edit19->Width = 700;
	Edit19->Left = 575;
	SpeedButton29->Left = 1280;

	Label17->Left = 250;
	Label17->Font->Size = 15;
	Label62->Left = 430;
	Label62->Left = 300;
	Label62->Font->Size = 14;
	SpeedButton8->Left = 545;
	Edit20->Width = 700;
	Edit20->Left = 575;
	SpeedButton30->Left = 1280;

	Label18->Left = 250;
	Label18->Font->Size = 15;
	Label63->Left = 300;
	Label63->Font->Size = 14;
	Edit21->Width = 700;
	Edit21->Left = 575;
	SpeedButton31->Left = 1280;

	Label19->Left = 250;
	Label19->Font->Size = 15;
	Label64->Left = 300;
	Label64->Font->Size = 14;
	Edit22->Width = 700;
	Edit22->Left = 575;
	SpeedButton32->Left = 1280;

	Label20->Left = 250;
	Label20->Font->Size = 15;
	Label65->Left = 430;
	Label65->Left = 300;
	Label65->Font->Size = 14;
	SpeedButton9->Left = 545;
	Edit23->Width = 700;
	Edit23->Left = 575;
	SpeedButton33->Left = 1280;

	Label21->Left = 250;
	Label21->Font->Size = 15;
	Label66->Left = 300;
	Label66->Font->Size = 14;
	Edit24->Width = 700;
	Edit24->Left = 575;
	SpeedButton34->Left = 1280;

	Label22->Left = 250;
	Label22->Font->Size = 15;
	Label67->Left = 300;
	Label67->Font->Size = 14;
	Edit25->Width = 700;
	Edit25->Left = 575;
	SpeedButton35->Left = 1280;

	Label23->Left = 250;
	Label23->Font->Size = 15;
	Label24->Left = 300;
	Label24->Font->Size = 14;
	Memo1->Width = 600;
	Memo1->Left = 575;

	Label25->Left = 250;
	Label25->Font->Size = 15;
	Label69->Left = 430;
	Label69->Left = 300;
	Label69->Font->Size = 14;
	SpeedButton15->Left = 545;
	Edit26->Width = 700;
	Edit26->Left = 575;
	SpeedButton36->Left = 1280;

	Label26->Left = 250;
	Label26->Font->Size = 15;
	Label68->Left = 430;
	Label68->Left = 300;
	Label68->Font->Size = 14;
	SpeedButton10->Left = 545;
	Edit27->Width = 700;
	Edit27->Left = 575;
	SpeedButton37->Left = 1280;

	Label27->Left = 250;
	Label27->Font->Size = 15;
	Label46->Left = 300;
	Label46->Font->Size = 14;
	Edit8->Width = 700;
	Edit8->Left = 575;
	SpeedButton38->Left = 1280;

	Label28->Left = 250;
	Label28->Font->Size = 15;
	Label70->Left = 430;
	Label70->Left = 300;
	Label70->Font->Size = 14;
	SpeedButton23->Left = 545;
	Edit28->Width = 700;
	Edit28->Left = 575;
	SpeedButton39->Left = 1280;

	Label29->Left = 250;
	Label29->Font->Size = 15;
	Label38->Left = 430;
	Label38->Left = 300;
	Label38->Font->Size = 14;
	SpeedButton11->Left = 545;
	Edit5->Width = 700;
	Edit5->Left = 575;
	SpeedButton40->Left = 1280;

	Label30->Left = 250;
	Label30->Font->Size = 15;
	Label47->Left = 430;
	Label47->Left = 300;
	Label47->Font->Size = 14;
	ComboBox2->Width = 700;
	ComboBox2->Left = 575;
	ComboBox2->Font->Size = 15;

	Label31->Left = 250;
	Label31->Font->Size = 15;
	Label39->Left = 430;
	Label39->Left = 300;
	Label39->Font->Size = 14;
	SpeedButton13->Left = 545;
	Edit6->Width = 700;
	Edit6->Left = 575;
	SpeedButton41->Left = 1280;

	Label32->Left = 250;
	Label32->Font->Size = 15;
	Label48->Left = 430;
	Label48->Left = 300;
	Label48->Font->Size = 14;
	ComboBox3->Width = 700;
	ComboBox3->Left = 575;
	ComboBox3->Font->Size = 15;

	Label33->Left = 250;
	Label33->Font->Size = 15;
	Label40->Left = 430;
	Label40->Left = 300;
	Label40->Font->Size = 14;
	Edit7->Width = 700;
	Edit7->Left = 575;
	SpeedButton42->Left = 1280;

	Label42->Left = 250;
	Label42->Font->Size = 15;
	Label44->Left = 430;
	Label44->Left = 300;
	Label44->Font->Size = 14;
	Button4->Left = 575;
	Button4->Width = 100;
	Button4->Height = 30;
	Button4->Font->Size = 15;
	Label73->Font->Size = 15;
	Label73->Left = 700;

	Label41->Left = 250;
	Label41->Font->Size = 15;
	Label45->Left = 430;
	Label45->Left = 300;
	Label45->Font->Size = 14;
	ComboBox4->Width = 700;
	ComboBox4->Left = 575;
	ComboBox4->Font->Size = 15;

	Label49->Left = 250;
	Label49->Font->Size = 15;
	Label51->Left = 430;
	Label51->Left = 300;
	Label51->Font->Size = 14;
	ComboBox5->Width = 700;
	ComboBox5->Left = 575;
	ComboBox5->Font->Size = 15;

	Label34->Width = 240;
	Label35->Width = 240;
	Label37->Width = 240;
	Label61->Width = 240;
	Label62->Width = 240;
	Label38->Width = 240;
	Label39->Width = 240;
}

	if((a == 1366 && b == 768 && s == 96) || (a == 1366 && b == 768 && s == 100))
{
	Image5->Top = 5;
	Image5->Width = 400;
	Image5->Height = 80;

	Panel1->Height = 550;
	Panel1->Width = 240;
	Image1->Width = 270;
	Image1->Height = 150;
	Image2->Width = 270;
	Image2->Height = 150;
	Image2->Top = 135;
	Image2->Left = -15;
	Label74->Top = 200;
	Label74->Font->Size = 17;
	SpeedButton14->Font->Size = 15;
	SpeedButton14->Top = 230;
	SpeedButton43->Font->Size = 15;
	SpeedButton43->Top = 270;
	SpeedButton44->Font->Size = 15;
	SpeedButton44->Top = 310;
	SpeedButton45->Font->Size = 15;
	SpeedButton45->Top = 370;
	SpeedButton46->Font->Size = 15;
	SpeedButton46->Top = 410;
	SpeedButton47->Font->Size = 15;
	SpeedButton47->Top = 450;
	SpeedButton47->Width = 300;

	Label50->Font->Size = 20;
	Label50->Left = 670;
	ComboBox6->Width = 180;
	ComboBox6->Left = 835;
	ComboBox6->Font->Size = 16;
	Label71->Font->Size = 20;
	Label71->Left = 1030;
	ComboBox7->Left = 1135;
	ComboBox7->Font->Size = 16;

	Label72->Left = 500;
	Label72->Font->Size = 20;
	ComboBox8->Left = 550;
	ComboBox8->Font->Size = 18;
	ComboBox8->Width = 650;
//
	Label1->Left = 800;

	Label2->Left = 250;
	Label2->Font->Size = 15;
	Label43->Left = 300;
	Label43->Font->Size = 14;
	Edit9->Width = 700;
	Edit9->Left = 575;
	SpeedButton16->Left = 1280;

	Label3->Left = 250;
	Label3->Font->Size = 15;
	Label52->Left = 430;
	Label52->Left = 300;
	Label52->Font->Size = 14;
	SpeedButton1->Left = 545;
	Edit10->Width = 700;
	Edit10->Left = 575;
	SpeedButton17->Left = 1280;

	Label4->Left = 250;
	Label4->Font->Size = 15;
	Label53->Left = 300;
	Label53->Font->Size = 14;
	Edit11->Width = 700;
	Edit11->Left = 575;
	SpeedButton18->Left = 1280;

	Label5->Left = 250;
	Label5->Font->Size = 15;
	Label54->Left = 300;
	Label54->Font->Size = 14;
	Edit12->Width = 700;
	Edit12->Left = 575;
	SpeedButton19->Left = 1280;

	Label6->Left = 250;
	Label6->Font->Size = 15;
	Label55->Left = 430;
	Label55->Left = 300;
	Label55->Font->Size = 14;
	SpeedButton2->Left = 545;
	Edit13->Width = 700;
	Edit13->Left = 575;
	SpeedButton20->Left = 1280;

	Label7->Left = 250;
	Label7->Font->Size = 15;
	Label36->Left = 430;
	Label36->Left = 300;
	Label36->Font->Size = 14;
	SpeedButton48->Left = 545;
	ComboBox1->Width = 700;
	ComboBox1->Left = 575;
	ComboBox1->Font->Size = 15;

	Label8->Left = 250;
	Label8->Font->Size = 15;
	Label56->Left = 430;
	Label56->Left = 300;
	Label56->Font->Size = 14;
	SpeedButton4->Left = 545;
	Edit14->Width = 700;
	Edit14->Left = 575;
	SpeedButton21->Left = 1280;

	Label9->Left = 250;
	Label9->Font->Size = 15;
	Label58->Left = 430;
	Label58->Left = 300;
	Label58->Font->Size = 14;
	SpeedButton5->Left = 545;
	Edit15->Width = 700;
	Edit15->Left = 575;
	SpeedButton3->Left = 1280;

	Label10->Left = 250;
	Label10->Font->Size = 15;
	Label34->Left = 430;
	Label34->Left = 300;
	Label34->Font->Size = 14;
	Label34->Width = 250;
	SpeedButton12->Left = 545;
	Edit2->Width = 700;
	Edit2->Left = 575;
	SpeedButton22->Left = 1280;

	Label11->Left = 250;
	Label11->Font->Size = 15;
	Label57->Left = 300;
	Label57->Font->Size = 14;
	Edit16->Width = 700;
	Edit16->Left = 575;
	SpeedButton24->Left = 1280;

	Label12->Left = 250;
	Label12->Font->Size = 15;
	Label59->Left = 300;
	Label59->Font->Size = 14;
	Edit17->Width = 700;
	Edit17->Left = 575;
	SpeedButton25->Left = 1280;

	Label13->Left = 250;
	Label13->Font->Size = 15;
	Label35->Left = 300;
	Label35->Font->Size = 14;
	Edit3->Width = 700;
	Edit3->Left = 575;
	SpeedButton26->Left = 1280;

	Label14->Left = 250;
	Label14->Font->Size = 15;
	Label60->Left = 300;
	Label60->Font->Size = 14;
	Edit18->Width = 700;
	Edit18->Left = 575;
	SpeedButton27->Left = 1280;

	Label15->Left = 250;
	Label15->Font->Size = 15;
	Label37->Left = 430;
	Label37->Left = 300;
	Label37->Font->Size = 14;
	SpeedButton6->Left = 545;
	Edit4->Width = 700;
	Edit4->Left = 575;
	SpeedButton28->Left = 1280;

	Label16->Left = 250;
	Label16->Font->Size = 15;
	Label61->Left = 430;
	Label61->Left = 300;
	Label61->Font->Size = 14;
	SpeedButton7->Left = 545;
	Edit19->Width = 700;
	Edit19->Left = 575;
	SpeedButton29->Left = 1280;

	Label17->Left = 250;
	Label17->Font->Size = 15;
	Label62->Left = 430;
	Label62->Left = 300;
	Label62->Font->Size = 14;
	SpeedButton8->Left = 545;
	Edit20->Width = 700;
	Edit20->Left = 575;
	SpeedButton30->Left = 1280;

	Label18->Left = 250;
	Label18->Font->Size = 15;
	Label63->Left = 300;
	Label63->Font->Size = 14;
	Edit21->Width = 700;
	Edit21->Left = 575;
	SpeedButton31->Left = 1280;

	Label19->Left = 250;
	Label19->Font->Size = 15;
	Label64->Left = 300;
	Label64->Font->Size = 14;
	Edit22->Width = 700;
	Edit22->Left = 575;
	SpeedButton32->Left = 1280;

	Label20->Left = 250;
	Label20->Font->Size = 15;
	Label65->Left = 430;
	Label65->Left = 300;
	Label65->Font->Size = 14;
	SpeedButton9->Left = 545;
	Edit23->Width = 700;
	Edit23->Left = 575;
	SpeedButton33->Left = 1280;

	Label21->Left = 250;
	Label21->Font->Size = 15;
	Label66->Left = 300;
	Label66->Font->Size = 14;
	Edit24->Width = 700;
	Edit24->Left = 575;
	SpeedButton34->Left = 1280;

	Label22->Left = 250;
	Label22->Font->Size = 15;
	Label67->Left = 300;
	Label67->Font->Size = 14;
	Edit25->Width = 700;
	Edit25->Left = 575;
	SpeedButton35->Left = 1280;

	Label23->Left = 250;
	Label23->Font->Size = 15;
	Label24->Left = 300;
	Label24->Font->Size = 14;
	Memo1->Width = 600;
	Memo1->Left = 575;

	Label25->Left = 250;
	Label25->Font->Size = 15;
	Label69->Left = 430;
	Label69->Left = 300;
	Label69->Font->Size = 14;
	SpeedButton15->Left = 545;
	Edit26->Width = 700;
	Edit26->Left = 575;
	SpeedButton36->Left = 1280;

	Label26->Left = 250;
	Label26->Font->Size = 15;
	Label68->Left = 430;
	Label68->Left = 300;
	Label68->Font->Size = 14;
	SpeedButton10->Left = 545;
	Edit27->Width = 700;
	Edit27->Left = 575;
	SpeedButton37->Left = 1280;

	Label27->Left = 250;
	Label27->Font->Size = 15;
	Label46->Left = 300;
	Label46->Font->Size = 14;
	Edit8->Width = 700;
	Edit8->Left = 575;
	SpeedButton38->Left = 1280;

	Label28->Left = 250;
	Label28->Font->Size = 15;
	Label70->Left = 430;
	Label70->Left = 300;
	Label70->Font->Size = 14;
	SpeedButton23->Left = 545;
	Edit28->Width = 700;
	Edit28->Left = 575;
	SpeedButton39->Left = 1280;

	Label29->Left = 250;
	Label29->Font->Size = 15;
	Label38->Left = 430;
	Label38->Left = 300;
	Label38->Font->Size = 14;
	SpeedButton11->Left = 545;
	Edit5->Width = 700;
	Edit5->Left = 575;
	SpeedButton40->Left = 1280;

	Label30->Left = 250;
	Label30->Font->Size = 15;
	Label47->Left = 430;
	Label47->Left = 300;
	Label47->Font->Size = 14;
	ComboBox2->Width = 700;
	ComboBox2->Left = 575;
	ComboBox2->Font->Size = 15;

	Label31->Left = 250;
	Label31->Font->Size = 15;
	Label39->Left = 430;
	Label39->Left = 300;
	Label39->Font->Size = 14;
	SpeedButton13->Left = 545;
	Edit6->Width = 700;
	Edit6->Left = 575;
	SpeedButton41->Left = 1280;

	Label32->Left = 250;
	Label32->Font->Size = 15;
	Label48->Left = 430;
	Label48->Left = 300;
	Label48->Font->Size = 14;
	ComboBox3->Width = 700;
	ComboBox3->Left = 575;
	ComboBox3->Font->Size = 15;

	Label33->Left = 250;
	Label33->Font->Size = 15;
	Label40->Left = 430;
	Label40->Left = 300;
	Label40->Font->Size = 14;
	Edit7->Width = 700;
	Edit7->Left = 575;
	SpeedButton42->Left = 1280;

	Label42->Left = 250;
	Label42->Font->Size = 15;
	Label44->Left = 430;
	Label44->Left = 300;
	Label44->Font->Size = 14;
	Button4->Left = 575;
	Button4->Width = 100;
	Button4->Height = 30;
	Button4->Font->Size = 15;
	Label73->Font->Size = 15;
	Label73->Left = 700;

	Label41->Left = 250;
	Label41->Font->Size = 15;
	Label45->Left = 430;
	Label45->Left = 300;
	Label45->Font->Size = 14;
	ComboBox4->Width = 700;
	ComboBox4->Left = 575;
	ComboBox4->Font->Size = 15;

	Label49->Left = 250;
	Label49->Font->Size = 15;
	Label51->Left = 430;
	Label51->Left = 300;
	Label51->Font->Size = 14;
	ComboBox5->Width = 700;
	ComboBox5->Left = 575;
	ComboBox5->Font->Size = 15;

	Label34->Width = 240;
	Label35->Width = 240;
	Label37->Width = 240;
	Label61->Width = 240;
	Label62->Width = 240;
	Label38->Width = 240;
	Label39->Width = 240;
}
	ScrollBox1->Visible = True;
}
//---------------------------------------------------------------------------
void __fastcall TForm23::ComboBox8Change(TObject *Sender)
{
	if(ComboBox8->ItemIndex == 0)
{
	if(Form9 == NULL)

	Form9 = new TForm9(this);

	Form9->ochish("resurs\\2m1.png");
}
	if(ComboBox8->ItemIndex == 1)
{
	if(Form9 == NULL)

	Form9 = new TForm9(this);

	Form9->ochish("resurs\\2m2.png");
}
	if(ComboBox8->ItemIndex == 2)
{
	if(Form9 == NULL)

	Form9 = new TForm9(this);

	Form9->ochish("resurs\\2m5.png");

	if(Form9->Image1->OnMouseMove)

	Form9->ochish("resurs\\2m6.png");
}
	if(ComboBox8->ItemIndex == 3)
{
	if(Form9 == NULL)

	Form9 = new TForm9(this);

	Form9->ochish("resurs\\2m3.png");

	if(Form9->Image1->OnClick)

	Form9->ochish("resurs\\2m4.png");
}
}
//---------------------------------------------------------------------------

