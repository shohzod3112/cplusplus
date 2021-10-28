#include<bits/stdc++.h>

using namespace std;

class Talaba
{
public:
    void setbaho(int a1, int a2, int a3, int a4, int a5)
    {
        if(a1 >= 0 && a1 <= 5)
            {
                this->a1 = a1;
            }
        if(a2 >= 0 && a2 <= 5)
            {
                this->a2 = a2;
            }
        if(a3 >= 0 && a3 <= 5)
            {
                this->a3 = a3;
            }
        if(a4 >= 0 && a4 <= 5)
            {
                this->a4 = a4;
            }
        if(a5 >= 0 && a5 <= 5)
            {
                this->a5 = a5;
            }
    }
    float getbaho()
    {
        float orta;
        orta = 1.0 * (a1 + a2 + a3 + a4 + a5) / 5;
        return orta;
    }

    void setName(string ism)
    {
        name = ism;
        return;
    }

    string getName()
    {
        return name;
    }

   private:
    string name;
    int a1, a2, a3, a4, a5;
};

bool cmp (Talaba a, Talaba b)
{
    return a.getbaho() > b.getbaho();
}

int main()
{
    Talaba a[3];
    int baho[5];
    string ism;

    for (int i = 0; i < 3; i ++)
    {
        cin >> ism;
        cin >> baho[0] >> baho[1] >> baho[2] >> baho[3] >> baho[4];
        a[i].setName(ism);
        a[i].setbaho(baho[0], baho[1], baho[2], baho[3], baho[4]);
    }

    sort(a, a + 3, cmp);

    for (int i = 0; i < 3; i ++)
    {
        cout << a[i].getName() << " " << a[i].getbaho() << endl;
    }

    return 0;
}
