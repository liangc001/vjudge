#include <bits/stdc++.h>
#define int unsigned long long
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

unsigned long long f[10010];

signed main(){
	f[1]=1;
	for(int i=1;i<=10000;++i){
		f[i]=i*i*i;
	}
	int t=read();
	while(t--){
		int n=read();
		bool flag=0;
//		int cnt=upper_bound(f+1,f+1+1000,n/2)-f;
		for(int i=1;i<=10000;++i){
			if(f[i]>n) break;
			int now=f[i];
			int las=n-now;
			int cnt=lower_bound(f+1,f+1+10000,las)-f;
			if(las==f[cnt]){
				flag=1; break;
			}
		}
		if(flag){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
