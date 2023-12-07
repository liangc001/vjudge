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

int n,a,b,k;
string s;
const int mod=1e9+9;
int ks[100010];
int a1,q,ans;

inline int ksm(int a,int b){
	int sum=1;
	while(b){
		if(b&1) sum=(sum*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return sum%mod;
}

signed main(){
	cin>>n>>a>>b>>k;
	cin>>s;
	for(int i=0;i<s.size();++i){
		if(s[i]=='+') ks[i]=1;
		else ks[i]=mod-1;
	}
	for(int i=0;i<s.size();++i){
		a1=ksm(a,n-i)%mod*ksm(b,i)%mod;
		q=ksm(b,k)*ksm(ksm(a,k),mod-2)%mod;
		if(q==1){
			ans+=ks[i]*a1%mod*((n+1)/k%mod)%mod;
			ans%=mod;
		}
		else{
			ans+=ks[i]*(a1*(ksm(q,(n+1)/k)-1)%mod*ksm(q-1,mod-2)%mod)%mod;
			ans%=mod;
		}
	}
	cout<<ans%mod<<endl;
	return 0;
}

