#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define phi 3.1415926535
int t;
double ans;
double x1,x2,y,y2;

inline double dis(double x,double y,double x2,double y2){
	return sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
}

signed main(){
	t=read();
	while(t--){
		cin>>x1>>y>>x2>>y2;
		double dis1=dis(x1,y,0,0);
		double dis2=dis(x2,y2,0,0);
		double dis3=dis(x2,y2,x1,y);
		double coos=(dis1*dis1+dis2*dis2-dis3*dis3)/(2*dis1*dis2);
		ans=acos(coos)*180/phi;
		printf("%.2lf\n",ans);
	}
	return 0;
}
