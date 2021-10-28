// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: Ikkita sonning qiymatini almashtiruvchi Swap nomli funksiya
// hosil qiling. Swap funksiyasi orqali A, B, C, D sonlaridan (A,B),(D,C)
// juftliklarining qiymatini almashtiruvchi programma tuzilsin.
// Funksiya prototipi quyidagicha bo'lishi mumkin:
// 1) void Swap (int *, int *);

#include <iostream>
#include <math.h>

using namespace std;

// Funksiya prototipi
void Swap(int *, int *);

int main()
{
    int a, b, c, d;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "\nc = "; cin >> c;
	cout << "d = "; cin >> d;

	Swap(&a, &b);
	cout << "\na = " << a << "\n" << "b = " << b << endl;

	Swap(&c, &d);
	cout << "\nc = " << c << "\n" << "d = " << d << endl;

	return 0;
}
	void Swap(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
