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

int f[100];
int o[100];

signed main(){
	int n;
	f[1]=3; f[2]=8;
	o[1]=1; o[2]=2; 
	for(int i=3;i<=50;++i){
		f[i]=f[i-1]*3-o[i-1];
		o[i]=f[i-1]-o[i-1];
	}
	while(cin>>n){
		cout<<f[n]<<endl;
	}
	return 0;
}
