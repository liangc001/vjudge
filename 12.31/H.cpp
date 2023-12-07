#include <bits/stdc++.h>
#define inf 1000000000000000000
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
int cnt;
int f[100];

signed main(){
	f[0]=1;
	f[1]=1;
	for(int i=2;i<=100;++i){
		cnt++; 
		if(f[i-1]*2>inf) break;
		f[i]=f[i-1]*2;
	}
	t=read();
	while(t--){
		int n=read();
		int ans=0;
		while(n){
			int sum=lower_bound(f+1,f+1+cnt,n)-f;
			ans++; n-=f[sum-1];
		}
		if(ans%2==1){
			cout<<"Red"<<endl;
		}
		else{
			cout<<"Blue"<<endl;
		}
	}
	return 0;
}
