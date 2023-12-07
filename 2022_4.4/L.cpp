#include<bits/stdc++.h>

using namespace std;

int t;
int n,m;
string s;

signed main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		cin>>s;
		s=' '+s;
		int sum=0x3f3f3f3f;
		int suml=0,sumr=0;
		bool flag=0;
		for(int i=m;i<n;++i){
			if(s[i]=='L'){
				suml++;
			}
		}
		for(int i=1;i<m;++i){
			if(s[i]=='R'){
				sumr++;
			}
		}
		cout<<min(suml,sumr)<<endl;
	}
	return 0;
}
