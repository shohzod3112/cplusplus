// Muallif: Ro'ziyev Shohzod
// Sana: 05.09.2014
// Maqsad:A va B butun sonlari berilgan(A < B).A va B sonlari orasidagi barcha
// butun sonlarni chiqaruvchi programma tuzilsin.Bunda har bir son o'zining
// qiymaticha chiqarilsin.Ya'ni 3 soni uch marta chiqariladi.

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
    for(int j = 1; j <= i; j++)

    cout << i;
    cout << endl;
}}
    return 0;
}
