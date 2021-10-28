// Muallifi : Ro'ziyev Shohzod
// Sana : 10.11.2012
// Maqsad : Aylana diametri d.Uzunligini toping.

#include <iostream>

using namespace std;

int main()
{
    float d, L;
    float const pi = 3.14;    
    
    cout << "Aylana diametrini kiriting = " ;  cin >> d;
    
    L = pi * d;                                                                                 
    
    cout << "Aylana uzunligi = " << L << endl;
        
    system("PAUSE");
    
    return EXIT_SUCCESS;
}
