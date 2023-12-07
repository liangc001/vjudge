#include<bits/stdc++.h>
#define int long long
using namespace std;
#define maxn 100010
int n,a[maxn],m;

signed main(){
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    cin>>m;
    for(int i=1;i<=n;++i){
        if(a[i]>m/2){
            break;
        }
        int tes=m-a[i];
        int pos=lower_bound(a+1+i,a+1+n,tes)-a;
        if(a[pos]==tes){
            cout<<a[i]<<" "<<tes<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}