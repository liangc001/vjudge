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
int r[50],l[100010];
int x[50][10010];

signed main(){
	n=read();
	m=read();
	for(int i=1;i<=n;++i){
		int sum1=0;
		string s;
		cin>>s;
		for(int j=0;j<s.size();++j){
			x[i][j+1]=s[j];
			if(x[i][j+1]=='1'){
				l[j+1]++;
				sum1++;
			}
		}
		r[i]=sum1;
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			int len1;
			if(x[i][j]=='1'){
				len1=l[j]+r[i]-1;
			}
			else{
				len1=l[j]+r[i];
			}
			int las=n+m-1;
			int len0=las-len1;
			if(len0<len1){
			cout<<i<<" "<<j<<endl;
			cout<<"nei:"<<l[j]<<" "<<r[i]<<endl;
			cout<<len1<<" "<<len0<<endl;
				l[j]=n-l[j]; r[i]=m-r[i];
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n;++i){
		ans+=(n-r[i]);
	}
	cout<<ans<<endl;
	return 0;
}
