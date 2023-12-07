#include <bits/stdc++.h>
using namespace std;

int t;
int n;
struct PO{
	int x,y;
}po[1010];

inline bool cmp(PO xx,PO yx){
	if(xx.x!=yx.x){
		return xx.x<yx.x;
	}
	else return xx.y<yx.y;
}

signed main(){
	scanf("%d",&t);
	while(t--){
		bool flag=0;
		scanf("%d",&n);
		for(int i=1;i<=n;++i){
			scanf("%d%d",&po[i].x,&po[i].y);
		}
		sort(po+1,po+1+n,cmp);
		for(int i=1;i<=n;++i){
			if(po[i].x<po[i-1].x||po[i].y<po[i-1].y){
				flag=1; break;
			}
		}
		if(flag==1){
			cout<<"NO"<<endl;
		}
		else{
			int x_now=0; int y_now=0;
			cout<<"YES"<<endl;
			for(int i=1;i<=n;++i){
			int cntx=po[i].x-x_now; int cnty=po[i].y-y_now;
			for(int j=1;j<=cntx;++j){
				cout<<"R";
			}
			for(int j=1;j<=cnty;++j){
				cout<<"U";
			}
			x_now=po[i].x; y_now=po[i].y;
			}
			cout<<endl;
		}
	}
	return 0;
}
