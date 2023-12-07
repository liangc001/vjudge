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

int n,m;

signed main(){
	while(cin>>n>>m){
		if(n==0&&m==0) break;
		int r=sqrt(2*m);
		for(int i=r;i>=1;--i){
			int l=(m-(i+1)*i/2)/i;
			if((i+1)*i/2+l*i==m){
				cout<<"["<<l+1<<","<<l+i<<"]"<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}
