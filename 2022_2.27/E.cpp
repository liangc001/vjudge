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
int n,m,x;
int c[maxn];
bool vis[maxn];

signed main(){
	ios::sync_with_stdio(0);
	while(cin>>m>>n>>x){
		memset(vis,0,sizeof(vis));
		int m_=m;
		int ans1=0,ans2=0,cnt=0;
		for(int i=1;i<=n;++i){
			c[i]=read();
		}
		sort(c+1,c+1+n);
		while(++cnt){
			if(cnt>x){
				break;
			}
			for(int i=1;i<=n;++i){
				if(cnt%c[i]==0&&c[i]==1){
					ans1++;
					m--;
				}
				else if(cnt%c[i]==0&&c[i]!=1){
					ans1++; ans2--; vis[i]=0;
				}
				else if(cnt%c[i]!=0&&vis[i]==0){
					vis[i]=1;
					ans2++;
					m--;
				}
				if(m==0){
					break;
				}
			}
			if(m==0){
				break;
			}
		}
		cout<<m_-ans1-ans2<<" "<<ans2<<endl;
	}
	return 0;
}
