#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n;

int f[10010][10010];

signed main(){
	f[0][0]=1;
	for(int i=1;i<=100;++i){
		f[i][1]=1; f[i][i]=1;
		for(int j=2;j<=i-1;++j){
			f[i][j]=f[i-1][j-1]+f[i-1][j];
		}
	}
	while(cin>>n){
		for(int i=1;i<=n;++i){
			
			for(int j=1;j<=i;++j){
				cout<<f[i][j];
				if(j!=i) cout<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
