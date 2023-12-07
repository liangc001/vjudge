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
int n,m;
struct op{
	int x;
	string s;
}o[maxn];
bitset<35> a,b(1073741823);
int c;

signed main(){
	n=read(); m=read();
	for(int i=1;i<=n;++i){
		cin>>o[i].s;
		o[i].x=read();
		if(o[i].s=="OR"){
			a|=o[i].x;
			b|=o[i].x;
		}
		else if(o[i].s=="XOR"){
			a^=o[i].x;
			b^=o[i].x;
		}
		else{
			a&=o[i].x;
			b&=o[i].x;
		}
	}
	for(int i=0;i<=35;++i){
		if(a[i]) c+=(1<<i);
		else if(b[i]&&(1<<i)<=m){
			c+=(1<<i);
			m-=(1<<i);
		}
	}
	cout<<c<<endl;
	return 0;
}
