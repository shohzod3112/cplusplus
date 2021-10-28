// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: Kiritilgan K butun musbat sonining o'ng tarafiga (oxiriga)
// R raqamini (1 <= R <= 9) qo'shuvchi AddRightDigit nomli funksiya
// hosil qiling.
// Funksiya prototipi quyidagicha bo'lishi mumkin:
// 1) int AddRightDigit (int son, int raqam);

#include <iostream>
#include <math.h>

using namespace std;

// Funksiya prototipi
int AddRightDigit(int son, int raqam);

int main()
{
    int a, r, s;

	cout << "s natural sonni kiriting \n";
	cout << "s = "; cin >> s;

	cout << "O'ng tomoniga qo'shilishi kerak bo'lgan bir xonali natural sonni kiriting \n";
	cout << "r = "; cin >> r;

	a = AddRightDigit(s, r);
	cout << "O'ng tomoniga son qo'shildi = " << a << endl;

	return 0;
}
	int AddRightDigit(int a, int n)
{
	n = a * 10 + n;
	return n;
}
