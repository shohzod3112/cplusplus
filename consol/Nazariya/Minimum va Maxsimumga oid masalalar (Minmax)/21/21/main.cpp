// Muallif: Ro'ziyev Shohzod
// Sana: 05.11.2014
// Maqsad: N natural soni va n ta butun sondan iborat to'plam berilgan(n > 2).
// To'plamdagi o'rtacha qiymatini aniqlovchi programma tuzilsin.O'rtacha
// qiymatni hisoblashda eng katta va eng kichik qiymatlar hisobga olinmasin.

#include <iostream>

using namespace std;

int main()
{
    int n, a, max, min, maxsoni = 1, minsoni = 1;
    float ortacha, sum;

    cout << "n = "; cin >> n;

    cin >> a;

    max = min = sum = a;

    for(int i = 2; i <= n; i++)
{
    cin >> a;

    sum += a;

    if(max == a)
{
    maxsoni++;
}
    if(min == a)
{
    minsoni++;
}
    if(max < a)
{
    max = a;
    maxsoni = 1;
}
    if(min > a)
{
    min = a;
    minsoni = 1;
}}
    cout << endl;

    // faqat bir xil qiymat kiritilgan bo'lsa

    if(max == min) ortacha = min;
    else
{   sum = sum - maxsoni * max - minsoni * min;
    ortacha = sum / (n - maxsoni - minsoni);
}
    cout << "Ekstremal elementlardan tashqari sonlarning o'rta arifmetigi = " << ortacha << endl;

   return 0;
}
