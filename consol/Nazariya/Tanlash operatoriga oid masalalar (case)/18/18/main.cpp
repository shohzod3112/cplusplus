// Muallif : Ro'ziyev Shohzod
// Sana : 21.02.2013
// Maqsad: 100-999 gacha bo'lgan butun son berilgan.
// so'zlarda chiqarib beruvchi programma tuzing.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int  N, M;

    cout << "Qiymat kiriting ";
    cin >> N;

    switch(N / 100)
{
				case 1: cout << "yuz ";        break;
				case 2: cout << "ikki yuz ";   break;
    case 3: cout << "uch yuz ";	   break;
    case 4: cout << "to'rt yuz ";  break;
				case 5: cout << "besh yuz ";		 break;
				case 6: cout << "olti yuz ";		 break;
				case 7: cout << "yetti yuz ";	 break;
				case 8: cout << "sakkiz yuz "; break;
				case 9: cout << "to'qqiz yuz ";break;


				default: cout << "xato" << endl;
}
    M = N / 10;

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
}
    return 0;
}
