#include <bits/stdc++.h>
#define int long long
#define mod 998244353
using namespace std;

//inline void dfs(int sum,int nw,int num){
//	if(nw==num&&sum==0){
//		DFS出每层选几个 （用数组储存？） 
//		层与层之间没有影响， 第一层的数第一轮必死，第二层第二轮必死
//排列组合计算结果（每层都有n-1个数可以选，有i个位置可以放） 
//	}
//	
//	for(int i=0;i<=n-1;++i){
//		dfs(sum-i,nw+1,num);
//	}
//}
//
//signed main(){
//	n=read(); x=read();
//	if(n==2){
//		cout<<x<<endl;
//		return 0;
//	}
//	else if(n>x){
//		ans=ksm(x,n);
//	}
//	else{
//		int t=x/(n-1); 将x分为t层 
//		int las=x%(n-1); 最后一层最后处理 
//		for(int len=2;len<=n-1;++len) 枚举最高层所占长度 
//			for(int i=1;i<=t;++i){ 枚举最高层 
//				int now=n;
//				dfs(now,1,i);  搜索出下方层数各选几个 
//				
//			}
//	}
//	return 0;
//}




inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n,x;
int ans;
int C[1000][1000];
int f[1000];

inline int ksm(int a,int b){
	int sum=1;
	while(b){
		if(b&1) sum=(sum*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return sum;
}

void init(){
	C[0][0]=0;
	C[1][0]=1;
	C[1][1]=1;
	for(int i=2;i<=510;++i){
		C[i][1]=1; C[i][i]=1;
		for(int j=2;j<=i-1;++j){
			C[i][j]=C[i-1][j]+C[i-1][j-1];
		}
	}
}

signed main(){
	n=read(); x=read();
	init();
//	for(int i=1;i<=10;++i){
//		for(int j=1;j<=i;++j){
//			cout<<C[i][j]<<" ";
//		}
//		cout<<endl;
//	}
if(n==2){
	cout<<x<<endl;
	return 0;
}
	else if(n>x){
		ans=ksm(x,n);
	}
	else{
		int t=x/(n-1);
		int las=x%(n-1);
		ans+=ksm(n-1,n);
		ans++;
		int now=0;
//		for(int i=1;i<=n-1;++i) f[i]=ksm(i-1,i);
//		for(int i=1;i<=n-1;++i) cout<<f[i]<<endl;
		for(int i=2;i<=n-1;++i){
//			cout<<n<<" "<<i<<endl;
//			cout<<C[n+1][i+1]<<endl;
			now+=n-1;
			for(int j=1;j<=t-1;++j){
				ans=(ans+(ksm(n-1,i)*(C[n+1][i+1]*ksm(now,n-i))%mod)%mod)%mod;
			}
		}
//		cout<<ans<<endl;
		if(las)for(int i=2;i<=n-1;++i){
			ans=(ans+(ksm(las,i)*(C[n+1][i+1]*ksm(now,n-i))%mod)%mod)%mod;
		}
	}
	cout<<ans%mod<<endl;
	return 0;
}
