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

int a,b;
int sum=1;

signed main(){
	a=read(); b=read();
	if(a>b) swap(a,b);
	for(int i=1;i<=a;++i){
		sum*=i;
	}
	cout<<sum<<endl;
	return 0;
}
