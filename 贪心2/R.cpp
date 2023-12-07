#include <bits/stdc++.h>
#define int long long
const int INF=1e18+1;
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 50010
#define maxm 50010
int n,m,L,s,t;
struct EDGE{
    int to,nex,val;
}edge[maxm];
int head[maxm],cnt;
int id[maxn],tk;


queue<int> q;

int dis[maxn];
bool vis[maxn];

int u[maxm],v[maxm],w[maxm];

inline void add(int u,int v,int w){
    edge[++cnt].to=v;
    edge[cnt].val=w;
    edge[cnt].nex=head[u];
    head[u]=cnt;
}

inline void spf(){
	for(int i=1;i<=n;++i){
		dis[i]=INF;
		vis[i]=0;
	}
    dis[s]=0;
    q.push(s);
    vis[s]=1;
    while(!q.empty()){
    	int u=q.front();
    	q.pop();
    	vis[u]=0;
    	for(int i=head[u];i;i=edge[i].nex){
    		int v=edge[i].to;
    		if(dis[v]>dis[u]+edge[i].val){
    			dis[v]=dis[u]+edge[i].val;
    			if(!vis[v]){
    				vis[v]=1; q.push(v);
				}
			}
		}
    }
}

signed main(){
	n=read();m=read();L=read();s=read();t=read();
	s++; t++;
	for(int i=1;i<=m;++i){
		u[i]=read()+1; v[i]=read()+1; w[i]=read();
		if(w[i]!=0){
			add(u[i],v[i],w[i]);
			add(v[i],u[i],w[i]);
		}
		else{
			id[++tk]=i;
		}
	}
	spf();
	
	if(dis[t]<L){
		cout<<"NO"<<endl;
		return 0;
	}
	else if(dis[t]==L){
		cout<<"YES"<<endl;
		for(int i=1;i<=m;++i){
			if(w[i]!=0){
				cout<<u[i]-1<<" "<<v[i]-1<<" "<<w[i]<<endl; 
			}
			else{
				cout<<u[i]-1<<" "<<v[i]-1<<" "<<INF-1<<endl;
			}
		}
		return 0;
	}
	else{
		for(int i=1;i<=tk;++i){
			w[id[i]]=1;
			add(u[id[i]],v[id[i]],1);
			add(v[id[i]],u[id[i]],1);
			spf();
			if(dis[t]>L) continue;
			else{
				cout<<"YES"<<endl;
				w[id[i]]=L-dis[t]+1;
				for(int i=1;i<=m;++i){
					cout<<u[i]-1<<" "<<v[i]-1<<" ";
					if(w[i]==0) cout<<INF-1<<endl;
					else cout<<w[i]<<endl;
				}
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
