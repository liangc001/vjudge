#include<bits/stdc++.h>

using namespace std;

int n,m;
int k[110];
int a[110];
int f[110];
int ans;

inline int find(int x){
    if(x==f[x]) return x;
    else return f[x]=find(f[x]);
}

set<int> s[110];

signed main(){
    cin>>n>>m;
    int flag_cnt=0;
    for(int i=1;i<=n;++i) f[i]=i;
    for(int i=1;i<=n;++i){
        int cnt;
        cin>>cnt;
        if(cnt==0) flag_cnt++;
        while(cnt--){
            int x;
            cin>>x;
            s[i].insert(x);
        }
    }
    if(n==flag_cnt){
        cout<<n<<endl;
        return 0;
    }
    for(int i=1;i<=n;++i){
        for(int j=i+1;j<=n;++j){
            bool flag=0;
            set<int>::iterator it;
            for(it=s[i].begin();it!=s[i].end();++it){
                if(s[j].find(*it)!=s[j].end()){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                int fx=find(i);
                int fy=find(j);
                if(fx!=fy){
                    f[fx]=fy;
                }
            }
        }
    }
    for(int i=1;i<=n;++i){
        if(f[i]==i){
            ans++;
        }
    }
    cout<<ans-1<<endl;
    return 0;
}