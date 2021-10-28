#include <bits/stdc++.h>
using namespace std;

stack <char> s;

int n, soni;
char a;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a == '(' || a == '{' || a == '[')
            {
                s.push(a);
                soni++;
            }
        }

/**
        else
        {
            if(s.empty())
            {
                cout << "NO";
                return 0;
            }
            if(a == ')')
            {
                if (s.top() == '(')
                        s.pop();
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
            if(a == '}')
            {
                if (s.top() == '{')
                        s.pop();
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
            if(a == ']')
            {
                if (s.top() == '[')
                        s.pop();
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    if(s.empty()) cout << "YES";
    else cout << "NO";
*/
    //Stack elementlarini chiqarish

    for(int i = 0; i < soni; i++)
    {
        cout << s.top() << " "; s.pop();
    }

    return 0;
}
