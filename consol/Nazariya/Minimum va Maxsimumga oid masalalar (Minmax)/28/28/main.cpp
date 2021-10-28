// Muallif: Ro'ziyev Shohzod
// Sana: 09.11.2014
// Maqsad: N natural soni va n ta nol va birdan iborat to'plam berilgan.
// Bir soni ketma - ketligi eng uzun bo'ladigan oraliq boshlangan
// element indeksini va ketma - ketlikdagi elementlar sonini aniqlovchi
// programma tuzilsin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, max1 = 0, soni1 = 0, indeks1 = 0, in1max;

    cout << "n = "; cin >> n;

    cout << "Faqat nol va birdan iborat son kiriting!!!" << endl;

    cin >> a;

    if(a == 1)
{
    soni1 = max1 = 1;
    indeks1 = 1;
}
    for(int i = 2; i <= n; i++)
{
    cin >> a;

    if(a == 0)
{
    soni1 = 0;
}
    else
{
    soni1++;
    if(soni1 == 1)  indeks1 = i;
}
    if(max1 < soni1)
{
    max1 = soni1;
    in1max = indeks1;
}
}   cout << endl;

    cout << "Ketma - ket kelgan 1 larning soni = " << max1 << endl;
    cout << "Indeksi = " << in1max << endl;

    return 0;
}
