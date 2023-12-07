#include<bits/stdc++.h>
#define mod 998244353
#define N 50009
using namespace std;
typedef long long ll;
ll n,m,a[N],ans,jc[N],cnt,b[N],num[N];
ll pw(ll x,ll y){
	if(y==0) return 1;
	ll z=pw(x,y/2);
	return y&1?z*z%mod*x%mod:z*z%mod;
}
ll inv(ll x){
	return pw(x,mod-2);
}
ll C(ll x,ll y){
	ll res=jc[x]*inv(jc[y])%mod*inv(jc[x-y])%mod;
	return res;
}
int main(){
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	cnt=1;
	b[1]=a[1];num[cnt]=1;
	jc[0]=1;
	for(ll i=1;i<=m;i++) jc[i]=(jc[i-1]*i)%mod;
	for(ll i=2;i<=n;i++){
		if(a[i]==a[i-1]) num[cnt]++;
		else b[++cnt]=a[i],num[cnt]=1;
	}
	for(ll i=1;i<=m;i++){
		if(i<a[n]){
			cout<<0<<endl;
			continue;
		}
		ans=1;
		for(ll j=1;j<=cnt;j++){
			ans*=pw(C(i,b[j]),num[j]);
			ans=(ans%mod+mod)%mod;
		}
		cout<<ans<<endl; 
	}
	return 0;
}
