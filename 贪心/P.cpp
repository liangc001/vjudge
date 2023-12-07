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
		int l=read(); int r=read();
		cout<<((r/2+1)>=l?r%(r/2+1):r%l)<<endl;
	}
	return 0;
}
