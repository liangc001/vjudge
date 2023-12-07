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
int x,q;
int n;
signed main(){
	t=read();
	while(t--){
		cin>>n;
		q=1; x=1;
		while(n>x){
			n-=x;
			x+=2;
			q++;
		}
		cout<<q<<endl;
	}
	return 0;
}
