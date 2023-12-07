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
int n;
int x[maxn],y[maxn];

signed main(){
	while(cin>>n){
		if(n==0) break;
		double ans=0;
		for(int i=1;i<=n;++i){
			x[i]=read(); y[i]=read();
		}
		for(int i=1;i<=n-1;++i){
			ans+=x[i]*y[i+1]-x[i+1]*y[i];
		}
		ans+=x[n]*y[1]-x[1]*y[n];
		ans=(1.0/2.0)*abs(ans);
		printf("%.1lf\n",ans);
	}
	return 0;
}
