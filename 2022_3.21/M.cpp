#include <bits/stdc++.h>
#define mod 998244353
#define int long long
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 100010
int n,m,k;
int fac[maxn];
int ans;

inline void init(){
	fac[0]=1;
	for(int i=1;i<=maxn-10;++i){
		fac[i]=fac[i-1]*i%mod;
	}
}

inline inv(int a){
	return a==1||a==0?1:(mod-mod/a)*inv(mod%a)%mod;
}

inline int C(int n,int m){
	return fac[n]%mod*inv(fac[m])%mod*inv(fac[n-m])%mod;
}

signed main(){
	n=read(); m=read(); k=read();
	init();
	if(k>=m-k){
		ans = (ans+C(n-k-1,m-k)*2%mod)%mod;
		ans = (ans+C(n-k-2,m-k)%mod*(n-k+1-2)%mod)%mod;
		cout<<ans<<endl;
		return 0;
	}
	int tes=m/k;
	int res=m%k;
	int len = 1+(n/(k+2));
	int res_len = (n-(k+1))%(k+2);
	
}
