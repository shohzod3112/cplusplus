//Muallif : Ro'ziyev Shohzod
//Sana : 12.02.2013
//Maqsad : A butun soni berilgan.Jumlani rostlikka tekshiring: "A soni musbat".

#include <iostream>

using namespace std;

int main()
{

    bool A;

    cout << "A = "; cin >> A;

    if(A > 0)
{
    A = true;

    cout << "A = " << A << endl;
}
    else
{
    A = false;

    cout << "A = " << A << endl;
}
    return 0;
}
