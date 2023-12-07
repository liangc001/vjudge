#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}
#define inf 0x7fffffff
#define maxn 110
int n,all;
int cnt;
struct ANS{
	int ans;
	int id;
}ans[maxn];
bool flag=0;
struct AN{
	int a,id;
}a[maxn];

bool cmp1(AN x,AN y){
	return x.a>y.a;
}

bool cmp2(ANS x,ANS y){
	return x.id<y.id;
}

signed main(){
	n=read();
	all=read();
	for(int i=1;i<=n;++i){
		a[i].a=read();
		a[i].id=i;
	}
	sort(a+1,a+1+n,cmp1);
	for(int i=1;i<=n;++i){
		if(all>=(a[i].a%2==0?a[i].a/2:a[i].a/2+1)){
			all-=(a[i].a%2==0?a[i].a/2:a[i].a/2+1);
			ans[++cnt].ans=(a[i].a%2==0?a[i].a/2:a[i].a/2+1);
			ans[cnt].id=a[i].id;
		}
		else{
			flag=1; break;
		}
	}
	if(flag==1){
		cout<<-1<<endl;
		return 0;
	}
	if(all>0){
		for(int i=1;i<=cnt;++i){
			if(all<=0){
				break;
			}
			int now=all;
			all-=(a[i].a-ans[i].ans);
			if(all<0){
				ans[i].ans+=now;
				break;
			}
			else{
				ans[i].ans=a[i].a;
			}
		}
	}
	if(all>0){
		cout<<-1<<endl;
		return 0;
	}
	sort(ans+1,ans+1+cnt,cmp2);
	for(int i=1;i<=cnt;++i){
		cout<<ans[i].ans<<" ";
	}
	return 0;
}
