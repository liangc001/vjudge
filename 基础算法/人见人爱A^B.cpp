#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define mod 1000
int a;
int b;

inline int ksm(int a,int b){
	int sum=1;
	while(b){
		if(b&1) sum=(sum*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return sum;
}

signed main(){
	while(cin>>a>>b){
		if(a==0&&b==0) break;
		cout<<ksm(a,b)<<endl;
	}
	return 0;
}
