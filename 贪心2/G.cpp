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
		int a=read();
		int b=read();
		if(a==b){
			cout<<a*b*4<<endl;
			continue;
		}
		int ans=0x7fffffff;
		if(a<b) swap(a,b);
		//a>b
		if(a>=2*b){
			cout<<a*a<<endl;
		}
		else{
			cout<<4*b*b<<endl;
		}
	}
	return 0;
}
