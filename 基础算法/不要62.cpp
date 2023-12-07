#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n,m;
int f[1000010];

signed main(){
	for(int i=1;i<=1000000;++i){
		f[i]=f[i-1];
		int now=i;
		bool flag=0;
		bool flag_n=0;
		while(now){
			int k=now%10;
			if(k==2) flag_n=1;
			else if(k==6){
				if(flag_n==1){
					flag=1; break;
				}
				flag_n=0;
			}
			else if(k==4){
				flag=1; break;
			}
			else flag_n=0;
			now/=10;
		}
		f[i]+=flag;
	}
	while(1){
		n=read(); m=read();
		if(n==0&&m==0) break;
		cout<<m-n+1-f[m]+f[n-1]<<endl;
	}
	return 0;
} 
