#ifndef MyClassUnitH
#define MyClassUnitH

#include <System.Classes.hpp>
#include <FMX.ListBox.hpp>

class TMyClass : public TListBoxItem
{
	private:
		String HeaderTemp, SubTextTemp, ImgUrlTemp;
	public:

	void __fastcall setHeader(String header);
	String __fastcall getHeader();

	void __fastcall setSubText(String subText);
	String __fastcall getSubText();

	void __fastcall setImgUrl(String imgUrl);
	String __fastcall getImgUrl();

	__fastcall TMyClass(TComponent* Owner);
	void __fastcall style (TObject *Sender);

	__property String Header = {write = setHeader, read = getHeader};
	__property String SubText = {write = setSubText, read = getSubText};
	__property String ImgUrl = {write = setImgUrl, read = getImgUrl};
};



#endif
