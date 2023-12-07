#include<bits/stdc++.h>

using namespace std;

#define maxn 10010

int n,m,k;
int cnt,tot;
int th;
int c[maxn],f[maxn],p[maxn];
int dep[maxn],ans[maxn];
int fa[maxn][25];
int flag,num[maxn];
bool vis[maxn];

struct NODE{
	int u,v,id;
}a[maxn],b[maxn];
struct EDGE{
	int nex,to,id;
}edge[maxn<<1];

inline int find(int x){
	if(p[x]==x) return x;
	else return p[x]=find(p[x]);
}

inline void dfs(int u,int ft){
	fa[u][0]=ft;
	dep[u]=dep[ft]+1;
	for(int i=1;i<20;++i){
		fa[u][i]=fa[fa[u][i-1]][i-1];
	}
	for(int i=f[u];i;i=edge[i].nex){
		int v=edge[i].to;
		if(v==ft) continue;
		num[v]=edge[i].id;
		dfs(v,u);
	}
}

inline int lca(int x,int y){
	for(int i=19;i>=0;--i){
		if(dep[fa[x][i]]>=dep[y]){
			x=fa[x][i];
		}
		if(dep[fa[y][i]]>=dep[x]){
			y=fa[y][i];
		}
	}
	if(x==y) return x;
	for(int i=19;i>=0;--i){
		if(fa[x][i]!=fa[y][i]){
			x=fa[x][i]; y=fa[y][i];
		}
	}
	return fa[x][0];
}

inline void ask(int u,int ft){
	vis[u]=1;
	for(int i=f[u];i;i=edge[i].nex){
		int v=edge[i].to;
		if(v==ft) continue;
		ask(v,u);
		c[u]+=c[v];
	}
}

signed main(){
	cin>>n>>m;
	for(int i=1;i<=n;++i) p[i]=i;
	for(int i=1;i<=m;++i){
		cin>>a[i].u;
		cin>>a[i].v;
		a[i].id=i;
	}
	for(int i=1;i<=m;++i){
		int x=find(a[i].u);
		int y=find(a[i].v);
		if(x!=y){
			p[x]=y;
			edge[++tot].to=a[i].u;
			edge[tot].nex=f[a[i].v];
			edge[tot].id=a[i].id;
			f[a[i].v]=tot;
			edge[++tot].to=a[i].v;
			edge[tot].nex=f[a[i].u];
			edge[tot].id=a[i].id;
			f[a[i].u]=tot;
		}
		else{
			b[++k]=a[i];
		}
	}
	for(int i=1;i<=n;++i){
		if(!dep[i]){
			dfs(i,0);
		}
	}
	for(int i=1;i<=k;++i){
		int u=b[i].u;
		int v=b[i].v;
		int tes=lca(u,v);
		int len=dep[u]+dep[v]-dep[tes]*2;
		int reg=1;
		if(len&1){
			reg=-1;
		} 
		else{
			flag++;
			th=b[i].id;
		}
		c[u]+=reg;
		c[v]+=reg;
		c[tes]-=2*reg;
	}
	for(int i=1;i<=n;++i){
		if(!vis[i]){
			ask(i,0);
		}
	}
	if(flag==0){
		for(int i=1;i<=m;++i){
			ans[++cnt]=i;
		}
	}
	else{
		for(int i=1;i<=n;++i){
			if(c[i]==flag){
				ans[++cnt]=num[i];
			}
		}
	}
	if(flag==1){
		ans[++cnt]=th;
	}
	sort(ans+1,ans+1+cnt);
	cout<<cnt<<endl;
	for(int i=1;i<=cnt;++i){
		cout<<ans[i]<<" ";
	}
	return 0;
}
