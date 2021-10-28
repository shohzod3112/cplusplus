// Muallif: Ro'ziyev Shohzod
// Sana: 07.11.2014
// Maqsad: N natural soni va n ta butun sondan iborat to'plam berilgan(n > 1).
// To'plamdagi ketma - ket keladigan juft elementlar maksimal sonini aniqlovchi
// programma tuzilsin. Agar to'plamda juft sonlar bo'lmasa nol chiqarilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, max = 0, soni = 0;

    cout << "n = "; cin >> n;

    cin >> a;

    if(a % 2 == 0)    max = soni = 1;

    for(int i = 2; i <= n; i++)
{
    cin >> a;

    // Agar juft bo'lsa sonini oshiramiz
    // Aks holda soni 0 bo'ladi

    if(a % 2 == 0) soni++;

    else soni = 0;

    if(max < soni)  max = soni;
}
    cout << endl;
    cout << "Natija = " << max << endl;

    return 0;
}
