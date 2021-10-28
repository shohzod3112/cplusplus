// Muallif: Ro'ziyev Shohzod
// Sana: 16.02.2017
// Maqsad: MonthDays funksiyasidan foydalangan holda, PrevDate(D, M, Y) funksiyasini hosil qiling.
// Funksiyada berilgan sanadan keyingi sanani aniqlasin, D-kun, Y-yil M-oyini qaytarsin.
// 3 ta berilgan sanadan oldingi sana aniqlansin. (FunSimple53 masalaga qarang.)

#include <iostream>

using namespace std;

void PrevDate(int *, int *, int *);
int MonthDays(int *, int *);
bool IsLeapYear(int *);

int main()
{
    int y, m, d1, d2, d3;

    cout << "Yilni kiriting" << endl;
    cout << "y = "; cin >> y;
    cout << "Oyni kiriting" << endl;
    cout << "m = "; cin >> m;
    cout << "Kunni kiriting" << endl;

    cout << "1-kun = "; cin >> d1;
    cout << "2-kun = "; cin >> d2;
    cout << "3-kun = "; cin >> d3;

    PrevDate(&d1, &m, &y);
    cout << "Kiritilgan sanadan oldingi sana = " << d1 << "/" << m << "/" << y << endl;
    PrevDate(&d2, &m, &y);
    cout << "Kiritilgan sanadan oldingi sana " << d2 << "/" << m << "/" << y << endl;
    PrevDate(&d3, &m, &y);
    cout << "Kiritilgan sanadan oldingi sana " << d3 << "/" << m << "/" << y << endl;

    return 0;
}
    bool IsLeapYear(int *a)
    {
        if(*a % 400 == 0 || *a % 4 == 0 && *a % 100 != 0) return true;
        else return false;
    }
    int MonthDays(int *m, int *y)
    {
        int kun = *m;
        switch(kun)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: kun = 31; break;

            case 2: kun = 28 + IsLeapYear(&*y); break;

            default: kun = 30;
        }
        return kun;
    }
    void PrevDate(int *day, int *month, int *year)
    {
        int n, m;
        n = *day;
        *day -= 1;
        m = *month;
       if(n - 1 == 0)
        {
            if(m == 1)
            {
                *year -= 1;
                 *month = 12;
                 *day = 31;
            }
            else
            {
                *month -= 1;
                *day = MonthDays(&*month, &*year);
            }
        }
    }
