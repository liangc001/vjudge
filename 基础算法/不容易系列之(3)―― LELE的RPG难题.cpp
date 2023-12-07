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

int n;
int f[100];

signed main(){
	f[1]=3; f[2]=6; f[3]=6;
	for(int i=4;i<=50;++i) f[i]=2*f[i-2]+f[i-1];
	while(cin>>n){
		if(n==1){
			cout<<3<<endl;
			continue;
		}
		if(n==2){
			cout<<6<<endl;
			continue;
		}
		cout<<f[n]<<endl;
	}
	return 0;
}
