#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}
#define maxn 500010
map<int,int> mp;
int a[maxn];
int ans[maxn];
int n,cnt;

signed main(){
	n=read();
	for(int i=1;i<=n*n;++i){
		a[i]=read();
		mp[a[i]]++;
	}
	sort(a+1,a+1+n*n);
	for(int i=n*n;i>=1;--i){
		if(mp[a[i]]==0){
			continue;
		}
		ans[++cnt]=a[i];
		mp[a[i]]--;
		for(int j=1;j<=cnt-1;++j){
			mp[__gcd(ans[j],a[i])]-=2;
		}
	}
	for(int i=1;i<=cnt;++i){
		cout<<ans[i]<<" ";
	}
	return 0;
}
