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
int x,y,a,b;

signed main(){
	t=read();
	while(t--){
		x=read(); y=read(); a=read(); b=read();
		int len=y-x;
		if(len%(a+b)!=0){
			cout<<"-1"<<endl;
			continue;
		}
		else{
			int tim=len/(a+b);
			cout<<tim<<endl;
			continue;
		}
	}
	return 0;
}
