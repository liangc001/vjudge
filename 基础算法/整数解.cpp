#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n,m;

signed main(){
	while(1){
		bool flag=0;
	n=read(); m=read();
	if(n==0&&m==0) break;
	for(int i=-10000;i<=10000;++i){
		int j=n-i;
		if(i*j==m){
			cout<<"Yes"<<endl; flag=1;
			break;
		}
	}
	if(flag==0)cout<<"No"<<endl;
	}
	return 0;
}
