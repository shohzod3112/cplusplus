#include <bits/stdc++.h>
using namespace std;

stack <char> s;

int n;
char a;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a == '(')
            s.push(a);
        else
        {
            if(s.empty())
            {
                cout << "NO";
                return 0;
            }
            else
            {
                s.pop();
            }
        }
    }
    if(s.empty()) cout << "YES";
    else cout << "NO";
    return 0;
}
