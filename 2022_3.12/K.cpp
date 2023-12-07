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

int t,cnt;

signed main(){
	t=read();
	while(t--){
		cnt++;
		int x=read(); int y=read();
		int ans=0;
		int a=max(x,y); int b=min(x,y);
		if(a==0&&b==0){
			printf("Case #%lld: 1\n",cnt); continue;
		}
		if(a==0||b==0){
			printf("Case #%lld: 2\n",cnt); continue;
		}
		while(b){
			ans+=a/b;
			int n=b;
			b=a%b; a=n;
		}
		printf("Case #%lld: %lld\n",cnt,ans+1);
	}
	return 0;
}
