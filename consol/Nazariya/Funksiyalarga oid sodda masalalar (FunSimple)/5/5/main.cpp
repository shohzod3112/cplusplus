// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: To'g'ri to'rtburchakning yuzini va perimetrini
// uning qarama-qarshi uchlari koordinatasi orqali hisoblovchi
// RectPS nomli funksiya hosil qiling.(x1,y1,x2,y2) to'g'ri
// to'rtburchakning qarama-qarshi uchlari. RectPS funksiyasi
// orqali 2 ta to'rtburchakning yuzi va perimetrini hisoblang.
// To'rtburchak tomonlari koordinata o'qiga parallel.
// Funksiya prototipi quyidagicha bo'lishi mumkin:
// 1) void RectPS (int , int , int *, int *);

#include <iostream>
#include <math.h>

using namespace std;

// Funksiya prototipi
void RectPS(int , int , int *, int *);

int main()
{
    int x1, x2, y1, y2, p, s, a, b, c, d;

	cout << "1 - To'g'ri to'rtburchak koordinatalarini kiriting \n";

	cout << "x1 = "; cin >> x1;
	cout << "x2 = "; cin >> x2;
	cout << "y1 = "; cin >> y1;
	cout << "y2 = "; cin >> y2;

	a = abs(x1-x2);
	b = abs(y1-y2);

	RectPS(a, b, &p, &s);

	cout << "1 - to'rtburchakning Perimetri " << p << endl;
	cout << "1 - to'rtburchakning yuzi " << s << endl;

	cout << "2 - To'g'ri to'rtburchak koordinatalarini kiriting \n";

	cout << "x1 = "; cin >> x1;
	cout << "x2 = "; cin >> x2;
	cout << "y1 = "; cin >> y1;
	cout << "y2 = "; cin >> y2;

	c = abs(x1-x2);
	d = abs(y1-y2);

	RectPS(c, d, &p, &s);

    cout << "2 - to'rtburchakning Perimetri " << p << endl;
	cout << "2 - to'rtburchakning yuzi " << s << endl;

	return 0;
}
	void RectPS(int k1, int k2, int *p, int *s)
{
	*p = 2 * (k1 + k2);
	*s = k1 * k2;
}
