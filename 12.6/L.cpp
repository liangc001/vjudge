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

int k,n;
int ans[100010];
int cnt;
int sum;

signed main(){
	k=read(); n=read();
	int now=n;
	while(n){
		sum+=n%10; n/=10;
	}
	if(sum>=k){
		cout<<0<<endl;
	}
	else{
		int las=k-sum;
		while(las>0){
			int k=now%10;
			if(k<9){
				int s=las-(9-k)<0?las:9-k;
				ans[++cnt]=s;
				las-=(9-k);
			}
			else ans[++cnt]=0;
			now/=10;
		}
		for(int i=cnt;i>=1;--i){
			cout<<ans[i];
		}
	}
	return 0;
}
