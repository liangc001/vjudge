#include <bits/stdc++.h>
#define maxn 200005
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}
struct TRE{
	int sum,l,r;
}tree[maxn<<5];
int x,y,z,cnt;
int t[maxn];
int a;
struct AS{
	int b,x,l,r;
}as[maxn];

inline int build(int l,int r){
	int rt=++cnt;
	tree[rt].sum=0;
	int mid=(l+r)>>1;
	if(l<r){
		tree[rt].l=build(l,mid);
		tree[rt].r=build(mid+1,r);
	}
	return rt;
}
inline int up(int pre,int l,int r,int x){
	int rt=++cnt;
	tree[rt].l=tree[pre].l;
	tree[rt].r=tree[pre].r;
	tree[rt].sum=tree[pre].sum+1;
	if(l<r){
		int mid=(l+r)>>1;
		if(x<=mid) tree[rt].l=up(tree[pre].l,l,mid,x);
		else tree[rt].r=up(tree[pre].r,mid+1,r,x);
	}
	return rt;
}
inline int query(int l,int r,int u,int v,int L,int R){
	if(tree[v].sum-tree[u].sum==0) return 0;
	if(L<=l&&R>=r){
		return tree[v].sum-tree[u].sum;
	}
	int x=0;
	int mid=(l+r)>>1;
	if(L<=mid) x+=query(l,mid,tree[u].l,tree[v].l,L,R);
	if(R>mid) x+=query(mid+1,r,tree[u].r,tree[v].r,L,R);
	return x;
}
signed main(){
	int n=read();
	int m=read();
	t[0]=build(0,maxn);
	for(register int i=1;i<=n;++i){
		a=read();
		t[i]=up(t[i-1],0,maxn,a);
	}
	for(register int i=1;i<=m;++i){
		as[i].b=read();
		as[i].x=read();
		as[i].l=read();
		as[i].r=read();
		int ans=0;
		for(int j=17;j>=0;--j){
			if(!(as[i].b&(1<<j))&&query(0,maxn,t[as[i].l-1],t[as[i].r],ans+(1<<j)-as[i].x,ans+(1<<(j+1))-1-as[i].x)){
				ans+=(1<<j);
			}
			if((as[i].b&(1<<j))&&!query(0,maxn,t[as[i].l-1],t[as[i].r],max(0,ans-as[i].x),min(maxn,ans+(1<<j)-1-as[i].x))){
				ans+=(1<<j);
			}
		}
		cout<<(ans^as[i].b)<<endl;
	}
	return 0;
}
