#include <bits/stdc++.h>

using namespace std;

const int N = 5e5 + 10;
int a[N], ans;

int main(){
    int q, x;
    cin >> q >> x;
    while (q --){
        int k;
        cin >> k;
        a[k % x] ++;
        while (a[ans % x]) a[ans % x] --, ans ++;
        cout << ans << endl;
    }
}

