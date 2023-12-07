#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int vis[110];
int ans[110],cnt;
int t;
int n,a,b;

signed main(){
	t=read();
	while(t--){
		n=read(); a=read(); b=read();
		memset(vis,0,sizeof(vis));
		int now; cnt=0;
		vis[a]=1; vis[b]=1;
		for(int i=n;i>=1;--i){
			if(vis[i]==0){
				now=i; break;
			}
		}
		ans[++cnt]=a;
//		cout<<a<<endl;
		for(int i=1;i<=n/2-1;++i){
			if(now<=n&&now>a&&vis[now]==0){
//				cout<<now<<endl;
				ans[++cnt]=now;
				vis[now]=1;
				now--;
			}
			else if(now<=a||now>n){
				break;
			}
			else if(vis[now]==1){
				i--;now--;
			}
		}
		for(int i=1;i<=n;++i){
			if(vis[i]==0){
				now=i; break;
			}
		}
		ans[++cnt]=b;
//		cout<<b<<endl;
		for(int i=1;i<=n/2-1;++i){
			if(now>=1&&now<b&&vis[now]==0){
//				cout<<now<<endl;
				ans[++cnt]=now;
				vis[now]=1; now++;
			}
			else if(now>=b||now<1){
				 break;
			}
			else if(vis[now]==1){
				i--;now++;
			}
		}
		if(cnt>=n){
			for(int i=1;i<=cnt;++i){
				cout<<ans[i]<<" ";
			}
			cout<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}
