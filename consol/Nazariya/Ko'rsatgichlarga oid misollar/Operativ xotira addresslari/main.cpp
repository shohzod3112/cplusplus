#include <iostream>

using namespace std;

int main()
{
    int *n;
    n = NULL;
    for(int i = 0; i <= 1000000000000000; i++)
    {
        cout << "n = " << n << " ";
        n++;
    }
    return 0;
}
