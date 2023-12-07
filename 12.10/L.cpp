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
#define maxm 4000010
#define maxn 2010

int n;
int c[maxn],k[maxn];
struct EDGE{
	int las,to,w;
}edge[maxm];
struct NODE{
	int x,y;
}node[maxn];
int cnt,ans;
int f[maxn+1000];
struct QU{
	int u,v;
};
queue<QU> q;
int sum;
set<int> s;
inline bool cmp(EDGE x,EDGE y){
	return x.w<y.w;
}
inline int find(int x){
	if(x==f[x]) return x;
	else return f[x]=find(f[x]);
}

inline void add(int u,int v,int w){
	edge[++cnt].las=u;
	edge[cnt].to=v;
	edge[cnt].w=w;
}

signed main(){
	n=read();
	for(int i=1;i<=n;++i){
		f[i]=i;
		node[i].x=read(); node[i].y=read();
	}
	for(int i=1;i<=n;++i){
		edge[++cnt].las=0; edge[cnt].to=i; edge[i].w=read();
	}
	for(int i=1;i<=n;++i){
		k[i]=read();
	}
	for(int i=1;i<=n;++i){
		for(int j=i+1;j<=n;++j){
			add(i,j,(abs(node[i].x-node[j].x)+abs(node[i].y-node[j].y))*(k[i]+k[j]));
		}
	}
	sort(edge+1,edge+1+cnt,cmp);
	for(int i=1;i<=cnt;++i){
		int x=find(edge[i].las);
		int y=find(edge[i].to);
		if(x!=y){
			if(edge[i].las==0){
				s.insert(edge[i].to);
			}
			else{
				q.push((QU){edge[i].las,edge[i].to});
			}
			sum+=edge[i].w;
			f[x]=y; if(++ans==n) break;
		}
	}
	cout<<sum<<endl<<s.size()<<endl;
	set<int>::iterator it;
	for(it=s.begin();it!=s.end();++it) cout<<*it<<" "; cout<<endl;
	cout<<q.size()<<endl;
	while(!q.empty()){
		cout<<q.front().u<<" "<<q.front().v<<endl; q.pop();
	}
	return 0;
}
