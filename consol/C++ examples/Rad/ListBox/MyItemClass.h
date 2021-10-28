#ifndef MyItemClassH
#define MyItemClassH

#include <System.Classes.hpp>
#include <FMX.ListBox.hpp>

// classda vorislik: class so'zi, class nomi, ":", public, voris olinayotgan class nomi.

class TMyItem : public TListBoxItem
{
	public:
		String header;
		String subText;
		String imgUrl;
// Bu yerda konstruktor yozilyapti
	__fastcall TMyItem(TComponent* Owner);
	void __fastcall style(TObject* Sender);
};
#endif
