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
int a,b,c;

signed main(){
	t=read();
	while(t--){
		a=read(); b=read(); c=read();
		if(b==1){
			if(a>c){
				cout<<-1<<" "<<1<<endl;
			}
			else if(a<c){
				cout<<1<<" "<<-1<<endl;
			}
			else{
				cout<<-1<<" "<<-1<<endl;
			}
			continue;
		}
		if(a>=c){
			cout<<-1<<" "; 
		}
		else{
			cout<<1<<" ";
		}
		double p=c/b;
		if(p>=a){
			cout<<-1<<" ";
		}
		else{
			cout<<b<<" ";
		}
		cout<<endl;
	}
	return 0;
}
