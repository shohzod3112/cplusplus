// Muallif:Ro'ziyev Shohzod
// Sana: 13.02.2013
//  Maqsad: 999 dan katta bo'lgan son berilgan.Bir marta bo'lib butunni va bo'lib qoldiqni olish amalidan foydalanib
// berilgan sonni mingliklar xonasidagi sonni chiqaruvchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cout << "999 dan katta bo'lgan son kiriting...\n";

    cout << "A = "; cin >> A;

    if(999 < A && A < 10000)
{

    B = A % 10000;
    C = B / 1000;

    cout << "Hosil bo'lgan mingliklar xonasidagi son = " << C << endl;
}
    else cout << "999 dan katta bo'lgan son kiriting!!!\n";

    return 0;
}
