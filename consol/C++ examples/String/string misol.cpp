#include <bits/stdc++.h>

using namespace std;

string t;

int a[256], ans;

int main()
{
    getline(cin,t);
    ///cin >> t;

/// isalpha funksiyasi kiritilgan qiymatni birinchi belgisi "HARF" bo'lsa,
/// true aks holda false qiymat qaytaradi.
/**
    if(isalpha(t[0]))
    {
        cout << "YES";
    }
    else cout << "NO";
*/

/// isdigit funksiyasi kiritilgan qiymatni birinchi belgisi "RAQAM" bo'lsa,
/// true aks holda false qiymat qaytaradi.
/**
    if(isdigit(t[0]))
    {
        cout << "digit";
    }
    else cout << "not digit";
*/
/**
    for(int i = 0; i < t.size(); i++)
    {
        /// toupper hamma so'zlarni katta harfga almashtiradi.
        t[i] = toupper(t[i]);
    }
    cout << t << endl;
    for(int i = 0; i < t.size(); i++)
    {
        /// tolower hamma so'zlarni kichkina harfga almashtiradi.
        t[i] = tolower(t[i]);

    }
    cout << t << endl;

    for(int i = 0; i < t.size(); i++)
    {
        a[t[i]] = 1;
    }

    for(int i = 0; i < 256; i++)
    {
        if(a[i] == 1)
        {
            ans ++;
        }
    }
    cout << t.size() << endl;
    cout << ans;
*/
    return 0;
}
