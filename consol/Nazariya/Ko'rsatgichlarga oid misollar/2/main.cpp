// Muallif: Ro'ziyev Shohzod
// Sana: 29.11.2014
// Maqsad: Ko'rsatgichlar bilan ishlashni o'rganish

#include <iostream>

using namespace std;

int main()
{
    double n = 5;

    double *nPtr;

    nPtr = &n;

    cout << "O'zgaruvchilar qiymati" << endl;
    cout << "n = " << n << endl;
    cout << "*nPtr = " << *nPtr << endl;

    cout << "\nXotira adresi\n" << endl;
    cout << "n - o'zgaruvchisi joylashgan addres. &n = " << &n << endl;
    nPtr += 4;
    cout << "Ko'rsatgich ko'rsatayotgan addres. nPtr = " << nPtr << endl;

    cout << "Ko'rsatgich - joylashgan addres. &nPtr = " << &nPtr << endl;

    cout << "\no'zgaruvchilarni xotirada egallagan xajmi\n" << endl;
    cout << "sizeof(n) = " << sizeof(n) << endl;
    cout << "sizeof(nPtr) = " << sizeof(nPtr) << endl;

    return 0;
}
