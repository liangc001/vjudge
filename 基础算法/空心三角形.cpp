#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

char a;
int n;
int k;

signed main(){
	while(cin>>a){
		if(a=='@') break;
		n=read();
		int la=n-1;
		if(n==1){
		k++;
		if(k!=1) cout<<endl;
			cout<<a<<endl;
			continue;
		}
		int now=1;
		k++;
		if(k!=1) cout<<endl;
		for(int i=1;i<=n;++i){
			for(int k=1;k<=la;++k){
				cout<<" ";
			}
			cout<<a;
			bool f=0;
			for(int j=1;j<=now;++j){
				if(i!=n&&i!=1){
					cout<<" "; f=1;
				}
				else if(i==n){
					cout<<a;
				}
			}
				if(f)	now+=2;
			if(i!=1)cout<<a;
			la--;
			cout<<endl;
		}
	}
	return 0;
}
