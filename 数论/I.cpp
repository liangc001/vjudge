#include <bits/stdc++.h>
#define int long long
#define maxn 1000000
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int f[maxn+10];

inline void init(){
	for(int i=1;i<=maxn;++i){
		int now=i;
		while(now){
			if(now%2==1) f[i]++;
			now/=2;
		}
	}
}

int a,b;
queue<int> q;
int k[maxn+10];

signed main(){
	init();
	a=read(); b=read();
	q.push(a);
	k[a]=1;
	while(!q.empty()){
		int now=q.front(); q.pop();
		
		if(now==b){
			cout<<k[now]-1<<endl;
			return 0;
		}
		if(now+1<=maxn&&!k[now+1]){
			q.push(now+1);
			k[now+1]=k[now]+1;
		}
		if(now-1>=0&&!k[now-1]){
			q.push(now-1);
			k[now-1]=k[now]+1;
		}
		if(now-f[now]>=0&&!k[now-f[now]]){
			q.push(now-f[now]);
			k[now-f[now]]=k[now]+1;
		}
		if(now+f[now]<=maxn&&!k[now+f[now]]){
			q.push(now+f[now]);
			k[now+f[now]]=k[now]+1;
		}
	}
	return 0;
}
