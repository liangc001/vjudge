#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

char a[110][1010];
bool flag=0;
int ans;

signed main(){
	int t=read();
	while(t--){
		flag=0; ans=0;
		int n=read(); int m=read(); int x=read(); int y=read();
		if(2*x<=y) flag=1;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				cin>>a[i][j];
			}
		}
		m++;
		for(int i=1;i<=n;++i){
			a[i][m]='*';
		}
		if(flag==1){
			for(int i=1;i<=n;++i){
				int num=0;
				for(int j=1;j<=m;++j){
					if(a[i][j]=='.') num++;
					if(num==2){
						ans+=2*x; num=0;
					}
					if(a[i][j]=='*'){
						ans+=num*x; num=0;
					}
				}
			}
		}
		else{
			for(int i=1;i<=n;++i){
				int num=0;
				for(int j=1;j<=m;++j){
					if(a[i][j]=='.') num++;
					if(num==2){
						ans+=y; num=0;
					}
					if(a[i][j]=='*'){
						ans+=num*x; num=0;
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
