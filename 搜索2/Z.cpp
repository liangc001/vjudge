#include<bits/stdc++.h>
#define int long long
const int maxn=1<<18;
using namespace std;

int n,m;
int a[50];
long long x[maxn],y[maxn];
int cnt=0;
long long sum;
long long mid;
long long ans;

inline void dfs(int now){
    if(now==mid+1){
        cnt++;
        x[cnt]=sum%m;
        return;
    }
    sum+=a[now];
    dfs(now+1);
    sum-=a[now];
    dfs(now+1);
}

signed main(){
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        a[i]%=m;
    }
    mid=n/2;
    dfs(1);
    int y1=cnt;
    for(int i=1;i<=cnt;++i){
        y[i]=x[i];
    }
    sort(y+1,y+1+y1);
    memset(x,0,sizeof(x)); cnt=0; sum=0; mid=n;
    dfs((n/2)+1);
    for(int i=1;i<=cnt;++i){
        int pos=lower_bound(y+1,y+y1,m-x[i]-1)-y;
        while(x[i]+y[pos]>=m) --pos;
        ans=max(ans,x[i]+y[pos]);
    }
    cout<<ans<<endl;
    return 0;
}