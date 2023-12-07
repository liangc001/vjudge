#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll T,a,b,ans; 
int main(){
	cin>>T;
	while(T--){
		cin>>a>>b;
		ll t=180ll*b;
		ans=t/__gcd(a,t)-1;
		cout<<ans<<endl;
	}
	return 0;
}
