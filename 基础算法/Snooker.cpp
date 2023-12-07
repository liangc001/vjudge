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
int x,a,b;

signed main(){
	t=read();
	while(t--){
		x=read(); a=read(); b=read();
		if(x>6){
			a=a+(x-6)*8+27;
		}
		else{
			for(int i=7;i>=2,x;--i,--x){
				a+=i;
			}
		}
		if(a>=b){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
