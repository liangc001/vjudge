#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}
int ans;
int k[5];
bool vis[10][10];
int a,b,c,d;

inline void dfs(int sum){
	if(sum>6) return;
	if(sum==6){
		if(k[0]==a&&k[1]==b&&k[2]==c&&k[3]==d){
			ans++;
		}
		return;
	}
	for(int i=0;i<4;++i){
		for(int j=i+1;j<4;++j){
			if(vis[i][j]==0&&vis[j][i]==0){
				vis[i][j]=1; vis[j][i]=1;
				k[i]+=3;
				dfs(sum+1);
				k[i]-=3;
				k[j]+=3;
				dfs(sum+1);
				k[j]-=3;
				k[i]+=1; k[j]+=1;
				dfs(sum+1);
				k[i]-=1; k[j]-=1;
			}
			else{
				return;
			}
			vis[i][j]=0; vis[j][i]=0;
		}
	}
}

signed main(){
	int t=read();
	int cnt=0;
	while(t--){
		ans=0;
		cnt++;
		a=read(); b=read(); c=read(); d=read();
		dfs(0);
		cout<<"Case #"<<cnt<<": ";
		if(ans==1){
			cout<<"Yes"<<endl;
		}
		else if(ans==0){
			cout<<"Wrong Scoreboard"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
} 
