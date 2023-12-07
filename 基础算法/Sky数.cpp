#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int a;

signed main(){
	while(cin>>a){
		if(a==0) break;
		int now=a;
		int sum1=0;
		while(now){
			sum1+=now%10;
			now/=10;
		}
		now=a;
		int sum2=0;
		while(now){
			sum2+=now%16;
			now/=16;
		}
		now=a;
		int sum3=0;
		while(now){
			sum3+=now%12;
			now/=12;
		}
		if(sum1==sum2&&sum2==sum3){
			cout<<a<<" is a Sky Number."<<endl;
		}
		else{
			cout<<a<<" is not a Sky Number."<<endl;
		}
	}
	return 0;
}
