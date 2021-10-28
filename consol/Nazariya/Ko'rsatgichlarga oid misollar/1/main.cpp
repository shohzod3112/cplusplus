// Muallif: Ro'ziyev Shohzod
// Sana: 29.11.2014
// Maqsad: Ko'rsatgichlar bilan ishlashni o'rganish

#include <iostream>

using namespace std;

int main()
{
    int n = 5;

    int *nPtr;

    // & adresni olish amali
    nPtr = &n;
    cout << "n = " << n << endl;

    *nPtr = 15;
    cout << "n = " << n << endl;

    cout << "\nKo'rsatgich qiymati,\n";
    cout << "ya'ni ko'rsatkich ko'rsatayotgan addres = " << nPtr << endl;
    cout << "Ko'rsatgich ko'rsatayotgan addres qiymati = " << *nPtr << endl;

    return 0;
}
