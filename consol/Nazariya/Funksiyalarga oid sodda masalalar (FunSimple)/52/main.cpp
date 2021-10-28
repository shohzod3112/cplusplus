// Muallif: Ro'ziyev Shohzod
// Sana: 16.02.2017
// Maqsad: Mantiqiy qiymat qaytaruvchi IsLeapYear(Y) funksiyasini hosil qiling.
// Funksiya berilgan. Y-yil kasisa yili bo'lsa true, aks holda false qiymat qaytarsin.
// Berilgan  5 ta yilning kabisaligi tekshirilsin.

#include <iostream>
#include <iomanip> // formatlab chiqarish uchun

using namespace std;

bool IsLeapYear(int *);

int main()
{
    int n, a, b, c, d;

    cout << "n = "; cin >> n;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;

    if(IsLeapYear(&n))  cout << n << " Kabisa yili" << endl;
        else cout << n << " Kabisa yili emas" << endl;
    if(IsLeapYear(&a))  cout << a << " Kabisa yili" << endl;
        else cout << a << " Kabisa yili emas" << endl;
    if(IsLeapYear(&b))  cout << b << " Kabisa yili" << endl;
        else cout << b << " Kabisa yili emas" << endl;
    if(IsLeapYear(&c))  cout << c << " Kabisa yili" << endl;
        else cout << c << " Kabisa yili emas" << endl;
    if(IsLeapYear(&d))  cout << d << " Kabisa yili" << endl;
        else cout << d << " Kabisa yili emas" << endl;

    return 0;
}
    bool IsLeapYear(int *a)
    {
        if(*a % 400 == 0 || *a % 4 == 0 && *a % 100 != 0) return true;
        else return false;
    }
