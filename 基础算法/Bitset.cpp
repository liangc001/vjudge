#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;
int ans[10000010];
int n;
int cnt;

signed main(){
	while(cin>>n){
		cnt=0;
		while(n){
			ans[++cnt]=n%2;
			n/=2;
		}
		for(int i=cnt;i>=1;--i){
			cout<<ans[i];
		}
		cout<<endl;
	}
	return 0;
}
