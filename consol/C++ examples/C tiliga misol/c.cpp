#include <bits/stdc++.h>

using namespace std;

int n, a[100];
__int64 m;

long long l;
double r;
float w;
char c;
int hh, mm, ss;

int main(){
    /**
    puts("int toifasidagi ozgruvchi");
    scanf("%d", &n);
    puts("int64 toifasidagi ozgruvchi");
    scanf("%I64d", &m);
    puts("long long toifasidagi ozgruvchi");
    scanf("%lld", &l);
    puts("double toifasidagi ozgruvchi");
    scanf("%llf", &r);
    puts("float toifasidagi ozgruvchi");
    scanf("%f", &w);
    puts("char toifasidagi ozgruvchi");
    scanf("%s", &c);
    puts("int toifasidagi n ta elementli massiv");
    for(int i = 0; i < n;i ++){
        scanf("%d", &a[i]); /// scanf("%d", a + i); desayam bolaveradi
    }
    printf("%dShohzod", n);*/
   /** cin >> hh >> c >> mm >> c >> ss;
    cout << hh << ':' << mm << ':' << ss;
    */
    scanf("%d:%d:%d", &hh, &mm, &ss);
    printf("%02d:%02d:%02d", hh, mm, ss);

    return 0;
}
