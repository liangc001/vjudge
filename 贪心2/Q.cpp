#include <bits/stdc++.h>
#define int long long
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 100010
int n,m,k;
int u,v,l;
struct EDGE{
	int u,v,w;
}edge[maxn];
int head[maxn],cnt;
bool vis[maxn];

int ans=-1;

inline bool cmp(EDGE x,EDGE y){
	return x.w<y.w;
}

signed main(){
	n=read();
	m=read();
	k=read();
	for(int i=1;i<=m;++i){
		edge[i].u=read();
		edge[i].v=read();
		edge[i].w=read();
	}
	for(int i=1;i<=k;++i){
		int x=read(); vis[x]=1;
	}
	sort(edge+1,edge+1+m,cmp);
	for(int i=1;i<=m;++i){
		if(vis[edge[i].u]!=vis[edge[i].v]){
			ans=edge[i].w;
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
