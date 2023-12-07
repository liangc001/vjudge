#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 100
int t;
int n,m;
int a[maxn];
int sum=0;

signed main(){
	t=read();
	while(t--){
		sum=0;
		n=read(); m=read();
		for(int i=1;i<=n;++i){
			a[i]=read();
			sum=max(sum,(100-a[i])*(100-a[i]));
		}
		cout<<sum<<endl;
	}
	return 0;
}
