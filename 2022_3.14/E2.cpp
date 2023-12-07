#include<bits/stdc++.h>
#define N 109
using namespace std;
typedef long double lb;
int T,n,cnt,ans;
lb sum,x[N];
int main(){
	cin>>T;
	while(T--){
		++cnt;
		cin>>n;
		for(int i=1;i<=n;i++){
			char ch;
			lb a,b;
			cin>>a>>ch>>b;
			x[i]=a/(a+b);
		}
		sort(x+1,x+n+1);
		sum=0.0;
		ans=0;
		for(int i=1;i<=n;i++){
			sum+=x[i];
			if(sum>=1.0) break;
			ans++;
		}
		printf("Case #%d: %d\n",cnt,ans);
	}
	return 0;
}
