#include<bits/stdc++.h>

using namespace std;

int n;
int ans;

signed main(){
	cin>>n; 
	for(int i=1;i<=n;++i){
		int now=i;
		bool flag=0;
		if(now%7==0){
			flag=1;
		}
		while(now){
			int x=now%10; now=now/10;
			if(x==7){
				flag=1;
			}
		}
		if(flag==0){
			ans+=i*i;
		}
	}
	cout<<ans<<endl;
	return 0;
}
