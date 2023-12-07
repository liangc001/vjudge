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

int t;
int a,b,n;

signed main(){
	t=read();
	while(t--){
		a=read(); b=read(); n=read();
		if(a>b) swap(a,b);
		int ans=0;
		while(a<=n&&b<=n){
			a+=b;
			ans++;
			swap(a,b);
		}
		cout<<ans<<endl;
	}
	return 0;
}
