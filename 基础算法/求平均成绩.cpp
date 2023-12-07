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
int n,m;
int a[maxn][maxn];
double ans[maxn];

signed main(){
	while(cin>>n>>m){
		for(int i=1;i<=n;++i){
			double sum=0;
			for(int j=1;j<=m;++j){
				a[i][j]=read();
				sum+=a[i][j];
			}
			ans[i]=sum/(double)m;
		}
		for(int i=1;i<=n;++i){
			printf("%.2lf",ans[i]);
			if(i!=n) cout<<" ";
		}
		cout<<endl;
		for(int i=1;i<=m;++i){
			double sum=0;
			for(int j=1;j<=n;++j){
				sum+=a[j][i];
			}
			ans[i]=sum/(double)n;
		}
		for(int i=1;i<=m;++i){
			printf("%.2lf",ans[i]);
			if(i!=m) cout<<" ";
		}
		cout<<endl;
		int num=0;
		for(int i=1;i<=n;++i){
			bool flag=0;
			for(int j=1;j<=m;++j){
				if(a[i][j]<ans[j]){
					flag=1; break;
				}
			}
			if(flag==0)num++;
		}
		cout<<num<<endl<<endl;
	}
	return 0;
}
