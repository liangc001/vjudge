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

int t,n;
bool vis[1001000];
int pri[1001000],cnt;
int ans[9],cn;

inline void init(){
	for(int i=2;i<=1000000;++i){
		if(vis[i]==0){
			pri[++cnt]=i;
		}
		for(int j=1;j<=cnt&&i*pri[j]<=1000000;++j){
			vis[i*pri[j]]=1;
			if(i%pri[j]==0) break;
		}
	}
}

signed main(){
	t=read();
	init();
	while(t--){
		n=read();
		cn=0;
		memset(ans,0,sizeof(ans));
		for(int i=1;i<=cnt&&pri[i]<=sqrt(n);++i){
			if(n%pri[i]==0){
				while(n%pri[i]==0){
					++cn;
					ans[cn]=pri[i];
					n/=pri[i];
					if(cn==6) break;
				}
			}
			if(cn==6) break;
		}
		if(n>1){
			ans[++cn]=n;
		}
		if(cn<=2){
			cout<<"NO"<<endl;
			continue;
		}
		int ans_n=0;
		int las=0;
		int sum=1;
		for(int i=1;i<=cn;++i){
			if(ans_n==2){
				sum*=ans[i]; continue;
			}
			sum*=ans[i];
			if(sum!=las){
				ans[++ans_n]=sum;
				las=sum; sum=1;
			}
		} 
		if(sum!=ans[1]&&sum!=ans[2]&&sum>1){
			ans[++ans_n]=sum;
		}
		if(ans_n!=3){
			cout<<"NO"<<endl;
		}
		else{
			sort(ans+1,ans+3);
			cout<<"YES"<<endl;
			for(int i=1;i<=3;++i){
				cout<<ans[i];
				if(i!=3) cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
