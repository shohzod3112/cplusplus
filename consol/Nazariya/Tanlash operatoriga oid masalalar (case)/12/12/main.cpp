// Muallif: Ro'ziyev Shohzod
// Sana: 21.02.2013
// Maqsad: Doiraning elementlari quyidagi tartibda nomerlangan. 1-radius R, 2-diametr D=2*R,
// 3-uzunligi L=2*Pi*R,4-doiraning yuzasi S=Pi*R*R.Shu elementlardan bittasi berilganda
// qolganlarini toping.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float const Pi = 3.14;
    float S, R, D, L;
    int c;

    cout << "------------------Elementlar-------------------";
    cout << "\n1-radius\n2-diametr\n3-uzunligi\n4-doiraning yuzasi\n";
    cout << "Doiraning elementlarini kiriting: "; cin >> c;

    switch(c)
{
 case  1: cout << "radius R = "; cin >> R; D = 2 * R; L = 2 * Pi * R; S = Pi * pow(R,2);
 cout << "D = " << D << "\nL = " << L << "\nS = " << S << endl; break;
 case  2: cout << "diametr D = "; cin >> D; R = D / 2; L = 2 * Pi * R; S = Pi * pow(R,2);
 cout << "R = " << R << "\nL = " << L << "\nS = " << S << endl; break;
 case  3: cout << "uzunligi L = "; cin >> L; R = L / (2 * Pi); D = 2 * R; S = Pi * pow(R,2);
 cout << "R = " << R << "\nD = " << D << "\nS = " << S << endl;break;
 case  4: cout << "doiraning yuzasi S = "; cin >> S; R = sqrt(S / Pi); D = 2 * R; L = 2 * Pi * R;
 cout << "R = " << R << "\nD = " << D << "\nL = " << L << endl;break;

 default: cout << "xato" << endl;
}

    return 0;
}
