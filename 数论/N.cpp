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

int C[5010][5010];
int fac[5010];
int a,b,c,ans=1;
const int mod=998244353;

inline void init(){
	fac[0]=1;
	for(int i=0;i<=5000;++i){
		C[0][i]=0; C[i][0]=1;
	}
	for(int i=1;i<=5000;++i){
		fac[i]=fac[i-1]*i%mod;
		for(int j=1;j<=i;++j){
			C[i][j]=(C[i-1][j]+C[i-1][j-1])%mod;
		}
	}
}

inline int work(int a,int b){
	int sum=0;
	for(int i=0;i<=min(a,b);++i){
		sum=(sum+C[a][i]%mod*C[b][i]%mod*fac[i]%mod)%mod;
	}
	return sum%mod;
}

signed main(){
	cin>>a>>b>>c;
	init();
	ans*=work(a,b);
	ans%=mod;
	ans*=work(b,c);
	ans%=mod;
	ans*=work(a,c);
	ans%=mod;
	cout<<ans<<endl;
	return 0;
}
