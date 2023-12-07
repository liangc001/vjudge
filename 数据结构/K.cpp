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

#define maxn 100010
int n,m,w;
int a[maxn];
int f[maxn];

inline bool check(int now){
	memset(f,0,sizeof(f));
	int k=m;
	for(int i=1;i<=n;++i){
		f[i]+=f[i-1];
		int d=max((long long)0,now-a[i]-f[i]);
		k-=d;
		f[i]+=d;
		f[min(n+1,i+w)]-=d;
		if(k<0){
			return 1;
		}
	}
		return 0;
}

signed main(){
	n=read(); m=read(); w=read();
	for(int i=1;i<=n;++i){
		a[i]=read();
	}
	int l=1; int r=2e9;
	while(l<r){
		int mid=(l+r)>>1;
		if(check(mid)) r=mid;
		else l=mid+1;
	}
	cout<<l-1;
	return 0;
}
