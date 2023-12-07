#include <bits/stdc++.h>
using namespace std;
#define int long long

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 200010
struct N{
	int a,b,id,ans;
}a[maxn];

inline bool cmp(N x,N y){
	return x.id<y.id;
}

inline bool cmp1(N x,N y)
{
	if(x.a==y.a)return x.b>y.b;
	else return x.a<y.a;
}
signed main(){
	int t=read();
	while(t--){
		int n=read();
		for(int i=1;i<=n;++i){
			int x=read(); int y=read();
			a[i].a=max(x,y);
			a[i].b=min(x,y);
			a[i].id=i;
			a[i].ans=-1;
		}
		sort(a+1,a+1+n,cmp1);
		int min_b=1;
		for(int i=2;i<=n;++i){
			if(a[i].b>a[min_b].b){
				a[i].ans=a[min_b].id;
			}
			else if(a[i].b<a[min_b].b){
				min_b=i;
			}
		}
		sort(a+1,a+1+n,cmp);
		for(int i=1;i<=n;++i){
			cout<<a[i].ans<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
