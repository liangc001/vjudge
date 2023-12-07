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

int t;
char a[20];

signed main(){
	t=read();
	while(t--){
		cin>>a+1;
		int ans=20;
		int vis0_first=0;
		int vis0_5_second=0;
		int vis5_first=0;
		int vis2_7_second=0;
//		cout<<a[strlen(a)]<<endl<<a[strlen(a+1)]<<endl;
		for(int i=strlen(a+1);i>=1;--i){
			if(a[i]=='0'&&vis0_first==0){
				vis0_first=i;
			}
			else if(a[i]=='0'&&vis0_5_second==0&&vis0_first!=0){
				vis0_5_second=i;
			}
			if(a[i]=='5'&&vis0_5_second==0&&vis0_first!=0){
				vis0_5_second=i;
			}
			if(a[i]=='5'&&vis5_first==0){
				vis5_first=i;
			}
			else if((a[i]=='7'||a[i]=='2')&&vis2_7_second==0&&vis5_first!=0){
				vis2_7_second=i;
			}
		}
		int n=strlen(a+1);
//		cout<<n<<endl;
		if(vis0_5_second){
			ans=min(ans,n-vis0_5_second-1);
		}
		if(vis2_7_second){
			ans=min(ans,n-vis2_7_second-1);
		}
		cout<<ans<<endl;
	}
	return 0;
}
