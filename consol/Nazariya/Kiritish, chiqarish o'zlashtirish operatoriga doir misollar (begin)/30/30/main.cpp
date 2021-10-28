// Muallif : Ro'ziev Shohzod
// Sana : 12.02.2013
// Maqsad : Alfa burchak Radianda berilgan.Radiusga o'tkazing.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float const Pi = 3.141591;
    float Alfa;

    cout << "Alfa = "; cin >> Alfa;

    cout << "\nAlfa = " << Alfa * 180 / Pi  << " gradus" << endl;

    return 0;
}
