// Muallif : Ro'ziyev Shohzod
// Sana : 21.02.2013
// Maqsad: Ikkita burj vaqtlarini aniqlovchi butun son berilgan.D(kun), M(oy)
// berilgan sana qaysi burjga to'g'ri kelishini aniqlovchi programma tuzing.
// "Qovg'a (20.01-18.2)", "Baliq (19.2-20.3)", "Qo'y (21.3-19.4)"
// "Buzoq (20.4-20.5)","Egizaklar (21.5-21.6)", "Qisqichbaqa (22.6-22.7)"
// "Arslon (23.7-22.8)","Parizod(23.8-22.9)","Tarozi (23.9-22.10)"
// "Chayon (23.10-22.11)","O'qotar (23.11-21.12)","Echki (22.12-19.1).

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int  D, M;

    cout << "Kunni kiriting ";
    cin >> D;

    cout << "Oyni kiriting ";
    cin >> M;

    if(1 <= D <= 31 && 1 <= M <= 12)
{
    if(
    switch()
{
    case 1: cout << "bir yuz ";        break;
	case 2: cout << " ikki yuz ";   break;
    case 3: cout << " uch yuz ";	   break;
    case 4: cout << " to'rt yuz ";  break;
	case 5: cout << " besh yuz ";		 break;
	case 6: cout << " olti yuz ";		 break;
	case 7: cout << " yetti yuz ";	 break;
	case 8: cout << " sakkiz yuz "; break;
	case 9: cout << " to'qqiz yuz ";break;

	default: cout << "xato" << endl;
}
    M = N/ 10;

    switch(M % 10)
{
	case 1: cout << " o'n ";     break;
	case 2: cout << " yigirma "; break;
    case 3: cout << " o'ttiz ";	 break;
    case 4: cout << " qirq ";		  break;
    case 5: cout << " ellik ";		 break;
    case 6: cout << " oltmish ";	break;
    case 7: cout << " yetmish ";	break;
    case 8: cout << " sakson ";		break;
    case 9: cout << " to'qson ";	break;

	default: cout << "xato" << endl;
}

	switch(N % 10)
{
    case 1: cout << " bir";    break;
	case 2: cout << " ikki";	  break;
    case 3: cout << " uch";    break;
    case 4: cout << " to'rt";  break;
	case 5: cout << " besh";	  break;
	case 6: cout << " olti";	  break;
	case 7: cout << " yetti";  break;
	case 8: cout << " sakkiz"; break;
	case 9: cout << " to'qqiz";break;

	default: cout << "xato" << endl;
}}
    system("pause");
    return 0;
}
