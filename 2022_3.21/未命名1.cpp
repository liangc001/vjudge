#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 1000010
int n,u,v;
int du[maxn];

signed main(){
	n=read();
	for(int i=1;i<n;++i){
		u=read(); v=read();du[u]++; du[v]++;
	}
	bool flag=0;
	int sum=0;
	for(int i=1;i<=n;++i){
		if(du[i]>3){
			flag=1; break;
		}
		else if(du[i]==3){
			sum++;
		}
	}
	if(flag==1){
		cout<<0<<endl;
		return 0;
	}
	cout<<n-sum<<endl;
	return 0;
}
