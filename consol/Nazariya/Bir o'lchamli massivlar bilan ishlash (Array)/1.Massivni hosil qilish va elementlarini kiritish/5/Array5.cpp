#include <iostream>
using namespace std;
int main ()
{
    int a[10] = {0};
    int n, f1 = 1, f2 = 1, f;
    cout << "0 < n < 10 oraliqda son kiriting!!!" << endl;
    
    cout << "n = "; cin >> n;
    a[0] = f1;
    a[1] = f2;
    
    if(0 <= n && n <= 10)
    {
    for(int i = 2; i < n; i++)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        a[i] = f2;
    }
    }
    for(int i = 0; i < n; i ++)
    cout << "a[" << i + 1 << "] = " << a[i] << endl;
    
    return 0;
}