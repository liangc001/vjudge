#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 100010
int t;
int n;
int a[3][maxn];
bool vis[maxn];

signed main(){
	t=read();
	while(t--){
		n=read(); int ans=0;
//		memset(vis,0,sizeof(vis));
		bool f1=0,f0=0;
		for(int i=1;i<=2;++i){
			string s;
			cin>>s;
			for(int j=0;j<s.size();++j){
				a[i][j+1]=s[j]-'0';
			}
		}
		for(int i=1;i<=n;++i){
//			if(a[1][i]==1&&a[2][i]==1){
//				if(i==1){
//					if(a[1][i+1]==0&&a[2][i+1]==0){
//						ans++;
//					}
//					vis[i+1]=1;
//				}
//				else if(i==n&&vis[i-1]==0){
//					if(a[1][i-1]==0&&a[2][i-1]==0){
//						ans++;
//					}
//				}
//				else{
//					if(a[1][i+1]==0&&a[2][i+1]==0&&vis[i+1]==0){
//						ans++; vis[i+1]=1;
//					}
//					else if(a[1][i-1]==0&&a[2][i-1]==0&&vis[i-1]==0){
//						ans++; vis[i-1]=1;
//					}
//				}
//			}
//			if(a[1][i]==0&&a[2][i]==0){
//						ans++;
//			}
//			if((a[1][i]==0&&a[2][i]==1)||(a[1][i]==1&&a[2][i]==0)){
//				ans+=2;
//			}
			if(a[1][i]==0||a[2][i]==0){
				if(f0) ans++; f0=1;
			} 
			if(a[1][i]==1||a[2][i]==1) f1=1;
			if(f1&&f0){
				f1=0; f0=0; ans+=2;
			}
		}
		if(f0) ans++;
		cout<<ans<<endl;
	}
	return 0;
}
