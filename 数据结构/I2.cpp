#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}
#define maxn 300010
int t;
string s;
int a[maxn];

inline int len(int l,int r){
	if(l&1){
		return a[r]-a[l-1];
	}
	else{
		return a[l-1]-a[r];
	}
}

signed main(){
	t=read();
	while(t--){
		int n,m;
		n=read(); m=read();
		cin>>s;
		for(int i=0;i<s.size();++i){
			a[i+1]=s[i]=='+'?1:-1;
		}
		for(int i=1;i<=n;++i){
			if(i&1){
				a[i]=a[i-1]+a[i];
			}
			else{
				a[i]=a[i-1]-a[i];
			}
		}
		for(int i=1;i<=m;++i){
			int l=read(); int r=read();
			if(!len(l,r)){
				cout<<0<<endl;
			}
			else if((r-l)%2==1){
				cout<<2<<endl;
			}
			else{
				cout<<1<<endl;
			}
		}
	}
	return 0;
}
