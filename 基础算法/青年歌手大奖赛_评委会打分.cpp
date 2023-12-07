#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 1000
int n;
int a[maxn];

signed main(){
	while(cin>>n){
		for(int i=1;i<=n;++i)a[i]=read();
		sort(a+1,a+1+n);
		int sum=0; int num=0;
		a[1]=0; a[n]=0;
		for(int i=2;i<=n-1;++i){
			num++; sum+=a[i];
		}
		printf("%.2lf\n",(double)sum/(double)num);
	}
	return 0;
} 
