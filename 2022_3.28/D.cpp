#include<bits/stdc++.h>

using namespace std;

int a[100],cnt;
int ans;
int x;

signed main(){
	while(cin>>x){
		if(x==0){
			break;
		}
		a[++cnt]=x;
	}
	sort(a+1,a+1+cnt);
	for(int i=1;i<=cnt;++i){
		int pos=lower_bound(a+1+i,a+1+cnt,a[i]*2)-a;
		if(a[pos]==a[i]*2){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
