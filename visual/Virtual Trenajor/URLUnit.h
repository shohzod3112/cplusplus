#ifndef URLUnitH
#define URLUnitH

#include <sysmac.h>

String URL(String x)
{
	if(FileExists(x+".jpg"))
	{
		return x+".jpg";
	}
	if(FileExists(x+".png"))
	{
		return x+".png";
	}
	return "Fayl topilmadi!";
}
#endif

