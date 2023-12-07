#include<bits/stdc++.h>
#define int long long
	inline int read(){
		int x=0,t=1; char ch=getchar();
		while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
		if(ch=='-') t=-1,ch=getchar();
		while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
		return x*t;
	}
#define maxn 100010
using namespace std;
int n,x,p[maxn],ans;
int t;
inline void add(int x){
	for(register int i=61;i>=0;--i){
		if(!(x>>i)) continue;
		if(!p[i]){p[i]=x; break;}
		x^=p[i];
	}
}
signed main(){
	n=read();
	for(register int i=1;i<=n;++i){
		x=read(); t^=x;
		add(x);
	}
	if(t==0){
		cout<<-1<<endl;
		return 0;
	}
	for(int i=61;i>=0;--i){
		if(p[i]) ans++;
	}
	printf("%lld\n",ans);
	return 0;
} 
