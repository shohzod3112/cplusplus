//Muallif : Ro'ziyev Shohzod
// Sana : 21.02.2013
//Maqsad: Teng tomonli uchburchakning elementlari quyidagi tartibda nomerlangan.
//1-tomoni a, 2-ichki chizilgan aylana radiusi, 3-tashqi chizilgan aylana radiusi, 4-yuzasi.
//Shu elementlardan bittasi berilganda qolganlarini topuvchi programma tuzing.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, R1, R2, S;
    int  i;

    cout << "-----------------------Yo'llanmalar-------------------------" << endl;
    cout << "\n1-tomon\n2-ichki chizilgan aylana radiusi\n3-tashqi chizilgan aylana radiusi\n4-yuzasi\n\n";

    cin >> i;

    switch(i)
{
    case 1: cout << "\na = "; cin >> a; R1 = a * sqrt(3) / 6; R2 = 2 * R1; S = a * a * sqrt(3) / 4;
    cout << "\nR1 = " << R1 << "\nR2 = " << R2 << "\nS = " << S << endl; break;
    case 2: cout << "\nR1 = "; cin >> R1; a = R1 / (sqrt(3) / 6); R2 = 2 * R1; S = a * a * sqrt(3) / 4;
    cout << "\na = " << a << "\nR2 = " << R2 << "\nS = " << S << endl; break;
    case 3: cout << "\nR2 = "; cin >> R2; a = (R2 / 2) / (sqrt(3) / 6); R1 = R2 / 2; S = a * a * sqrt(3) / 4;
    cout << "\na = " << a << "\nR1 = " << R1 << "\nS = " << S << endl; break;
    case 4: cout << "\nS = "; cin >> S; a = 2 * (sqrt(S / sqrt(3))); R1 = a * sqrt(3) / 6; R2 = 2 * R1;
    cout << "\na = " << a << "\nR1 = " << R1 << "\nR2 = " << R2 << endl; break;

    default: cout << "xato" << endl;
}
    return 0;
}
