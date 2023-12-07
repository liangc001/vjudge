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

#define maxn 200010
int n,t;
int a[maxn];
int ans;
int lim=1e9+10;

signed main(){
	n=read(); t=read();
	for(int i=1;i<=n;++i){
		a[i]=read();
		lim=min(lim,a[i]);
	}
	while(t>=lim){
		int sum=0,num=0;
		for(int i=1;i<=n;++i){
			if(t>=a[i]){
				t-=a[i];
				sum+=a[i];
				num++; ans++;
			}
		}
		int now=t/sum;
		ans+=now*num; t=t%sum;
	}
	cout<<ans<<endl;
	return 0;
}
