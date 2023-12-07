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

int num;
int v1,v2,t1,t2;
int sum1,sum2;

signed main(){
	num=read(); v1=read(); v2=read(); t1=read(); t2=read();
	sum1=t1+num*v1+t1;
	sum2=t2+num*v2+t2;
	if(sum1<sum2){
		cout<<"First";
	}
	else if(sum1>sum2){
		cout<<"Second";
	}
	else{
		cout<<"Friendship";
	}
	return 0;
}
