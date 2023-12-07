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
int a,b,x;

signed main(){
	t=read();
	while(t--){
		x=read();
		a=x/3; b=x/3;
		if(x%3==1){
			a++;
		}
		else if(x%3==2){
			b++;
		}
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}
