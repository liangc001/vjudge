#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int a1,b1,c2,a2,b2,c1;

signed main(){
	int t=read();
	while(t--){
		a1=read(); b1=read(); c1=read();
		a2=read(); b2=read(); c2=read();
		b1+=(c1+c2)/60;
		c1=(c1+c2)%60;
		a1+=(b1+b2)/60;
		b1=(b1+b2)%60;
		a1=(a1+a2);
		cout<<a1<<" "<<b1<<" "<<c1<<endl;
	}
	return 0;
}
