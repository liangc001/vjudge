#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<algorithm>
#define int long long
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 1050
int pri[maxn];
bool vis[maxn];
int cnt;
int x;
int sum,tim[maxn];

inline int jc(int x){
	int ans=1;
	for(int i=2;i<=x;++i){
		ans*=i;
	}
	return ans;
}

signed main(){
	ios::sync_with_stdio(0);
	vis[1]=1;
	for(int i=2;i<=maxn-10;++i){
		if(!vis[i]){
			pri[++cnt]=i;
		}
		for(int j=1;j<=cnt&&pri[j]*i<=maxn-10;++j){
			vis[pri[j]*i]=1;
			if(i%pri[j]==0) break;
		}
	}
	while(cin>>x){
		if(x==0) break;
		int n=x; sum=0; memset(tim,0,sizeof(tim));
		for(int i=1;i<=cnt;++i){
			while(n%pri[i]==0){
				sum++; tim[i]++;
				n/=pri[i];
			}
		}
		if(n>1) sum++;
		cout<<sum<<" ";
		int ans=jc(sum);
		for(int i=1;i<=cnt;++i){
			ans/=jc(tim[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
} 
