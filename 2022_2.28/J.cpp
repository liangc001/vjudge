#include <bits/stdc++.h>
#define maxm 10010
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

map<string,int> mp;
struct EDGE{
	int to,nex,val;
}edge[maxm];
int head[maxm],cnt;
int s,t;
int n;
string sh="Shanghai";
string dl="Dalian";
string xa="Xian";
bool vis[maxm],dis[maxm];
struct NODE{
    int x,w;
    inline bool operator <(const NODE &a)const{
        return w>a.w;
    }
};
priority_queue<NODE> q;

inline void add(int u,int v,int w){
	edge[++cnt].to=v;
	edge[cnt].val=w;
	edge[cnt].nex=head[u];
	head[u]=cnt;
}

inline void dij(){
    memset(dis,0x3f,sizeof(dis));
    memset(vis,0,sizeof(vis));
    dis[s]=0;
    while(!q.empty()) q.pop();
    q.push((NODE){s,dis[s]});
    while(!q.empty()){
        int now=q.top().x;  q.pop();
        if(vis[now]==1) continue; vis[now]=1;
        for(register int i=head[now];i;i=edge[i].nex){
            int v=edge[i].to;
            cout<<now<<" "<<v<<endl;
            if(dis[v]>dis[now]+edge[i].val){
                dis[v]=dis[now]+edge[i].val;
                q.push((NODE){v,dis[v]});
            }
        }
    }
}

signed main(){
	ios::sync_with_stdio(0);
	int t=read();
	while(t--){
		int ans=0;
		int m=read();
		int s1=0,s2=0;
		int val;
		mp.clear();
		cnt=0;
		n=0;
		for(int i=1;i<=m;++i){
			string u,v;
			cin>>u>>v>>val;
			if(!mp[u]){
				mp[u]=++n;
			}
			if(!mp[v]){
				mp[v]=++n;
			}
			cout<<mp[u]<<" "<<mp[v]<<" "<<val;
//			cout<<val<<endl;
			add(mp[u],mp[v],val);
		}
		s1=mp[dl]; s2=mp[sh]; t=mp[xa];
		if(!s1||!s2||!t){
			cout<<-1<<endl;
			continue;
		}
//		cout<<s1<<" "<<s2<<" "<<mp[xa]<<endl;
		s=s1;
		dij();
		cout<<dis[s2]<<endl;
		ans+=dis[s2];
		s=s2;
		dij();
		ans+=dis[t];
		if(ans<0x3f3f3f3f)cout<<ans<<endl;
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}
