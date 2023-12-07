#include <bits/stdc++.h>
#define int long long
#define mod 998244353
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n,x;
int ans;
int C[1000][1000];
int dp[1000][1000];
int cnt;
int cn=1;
 
inline int ksm(int a,int b){
	int sum=1;
	while(b){
		if(b&1) sum=(sum*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return sum%mod;
}

void init(){
	C[0][0]=1;
	for(int i=1;i<=510;++i){
		C[i][0]=1;
		for(int j=1;j<=i;++j){
			C[i][j]=(C[i-1][j]+C[i-1][j-1])%mod;
		}
	}
}

signed main(){
	n=read(); x=read();
	init();
	dp[n][0]=1;
	for(int i=n;i>1;--i){
		for(int j=0;j<x;++j){
			cnt=min(i+j-1,x); cn=1;
			for(int k=i;k>=0;--k){
				dp[k][cnt]=(dp[k][cnt]+(dp[i][j]*C[i][i-k]%mod*cn)%mod)%mod;
				cn=cn*(cnt-j)%mod;
			}
		}
	}
	for(int i=1;i<=x;++i){
		ans=(ans+dp[0][i])%mod;
	}
	cout<<ans<<endl;
	return 0;
}
