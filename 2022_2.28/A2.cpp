#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 55
int t;
int n,m;

priority_queue<int> q[maxn],p[maxn];
set<int> s;

signed main(){
	t=read();
	while(t--){
		n=read(); m=read();
		for(int i=1;i<=50;++i){
			while(!q[i].empty()) q[i].pop();
			while(!p[i].empty()) p[i].pop();
		}
		s.clear();
		for(int i=1;i<=n;++i){
			int u,v;
			s.insert(u);
			u=read(); v=read();
			q[u].push(v);
		}
		for(int i=1;i<=m;++i){
			int u,v;
			u=read(); v=read();
			p[u].push(v);
		}
		iterator::set<int> it;
		for(int it=s.begin();it!=s.end());++it){
			int now=*it;
			while(!q[now].empty()){
				int u=q[now].top();
				q.pop
				while(!p[u].empty()){
					
				}
			}
		}
	}
}
