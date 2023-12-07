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
int a[100],b[100];
#define inf 0x7ffffffffffffff

signed main(){
	t=read();
	while(t--){
		int n=read();
		int min_a=inf; int min_b=inf;
		for(int i=1;i<=n;++i){
			a[i]=read();
			min_a=min(min_a,a[i]);
		}
		for(int i=1;i<=n;++i){
			b[i]=read();
			min_b=min(min_b,b[i]);
		}
		int ans=0;
		for(int i=1;i<=n;++i){
			ans+=max(a[i]-min_a,b[i]-min_b);
		}
		cout<<ans<<endl;
	}
	return 0;
}
