#include <iostream>

using namespace std;

int main()
{
   int n, i = 0;
   cin >> n;
   a: i += 2; cout << i << endl;
   if(i < n-1)  goto a;

    return 0;
}
