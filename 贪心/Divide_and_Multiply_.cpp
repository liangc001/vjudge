
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,t;
ll s[20];
int main() {
	cin>>t;
	while(t--) {
		cin>>n;
		for(int i=1; i<=n; i++)
			cin>>s[i];
		ll res=0;
		for(int i=1; i<=n; i++) {
			while(s[i]%2==0) {
				s[i]/=2;
				res++;
			}
		}
		sort(s+1,s+1+n);
		s[n]*=pow(2,res);
		ll sum=0;
		for(int i=1; i<=n; i++) {
			sum+=s[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}

