// Muallif: Ro'ziyev Shohzod
// Sana: 15.12.2014
// Maqsad: X va Y butun sonlari berilgan. (X va Y noldan farqli). X,Y
// nuqta qaysi chorakda ekanini aniqlovchi Quarter nomli funksiya hosil
// qiling. Bu funksiya orqali 4 ta nuqtaning choragini aniqlang.

#include <iostream>
#include <math.h>

using namespace std;

float Quarter(float *, float *);

int main()
{
    float x, y;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    cout << endl;

    cout << Quarter(&x, &y) << " - chorak" << endl;

    return 0;
}
    float Quarter(float *X, float *Y)
{
    if(*X > 0 && *Y > 0)
    return 1;

    if(*X < 0 && *Y > 0)
    return 2;

    if(*X < 0 && *Y < 0)
    return 3;

    if(*X > 0 && *Y < 0)
    return 4;
}
