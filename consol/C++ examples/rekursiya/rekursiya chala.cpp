#include <bits/stdc++.h>
using namespace std;
int x, y, z, k, ans;
void solve(int x, int y, int z, int k){
    if(k == 0) {
        ans ++;
        return ;
    }
    if(k - x >= 0) solve(x, y, z, k-x);
    if(k - y >= 0) solve(x, y, z, k-y);
    if(k - z >= 0) solve(x, y, z, k-z);
    return ;
}
int main(){
    cin >> x >> y >> z >> k;
    solve(x, y, z, k);
    cout << ans/2;
    return 0;
}
