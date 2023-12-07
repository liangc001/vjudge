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

#define maxn 200010
#define inf 0x7fffffff
int n,m;
int ans;
int lun[maxn];
vector<int> a[maxn];

signed main(){
	n=read(); m=read();
	for(int i=1;i<=n;++i){
		a[i].push_back(0);
		for(int j=1;j<=m;++j){
			a[i].push_back(read());
		}
	}
	for(int j=1;j<=m;++j){
		for(int i=0;i<n;++i) lun[i]=0;
		for(int i=1;i<=n;++i){
			if(a[i][j]>n*m) continue;
			if(a[i][j]<j) continue;
			if((a[i][j]-j)%m!=0) continue;
			int tim=(a[i][j]-j)/m+1;
			lun[(i-tim+n)%n]++;
		}
		int sum=inf;
		for(int i=0;i<n;++i) sum=min(sum,n+i-lun[i]);
		ans+=sum;
	}
	cout<<ans<<endl;
	return 0;
}
