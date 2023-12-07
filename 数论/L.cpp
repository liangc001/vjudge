#include <bits/stdc++.h>
#define int long long
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int a[100010];
int sum;

int C(int a,int b){
	int A=1,B=1,C=1;
	for(int i=(a-b+1);i<=a;++i){
		A*=i;
	}
	for(int i=1;i<=b;++i){
		B*=i;
	}
	int tes=A/B;
	return tes;
}

signed main(){
	int n=read();
	for(int i=1;i<=n;++i){
		a[i]=read();
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;++i){
		if(a[i]==a[3]){
			sum++;
		}
	}
	if(a[1]==a[2]&&a[2]==a[3]){
		cout<<C(sum,3)<<endl;
	}
	else if(a[2]==a[3]){
		cout<<C(sum,2);
	}
	else{
		cout<<sum<<endl;
	}
	return 0;
} 
