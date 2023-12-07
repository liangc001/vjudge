#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n;
double a;

signed main(){
	while(cin>>n){
		if(n==0) break;
		int sum1=0,sum2=0,sum3=0;
		for(int i=1;i<=n;++i){
			cin>>a;
			if(a<0) sum1++;
			if(a==0) sum2++;
			if(a>0) sum3++;
		}
		cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
	}
	return 0;
}
