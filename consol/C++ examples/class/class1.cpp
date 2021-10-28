#include <bits/stdc++.h>

using namespace std;

class odam
{
public:
    odam()
    {
        this->ism = "name";
        this->fam = "surname";
        this->yosh = 20;
    }

    /**
    ~odam(){

    }
    */

    void setname(string name)
    {
        if(name.length() > 3)
        {
            ism = name;
        }
        return;
    }

    string getname()
    {
        return ism;
    }

    void setfam(string familya)
    {
        if(familya.length() > 3)
        {
            fam = familya;
        }
        return;
    }

    string getfam()
    {
        return fam;
    }

    void setyosh(int age)
    {
        if(age > 0)
        {
            yosh = age;
        }
        return;
    }

    int getyosh()
    {
        return yosh;
    }

    private:
        string ism, fam;
        int yosh;

};

bool cmp(odam *a, odam *b)
{
    if(a->getfam() != b->getfam())
        return a->getfam() < b->getfam();
    if(a->getname() != b->getname())
        return a->getname() < b->getname();
    return a->getyosh() > b->getyosh();
}

istream &operator >> (istream &in, odam *a)
{
    string fam, ism;
    int yosh;
    in >> fam >> ism >> yosh;
    a->setfam(fam);
    a->setname(ism);
    a->setyosh(yosh);
    return in;
}

ostream &operator << (ostream &out, odam *a)
{
    out << a->getfam() << " " << a->getname() << " " << a->getyosh() << endl;
    return out;
}

int main()
{
    odam *a[10];

    for (int i = 0; i < 3; i ++)
    {
        //cin >> familiyangiz >> ismingiz >> yoshingiz;
        a[i] = new odam();
        cin >> a[i];
        /**a[i]->setfam(familiyangiz);
        a[i]->setname(ismingiz);
        a[i]->setyosh(yoshingiz);
        */
    }

    sort(a, a + 3, cmp);

    for (int i = 0; i < 3; i ++)
    {
        cout << a[i];
    }

    return 0;
}
