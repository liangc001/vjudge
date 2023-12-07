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

int n;
int a;

signed main(){
	while(cin>>n){
		int ans;
		for(int i=1;i<=n;++i){
			a=read();
			if(i==1) ans=a;
			else ans=ans/__gcd(ans,a)*a;
		}
		cout<<ans<<endl;
	}
	return 0;
}
