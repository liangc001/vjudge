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

const int maxn=1000010;
int n,m,q;
int sum[maxn];
string s[maxn];

signed main(){
	n=read(); m=read();
	for(int i=1;i<=n;++i){
		cin>>s[i];
	}
	for(int i=2;i<=n;++i){
		for(int j=1;j<=m-1;++j){
			sum[j+1]=sum[j+1]+(s[i][j-1]=='X'&&s[i-1][j]=='X');
		}
	}
	for(int i=1;i<=m;++i){
		sum[i]+=sum[i-1];
	}
	q=read();
	for(int i=1;i<=q;++i){
		int l=read(); int r=read();
		if(sum[r]-sum[l]==0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
