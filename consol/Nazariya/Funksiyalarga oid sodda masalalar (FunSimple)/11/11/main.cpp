// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: X va Y sonlaridan kichigini X ga va Kattasini Y ga yozuvchi
// Minmax(X,Y) funksiyasini hosil qiling.Minmax funksiyasini 4 marta
// chaqirish orqali a, b, c, d butun sonlaridan kattasini va kichigini
// aniqlovchi programma tuzilsin.

#include <iostream>
#include <math.h>

using namespace std;

// Funksiya prototipi
void Minmax(int *, int *);

int main()
{
	int a, b, c, d;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	cout << endl;

	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;

	// a va b dan kichigini a ga, kattasini b ga o'zlashtiradi
	Minmax(&a, &b);

    // c va d dan kichigini c ga, kattasini d ga o'zlashtiradi
	Minmax(&c, &d);

	// a va c dan kichigini a ga, kattasini c ga o'zlashtiradi
	Minmax(&a, &c);

	// b va d dan kichigini b ga, kattasini d ga o'zlashtiradi
	Minmax(&b, &d);

 	cout << "min = " << a << endl;
 	cout << "max = " << d << endl;

	return 0;
}
	void Minmax(int *x, int *y)
{
	if(*x > *y)
{
    int k = *x; *x = *y; *y = k;
}}
