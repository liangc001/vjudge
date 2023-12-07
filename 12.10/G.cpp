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

#define maxn 500010
int n,k;
int a[maxn];
int mp[1000010];
int s;
struct ANS{
	int l,r,ans;
}ans;

signed main(){
	scanf("%lld%lld",&n,&k);
	for(int i=1;i<=n;++i){
		scanf("%lld",&a[i]);
	}
	int l=1,r=1;
	s=1; mp[a[1]]++;
	while(l<=r&&l<=n&&r<=n){
		int len=r-l+1;
		if(s<k){
			if(len>ans.ans){
				ans.ans=len;
				ans.l=l; ans.r=r;
			}
			r++;
			if(mp[a[r]]==0){
				s++;
			}
			mp[a[r]]++;
		}
		else if(s>k){
			mp[a[l]]--;
			if(mp[a[l]]==0){
				s--;
			}
			l++;
		}
		else if(s==k){
			if(len>ans.ans){
				ans.ans=len;
				ans.l=l; ans.r=r;
			}
			r++;
			if(mp[a[r]]==0){
				s++;
			}
			mp[a[r]]++;
		}
	}
	if(s<=k){
		cout<<"1"<<" "<<n<<endl;
		return 0;
	}
	printf("%lld %lld\n",ans.l,ans.r);
	return 0;
}
