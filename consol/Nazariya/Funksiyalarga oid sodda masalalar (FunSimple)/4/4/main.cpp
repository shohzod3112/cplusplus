// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: Teng tomonli uchburchakning yuzasi va perimetrini
// hisoblovchi Triangle nomli funksiya hosil qiling. Triangle
// funksiyasi 3 ta teng tomonli uchburchakning yuzasi va
// perimetrini hisoblovchi programma tuzilsin.
// Funksiya prototipi quyidagicha bo'lishi mumkin:
// 1) void Triangle (float , float *, float *);

#include <iostream>
#include <math.h>

using namespace std;

// Funksiya prototipi
void Triangle (float, float *, float *);

int main()
{
    float a, b, c, x, y;

    cout << "Teng tomonli uchburchaklarning tomonini kiriting \n";

	cout << "Birinchi teng tomonli uchburchak = "; cin >> a;
	cout << "Ikkinchi teng tomonli uchburchak = "; cin >> b;
	cout << "Uchinchi teng tomonli uchburchak = "; cin >> c;

	Triangle(a, &x, &y);

	cout << "Birinchi teng tomonli uchburchakning Perimetri " << x << endl;
	cout << "Birinchi teng tomonli uchburchakning yuzi " << y << endl;

	Triangle(b, &x, &y);

	cout << "Ikkinchi teng tomonli uchburchakning Perimetri " << x << endl;
	cout << "Ikkinchi teng tomonli uchburchakning yuzi " << y << endl;

    Triangle(c, &x, &y);

	cout << "Uchinchi teng tomonli uchburchakning Perimetri " << x << endl;
	cout << "Uchinchi teng tomonli uchburchakning yuzi " << y << endl;

	return 0;
}
	void Triangle (float a, float *P, float *S)
{
	*P = 3 * a;
	*S = a * a * sqrtf(3) / 4;
}
