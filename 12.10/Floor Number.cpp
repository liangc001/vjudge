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

int t;
int f[1010];
int n,x;

signed main(){
	t=read();
	while(t--){
		n=read(); x=read();
		int l=1,r=2;
		if(n>=l&&n<=r){
			cout<<1<<endl;
			continue;
		}
		for(int i=1;i<=n;++i){
			l=(i-1)*x+1;
			r=i*x+2;
			if(n>=l&&n<=r){
				cout<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}
