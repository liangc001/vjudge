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

#define maxn 400010
int t,n,k;
int x[maxn];

bool cmp(int z,int b){
	return z>b;
}

signed main(){
	t=read();
	while(t--){
		int mao=0;
		int ans=0;
		n=read(); k=read();
		for(int i=1;i<=k;++i) x[i]=read();
		sort(x+1,x+1+k,cmp);
		for(int i=1;i<=k;++i){
			if(mao<x[i]){
				ans++;
				mao+=n-x[i];
			}
			else{
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
