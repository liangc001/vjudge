#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod=998244353;
const int maxn=2e5+10;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int fac[maxn];

inline void init(){
	fac[0]=1;
	for(int i=1;i<=maxn;++i) fac[i]=(fac[i-1]*i)%mod;
}

inline int ksm(int a,int b){
	int sum=1;
	while(b){
		if(b&1) sum=(sum*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return sum%mod;
}

inline int C(int a,int b){
	return fac[a]*ksm(fac[b]*fac[a-b]%mod,mod-2)%mod;
}

int Lucas(int n,int m){
    if(m>n)return 0;
    int ret=1;
    for(;m;n/=mod,m/=mod)
        ret=ret*C(n%mod,m%mod)%mod;
    return ret;
}

int n,m;

signed main(){
	init();
	cin>>n>>m;
	if(n==2){
		cout<<0<<endl;
		return 0;
	}
	cout<<(Lucas(m,n-1)%mod*ksm(2,n-3)%mod*(n-2)%mod)%mod<<endl;
	return 0;
}

