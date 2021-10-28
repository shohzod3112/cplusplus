// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: Ikkita sonning o'rta arifmetigini va geometrigini
// hisoblovchi MEAN nomli funksiya hosil qiling.MEAN funksiyasi
// orqali A, B, C, D sonlaridan (A,B),(A,C),(A,D) juftliklarning
// o'rta arifmetigi va geometrigini hisoblovchi programma tuzilsin.
// Funksiya prototipi quyidagicha bo'lishi mumkin:
// 1) void MEAN (float , float , float *, float *);

#include <iostream>
#include <math.h>

using namespace std;

// Funksiya prototipi
void MEAN (float, float , float *, float *);

int main()
{
    float a, b, c, d, x, y;

	cout << "a, b, c, d haqiqiy sonlar kiriting \n";

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;

	MEAN(a, b, &x, &y);

	cout << "a va b ning o'rta arifmatig " << x << endl;
	cout << "a va b ning o'rta geometrigi " << y << endl;

	MEAN(a, c, &x, &y);

	cout << "a va c ning o'rta arifmatig " << x << endl;
	cout << "a va c ning o'rta geometrigi " << y << endl;

	MEAN(a, d, &x, &y);

	cout << "a va d ning o'rta arifmatig " << x << endl;
	cout << "a va d ning o'rta geometrigi " << y << endl;

	return 0;
}
	void MEAN (float i, float j, float *arif, float *geo)
{
    *arif = (i + j) / 2;
	*geo = sqrtf(i * j);
}
