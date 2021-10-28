#include <bits/stdc++.h>

using namespace std;

class talaba
{
public:
    int age;
    talaba(string name, int age1)
    {
        if(age > 0)this->age = age1;
        else this->age = 0;

        if(name != "") this->name = name;
        else this->name = "Shohzod";
    }

    void setAge(int age)
    {
        if(age >= 0) this->age = age;
        return ;
    }

    int getAge()
    {
        return this->age;
    }

    void setName(string name)
    {
        if(name != "")
        {
            this->name = name;
        }
        return ;
    }

    string getName()
    {
        return this->name;
    }
private:
//    int age;
    string name;
};

int main()
{
    int yosh;
    string ism;

    cin >> ism >> yosh;

    /** talaba a(ism, yosh);
    cout << a.getName() << " " << a.getAge() << endl;
    cin >> name;
      cin >> yosh;
    a.setName(ism);
    a.setAge(yosh);
    cout << a.getName() << " " << a.getAge();
    */
    talaba *a[100];
    a[0] = new talaba(ism, yosh);
    a[0]->setAge(-5);
    //a[0]->setName("ki");
    cout << a[0]->getName() << " " << a[0]->getAge() << endl;

    return 0;
}
