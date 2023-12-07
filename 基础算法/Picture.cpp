#include <bits/stdc++.h>
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
	while(cin>>m>>n){
//	n=read(); m=read();
m+=2;
	for(int i=1;i<=m;++i){
		if(i==1||i==m)cout<<"+";
		else cout<<"-";
	}
	cout<<endl;
	for(int i=1;i<=n;++i){
		cout<<"|";
		for(int j=2;j<m;++j) cout<<" ";
		cout<<"|";
		cout<<endl;
	}
	for(int i=1;i<=m;++i){
		if(i==1||i==m)cout<<"+";
		else cout<<"-";
	}
	cout<<endl;
}
	return 0;
}
