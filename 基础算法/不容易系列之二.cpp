#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n,a;
int ans=3;

signed main(){
	n=read();
	while(n--){
		a=read();
		ans=3;
		while(a--){
			ans=(ans-1)*2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
