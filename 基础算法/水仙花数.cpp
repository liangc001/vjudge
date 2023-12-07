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
int f[1010];

signed main(){
	for(int i=100;i<=999;++i){
		int now=i;
		int sum=0;
		while(now){
			sum+=pow(now%10,3);
			now/=10;
		}
		if(sum==i) f[i]=1;
	}
	while(cin>>n>>m){
		bool flag=0;
		for(int i=n;i<=m;++i){
			if(f[i]==1){
				if(flag==1){
					cout<<" ";
				}
				flag=1;
				cout<<i;
			}
		}
		if(flag==0) cout<<"no";
		cout<<endl;
	}
	return 0;
}
