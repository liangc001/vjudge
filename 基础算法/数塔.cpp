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
int C;
int n;
int a[maxn][maxn];
int f[maxn][maxn];

signed main(){
	C=read();
	while(C--){
		n=read();
		memset(f,0,sizeof(f));
		for(int i=1;i<=n;++i){
			for(int j=1;j<=i;++j){
				a[i][j]=read();
				f[i][j]=a[i][j];
			}
		}
		for(int i=1;i<=n;++i){
			for(int j=1;j<=i;++j){
				f[i][j]=max(f[i][j],max(f[i][j]+f[i-1][j],f[i][j]+f[i-1][j-1]));
			}
		}
		int ans=0;
		for(int i=1;i<=n;++i){
			ans=max(ans,f[n][i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
