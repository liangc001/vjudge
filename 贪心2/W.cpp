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

#define maxn 1010
int f[maxn];
signed main(){
	f[1]=1; f[2]=2;
	for(int i=3;i<=100;++i) f[i]=f[i-1]+f[i-2];
	int t=read();
	while(t--){
		int n=read();
		int ans=0;
		while(n){
			ans++;
			int we=upper_bound(f+1,f+100+1,n)-f;
			n=min(f[we]-n,n-f[we-1]);
//			cout<<n<<endl;
		}
		cout<<ans<<endl;
	}
	return 0;
}
