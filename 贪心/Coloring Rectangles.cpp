#include <bits/stdc++.h>
using namespace std;
#define int long long

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;
int n,m;

signed main(){
	t=read();
	while(t--){
		n=read(); m=read();
		if(n%3==0&&m%3==0){
			cout<<min((n/3)*m,(m/3)*n)<<endl;
			continue;
		}
		else if(n%3==0){
			cout<<(n/3)*m<<endl;
			continue;
		}
		else if(m%3==0){
			cout<<(m/3)*n<<endl;
			continue;
		}
		int ans=0x3f3f3f3f;
		if(n>m) swap(n,m);
//			if(n%3==1){
//				ans=min(ans,(m/2)+(n/3)*m);
//			}
//			else if(n%3==2){
//				ans=min(ans,m+(n/3)*m);
//			}
ans=(m/3)*n;
			if(m%3==1){
				ans+=n/3;
				if(n%3) ans++;
			}
			else if(m%3==2){
				ans+=(n/3)*2;
				if(n%3==1){
					ans++;
				}
				else ans+=2;
			}
			cout<<ans<<endl;
	}
	return 0;
}
