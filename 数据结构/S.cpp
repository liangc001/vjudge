#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 500010
int t;
struct EDGE{
	int nex,to;
}edge[maxn*2];
int head[maxn],cnt;
int ans[maxn];

struct A{
	int id,a,b;
}a[maxn];
int s1,s2,tes;
bool vis[2*maxn];

inline void clear(){
	cnt=0; s1=0,s2=0;
	memset(head,0,sizeof(head));
	memset(ans,0,sizeof(ans));
	memset(vis,0,sizeof(vis));
}

inline bool cmp1(A x,A y){
	return x.a<y.a;
}
inline bool cmp2(A x,A y){
	return x.b<y.b;
}

inline void add(int u,int v){
	edge[++cnt].to=v;
	edge[cnt].nex=head[u];
	head[u]=cnt;
}

inline void bfs(){
	queue<int> q;
	ans[s1]=ans[s2]=1;
	if(s1==s2) q.push(s1);
	else{
		q.push(s1); q.push(s2);
	}
	while(!q.empty()){
		int u=q.front(); q.pop();
		for(int i=head[u];i;i=edge[i].nex){
			int v=edge[i].to;
			if(ans[v]==1) continue;
			ans[v]=1; q.push(v);
		}
	}
}

signed main(){
	t=read();
	while(t--){
		clear();
		int n=read();
		for(int i=1;i<=n;++i){
			a[i].a=read();
		}
		for(int i=1;i<=n;++i){
			a[i].b=read();
			a[i].id=i;
		}
		sort(a+1,a+1+n,cmp1);
		s1=a[n].id;
		for(int i=1;i<n;++i){
			add(a[i].id,a[i+1].id);
		}
		sort(a+1,a+1+n,cmp2);
		s2=a[n].id;
		for(int i=1;i<n;++i){
			add(a[i].id,a[i+1].id);
		}
			bfs();
			for(int i=1;i<=n;++i){
				cout<<ans[i];
			}
			cout<<endl;
			continue;
	}
	return 0;
}
