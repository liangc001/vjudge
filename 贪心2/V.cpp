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

int n,a[10010];
bool vis[1010][1010];

signed main(){
	n=read();
	for(int i=1;i<=n;++i) a[i]=read();
	for(int i=1;i<=n;++i){
		string s;
		cin>>s;
		for(int j=1;j<=n;++j){
			vis[i][j]=s[j-1]-'0';
		}
	}
	for(int k=1;k<=n;++k){
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				vis[i][j]=(vis[k][i]&&vis[k][j])?1:vis[i][j];
			}
		}
	}
	for(int i=1;i<=n;++i){
		int k=i,now=a[i];
		for(int j=i+1;j<=n;++j){
			if(vis[i][j]&&now>a[j]) now=a[j],k=j;
		}
		swap(a[k],a[i]);
	}
	for(int i=1;i<=n;++i){
		cout<<a[i]<<" ";
	}
	return 0;
}
