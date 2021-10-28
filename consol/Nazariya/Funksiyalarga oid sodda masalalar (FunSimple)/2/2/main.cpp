// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: Ihtiyoriy sonning 2, 3, 4 - darajasini hisoblovchi
// PowerA234 funksiya hosil qiling. PowerA234 funksiyasi orqali
// A, B, C haqiqiy sonlarining 2, 3, 4 - darajasini hisoblovchi
// programma tuzilsin. Funksiya prototipi quyidagicha bo'lishi mumkin:
// 1) void PowerA234 (float , float *, float *, float *);

#include <iostream>

using namespace std;

// Funksiya prototipi
void powera234(float, float *, float *, float *);

int main()
{
    float a, a2, a3, a4;
	float b, b2, b3, b4;
	float c, c2, c3, c4;

	cout << "a, b, c haqiqiy sonlar kiriting \n";

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	powera234(a, &a2, &a3, &a4);

	cout << a << " ning darajalari " << endl;

	cout << a2 << endl;
	cout << a3 << endl;
	cout << a4 << endl;

	powera234(b, &b2, &b3, &b4);

	cout << b << " ning darajalari " << endl;

	cout << b2 << endl;
	cout << b3 << endl;
	cout << b4 << endl;

	powera234(c, &c2, &c3, &c4);

	cout << c << " ning darajalari " << endl;

	cout << c2 << endl;
	cout << c3 << endl;
	cout << c4 << endl;

	return 0;
}
	void powera234(float k, float *k2, float *k3, float *k4)
{
    *k2 = k * k;
	*k3 = *k2 * k;
	*k4 = *k3 * k;
}
