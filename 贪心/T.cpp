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
int n,a,b;
string s;

signed main(){
	t=read();
	while(t--){
		n=read(); a=read(); b=read();
		cin>>s; int m=unique(s.begin(),s.end())-s.begin();
		cout<<max(n*b,(m/2+1)*b)+n*a<<endl;
	}
	return 0;
}
