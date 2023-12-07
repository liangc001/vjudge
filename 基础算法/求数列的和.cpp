#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

double n,m;

signed main(){
	while(cin>>n>>m){
		double ans=0;
		for(int i=1;i<=m;++i){
			ans+=n;
			n=sqrt(n);
		}
		printf("%.2lf\n",ans);
	}
	return 0;
}
