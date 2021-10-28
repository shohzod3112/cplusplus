#include <iostream>
using namespace std;
int main ()
{
    int a[10] = {0};
    int n;
    cout << "0 < n < 10 oraliqda son kiriting!!!" << endl;
    
    cout << "n = "; cin >> n;
    if(0 <= n && n <= 10)
    {
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    int i = 0;
    while(n > 0)
    {
        cout << "a[" << i << "] = " << a[n - 1] << endl;
        n--;
        i++;
    }
    }
    return 0;
}