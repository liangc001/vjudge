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

#define maxn 200010

int n,h;
struct FLO{
	int l,r;
}f[maxn];
int ans;
int len[maxn];

inline bool cmp(FLO x,FLO y){
	return x.l<y.l;
}

signed main(){
	n=read(); h=read();
	for(int i=1;i<=n;++i){
		f[i].l=read(); f[i].r=read();
	}
	sort(f+1,f+1+n,cmp);
	for(int i=1;i<=n;++i){
		len[i]=len[i-1]+f[i].l-f[i-1].r;
	}
	for(int i=1;i<=n;++i){
		int pos=lower_bound(len+i+1,len+n+1,h+len[i])-len-1;
		ans=max(ans,h+f[pos].r-f[i].l-len[pos]+len[i]);
	}
	cout<<ans<<endl;
	return 0;
}
