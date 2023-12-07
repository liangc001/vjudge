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

#define maxn 300010
int t;int n;
int k,int b[maxn];
int cnt;
int sum[maxn],las[maxn];

inline bool check(int now){
	memset(sum,0,sizeof(sum));
	int cs=0;
	memset(las,0,sizeof(las));
	for(int i=1;i<=n;++i){
		
		for(int j=1;j<=cs;++j){
			
		}
	}
}

signed main(){
	t=read();
	while(t--){
		cnt++;
		n=read();
		k=read();
		for(int i=1;i<=n;++i){
			b[i]=read();
		}
		int l=0,r=n;
		while(l<r){
			int mid=(l+r)>>1;
			if(check(mid)){
				r=mid
			}
			else{
				l=mid+1;
			}
		}
		cout<<"Case #"<<cnt<<": ";
		cout<<l<<endl;
	}
	return 0;
}
