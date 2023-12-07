#include <bits/stdc++.h>
#define int long long
#define maxn 200010
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int x[maxn];
int y[maxn];
int t;
int n;
int a[maxn];
int b[maxn];

inline int work(){
	return n*(n-1)*(n-2)/6;
}

signed main(){
	t=read();
	while(t--){
		for(int i=1;i<=n;++i){
			x[i]=0; y[i]=0;
		}
		n=read();
		for(int i=1;i<=n;++i){
			a[i]=read(); b[i]=read();
			x[a[i]]++; y[b[i]]++;
		}
		int ans=work();
		for(int i=1;i<=n;++i){
			ans-=(x[a[i]]-1)*(y[b[i]]-1);
		}
		cout<<ans<<endl;
	}
	return 0;
}
