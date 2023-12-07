#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n;

signed main(){
	while(cin>>n){
		bool flag=0;
		for(int i=1;i<=n;++i){
			if(n%i==0) flag^=1;
		}
		cout<<flag<<endl;
	}
	return 0;
}
