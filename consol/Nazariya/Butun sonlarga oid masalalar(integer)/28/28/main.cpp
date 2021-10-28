// Muallif:Ro'ziyev Shohzod
// Sana: 13.02.2013
// Maqsad: Hafta kunlari quyidagi tartibda berilgan.
// 0 - Yakshanba, 1 - dushanba, 2 - seshanba, 3 - chorshanba, 4 - payshanba, 5 - juma, 6 - shanba.
// (n 1-7 gacha bo'lgan hafta kunlari) 1 - 365 oraliqda yotuvchi K soni berilgan.
// Agar 1 - yanvar n - inchi kunga to'g'ri kelsa, kiritilgan K haftaning qaysi kuniga to'g'ri kelishini aniqlovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int k, n;

    cout << "1-yanvar haftaning qaysi kuniga to'g'ri kelishini kiriting "; cin >> n;

    cout << "Kunni kiriting "; cin >> k;

    k = (k + n - 1) % 7;

    cout << k;

    return 0;
}
