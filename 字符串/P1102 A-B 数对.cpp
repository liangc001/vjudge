// luogu-judger-enable-o2
#include<bits/stdc++.h>
using namespace std;
long long n,c,ans=0,a[200010],m=0;
int main()
{
	cin>>n>>c;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		m=a[i]+c;
		int pos = (upper_bound(a+1,a+1+n,m)-a)-(lower_bound(a+1,a+1+n,m)-a);
		ans+=pos;
	}
	cout<<ans;
	return 0;
}
