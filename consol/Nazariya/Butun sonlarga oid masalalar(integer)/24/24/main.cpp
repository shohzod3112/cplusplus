// Muallif:Ro'ziyev Shohzod
// Sana: 13.02.2013
// Maqsad: Hafta kunlari quyidagi tartibda berilgan.
// 0 - Yakshanba, 1 - dushanba, 2 - seshanba, 3 - chorshanba, 4 - payshanba, 5 - juma, 6 - shanba.
// 1 - 365 oraliqda yotuvchi K soni berilgan.
// Agar 1 - yanvar dushanba bo'lsa, kiritilgan K haftaning qaysi kuniga to'g'ri kelishini aniqlovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int k;

    cout << "1 < kun < 365\n";

    cout << "Kunni kiriting "; cin >> k;

    k = k % 7;

    cout << k;

    return 0;
}
