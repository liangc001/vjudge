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

inline int wo(int n){
	if(n<=4){
		return n;
	}
	else return wo(n-1)+wo(n-3);
}

signed main(){
	while(cin>>n){
		if(n==0) break; 
		int ans=wo(n);
		cout<<ans<<endl;
	} 
	return 0;
}
