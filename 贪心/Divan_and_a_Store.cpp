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

#define maxn 110
int t;
int n,l,r,k;
int a[maxn];
int ans=0;

signed main(){
	t=read();
	while(t--){
		ans=0; int cnt=0;
		n=read(); l=read(); r=read(); k=read();
		for(int i=1;i<=n;++i){
			int x=read();
			if(x<=r&&x>=l){
				a[++cnt]=x;
			}
		}
		sort(a+1,a+1+cnt);
		for(int i=1;i<=cnt;++i){
			if(k>=a[i]){
				ans++;
				k-=a[i];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
