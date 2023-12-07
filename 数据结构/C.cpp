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

#define maxn 100010
const int mod=1e9+7;

int a[maxn];
int dp[maxn];
int n;
vector<int> v[maxn];
int ans;

signed main(){
	n=read();
	for(int i=1;i<=n;++i){
		a[i]=read();
		for(int j=1;j<=sqrt(a[i]);++j){
			if(a[i]%j==0){
				v[i].push_back(j);
				if(a[i]/j<=n&&a[i]/j!=j){
					v[i].push_back(a[i]/j);
				}
			}
		}
	}
	dp[0]=1;
		for(int i=1;i<=n;++i){
			for(int j=(int)v[i].size()-1;j>=0;--j){
				dp[v[i][j]]=(dp[v[i][j]]+dp[v[i][j]-1])%mod;
			}
		}
	for(int i=1;i<=n;++i){
		ans=(ans+dp[i])%mod;
	}
	cout<<ans<<endl;
	return 0;
}
