// Muallif : Ro'ziev Shohzod
// Sana : 16.12.2012
// Maqsad :  Sonlar o'qida A, B, C nuqtalar berilgan.C nuqta A va B nuqtalar orasida joylashgan.AC va BC kesmalar uzunligining ko'paytmasini toping.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float A, B, C;


    cout << "A="; cin >> A;
    cout << "B="; cin >> B;
    cout << "C="; cin >> C;

    if(A < C && C < B)
{
    cout << "AC=" << fabs(C - A) << endl;
    cout << "BC=" << fabs(C - B) << endl;
    cout << "AC * BC=" << fabs(C - A) * fabs(C - B) << endl;

}
    else cout << "A < C && C < B Bu shartni qanoatlantiradigan son kiriting" << endl;

    system("pause");
    return 0;
}
