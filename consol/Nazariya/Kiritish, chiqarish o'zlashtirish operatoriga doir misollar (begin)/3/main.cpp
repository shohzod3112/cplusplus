// Muallif : Ro'ziev Shohzod
// Sana : 10.11.2012
// Maqsad : To'g'ri to'rtburchakning tomoni berilgan uni yuzasi va perimetri aniqlansin.

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int S, a, b, P;
    
    cout << "To'g'ri to'rtburchakning tomonlarini kiriting\n";
    
    cout << "a = " ; cin >> a;
    cout << "b = " ; cin >> b;    
    
    S = a * b;
    
    P = 2 * (a + b);
       
    cout << "Yuza = " << S << endl;
    cout << "Perimetri = " << P << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
