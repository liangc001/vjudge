#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 3010
double n;
double a0,an_1,c[maxn];
double ans;

signed main(){
	while(cin>>n){
	ans=0;
	double sum=0;
	double cnt=1;
	cin>>a0>>an_1;
	for(int i=1;i<=n;++i){
		cin>>c[i];
	}
	ans=(n/(n+1))*a0+(1/(n+1))*an_1;
	for(int i=n;i>=1;--i){
		sum+=cnt*c[i];
		cnt+=1;
	}
	ans=ans-(2*sum)/(n+1);
	printf("%.2lf\n",ans);
}
return 0;
}
