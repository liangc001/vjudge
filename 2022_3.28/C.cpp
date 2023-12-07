#include<bits/stdc++.h>

using namespace std;

int n;

signed main(){
	cin>>n;
	int las=2*n-1-2;
	int tim=0;
	for(int i=1;i<n;++i){
		for(int i=1;i<=tim;++i){
			cout<<" ";
		}
		cout<<"*";
		for(int i=1;i<=las;++i){
			cout<<" ";
		}
		tim++; las-=2;
		cout<<"*"<<endl;
	}
	for(int i=1;i<=n;++i){
		for(int i=1;i<=n-1;++i){
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	return 0;
}
