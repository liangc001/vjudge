#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 50
int m;
int f[maxn];

signed main(){
	m=read();
	while(m--){
		int n=read(); 
		memset(f,0,sizeof(f));
		f[1]=1;
		for(int i=2;i<=n;++i){
			f[i]=f[i-1]+f[i-2];
		}
		cout<<f[n]<<endl;
	}
	return 0;
}
