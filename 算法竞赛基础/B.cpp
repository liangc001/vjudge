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

int t;
int n,m;
int ans;
int dp[50][50];

inline void dfs(int now,int sum){
	if(sum>m){
		return;
	}
	if(now==n){
		if(sum==m){
			ans++;
			return;
		}
		else{
			return;
		}
	}
	for(int i=0;i<=m-sum;++i){
		dfs(now+1,sum+i);
	}
}

signed main(){
	t=read();
	while(t--){
		memset(dp,0,sizeof(dp));
		m=read(); n=read();
		for(int i=1;i<=n;++i){
			for(int j=0;j<=m;++j){
				if(i==1||j<=1){
					dp[i][j]=1;
					continue;
				}
				if(i>j) dp[i][j]=dp[j][j];
				else dp[i][j]=dp[i-1][j]+dp[i][j-i];
			}
		}
		cout<<dp[n][m]<<endl;
	}
	return 0;
}
