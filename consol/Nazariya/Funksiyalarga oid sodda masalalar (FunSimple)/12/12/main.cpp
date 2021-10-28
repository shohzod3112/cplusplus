// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: A, B, C sonlarini o'sish tartibida joylashtiruvchi
// SortInc3(A,B,C) funksiyasini hosil qiling. Ya'ni A, B, C sonlari
// qiymatlarini shunday almashtiringki, natijada A ning qiymati eng
// kichik va C ning qiymati eng katta bo'lsin.Bu funksiya orqali
// (A1, B1, C1) va (A2, B2, C2) sonlarini tartiblang.

#include <iostream>
#include <math.h>

using namespace std;

// Funksiya prototipi
void Sortlnc(int *, int *, int *);

int main()
{
    int a1, a2, b1, b2, c1, c2;

	cout << "a1 = "; cin >> a1;
	cout << "b1 = "; cin >> b1;
	cout << "c1 = "; cin >> c1;

	Sortlnc(&a1, &b1, &c1);

    cout << endl;

	cout << "a2 = "; cin >> a2;
	cout << "b2 = "; cin >> b2;
	cout << "c2 = "; cin >> c2;

	Sortlnc(&a2, &b2, &c2);

    cout << endl;

	cout << "min = " << a1 << endl;
	cout << "b1 = " << b1 << endl;
	cout << "max = " << c1 << endl;

    cout << endl;

	cout << "min = " << a2 << endl;
	cout << "b2 = " << b2 << endl;
	cout << "max = " << c2 << endl;

  	return 0;
}
	void Sortlnc(int *a, int *b, int *c)
{
	// a va b ni kichigini a ga olamiz
	int k;
	if(*a > *b)
{
	k = *b; *b = *a; *a = k;
}
    // a va c ni kichigini a ga olamiz

	if(*a > *c)
{
	k = *c; *c = *a; *a = k;
}
	// b va c ni kichigini b ga olamiz

	if(*b > *c)
{
	k = *c; *c = *b; *b = k;
}}
