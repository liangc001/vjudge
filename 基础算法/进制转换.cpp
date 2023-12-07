#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n,r;

signed main(){
	while(cin>>n>>r){
		char ans[10010]; int cnt=0;
		if(n<0){
			cout<<"-";
			n*=-1;
		}
		while(n){
			int now=n%r;
			if(now>=10){
				ans[++cnt]=(char)(now-10+'A');
			}
			else{
				ans[++cnt]=now+'0';
			}
			n/=r;
		}
		for(int i=cnt;i>=1;--i){
			cout<<ans[i];
		}
		cout<<endl;
	}
	return 0;
}
