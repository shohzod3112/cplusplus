// Muallif: Ro'ziyev Shohzod
// Sana: 07.12.2014
// Maqsad: Kvadrat tenglamaning ildizlar sonini aniqlovchi funksiya
// hosil qiling. A * x * x + B * X + C = 0 ko'rinishidagi
// tenglama deyiladi. (A noldan farqli son)

#include <iostream>

using namespace std;

int ildiz (float, float, float);

int main()
{
    float a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << ildiz(a, b, c) << endl;

    return 0;
}
    int ildiz(float x, float y, float z)
{
    int D, natija = 0;

    D = y * y - 4 * x * z;

    if(D > 0) natija = 2;
    if(D == 0) natija = 1;
    return natija;
}
