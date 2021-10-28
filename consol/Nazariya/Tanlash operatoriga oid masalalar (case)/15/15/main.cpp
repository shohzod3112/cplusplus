// Muallif : Ro'ziyev Shohzod
// Sana : 21.02.2013
// Maqsad: O'yin kartasi turlari quyidagi tartibda nomerlangan.
// 1-g'isht, 2-olma, 3-chillak, 4-qarg'a.10 lik kartalardan katta kartalar quyidagi
// qiymatlarni o'zlashtirgan.11 valet,12 dama,13 qirol,14 tuz.Ikkita butun son berilgan.
// N-karta qiymati (6<=N<=14) M-karta turi (1<=M<=4) kiritilganda karta nomlarini
// (masalan 6 qarg'a) chiqarib beruvchi programma tuzing.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int  N, M;

    cout << "-----------------------karta qiymatlari-------------------------" << endl;
    cout << "\n6-olti\n7-yetti\n8-sakkiz\n9-to'qqiz\n10-o'n\n11-valet\n12-dama\n13-qirol\n14-tuz\n\n";

				cout << "-----------------------karta turlari-------------------------" << endl;
    cout << "\n1-g'isht\n2-olma\n3-chillak\n4-qarg'a\n\n";

    cout << "\nkarta qiymati ";
    cin >> N;
				cout << "\nkarta turi ";
    cin >> M;


    switch(N)
{
				case 6: cout << "\nolti";    break;
    case 7: cout << "\nyetti";			break;
    case 8: cout << "\nsakkiz";		break;
    case 9: cout << "\nto'qqiz"; break;
    case 10: cout << "\no'n";				break;
    case 11: cout << "\nvalet ";	break;
    case 12: cout << "\ndama ";		break;
    case 13: cout << "\nqirol "; break;
    case 14: cout << "\ntuz ";			break;

				default: cout << "xato" << endl;
}

				switch(M)
{
				case 1: cout << " g'isht ";  break;
				case 2: cout << " olma ";				break;
    case 3: cout << " chillak "; break;
    case 4: cout << " qarg'a ";		break;

				default: cout << "xato" << endl;
}
    return 0;
}
