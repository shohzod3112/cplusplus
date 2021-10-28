// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: Kiritilgan K butun musbat sonining chap tarafiga (boshiga)
// R raqamini (1 <= R <= 9) qo'shuvchi AddLeftDigit nomli funksiya
// hosil qiling.
// Funksiya prototipi quyidagicha bo'lishi mumkin:
// 1) void AddLaftDigit (int *son, int raqam);

#include <iostream>
#include <math.h>

using namespace std;

// Funksiya prototipi
void AddLeftDigit(int *, int);

int main()
{
    int r, s;

	cout << "a natural sonni kiriting \n";

	cout << "s = "; cin >> s;

	cout << "Chap tomoniga qo'shilishi kerak bo'lgan bir xonali natural sonni kiriting \n";
	cout << "r = "; cin >> r;

	AddLeftDigit(&s, r);
	cout << "Chap tomoniga son qo'shildi = " << s << endl;

	return 0;
}
	void AddLeftDigit(int *a, int n)
{
	int soni = 0, p, k = 1;

	p = *a;

	while(p > 0)
{
	p = p / 10;
	soni++;
}
	for (int i = 1; i <= soni; i++)
	k *= 10;

	*a += n * k;
}
