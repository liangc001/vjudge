#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 100
int n;
int a[maxn];
int t;

signed main(){
	while(cin>>n){
		if(n==0){
		return 0;
		}
		int sum=0;
		for(int i=1;i<=n;++i){
			a[i]=read();
			sum+=a[i];
		}
		if(t++) cout<<endl;
		int ave=sum/n;
		int ans=0;
		for(int i=1;i<=n;++i){
			if(a[i]<ave){
				ans+=(ave-a[i]);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
