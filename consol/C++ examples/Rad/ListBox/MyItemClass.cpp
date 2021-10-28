#include "MyItemClass.h"

__fastcall TMyItem::TMyItem(TComponent* Owner):TListBoxItem(Owner)
{
	OnApplyStyleLookup = style;
}
//--------------------------------------------------------------------------
void __fastcall TMyItem::style(TObject* Sender)
{
	TText *header = (TText*)FindStyleResource("headertext");
	TText *subtext = (TText*)FindStyleResource("subtext");
	TRectangle *img = (TRectangle*)FindStyleResource("image");
	if(header && subtext && img){
		header->Text = this->header;
		subtext->Text = this->subText;
		img->Fill->Bitmap->Bitmap->LoadFromFile(imgUrl);
	}
}
