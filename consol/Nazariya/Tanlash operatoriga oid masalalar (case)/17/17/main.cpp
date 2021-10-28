// Muallif : Ro'ziyev Shohzod
// Sana : 21.02.2013
// Maqsad: O'quv masalalarini aniqlovchi 10-40 gacha bo'lgan butun son berilgan.
// Son kiritilganda unga mos so'zlarda (yigirmata masala) chiqarib beruvchi programma tuzing.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int  N;

    cout << "\nqiymat kiriting ";
    cin >> N;

    switch(N / 10)
{
				case 1: cout << "\no'n ";     break;
				case 2: cout << "\nyigirma "; break;
    case 3: cout << "\no'ttiz ";	 break;
    case 4: cout << "\nqirq ";		  break;

				default: cout << "xato" << endl;
}

				switch(N % 10)
{
				case 1: cout << " bitta masala";  break;
				case 2: cout << " ikkit masala";				break;
    case 3: cout << " uchta masala"; break;
    case 4: cout << " to'rtta masala";		break;
				case 5: cout << " beshta masala";		break;
				case 6: cout << " oltita masala";		break;
				case 7: cout << " yettita masala";		break;
				case 8: cout << " sakkizta masala";		break;
				case 9: cout << " to'qqizta masala";		break;

				default: cout << "xato" << endl;
}
    return 0;
}
