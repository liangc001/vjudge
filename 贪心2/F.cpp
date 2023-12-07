#include <bits/stdc++.h>
using namespace std;
#define int long long

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 100
int t;
int n;
int a[maxn];
#define INF 0x7ffffffffffffff

signed main(){
	t=read();
	while(t--){
		n=read();
		for(int i=1;i<=n;++i){
			a[i]=read();
		}
		sort(a+1,a+1+n);
		int ans=INF;
		for(int i=2;i<=n;++i){
			ans=min(ans,a[i]-a[i-1]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
