#include <bits/stdc++.h>
#define int long long
#define inf 0x3f3f3f3f
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}


#define maxm 100010
#define maxn 100010
int n,m;
int c,d,e;
int u,v,w;

struct EDGE{
	int to,nex,val;
}edge[maxm];
int head[maxn],cnt;
int s;
int x=inf,y=inf;
bool vis[maxn]; 

inline void add(int u,int v,int w){
	edge[++cnt].to=v;
	edge[cnt].val=w;
	edge[cnt].nex=head[u];
	head[u]=cnt;
}

inline void dfs(int now,int step,int kk){
	if(now==n){
		x=min(x,step); y=min(y,kk);
		return;
	}
	for(int i=head[now];i;i=edge[i].nex){
		int v=edge[i].to; int w=edge[i].val;
		if(vis[v]) continue;
		vis[v]=1;
		dfs(v,step+1,max(kk,w));
		vis[v]=0;
	}
}

signed main(){
	n=read();
	m=read();
	c=read(); d=read(); e=read();
	for(int i=1;i<=m;++i){
		u=read(); v=read(); w=read();
		add(u,v,w); add(v,u,w);
	}
	s=1;
	dfs(s,0,0);
	if(x==inf||y==inf){
		cout<<-1<<endl; return 0;
	}
	x=x%d==0?x/d:x/d+1; y=y%e==0?y/e:y/e+1;
	cout<<max(x,y);
	return 0;
}
