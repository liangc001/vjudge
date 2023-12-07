#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 110
int n,l,r;
int sum[maxn];
int a[maxn];

signed main(){
	ios::sync_with_stdio(0);
	while(cin>>n>>l>>r){
		for(int i=1;i<=n;++i){
			a[i]=read(); sum[i]=sum[i-1]+a[i];
		}
		
	}
}
