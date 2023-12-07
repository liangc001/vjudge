#include<iostream>
#include<queue>

#define maxn 1010
#define maxm 100010
#define inf 0x3f3f3f3f
using namespace std;

struct EDGE{
	int nex,to,val;
}edge1[maxm],edge2[maxm];
int head1[maxn],head2[maxn];
int cnt1,cnt2;
int n,m,x;
int u,v,w;
int dis1[maxn],dis2[maxn];
bool vis1[maxn],vis2[maxn];
struct NODE{
	int x,w;
	inline bool operator < (const NODE &a)const{
		return w>a.w;
	} 
};
priority_queue<NODE> q1,q2;

inline void add1(int u,int v,int w){
	edge1[++cnt1].to=v;
	edge1[cnt1].val=w;
	edge1[cnt1].nex=head1[u];
	head1[u]=cnt1;
}

inline void add2(int u,int v,int w){
	edge2[++cnt2].to=v;
	edge2[cnt2].val=w;
	edge2[cnt2].nex=head2[u];
	head2[u]=cnt2;
}

inline void dij1(int s){
	for(int i=1;i<=n;++i) dis1[i]=inf;
	dis1[s]=0;
	q1.push((NODE){s,dis1[s]});
	while(!q1.empty()){
		NODE now=q1.top(); q1.pop();
		int u=now.x;
		if(vis1[u]) continue;
		vis1[u]=1;
		for(register int i=head1[u];i;i=edge1[i].nex){
			int v=edge1[i].to;
			if(dis1[v]>dis1[u]+edge1[i].val){
				dis1[v]=dis1[u]+edge1[i].val;
				q1.push((NODE){v,dis1[v]});
			}
		}
	}
}

inline void dij2(int s){
	for(int i=1;i<=n;++i) dis2[i]=inf;
	dis2[s]=0;
	q2.push((NODE){s,dis2[s]});
	while(!q2.empty()){
		NODE now=q2.top(); q2.pop();
		int u=now.x;
		if(vis2[u]) continue;
		vis2[u]=1;
		for(register int i=head2[u];i;i=edge2[i].nex){
			int v=edge2[i].to;
			if(dis2[v]>dis2[u]+edge2[i].val){
				dis2[v]=dis2[u]+edge2[i].val;
				q2.push((NODE){v,dis2[v]});
			}
		}
	}
}
int ans=0;

signed main(){
	cin>>n>>m>>x;
	for(int i=1;i<=m;++i){
		cin>>u>>v>>w;
		add1(u,v,w); add2(v,u,w);
	}
	dij1(x);dij2(x);
	for(int i=1;i<=n;++i){
		if(i!=x) ans=max(ans,dis1[i]+dis2[i]);
	}
	cout<<ans<<endl;
	return 0;
}
