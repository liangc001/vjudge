#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int a,b;
int ans[10010];
int cnt;

signed main(){
	while(1){
		a=read(); b=read();
		cnt=0; memset(ans,0,sizeof(ans));
		if(a==0&&b==0) break;
		for(int i=0;i<=99;++i){
			if((a*100+i)%b==0){
				ans[++cnt]=i;
			}
		}
		for(int i=1;i<=cnt-1;++i){
			if(ans[i]>=0&&ans[i]<=9){
					cout<<"0"<<ans[i]<<" ";
				}
				else cout<<ans[i]<<" ";
		}
		if(ans[cnt]>=0&&ans[cnt]<=9){
					cout<<"0"<<ans[cnt];
				}
				else cout<<ans[cnt];
		cout<<endl;
	}
	return 0;
}
