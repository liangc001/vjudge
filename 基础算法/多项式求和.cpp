#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

double f[1010];
bool flag=0;

signed main(){
	for(int i=1;i<=1000;++i){
		if(flag==0){
			f[i]=f[i-1]+(1.0/(double)i);
		}
		else{
			f[i]=f[i-1]-(1.0/(double)i);
		}
		flag^=1;
	}
	int m=read();
	while(m--){
		int n=read();
		printf("%.2lf\n",f[n]);
	}
	return 0;
}
