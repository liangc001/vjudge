#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 1000010
int a[maxn];
map<int,int> mp;
int now;
int n,k;
int l=1;
struct A{
	int l,r;
}ans;

signed main(){
	n=read(); k=read();
	for(int i=1;i<=n;++i){
		a[i]=read();
	}
	for(int i=1;i<=n;++i){
		mp[a[i]]++;
		if(mp[a[i]]==1){
			now++;
		}
		while(now>k){
			mp[a[l]]--;
			if(mp[a[l]]==0){
				now--;
			}
			l++;
		}
		if(i-l+1>=ans.r-ans.l+1){
			ans.l=l; ans.r=i;
		}
	}
	cout<<ans.l<<" "<<ans.r<<endl;
	return 0;
}
