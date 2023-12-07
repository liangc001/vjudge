#include <bits/stdc++.h>
using namespace std;
//A先手
int t;
string s;

signed main(){
	cin>>t; 
	while(t--){
		cin>>s;
		int sum1=0,sum0=0;
		for(int i=0;i<s.size();++i){
			if(s[i]=='1') sum1++;
			else if(s[i]=='0') sum0++;
		}
		//统计一和零的个数 
		int ans=min(sum1,sum0);
		//找到个数的最小值 
		if(ans%2==0){
			cout<<"NET"<<endl;
		}
		else{
			cout<<"DA"<<endl;
		}
	}
	return 0;
} 
