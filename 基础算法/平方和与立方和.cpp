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

int a;
int n,m;

signed main(){
	while(cin>>n>>m){
		int sum1=0,sum2=0;
		if(n>m) swap(n,m);
		for(int i=n;i<=m;++i){
			if(i%2==1){
				sum1+=(i*i*i);
			}
			else{
				sum2+=(i*i);
			}
		}
		cout<<sum2<<" "<<sum1<<endl;
	}
	return 0;
}
