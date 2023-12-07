#include <bits/stdc++.h>
#define int long long
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
		int n=read(); int m=read(); int x=read(); int y=read();
		if(x<=y){
			cout<<m<<endl;
			continue;
		}
		else{
			cout<<min((n+(m-1)*y)/x,m)<<endl;
			continue;
		}
	}
	return 0;
}
