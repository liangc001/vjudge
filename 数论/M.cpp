#include<bits/stdc++.h>

using namespace std;

#define int long long

int C[50][50];
int n,m,t;
int ans;

inline void init(){
	for(int i=0;i<=35;++i){
		C[0][i]=0; C[i][0]=1;
	}
	for(int i=1;i<=35;++i){
		for(int j=1;j<=i;++j){
			C[i][j]=C[i-1][j]+C[i-1][j-1];
		}
	}
}

signed main(){
	cin>>n>>m>>t;
	init();
	for(int i=4;i<=n;++i){
		for(int j=1;j<=m;++j){
			if(i+j==t){
				ans+=C[n][i]*C[m][j];
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
