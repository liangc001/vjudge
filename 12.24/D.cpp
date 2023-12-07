#include<bits/stdc++.h>

using namespace std;

int n,m;
set<string> s;

struct WO{
    int cnt;
    string s;
}w[1010];
int cnt;

inline bool cmp(WO x,WO y){
    return x.cnt<y.cnt;
}
int ans;
string las;
signed main(){
    cin>>n>>m;
    for(int i=1;i<=m;++i){
        cin>>las;
        s.insert(las);
    }
    set<string>::iterator it;
    for(it=s.begin();it!=s.end();++it){
        w[++cnt].s=*it;
        w[cnt].cnt=w[cnt].s.size();
    }
     sort(w+1,w+1+cnt,cmp);
    for(int i=1;i<=cnt;++i){
        if(n==w[i].cnt){
            ans++; break;
        }
        else if(n>w[i].cnt){
            ans++;
            n-=(w[i].cnt+1);
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}