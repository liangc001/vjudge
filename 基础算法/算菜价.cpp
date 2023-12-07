#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

char s[100];
double x,y;
double ans;

signed main(){
	while(scanf("%s",s)!=-1){
		cin>>x>>y;
		ans+=x*y;
	}
	printf("%.1lf\n",ans);
	return 0;
}
