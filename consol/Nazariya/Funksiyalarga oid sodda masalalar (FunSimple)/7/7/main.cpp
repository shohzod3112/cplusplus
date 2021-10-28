// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: Butun musbat sonning raqamlarini teskari tartibda
// chiqaruvchi InvertDigit DigitCountSum nomli funksiya hosil
// qiling. Bu funksiya orqali a, b, c sonlarining raqamlarini
// teskari tartibda chiqaruvchi programma tuzilsin.
// Funksiya prototipi quyidagicha bo'lishi mumkin:
// 1) int InvertDigit (int );

#include <iostream>
#include <math.h>

using namespace std;

// Funksiya prototipi

int InvertDigit(int );
int DigitCount(int ); // Raqamlari sonini hisoblovchi funksiya

int main()
{
    int s, a, b, c;

	cout << "a, b, c natural sonlarni kiriting \n";

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	s = InvertDigit(a);
	cout << "Raqamlari teskarisi = " << s << endl;

	s = InvertDigit(b);
	cout << "Raqamlari teskarisi = " << s << endl;

	s = InvertDigit(c);
	cout << "Raqamlari teskarisi = " << s << endl;

	return 0;
}
	int InvertDigit(int n)
{
	int soni = DigitCount(n);
	int teskari_n = 0;
	int p = 1;
	// p da 3 xonali son uchun 100,
	// 4 xonali son uchun 1000 vahokazoni hosil qilamiz.

	for(int g = 1; g < soni; g++)
	p *= 10;

	for(int g = soni; g > 0; g--)
{
    // n = 123 bo'lsa,
    // teskari n = 3 * 100 + 2 * 10 + 1

	teskari_n += (n % 10) * p;

	n /= 10;
	p /= 10;
}
	return teskari_n;
}
	int DigitCount(int n)
{
	int soni = 0;
	while(n > 0)
{
	soni++;
	n /= 10;
}
	return soni;
}
