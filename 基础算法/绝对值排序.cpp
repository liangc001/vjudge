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

inline bool cmp(int a,int b){
	return abs(a)>abs(b);
}

signed main(){
	while(cin>>n){
		if(n==0) break;
		for(int i=1;i<=n;++i){
			a[i]=read();
		}
		sort(a+1,a+1+n,cmp);
		for(int i=1;i<=n;++i){
			cout<<a[i];
			if(i!=n)cout<<" ";
		}
		cout<<endl;
	}
}
