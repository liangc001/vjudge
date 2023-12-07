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

int a,b;
#define maxn 300010
#define n 300000
int f[maxn];

signed main(){
	int t=read();
	for(int i=1;i<=n;++i){
		f[i]=f[i-1]^i;
	}
	while(t--){
		a=read(); b=read();
		int x=f[a-1];
		if(x==b){
			cout<<a<<endl;
			continue;
		}
		else if((x^a)==b){
			cout<<a+2<<endl;
			continue;
		}
		else{
			cout<<a+1<<endl;
		}
	}
	return 0;
}
