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

int C[100][100];
int f[100];

inline void init(){
	f[1]=0; f[2]=1;
	for(int i=3;i<=50;++i) f[i]=(i-1)*(f[i-1]+f[i-2]);
	C[0][0]=1;
	for(int i=1;i<=50;++i){
		C[i][0]=1; C[i][i]=1;
		for(int j=1;j<=i-1;++j){
			C[i][j]=C[i-1][j]+C[i-1][j-1];
		}
	}
}

signed main(){
	init();
	int t=read();
	while(t--){
		int n=read(); int m=read();
		cout<<C[n][m]*f[m]<<endl;
	}
	return 0;
}
