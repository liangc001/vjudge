#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 200
int f[maxn];
int n;

signed main(){
	f[1]=1; f[2]=2; f[3]=3;
	for(int i=4;i<=50;++i){
		f[i]=f[i-1]+f[i-2];
	}
	while(cin>>n){
		cout<<f[n]<<endl;
	}
	return 0;
}
