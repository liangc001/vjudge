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

#define maxm 10010
int n;
int a,b;
int ans;
int f[maxm];


signed main(){
	n=read();
	f[1]=1; f[2]=2;
	for(int i=3;i<=50;++i) f[i]=f[i-1]+f[i-2];
	while(n--){
		a=read(); b=read();
		cout<<f[b-a]<<endl;
	}
	return 0;
}
