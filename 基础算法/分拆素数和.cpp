#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 10010
int pri[maxn];
int cnt;
bool is_pri[maxn];
int f[maxn];

inline void init(){
	memset(is_pri,0,sizeof(is_pri));
	for(int i=2;i<=maxn;++i){
		if(is_pri[i]==0){
			pri[++cnt]=i;
		}
		for(int j=1;j<=cnt&&i*pri[j]<maxn;++j){
			is_pri[i*pri[j]]=1;
			if(i%pri[j]==0) break;
		}
	}
}
int n;

signed main(){
	init();
	memset(f,0,sizeof(f));
	while(cin>>n){
		int sum=0;
		if(n==0) break;
		for(int i=2;i<n/2;++i){
			if(is_pri[i]==0&&is_pri[n-i]==0){
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
