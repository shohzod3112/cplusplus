#include "MyClassUnit.h"

__fastcall TMyClass::TMyClass(TComponent* Owner)
	: TListBoxItem(Owner)
{
	OnApplyStyleLookup = style;
}
//-----------------------------------------------------------------------
void __fastcall TMyClass::style(TObject *Sender)
{
	TRectangle* R = (TRectangle*) FindStyleResource("image");
	TText* t = (TText*) FindStyleResource("header");
	TText* t1 = (TText*) FindStyleResource("subtext");
	if(R && t && t1)
	{
		R->Fill->Bitmap->Bitmap->LoadFromFile(ImgUrlTemp);
		t->Text = HeaderTemp;
		t1->Text = SubTextTemp;
	}
}
//-----------------------------------------------------------------------
void __fastcall TMyClass::setHeader(String header)
{
	if(header != ""){
		HeaderTemp = header;
		TText* t = (TText*) FindStyleResource("header");
		if(t){
			t->Text = HeaderTemp;
		}
	}
}
//-----------------------------------------------------------------------
String __fastcall TMyClass::getHeader()
{
    return HeaderTemp;
}
//-----------------------------------------------------------------------
void __fastcall TMyClass::setImgUrl(String imgUrl)
{
	if(imgUrl != "")
	{
		ImgUrlTemp = imgUrl;
		TRectangle* R = (TRectangle*) FindStyleResource("image");
		if(R){
			R->Fill->Bitmap->Bitmap->LoadFromFile(ImgUrl);
		}
	}
}
//-----------------------------------------------------------------------
String __fastcall TMyClass::getImgUrl()
{
	return ImgUrlTemp;
}
//-----------------------------------------------------------------------
void __fastcall TMyClass::setSubText(String subText)
{
	if(subText != ""){
		SubTextTemp = subText;
		TText* t1 = (TText*) FindStyleResource("subtext");
		if(t1){
        	t1->Text = SubTextTemp;
		}
	}
}
//-----------------------------------------------------------------------
String __fastcall TMyClass::getSubText()
{
    return SubTextTemp;
}
