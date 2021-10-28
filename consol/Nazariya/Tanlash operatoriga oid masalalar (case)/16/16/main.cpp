// Muallif : Ro'ziyev Shohzod
// Sana : 21.02.2013
// Maqsad: Yoshni yillarda aniqlovchi 20-69 gacha bo'lgan butun son berilgan.
// Son kiritilganda unga mos so'zlarda (yigirma uch yosh) chiqarib beruvchi programma tuzing.

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
				case 2: cout << "\nyigirma";    break;
    case 3: cout << "\no'ttiz";			break;
    case 4: cout << "\nqirq";		break;
    case 5: cout << "\nellik"; break;
    case 6: cout << "\noltmish";				break;

				default: cout << "xato" << endl;
}

				switch(N % 10)
{
				case 1: cout << " bir yosh";  break;
				case 2: cout << " ikki yosh";				break;
    case 3: cout << " uch yosh"; break;
    case 4: cout << " to'rt yosh";		break;
				case 5: cout << " besh yosh";		break;
				case 6: cout << " olti yosh";		break;
				case 7: cout << " yetti yosh";		break;
				case 8: cout << " sakkiz yosh";		break;
				case 9: cout << " to'qqiz yosh";		break;

				default: cout << "xato" << endl;
}
    return 0;
}
