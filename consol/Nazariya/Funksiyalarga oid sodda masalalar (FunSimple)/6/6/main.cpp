// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: Natural sonning raqamlari soni va raqamlari yig'indisini
// hisoblovchi DigitCountSum nomli funksiya hosil qiling.Bu
// funksiya orqali a, b, c sonlarining raqamlari soni va yig'indisini
// hisoblochi programma tuzilsin.
// Funksiya prototipi quyidagicha bo'lishi mumkin:
// 1) void DigitCountSum (int , int *, int *);

#include <iostream>
#include <math.h>

using namespace std;

// Funksiya prototipi
void DigitCountSum(int, int *, int *);

int main()
{
    int s, a, b, c, k;

	cout << "a, b, c natural sonlarni kiriting \n";

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	DigitCountSum(a, &k, &s);

	cout << "Raqamlari soni = " << k << "\nRaqamlari yig'indisi = " << s << endl;

	DigitCountSum(b, &k, &s);

    cout << "\nRaqamlari soni = " << k << "\nRaqamlari yig'indisi = " << s << endl;

	DigitCountSum(c, &k, &s);

	cout << "\nRaqamlari soni = " << k << "\nRaqamlari yig'indisi = " << s << endl;

	return 0;
}
	void DigitCountSum(int d, int *k, int *s)
{
	*k = 0, *s = 0;
	while(d != 0)
{
	*s += d % 10;
	*k += 1;
	d /= 10;
}}
