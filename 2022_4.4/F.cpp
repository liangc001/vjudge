#include<bits/stdc++.h>
#define int long long
using namespace std;
#define maxn 2010
int n;
struct ABC{
	int a,b,c;
	int id;
}t[maxn];

inline bool cmp(ABC x,ABC y){
	if((y.a+y.b)*x.c==(x.a+x.b)*y.c){
		return x.id<y.id;
	}
	return (y.a+y.b)*x.c>(x.a+x.b)*y.c;
}

signed main(){
	while(scanf("%lld",&n)!=-1){
		for(int i=1;i<=n;++i){
			scanf("%lld%lld%lld",&t[i].a,&t[i].b,&t[i].c);
			t[i].id=i;
		}
		sort(t+1,t+1+n,cmp);
		for(int i=1;i<n;++i){
			printf("%lld ",t[i].id);
		}
		printf("%lld\n",t[n].id);
	}
	return 0;
}
