#include <bits/stdc++.h>

/// Vektor hohlagan elementiga murojaat qilish imkoniyatiga ega bo'lgan massiv
/// Xoxlagan elementini o'chirish imkoniyati bor.
/// Biror element O'chirilganda yoki qo'shilgan(insert) da mos ravishda vektor(massiv) elementi indekslari o'zgaradi.

using namespace std;

vector <int> a;

int main(){

    int n, q;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> q;
        a.push_back(q);
    }
    ///2-elementdan boshlab, 4-elementgacha o'chirish
    ///a.erase(a.begin() + 2, a.begin() + 4);

    ///Vektorning hamma elementini o'chirish
    ///a.erase(a.begin(), a.end());

    ///Oxirgi elementni o'chirish
     ///a.pop_back();

    ///Vektorning 5-elementi o'rniga 19 raqamini qo'shish
    a.insert(a.begin() + 5, 19);

    ///Massiv o'lchamini olish
    n = a.size();

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
