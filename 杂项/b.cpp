#include<bits/stdc++.h>
using namespace std;
#define int long long

#define maxn 100010
int n;
int a[maxn];
int m;
int x;

signed main(){
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    cin>>m;
    for(int i=1;i<=m;++i){
        cin>>x;
        if(x<=a[1]){
            cout<<a[1]<<endl;
            continue;
        }
        if(x>=a[n]){
            cout<<a[n]<<endl;
            continue;
        }
        int pos=lower_bound(a+1,a+1+n,x)-a;
        if(a[pos]-x>=x-a[pos-1]){
            cout<<a[pos-1]<<endl;
        }
        else{
            cout<<a[pos]<<endl;
        }
    }
    return 0;
}