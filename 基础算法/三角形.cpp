#include <bits/stdc++.h>
using namespace std;

signed main(){
	int t;
	cin>>t;
	while(t--){
		#define int double
		int a; int b; int c;
		cin>>a>>b>>c;
		if(a+b>c&&a+c>b&&b+c>a){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
