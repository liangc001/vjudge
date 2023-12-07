#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 500010
int n,m;

int a[maxn];
int dp[maxn];

inline bool check(int now){
	for(register int i=m;i<=n;++i){
		if(a[i]-a[dp[i-m]+1]<=now) dp[i]=i;
		else dp[i]=dp[i-1];
	}
	return dp[n]==n;
}

signed main(){
	n=read(); m=read();
	for(register int i=1;i<=n;++i){
		a[i]=read();
	}
	sort(a+1,a+1+n);
	int l=0,r=a[n]-a[1];
	while(l<r){
		int mid=(l+r)>>1;
		if(check(mid)) r=mid;
		else l=mid+1;
	}
	cout<<l;
	return 0;
}
