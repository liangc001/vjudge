#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 40010
const int U=40000;
int pri[maxn];
bool vis[maxn];
int cnt,x,y;
int tes[maxn];
char ch;

inline int ksm(int a,int b){
	int sum=1;
	while(b){
		if(b&1) sum=(sum*a);
		a=(a*a);
		b>>=1;
	}
	return sum;
}

signed main(){
	memset(vis,1,sizeof(vis));
	for(int i=2;i<=U;++i){
		if(vis[i]) pri[++cnt]=i;
		for(int j=1;j<=cnt&&pri[j]*i<=U;++j){
			vis[pri[j]*i]=1;
			if(i%pri[j]==0) break;
		}
	}
	int now=1;
	while(cin>>x){
		if(x==0) break;
		cin>>y;
		now*=ksm(x,y);
		ch=getchar();
		if(ch=='\n'){
			now--;
			int k=0;
			memset(tes,0,sizeof(tes));
			int now_sum=now;
			for(int i=1;i<=now;++i){
				while(now_sum%pri[i]==0){
					now_sum/=pri[i];
					tes[i]++;
					k=max(k,i);
				}
				if(now_sum<=1) break;
			}
			bool f=0;
			for(int i=k;i>=1;--i){
				if(tes[i]){
					if(f==1)cout<<" "<<pri[i]<<" "<<tes[i];
					else cout<<pri[i]<<" "<<tes[i];
					f=1;
				}
			}
			cout<<endl; now=1;
		}
	}
	return 0;
}
