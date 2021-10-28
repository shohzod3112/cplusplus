//Muallif : Ro'ziyev Shohzod
//Sana : 13.02.2013
//Maqsad : Shaxmat doskasining (x,y)koordinatalari  berilgan (1 - 8 oraliqda yotuvchi butun sonlar).Doskaning chap pastki maydoni (1,1) qoraligini hisobga olib jumlani rostlikka tekshiring: "Berilgan (x,y) maydon oq".

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    bool g;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    //Shaxmat doskasida qoraning koordinatalari yig'indisi juft bo'ladi.

    g = ((x + y) % 2 != 0);

    cout << g << endl;

    return 0;
}
