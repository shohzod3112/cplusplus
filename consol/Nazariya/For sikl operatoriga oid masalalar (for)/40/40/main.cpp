// Muallif: Ro'ziyev Shohzod
// Sana: 05.09.2014
// Maqsad:A va B butun sonlari berilgan(A < B).A va B sonlari orasidagi barcha
// butun sonlarni chiqaruvchi programma tuzilsin.Bunda A soni bir marta, (A + 1)
// soni 2 marta chiqariladi va xokazo.

#include <iostream>

using namespace std;

int main()
{
    int N, A, B;

    cout << "A < B shartni qanoatlantiradigan sonlar kiriting!!!" << endl;

    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;
    cout << A << " va " << B << " sonlari orasidagi sonlar" << endl;

    if(A < B)
{
    for(int i = A; i <= B; i++)
{
    for(int j = A; j <= i; j++)

    cout << i << " ";
    cout << endl;
}}
    return 0;
}
