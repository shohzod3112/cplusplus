// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: O'ngga siklik siljishni amalga oshiruvchi ShiftRight3(A,B,C)
// funksiyasini hosil qiling. Ya'ni A ning qiymati B ga, B ning qiymati
// C ga, C ning qiymati A ga o'tib qolsin. Bu funksiya orqali
// (A1, B1, C1) va (A2, B2, C2) sonlarini siljiting.

#include <iostream>
#include <math.h>

using namespace std;

// Funksiya prototipi
void ShiftRight(int *, int *, int *);

int main()
{
    int a1, a2, b1, b2, c1, c2;

	cout << "a1 = ";    cin >> a1;
	cout << "b1 = ";    cin >> b1;
	cout << "c1 = ";    cin >> c1;

    cout << endl;

	cout << "a2 = ";    cin >> a2;
	cout << "b2 = ";    cin >> b2;
	cout << "c2 = ";    cin >> c2;

	cout << endl;

	cout << a1 << " " << b1 << " " << c1 << endl;

	ShiftRight(&a1, &b1, &c1);

	cout << a1 << " " << b1 << " " << c1 << endl;

    cout << endl;

	cout << a2 << " " << b2 << " " << c2 << endl;

	ShiftRight(&a2, &b2, &c2);

	cout << a2 << " " << b2 << " " << c2 << endl;

	return 0;
}
	void ShiftRight(int *a, int *b, int *c)
{
    // o'ngga siklik siljitamiz.

    int k;

	*a = *a + *b + *c;
	*b = *a - *b - *c;
	*c = *a - *b - *c;
	*a = *a - *b - *c;
}
