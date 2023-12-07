#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define phi 3.1415927
double a;

double wo(double x){
	return (4.0/3.0)*phi*x*x*x;
}

signed main(){
	while(cin>>a){
		printf("%.3lf\n",wo(a));
	}
	return 0;
}
