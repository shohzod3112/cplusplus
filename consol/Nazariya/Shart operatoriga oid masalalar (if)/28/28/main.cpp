// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: Yil (musbat son) berilgan. Yilda nechta kun borligini hisoblovchi dastur tuzing.
// Kabisa yilida 366 kun bor, kabisa bo'lmagan yilda esa 365 kun bor.Kabisa tili deb
// 4 ga karrali yillarga aytiladi. Lekin 100 ga karrali yillar ichida faqat 400 ga
// karralilari kabisa yili hisoblanadi. Masalan: 300, 1300, 1900 kabisa yili emas.1200, 1400 kabisa yili.

#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Yilni kiriting = "; cin >> x;

    if((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0))

    cout << "Bu yilda 366 kun bor. Ya'ni kabisa yili";

    else cout << "Bu yilda 365 kun bor. Ya'ni kabisa yili emas";

    return 0;
}
