// Muallif: Ro'ziyev Shohzod
// Sana: 04.12.2014
// Maqsad: Ihtiyoriy sonning 3 - darajasini hisoblovchi
// Power A3 nomli funksiya hosil qiling. Power A3 funksiyasi
// orqali A, B, C haqiqiy sonlarining va D, E butun sonlarining
// 3 - darjasini hisoblovchi programma tuzilsin.

#include <iostream>

using namespace std;

// Funksiya prototipi

int  powera3 (int);
float powera3(float);

int main()
{
    float a, b, c;
    int d, e;

	cout << "a, b, c haqiqiy sonlarni kiriting \n";

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << "d, e butun sonlarni kiriting \n";

	cout << "d = "; cin >> d;
	cout << "e = "; cin >> e;

// Bir xil nomli funksiyalar, funksiya prototipida
// ko'rsatilgan toifa bilan funksiyaga uzatilayotgan
// o'zgaruvchi toifasining mosligiga qarab chaqiriladi
// float powera3(float) funksiyasi chaqiriladi

	cout << "a ning 3-darajasi " << powera3(a) << endl;
	cout << "b ning 3-darajasi " << powera3(b) << endl;
	cout << "c ning 3-darajasi " << powera3(c) << endl;

//	int powera3(int) funksiyasi chaqiriladi

	cout << "d ning 3-darajasi " << powera3(d) << endl;
	cout << "e ning 3-darajasi " << powera3(e) << endl;

	return 0;
}
	int powera3(int k)
{
	return k * k * k;
}
    float powera3(float b)
{
	return b * b * b;
}
