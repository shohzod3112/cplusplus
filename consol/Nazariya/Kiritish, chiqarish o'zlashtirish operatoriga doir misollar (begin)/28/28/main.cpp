// Muallif : Ro'ziev Shohzod
// Sana : 12.02.2013
// Maqsad : A soni berilgan.A ni A^2, A^3, A^5, A^10, A^15 qiymati topilsin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float A;

    cout << "A = "; cin >> A;

    cout << "\nA^2 = " << A * A << "\n" << "A^3 = " << pow(A,3) << "\n" << "A^5 = " << pow(A,5) << "\n" << "A^10 = " << pow(A,10) << "\n" << "A^15 = " << pow(A,15) << endl;

    return 0;
}
