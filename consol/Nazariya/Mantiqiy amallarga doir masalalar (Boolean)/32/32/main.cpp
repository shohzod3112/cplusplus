//Muallif : Ro'ziyev Shohzod
//Sana : 12.02.2013
//Maqsad : Uchta butun A, B va C butun sonlari berilgan.Jumlani rostlikka tekshiring: A, B va C tomonli uchburchak to'g'ri burchakli uchburchak hosil bo'ladi".

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    bool g;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    g = (a * a == b * b + c * c || b * b == a * a  + c * c || c * c == a * a + b * b);

    cout << g << endl;

    return 0;
}
