// Muallif: Ro'ziyev Shohzod
// Sana: 16.02.2017
// Maqsad: IsLeapYear (Y) funksiyasidan foydalangan holda, butun qiymat qaytaruvchi MonthDays(M, Y) funksiyasini hosil qiling.
// Funksiyada berilgan. Y-yilning M-oyi kunlar sonini qaytarsin.
// Berilgan yilning M1, M2, M3 oylarining kunlar soni topilsin.

#include <iostream>
#include <iomanip> // formatlab chiqarish uchun

using namespace std;

bool IsLeapYear(int *);
int MonthDays(int *, int *);

int main()
{
    int y, M1, M2, M3;

    cout << "Yilni kiriting" << endl;
    cout << "y = "; cin >> y;

    cout << "Oylarga mos nomer kiriting" << endl;
    cout << " yanvar - 1 \n fevral - 2 \n mart - 3 \n aprel - 4 \n may - 5 \n iyun - 6 \n iyul - 7 \n avgust - 8 \n sentabr - 9 \n oktabr - 10 \n noyabr - 11 \n dekabr - 12" << endl;

    cout << "M1 = "; cin >> M1;
    cout << "M2 = "; cin >> M2;
    cout << "M3 = "; cin >> M3;

    cout << y << " yilning " << M1 << " oyida ";
    cout << MonthDays(&y, &M1) << " kun bor" << endl;
    cout << y << " yilning " << M2 << " oyida ";
    cout << MonthDays(&y, &M2) << " kun bor" << endl;
    cout << y << " yilning " << M3 << " oyida ";
    cout << MonthDays(&y, &M3) << " kun bor" << endl;

    return 0;
}
    bool IsLeapYear(int *a)
    {
        if(*a % 400 == 0 || *a % 4 == 0 && *a % 100 != 0) return true;
        else return false;
    }
    int MonthDays(int *y, int *m)
    {
        switch(*m)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: *m = 31; break;

            case 2:  *m = 28 + IsLeapYear(&*y); break;

            default: *m = 30;
        }
        return *m;
    }
