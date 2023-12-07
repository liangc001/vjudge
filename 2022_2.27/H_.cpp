#include <bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 160

int n,m,p;
int a[maxn][maxn];
int sum[maxn][maxn];
int tes[maxn][maxn];
int ans=inf;
int nex[maxn][maxn];

signed main(){
	ios::sync_with_stdio(0);
	while(cin>>n>>m>>p){
		int ti1,ti2,tj1,tj2;
		int now_max=-inf;
		int ans=inf;
		for(register int i=1;i<=n;++i){
			for(register int j=1;j<=m;++j){
				a[i][j]=read();
				sum[i][j]=a[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
			}
		}
		for(register int i1=1;i1<=n;++i1){
			for(register int j1=1;j1<=m;++j1){
				for(register int i2=i1;i2<=n;++i2){
					for(register int j2=j1;j2<=m;++j2){
						int now_sq=sum[i2][j2]+sum[i1-1][j1-1]-sum[i1-1][j2]-sum[i2][j1-1];
						if(now_max<now_sq){
							now_max=now_sq;
							ans=now_max;
							ti1=i1; ti2=i2; tj1=j1; tj2=j2;
						}
					}
				}
			}
		}
		for(register int i=ti1;i<=ti2;++i){
			for(register int j=tj2;j<=tj2;++j){
				int ates=a[i][j];
				if(a[i][j]<p){continue;}
				a[i][j]=p;
				for(register int tei=i;tei<=n;++tei){
					for(register int tej=j;tej<=m;++tej){
						tes[tei][tej]=sum[tei][tej];
						sum[tei][tej]=a[tei][tej]+sum[tei-1][tej]+sum[tei][tej-1]-sum[tei-1][tej-1];
					}
				}
				int tes_now_max=-inf;
				for(register int i1=1;i1<=n;++i1){
					for(register int j1=1;j1<=m;++j1){
						for(register int i2=i1;i2<=n;++i2){
							for(register int j2=j1;j2<=m;++j2){
								int now_sq=sum[i2][j2]+sum[i1-1][j1-1]-sum[i1-1][j2]-sum[i2][j1-1];
								tes_now_max=max(tes_now_max,now_sq);
							}
						}
					}
				}
				ans=min(ans,tes_now_max);
				a[i][j]=ates;
				for(register int tei=i;tei<=n;++tei){
					for(register int tej=j;tej<=m;++tej){
						sum[tei][tej]=tes[tei][tej];
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
