#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#define int unsigned long long
using namespace std;

int pri[1000010];
bool vis[1000010];
int cnt;
int l,r;
bool f[1000010];
int ans_min,ans_max;
#define inf 0x7fffffff
int xa,ya,xi,yi;
int ans[1000010];

signed main(){
	for(int i=2;i<=500010;++i){
		if(vis[i]==0) pri[++cnt]=i;
		for(int j=1;j<=cnt&&pri[j]*i<=500010;++j){
			vis[i*pri[j]]=1;
			if(i%pri[j]==0) break;
		}
	}
	while(cin>>l>>r){
		ans_min=inf; ans_max=0;
		xa=0; ya=0; yi=0; xi=0;
		memset(f,0,sizeof(f));
		memset(ans,0,sizeof(ans));
		if(l==1) f[0]=1;
		for(int i=1;i<=cnt;++i){
			for(int j=l/pri[i];j<=r/pri[i];++j){
				if(j>1&&pri[i]*j>=l&&pri[i]*j<=r){
					f[pri[i]*j-l]=1;
				}
			}
		}
		int k=0;
		for(int i=l;i<=r;++i){
			if(f[i-l]==0){
				ans[++k]=i;
			}
		}
		for(int i=1;i<k;++i){
			int now=ans[i+1]-ans[i];
			if(now>ans_max){
				ans_max=now; xa=ans[i]; ya=ans[i+1];
			}
			if(now<ans_min){
				ans_min=now; xi=ans[i]; yi=ans[i+1];
			}
		}
		if(!ans_max){
			cout<<"There are no adjacent primes."<<endl;
		}
		else{
			cout<<xi<<','<<yi<<" are closest, "<<xa<<','<<ya<<" are most distant."<<endl;
		}
	}
	return 0;
}
