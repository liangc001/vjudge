#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 110
int n,m;
int a;
priority_queue<int,vector<int>,greater<int> > q;

signed main(){
	while(cin>>n>>m){
		if(n==0&&m==0){
			break;
		}
		while(!q.empty()) q.pop();
		q.push(m);
		for(int i=1;i<=n;++i){
			a=read();
			q.push(a);
		}
		while(!q.empty()){
			cout<<q.top();
			if(q.size()!=1) cout<<" ";
			q.pop();
		}
		cout<<endl;
	}
	return 0;
}
