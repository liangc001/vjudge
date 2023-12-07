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
int n;
struct O{
	int l,r;
}p[maxn];
int f[maxn];

inline bool cmp(O x,O y){
	if(x.l==y.l) return x.r<y.r;
	else return x.l<y.l;
}

signed main(){
	while(cin>>n){
		if(n==0) break;
		memset(f,0,sizeof(f));
		for(int i=1;i<=n;++i){
			p[i].l=read(); p[i].r=read();
		}
		sort(p+1,p+1+n,cmp);
		f[1]=1;
		for(int i=1;i<=n;++i){
			for(int j=0;j<i;++j){
				if(p[j].r>p[i].l)f[i]=max(f[i],f[j]);
				else f[i]=max(f[i],f[j]+1);
			}
		}
		cout<<f[n]<<endl;
	}
	return 0;
}
