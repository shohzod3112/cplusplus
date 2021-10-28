// Muallif: Ro'ziyev Shohzod
// Sana: 07.12.2014
// Maqsad: Chapga siklik siljishni amalga oshiruvchi ShiftLeft3(A,B,C)
// funksiyasini hosil qiling. Ya'ni C ning qiymati B ga, B ning qiymati
// A ga, A ning qiymati C ga o'tib qolsin. Bu funksiya orqali
// (A1, B1, C1) va (A2, B2, C2) sonlarini siljiting.

#include <iostream>
#include <math.h>

using namespace std;

// Funksiya prototipi
void ShiftLeft(int *, int *, int *);

int main()
{
    int a1, a2, b1, b2, c1, c2;

	cout << "a1 = "; cin >> a1;
	cout << "b1 = "; cin >> b1;
	cout << "c1 = "; cin >> c1;

	cout << "\na2 = "; cin >> a2;
	cout << "b2 = "; cin >> b2;
	cout << "c2 = "; cin >> c2;

	cout << endl;

	cout << a1 << " " << b1 << " " << c1 << endl;
	ShiftLeft(&a1, &b1, &c1);
	cout << a1 << " " << b1 << " " << c1 << endl;

	cout << endl;

	cout << a2 << " " << b2 << " " << c2 << endl;
	ShiftLeft(&a2, &b2, &c2);
	cout << a2 << " " << b2 << " " << c2 << endl;

	return 0;
}
	void ShiftLeft(int *a, int *b, int *c)
{
	*a = *a + *b + *c;

	*c = *a - *b - *c;

	*b = *a - *b - *c;

	*a = *a - *b - *c;
}
