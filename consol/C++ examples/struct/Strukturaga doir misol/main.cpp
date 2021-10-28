#include <iostream>

using namespace std;
struct futbolchi
{
    char fam[25];
    char ism[25];
    char otasi[25];
    int sana;
    char fuqoroligi[25];
    char club[25];
    int soni;
};
istream operator >> (istream& input, futbolchi& k)
{
    cout << "Familyani kiriting\n";
    input >> k.fam;

    cout << "Ismni kiriting\n";
    input >> k.ism;

    cout << "Otasining ismini kiriting\n";
    input >> k.otasi;

    cout << "Tug'ilgan sanasini kiriting\n";
    input >> k.sana;

    cout << "Fuqoroligini kiriting\n";
    input >> k.fuqoroligi;

    cout << "Klub nominini kiriting\n";
    input >> k.club;

    cout << "Urgan gollar sonini kiriting\n";
    input >> k.soni;

    return input;

    ostream& operator << (ostream& out, futbolchi k)
    {
        out << k.fam;
        out << " " << k.ism;
        out << "\t" << k.otasi;
        out << "\t" << k.sana;
        out << "\t" << k.fuqoroligi;
        out << "\t" << k.club;
        out << "\t" << k.soni;
        return out;
    }
}
int main()
{
    futbolchi p;
    FILE * f;
    int n = 0;

    f = fopen("futbolchi.dat", "a+");

    cout << "Faqat ro'yxatni ko'rish uchun 0 kiriting\n";
    cout << "Yangi kiritiladigan futbolchilar sonini kiriting\n"; cin >> n;

    if(n >= 1)
        for(int i = 1; i <= n; i++)
    {
        cout << i << " - futbolchi ma'lumotlarini kiriting\n";
        cin >> p;

        fwrite(&p, sizeof(futbolchi), 1, f);
    }
    rewind(f);

    cout << "Futbolchilar ro'yxati\n";
    n = 0;
    while(fread(&p, sizeof(futbolchi), 1, f))
    {
        n++;
        cout << n << " ";
        cout << p;
    }
    rewind(f);

    cout << "2 tadan ko'p gol urgan futbolchilar ro'yaxati\n";
    n = 0;
    while(fread (&p, sizeof(futbolchilar), 1, f))
    {
        if(p.soni >= 2)
        {
            n++;
            cout << n << " ";
            cout << p;
        }
    }
    fclose(f);

    return 0;
}
