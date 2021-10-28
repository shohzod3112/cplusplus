// Muallif: Ro'ziyev Shohzod
// Sana: 29.11.2014
// Maqsad: Murojaatlar bilan ishlashni o'rganish

#include <iostream>

using namespace std;

int main()
{
    int k, p = 19;
    int &m = k;
    int *ptr;

    k = 5;
    ptr = &k;
    cout << "k = " << k << endl;
    cout << "m = " << m << endl;
    cout << "*ptr = " << *ptr << endl;

    m++;
    //k++;
    //ptr++;
    //*ptr++;
    //&ptr++;

    ptr = &p;
    // Bu yerda m (murojaat) k ni qiymatini 19 ga o'zgartiryapti(ya'ni k ning adresiga 19 yozyapti)
//    m = p;
    cout << "k = " << k << endl;

    cout << "m = " << m << endl;
    cout << "*ptr = " << *ptr << endl;

    return 0;
}
