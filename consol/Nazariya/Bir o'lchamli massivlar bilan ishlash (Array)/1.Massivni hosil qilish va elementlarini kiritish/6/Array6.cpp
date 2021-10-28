#include <iostream>
using namespace std;
int main ()
{
    int a[10] = {0}, b, c;
    int n, f;
    cout << "0 < n < 10 oraliqda son kiriting!!!" << endl;
    
    cout << "n = "; cin >> n;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    a[0] = b;
    a[1] = c;
    
    if(0 <= n && n <= 10)
    {
    for(int i = 2; i < n; i++)
    {
    for(int j = 0; j < i; j++)
        a[i] += a[j];
    }
    }
    for(int i = 0; i < n; i ++)
    cout << "a[" << i + 1 << "] = " << a[i] << endl;
    
    return 0;
}