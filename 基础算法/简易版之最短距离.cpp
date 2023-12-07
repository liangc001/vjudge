#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 510
int m,n,a[maxn];

signed main(){
	m=read();
	while(m--){
		n=read();
		for(int i=1;i<=n;++i){
			a[i]=read();
		}
		sort(a+1,a+1+n);
		int num=n%2==0?n/2:(n+1)/2;
		int las=a[num];
		int ans=0;
		for(int i=1;i<=n;++i){
			ans+=abs(las-a[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
