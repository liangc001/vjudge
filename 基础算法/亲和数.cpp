#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int m;
int a,b;

inline int pd(int x){
	int sum=0;
	for(int i=1;i<x;++i){
		if(x%i==0){
			sum+=i;
		}
	}
	return sum;
}

signed main(){
	m=read();
	while(m--){
		a=read(); b=read();
		if(pd(a)==b&&pd(b)==a){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
