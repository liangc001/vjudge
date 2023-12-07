#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 110
int L;
int N,C,T;
int VR,VT1,VT2;
double ansrb,ansto;
int p[maxn];
double dp[maxn];//到第i个站最小时间 

signed main(){
	while(cin>>L){
		memset(dp,0,sizeof(dp));
		ansrb=0; ansto=0;
		N=read(); C=read(); T=read();
		VR=read(); VT1=read(); VT2=read();
		for(int i=1;i<=N;++i){
			p[i]=read();
		}
		p[0]=1; p[N+1]=L; dp[0]=0;
		ansrb=((double)L)/((double)VR);
		for(int i=1;i<=N+1;++i){
			double mi=0x7fffffff;
			for(int j=0;j<i;++j){
				int len=p[i]-p[j];
				if(len>C){
					ansto=1.0*C/VT1+1.0*(len-C)/VT2;
				}
				else ansto=1.0*len/VT1;
				ansto+=dp[j];
				if(j!=0) ansto+=T;
				mi=min(mi,ansto);
			}
			dp[i]=mi;
		}
		if(dp[N+1]>ansrb){
			cout<<"Good job,rabbit!"<<endl;
		}
		else{
			cout<<"What a pity rabbit!"<<endl;
		}
	}
	return 0;
}
