#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

double f[50];
int t;

signed main(){
	f[1]=0;f[2]=1;
	for(int i=3;i<=50;++i){
		f[i]=(i-1)*(f[i-1]+f[i-2]);
	}
	t=read();
	while(t--){
		int n=read();
		double sum=1;
		for(int i=1;i<=n;++i){
			sum*=i;
		}
		printf("%.2lf%%\n",(f[n]/sum*100));
	}
	return 0;
}
