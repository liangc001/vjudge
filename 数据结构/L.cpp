#include<bits/stdc++.h>
#define int long long
using namespace std;
#define mod 998244353
#define maxn 200010
int s1[maxn];
int s2[maxn];
char s[maxn];
int sum[maxn];
int n,m,ans;
int p=1;

signed main(){
	ios::sync_with_stdio(0);
	cin>>n>>m;
	cin>>s;
	for(int i=0;i<n;++i){
		s1[n-i-1]=s[i]-'0';
	}
	cin>>s;
	for(int i=0;i<m;++i){
		s2[m-i-1]=s[i]-'0';
		sum[m-i-1]=sum[m-i]+s2[m-i-1];
	}
	for(int i=0;i<max(n,m);++i){
		if(s1[i]==1){
			ans=(ans+sum[i]*p%mod)%mod;
		}
		p=(p*2)%mod;
	}
	cout<<ans<<endl;
	return 0;
} 
