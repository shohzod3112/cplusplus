// Muallif: Ro'ziyev Shohzod
// Sana: 15.12.2014
// Maqsad: A va B orasidagi sonlar yig'indisini hisoblovchi SumRange(A,B)
// nomli funksiya hosil qiling. Agar A > B bo'lsa, funksiya nol qiymat
// qaytaradi. Bu funksiya orqali A dan B gacha va B dan C gacha bo'lgan
// sonlar yig'indisini hisoblang. A, B, C butun sonlar.

#include <iostream>
#include <math.h>

using namespace std;

float SumRange (float *, float *);

int main()
{
    float a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << "a dan b gacha bo'lgan sonlar yig'indisi = " << SumRange(&a,&b) << endl;
    cout << "b dan c gacha bo'lgan sonlar yig'indisi = " << SumRange(&b,&c) << endl;

    return 0;
}
    float SumRange (float *a, float *b)
{
    float c = 0;

    while(*a <= *b)
{
    c += *a;
    ++*a;
}
    return c;
}
