// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: A, B, C sonlarini kamayish tartibida joylashtiruvchi
// SortDec3(A, B, C) funksiyasini hosil qiling. Ya'ni A, B, C sonlari
// qiymatlarini shunday almashtiringki, natijada A ning qiymati eng
// katta va C ning qiymati eng kichik bo'lsin.Bu funksiya orqali
// (A1, B1, C1) va (A2, B2, C2) sonlarini tartiblang.

#include <iostream>
#include <math.h>

using namespace std;

// Funksiya prototipi
void SortDec3(int *, int *, int *);

int main()
{
    int a1, a2, b1, b2, c1, c2;

	cout << "a1 = "; cin >> a1;
	cout << "b1 = "; cin >> b1;
	cout << "c1 = "; cin >> c1;

	SortDec3(&a1, &b1, &c1);

    cout << endl;

	cout << "a2 = "; cin >> a2;
	cout << "b2 = "; cin >> b2;
	cout << "c2 = "; cin >> c2;

	SortDec3(&a2, &b2, &c2);

    cout << endl;

	cout << "max = " << a1 << endl;
	cout << "b1 = " << b1 << endl;
	cout << "min = " << c1 << endl;

    cout << endl;

	cout << "max = " << a2 << endl;
	cout << "b2 = " << b2 << endl;
	cout << "min = " << c2 << endl;

 	return 0;
}
	void SortDec3(int *a, int *b, int *c)
{
	// a va b ni kattasini a ga olamiz
	int k;
	if(*a < *b)
{
	k = *a; *a = *b; *b = k;
}
	// a va c ni kattasini a ga olamiz

	if(*a < *c)
{
	k = *a; *a = *c; *c = k;
}
	// b va c ni kattasini b ga olamiz

	if(*b < *c)
{
	k = *b; *b = *c; *c = k;
}}
