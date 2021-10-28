// Muallif : Ro'ziev Shohzod
// Sana : 21.12.2012
// Maqsad : A, B va C sonlari berilgan. A ni qiymati b ga, B ni qiymati C ga, C ni qiymati A ga almashtirilsin.
// A, B, C ning yangi qiymatlari ekranga chiqarilsin.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float A, B, C, D;

    cout << "\nA = "; cin >> A;
    cout << "\nB = "; cin >> B;
    cout << "\nC = "; cin >> C;
{
    D = A;
    A = B;
    B = C;
    C = D;
    }
    cout << "\nA = " << A << "\n" << "\nB = " << B << "\n" << "\nC = " << C << "\n" << endl;

    return 0;
}
