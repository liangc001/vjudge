#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

double a1,a2,a3,a4;
double b1,b2,b3,b4;

signed main(){
	while(cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4){
		if(a1>a2) swap(a1,a2);
       	if(b1>b2) swap(b1,b2);
       	if(a3>a4) swap(a3,a4);
       	if(b3>b4) swap(b3,b4);
       	a1=max(a1,a3); 
       	b1=max(b1,b3);
       	a2=min(a2,a4);
       	b2=min(b2,b4);
       	printf("%.2lf\n",(a1>a2||b1>b2)?0:(a2-a1)*(b2-b1));
	}
	return 0;
}
