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
int a,b,c,n;
bool flag=0;

inline int check(int x){
	if(x*3>n+a+b+c) return 1;
	else if(x*3<n+a+b+c) return 0;
	else if(x*3==n+a+b+c){
		flag=1; return 2;
	}
}

signed main(){
	t=read();
	while(t--){
		a=read(); b=read(); c=read();
		n=read();
		if(n==0){
			if(a==b&&b==c){
				cout<<"YES"<<endl;
			}
			else cout<<"NO"<<endl;
			continue;
		}
		int max_now=max(a,max(b,c));
		n-=(3*max_now-a-b-c);
		if(n<0){
			cout<<"NO"<<endl;
			continue;
		}
		else{
			if(n%3==0){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
			continue;
		}
	}
	return 0;
}
