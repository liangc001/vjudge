#include <bits/stdc++.h>
#define mod 100007
#define int long long
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}
#define maxn 300
int n;
int dp[maxn];

signed main(){
	n=read();
	dp[0]=1; dp[1]=1;
	for(int i=1;i<=n;++i){
		dp[i]=(dp[i-1]+dp[i-2]*2%mod)%mod;
	}
	cout<<dp[n]%mod<<endl;
	return 0;
}
