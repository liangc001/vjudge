#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int pri[100010];
bool vis[100010];
int cnt;
int n;

inline void PRI(){
	vis[1]=1;
	for(int i=2;i<=10000;++i){
		if(!vis[i]) pri[++cnt]=i;
		for(int j=1;j<=cnt&&pri[j]*i<=10000;++j){
			vis[pri[j]*i]=1;
			if(i%pri[j]==0) break;
		}
	}
}

signed main(){
	PRI();
	while(cin>>n){
		if(n==0) break;
		int ans=0;
		for(int i=1;pri[i]<=n&&i<=cnt;++i){
			int sum=0;
			for(int j=i;j<=cnt;++j){
				sum+=pri[j];
				if(sum==n) ans++;
				if(sum>n) break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
