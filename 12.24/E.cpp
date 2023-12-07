#include<bits/stdc++.h>
using namespace std;

inline int read(){
    int x=0,t=1; char ch=getchar();
    while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
    if(ch=='-') t=-1,ch=getchar();
    while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
    return x*t;
}

int n,m;
struct PO{
    int x,y;
}ed[200010];

int du[200010];
int ans=0;
int f[200010];
int cnt=0;
pair<int,int> p[200010];

inline int find(int x){
    if(f[x]==x) return x;
    else return f[x]=find(f[x]);
}

bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.first==b.first){
		return a.second<b.second;
	}
	else{
		return a.first<b.first;
	}
}

signed main(){
    n=read(); m=read();
    for(int i=1;i<=n;++i) f[i]=i;
    for(int i=1;i<=m;++i){
        ed[i].x=read(); ed[i].y=read();
        p[i].first=max(ed[i].x,ed[i].y);
        p[i].second=min(ed[i].x,ed[i].y);
    }
    sort(p+1,p+1+m,cmp);
    for(int i=1;i<=m;++i){
        int fx=find(p[i].first);
        int fy=find(p[i].second);
        if(fx!=fy){
            f[fx]=fy;
        	du[p[i].first]++; du[p[i].second]++;
        	ans=max(ans,max(du[p[i].first],du[p[i].second]));
			cnt++;
        	if(cnt==n-1) break;
		}
    }
    cout<<ans<<endl;
    return 0;
}
