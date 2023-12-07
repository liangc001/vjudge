#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 200010
int n,m;
int a[maxn];
int len[maxn];
int las[maxn];

signed main(){
	n=read(); m=read();
	for(int i=1;i<=n;++i){
		a[i]=read();
		len[i]=las[i]=i;
	}
	for(int i=2;i<=n;++i){
		if(a[i-1]==a[i]){
			las[i]=las[i-1];
			len[las[i]]=i;
		}
	}
	for(int i=1;i<=m;++i){
		int l=read(); int r=read(); int w=read();
		if(a[l]!=w){
			cout<<l<<endl;
		}
		else if(len[las[l]]<r){
			cout<<len[las[l]]+1<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}
