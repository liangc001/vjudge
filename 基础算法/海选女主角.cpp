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
int a[10010][10010];

signed main(){
	while(cin>>n>>m){
		int ans=0;
		int l,r;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				a[i][j]=read();
				if(abs(a[i][j])>ans){
					ans=max(ans,abs(a[i][j]));
					l=i,r=j;
				}
			}
		}
		cout<<l<<" "<<r<<" "<<a[l][r]<<endl;
	}
}
