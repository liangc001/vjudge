#include<bits/stdc++.h>
#define int long long
using namespace std;

#define maxn 200010
int n;
int a[maxn];

signed main(){
	while(cin>>n){
	for(int i=0;i<=n;++i){
		cin>>a[i];
	}
	int sum=0;
	for(int i=n;i>=0;--i){
		sum+=a[i];
		if(i<=sum){
			cout<<i<<endl;
			break;
		}
	}
}
return 0;
}
