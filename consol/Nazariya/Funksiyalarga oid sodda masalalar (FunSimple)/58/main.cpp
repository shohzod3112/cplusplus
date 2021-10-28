# include <iostream>
# include <math.h>
using namespace std;
float Leng(float *, float *, float *, float *);
float Perim(float *, float *, float *, float *, float *, float *);
float Area(float *, float *, float *, float *, float *, float *);
int main ()
{
    float x1, y1, x2, y2, x3, y3, x4,y4;
	float A, B, C, D;

    cout << "A nuqtaning kordinatalarini kiriting!!!" << endl;
    cout << "x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;

    cout << "B nuqtaning kordinatalarini kiriting!!!" << endl;
    cout << "x2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;

    cout << "C nuqtaning kordinatalarini kiriting!!!" << endl;
    cout << "x3 = "; cin >> x3;
    cout << "y3 = "; cin >> y3;

    cout << "D nuqtaning kordinatalarini kiriting!!!" << endl;
    cout << "x4 = "; cin >> x4;
    cout << "y4 = "; cin >> y4;

    cout << "ABC uchburchak yuzi!" <<	endl;
    cout << Area(&x1, &y1, &x2, &y2, &x3, &y3) << endl;
    cout << "ABD uchburchak yuzi!" <<	endl;
    cout << Area(&x1, &y1, &x2, &y2, &x4, &y4) << endl;
    cout << "BCD uchburchak yuzi!" <<	endl;
    cout << Area(&x2, &y2, &x3, &y3, &x4, &y4) << endl;
}
float Leng(float *x1, float *y1, float *a, float *b)
{
    float A;

    A = sqrt(fabs(pow((*x1 - *a),2)) + fabs(pow((*y1 - *b),2)));

    return A;
}
float Perim(float *xa, float *ya, float *xb, float *yb, float *xc, float *yc)
{
    float a, b, c, p;

	a = Leng(&*xa, *&ya, *&xb, &*yb);
	b = Leng(&*xa, &*ya, &*xc, &*yc);
	c = Leng(&*xb, &*yb, &*xc, &*yc);

    p = a + b +c;

    return p;
}
float Area(float *xa, float *ya, float *xb, float *yb, float *xc, float *yc)
{
    float s, p;

    p = Perim(&*xa, &*ya, &*xb, &*yb, &*xc, &*yc) / 2;
    s = sqrt(p * (p - Leng(&*xa, &*ya, &*xb, &*yb)) * (p - Leng(&*xa, &*ya, &*xc, &*yc)) * (p - Leng(&*xb, &*yb, &*xc, &*yc)));

    return s;
}
