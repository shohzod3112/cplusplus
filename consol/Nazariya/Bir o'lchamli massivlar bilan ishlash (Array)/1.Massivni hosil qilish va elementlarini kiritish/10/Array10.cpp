#include <iostream>
using namespace std;
int main ()
{
    int a[10] = {0}, b[10] = {0}, c[10] = {0};
    int n, index, soni = 0, soni1 = 0;
    cout << "0 < n < 10 oraliqda son kiriting!!!" << endl;
    
    cout << "n = "; cin >> n;
    if(0 <= n && n <= 10)
    {
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        if(a[i] % 2 == 0)
            {
                index = i;
                b[soni] = a[index];
                soni++;
            }  
        else
            {
                index = i;
                c[soni1] = a[index];
                soni1++;
            }
          
    }
 }
    else cout << "0 < n < 10 oraliqdagi sonni kiriting!!!" << endl;
    cout << endl;
    
    
    int i = 0;
    while(soni > 0)
    {
        cout << "b[" << i << "] = " << b[i] << endl;
        soni--;
        i++;
    }
    cout << endl;
    while(soni1 > 0)
    {
        cout << "c[" << i << "] = " << c[soni1 - 1] << endl;
        soni1--;
        i++;
    }
    return 0;
}