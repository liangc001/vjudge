#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 110
int n;
int a[maxn];

signed main(){
	while(cin>>n){
		if(n==0) break;
		int id=1;
		int minn=0x7fffffff;
		for(int i=1;i<=n;++i){
			a[i]=read();
			if(a[i]<minn){
				id=i;
				minn=a[i];
			}
		}
		swap(a[id],a[1]);
		for(int i=1;i<=n;++i){
			cout<<a[i];
			if(i!=n) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
