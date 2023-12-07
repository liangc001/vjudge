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

#define maxn 110
int mo[10]={0,100,50,10,5,2,1};
int n,a[maxn];

signed main(){
	while(cin>>n){
		if(n==0) break;
		int ans=0;
		for(int i=1;i<=n;++i){
			a[i]=read();
			int now=a[i];
			for(int j=1;j<=6;++j){
				if(now==0) break;
				ans+=now/mo[j];
				now%=mo[j];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
