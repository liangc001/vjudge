#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n;
string s;
bool f[15];
int C[1010][1010];
int dp[10010];
int dp2[10010];

inline int ksm(int a,int b){
	int sum=1; 
	while(b){
		if(b&1) sum=(sum*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return sum;
}

inline void init(){
	C[1][0]=1; C[1][1]=1;
	for(int i=2;i<=1000;++i){
		C[i][0]=1; C[i][i]=1;
		for(int j=1;j<i;++j){
			C[i][j]=C[i-1][j]+C[i-1][j-1];
		}
	}
}

signed main(){
	n=read();
	cin>>s;
	for(int i=0;i<n;++i){
		memset(f,0,sizeof(f));
		int cnt=0;
		for(int j=i;j>=0;--j){
			if(f[s[j]-'0']) break;
			cnt++;
			f[s[j]-'0']=1;
		}
		dp[i+1]=cnt;
	} 
	dp2[0]=1;
	for(int i=1;i<=n;++i){
		int sum=0;
		for(int j=1;j<=dp[i];++j){
			sum=(sum+dp2[i-j])%mod;
		}
		dp2[i]=sum;
	}
	cout<<dp2[n]%mod<<endl;
	return 0;
}
