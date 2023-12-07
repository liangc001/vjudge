#include <bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}
#define maxn 160
int xx,yy,z1,z2,z3,z4;
int n,m,p;
int a[maxn][maxn];
int sum[maxn][maxn];
struct NODEY{
	int l,r,maxx;
};
int ly[maxn],lx[maxn];
struct NODEX{
	int l,r;
	NODEY y[maxn*4];
	inline void build(int k,int _l,int _r){
		y[k].l=_l; y[k].r=_r; y[k].maxx=-inf;
		if(_l==_r){
			ly[_l]=k; return;
		}
		int mid=(_l+_r)>>1;
		build(k<<1,_l,mid); build(k<<1|1,mid+1,_r);
	}
	inline int qmax(int k,int _l,int _r){
		if(y[k].l==_l&&y[k].r==_r){
			return y[k].maxx;
		}
		int mid=(y[k].l+y[k].r)>>1;
		if(_r<=mid) return qmax(k<<1,_l,_r);
		else if(_l>mid) return qmax(k<<1|1,_l,_r);
		else return max(qmax(k<<1,_l,mid),qmax(k<<1|1,mid+1,_r));
	}
}x[maxn*4];

inline void build(int k,int l,int r){
	x[k].l=l; x[k].r=r; x[k].build(1,1,m);
	if(l==r){
		lx[l]=k; return;
	}
	int mid=(l+r)>>1;
	build(k<<1,l,mid); build(k<<1|1,mid+1,r);
}
inline void ma(int xt,int yt,int val){
	int tx=lx[xt]; int ty=ly[yt];
	x[tx].y[ty].maxx=val;
	for(int i=tx;i;i>>=1){
		for(int j=ty;j;j>>=1){
			if(i==tx&&j==ty) continue;
			if(j==ty){
				x[i].y[j].maxx=max(x[i<<1].y[j].maxx,x[i<<1|1].y[j].maxx);
			}
			else{
				x[i].y[j].maxx=max(x[i].y[j<<1].maxx,x[i].y[j<<1|1].maxx);
			}
		}
	}
}
inline int qmax(int k,int x1,int x2,int y1,int y2){
	if(x[k].l==x1&&x[k].r==x2){
		return x[k].qmax(1,y1,y2);
	}
	int mid=(x[k].l+x[k].r)>>1;
	if(x2<=mid) return qmax(k<<1,x1,x2,y1,y2);
	else if(x1>mid) return qmax(k<<1|1,x1,x2,y1,y2);
	else return max(qmax(k<<1,x1,mid,y1,y2),qmax(k<<1|1,mid+1,x2,y1,y2));
}

inline bool check(int now){
	bool flag=0;
	int i1_now,i2_now,j1_now,j2_now;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			for(int i2=i;i2<=n;++i2){
				for(int j2=j;j2<=m;++j2){
					int now_sq=sum[i2][j2]+sum[i-1][j-1]-sum[i-1][j2]-sum[i2][j-1];
					if(now_sq>now){
						if(now_sq-qmax(1,i,j,i2,j2)+p>now){
							return 0;
						}
						else{
							i1_now=i; i2_now=i2; j1_now=j; j2_now=j2;
							flag=1;break;
						}
					}
				}
				if(flag==1)break;
			}
			if(flag==1)break;
		}
		if(flag==1)break;
	}
	if(flag==0){
		return 1;
	}
	int xt,yt,maxt=-inf;
	for(int i=i1_now;i<=i2_now;++i){
		for(int j=j1_now;j<=j2_now;++j){
			if(a[i][j]>=maxt){
				maxt=a[i][j]; xt=i; yt=j;
			}
		}
	}
	int tes[maxn][maxn];
	int tes_a=a[xt][yt];
	a[xt][yt]=p;
	for(int i=xt;i<=n;++i){
		for(int j=yt;j<=m;++j){
			tes[i][j]=sum[i][j];
			sum[i][j]=a[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
		}
	}
	flag=0;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			for(int i2=i;i2<=n;++i2){
				for(int j2=j;j2<=m;++j2){
					int now_sq=sum[i2][j2]+sum[i-1][j-1]-sum[i-1][j2]-sum[i2][j-1];
					if(now_sq>now){
						flag=1;
					}
				}
				if(flag==1)break;
			}
			if(flag==1)break;
		}
		if(flag==1)break;
	}
	a[xt][yt]=tes_a;
	for(int i=xt;i<=n;++i){
		for(int j=yt;j<=m;++j){
			sum[i][j]=tes[i][j];
		}
	}
	if(flag==1){
		return 0;
	}
	else{
		return 1;
	}
}

signed main(){
	ios::sync_with_stdio(0);
	while(cin>>n>>m>>p){
		build(1,1,n);
		memset(lx,0,sizeof(lx));
		memset(ly,0,sizeof(ly));
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				a[i][j]=read();
				sum[i][j]=a[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
				ma(i,j,a[i][j]);
			}
		}
		int l=-inf,r=inf;
		while(l<r){
			int mid=(l+r)>>1;
			if(check(mid)) r=mid;
			else l=mid+1;
		}
		cout<<l<<endl;
	}
	return 0;
}
