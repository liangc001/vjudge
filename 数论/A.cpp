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

int n,m,x,y,l;
int xk,yk,ans;

inline int exgcd(int a,int b,int &xk,int &yk){
	if(!b){
		xk=1; yk=0; return a;
	}
	ans=exgcd(b,a%b,xk,yk);
	int c=xk;
	xk=yk;
	yk=c-a/b*yk;
	return ans;
}

signed main(){
	x=read(); y=read(); m=read(); n=read(); l=read();
	int a=x-y;
	int b=n-m;
	if(b<0){
		a=-a; b=-b;
	}
	exgcd(b,l,xk,yk);
	if(a%ans==0){
		cout<<((xk*(a/ans))%(l/ans)+(l/ans))%(l/ans);
	}
	else{
		cout<<"Impossible";
	}
	return 0;
}
