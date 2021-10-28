// Muallif:Ro'ziyev Shohzod
// Sana: 12.02.2013
// Maqsad: Fayl hajmi baytlarda berilgan.Bo'lib butunni olish operatsiyasidan foydalanib,
// fayl hajmining to'liq kilobaytlarda ifodalovchi programma tuzing.

#include <iostream>

using namespace std;

int main()
{
    float M;

    cout << "Baytni kiriting = "; cin >> M;

    cout << "kilobaytlar soni " << M / 1024 << endl;

    return 0;
}
