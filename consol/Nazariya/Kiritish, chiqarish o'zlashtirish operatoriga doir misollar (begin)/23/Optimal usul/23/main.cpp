// Muallif : Ro'ziev Shohzod
// Sana : 11.02.2013
// Maqsad : A, B, C berilgan. A ni qiymatini B ga, B ni qiymatini C ga, C ni qiymatini A ga o'zlashtirilsin.

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cout << "A="; cin >> A;
    cout << "B="; cin >> B;
    cout << "C="; cin >> C;

    A = A + B + C;
    C = A - B - C;
    B = A - B - C;
    A = A - B - C;

    cout << "\nA=" << A << "\n" << "B=" << B << "\n" << "C=" << C << endl;

    return 0;
}
