#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;

signed main(){
	t=read();
	while(t--){
		int x1=read();
		int y1=read();
		int x2=read();
		int y2=read();
		bool a=0,b=0;
		int ans=0;
		ans=abs(x1-x2)+abs(y1-y2);
		if(x1!=x2) a=1; if(y1!=y2) b=1;
		if(a==1&&b==1) ans+=2;
		cout<<ans<<endl;
	}
	return 0;
}
