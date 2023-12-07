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
int n;

signed main(){
	t=read();
	while(t--){
		n=read();
		int cnt=0;
		int ans=0;
		while(n){
			cnt++;
//			int las=n;/
			if(n%2==1){
				if(cnt%2==1) ans++;
				n--;
			}
			else{
				if((n/2)%2==0&&n/2!=2){
					n--;
					if(cnt%2==1) ans++;
				}
				else{
					if(cnt%2==1) ans+=n/2;
					n/=2;
				}
			}
//			cout<<las-n<<endl;
		}
		cout<<ans<<endl;
	}
	return 0;
}
