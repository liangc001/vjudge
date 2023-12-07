#include <bits/stdc++.h>
using namespace std;
#define int long long

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int a[10010];

signed main(){
	a[1]=2; a[2]=7;
	for(int i=3;i<=10000;++i){
		a[i]=a[i-1]+4*(i-1)+1;
	}
	int t=read();
	while(t--){
		int n=read();
		cout<<a[n]<<endl;
	}
	return 0;
}
