# include <iostream>
# include <math.h>
using namespace std;
float Leng(int *, int *, int *, int *);
float Perim(int *, int *, int *, int *, int *, int *);
int main ()
{
    int x1, y1, x2, y2, x3, y3, x4,y4;
    int A, B, C, D;

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

    cout << "ABC uchburchak perimetri!" <<	endl;
    cout << Perim(&x1, &y1, &x2, &y2, &x3, &y3) << endl;
    cout << "ABD uchburchak perimetri!" <<	endl;
    cout << Perim(&x1, &y1, &x2, &y2, &x4, &y4) << endl;
    cout << "ACD uchburchak perimetri!" <<	endl;
    cout << Perim(&x1, &y1, &x3, &y3, &x4, &y4) << endl;
}
float Leng(int *x1, int *y1, int *a, int *b)
{
    float A;

    A = sqrt(pow((*x1 - *a),2) + pow((*y1 - *b),2));

    return A;
}
float Perim(int *xa, int *ya, int *xb, int *yb, int *xc, int *yc)
{
    float a, b, c, p;

	a = Leng(&*xa, *&ya, *&xb, &*yb);
	b = Leng(&*xa, &*ya, &*xc, &*yc);
	c = Leng(&*xb, &*yb, &*xc, &*yc);

    p = a + b +c;

    return p;
}
