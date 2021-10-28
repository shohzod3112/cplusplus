// Muallif : Ro'ziev Shohzod
// Sana : 12.02.2013
// Maqsad : A soni berilgan.A ni A^2, A^4, A^8 qiymati topilsin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int A;

    cout << "A="; cin >> A;

    for(int i = 0; i < 3; i++)
{
    A = pow(A,2);

    cout << "A = " << A << endl;
}
    return 0;
}
