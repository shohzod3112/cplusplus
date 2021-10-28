#include <bits/stdc++.h>

using namespace std;

string s, a;

int main()
{
/// getline funksiyasi butun qatorni stringga o'zlashtirish uchun ishlatiladi.
/// getline bilan cin ning farqi masalan; cin da "Salom dunyo" kiritiladigan bo'lsa,
/// cin faqat "Salom" so'zini ya'ni birinchi probelgacha bo'lganini oladi.
/// getline "Salom dunyo" ni ya'ni birinchi entergacha oladi.

    getline(cin, s);

 //   cin >> s;

/** for(int i = 0; i < s.size(); i++)
    {
        s[i] = char(i + '0');
        //s[i] = 's';
    }
    */
/** if(s > a)
    {
        cout << "s katta";
    }

    else cout << "s katta emas";
    */
    s += '\'';
 ///   s += '\n';

    cout << s;

//    s = "\"gazeta nomi\"";

    int index = 0;

 ///   a = "";

    while(s[index] != '\0')
    {
        a += s[index];
        index++;
       ///S cout << a << endl;
    }
    cout << a;

    return 0;
}
