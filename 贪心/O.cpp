#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

signed main(){
	int t=read();
	while(t--){
		int n=read(); int a=read();
		int ans=a/(n-(n/2)+((n&1)?0:1));
		cout<<ans<<endl;
	}
	return 0;
}
