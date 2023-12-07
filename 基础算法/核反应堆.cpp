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

int n;
int gn,dn;

signed main(){
	while(1){
	n=read();
	dn=0;
	if(n==-1) break;
	gn=1;
	for(int i=1;i<=n;++i){
		int gnn=gn,dnn=dn;
		gn=3*gnn+2*dnn;
		dn=gnn+dnn;
	}
	cout<<gn<<", "<<dn<<endl;
	}
	return 0;
}
