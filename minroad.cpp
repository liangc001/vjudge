#include<bits/stdc++.h>
#define inf_ 0x7fffffff

using namespace std;

inline int read(){
    int x=0,t=1; char ch=getchar();
    while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
    if(ch=='-') t=-1,ch=getchar();
    while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
    return x*t;
}

#define maxn 10010

int n,m;
struct EDGE{
    int to,nex,val;
}edge[500010];
int head[maxn];
int cnt,s;
int u,v,w;
bool vis[maxn];
int dis[maxn];

struct node{
    int v,w;
    inline bool operator < (const node &a) const{
        return w>a.w;
    }
};

priority_queue<node> q;

inline void add(int u, int v,int w){
    edge[++cnt].to=v;
    edge[cnt].nex=head[u];
    edge[cnt].val=w;
    head[u]=cnt;
}

inline void dij(){
    for(int i=1;i<=n;++i) dis[i]=inf_;
    q.push((node){s,0});
    dis[s]=0;
    while(!q.empty()){
        node now=q.top(); q.pop();
        if(vis[now.v]==1) continue;
        vis[now.v]=1;
        for(int i=head[now.v];i;i=edge[i].nex){
            int v=edge[i].to;
            if(dis[now.v]+edge[i].val<dis[v]){
                dis[v]=dis[now.v]+edge[i].val;
                q.push((node){v,dis[v]});
            }

        }
    }
}

signed main(){
    n=read(); m=read(); s=read();
    for(int i=1;i<=m;++i){
        u=read(); v=read(); w=read();
        add(u,v,w);
    }
    dij();
    for(int i=1;i<=n;++i){
        cout<<dis[i]<<" ";
    }
    return 0;
}