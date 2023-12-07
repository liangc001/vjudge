#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 52
int num;
int n;
int a[27];
int c1[maxn];
int c2[maxn];

signed main(){
	n=read();
	while(n--){
		int ans=0;
		for(int i=0;i<26;++i) a[i]=read();
		for(int i=0;i<=maxn;++i){
			c1[i]=0; c2[i]=0;
		}
		c1[0]=1;
		for(int i=0;i<26;++i){
			for(int j=0;j<=maxn;++j){
				if(c1[j])
				for(int k=0;j+k<=maxn&&k<=a[i]*(i+1);k+=(i+1)){
					c2[k+j]+=c1[j];
				}
			}
			for(int j=0;j<=maxn;++j){
				c1[j]=c2[j];
				c2[j]=0;
			}
		}
		for(int i=1;i<=50;++i){
			ans+=c1[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
