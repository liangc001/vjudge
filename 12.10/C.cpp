#include <bits/stdc++.h>
using namespace std;
//A����
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
		//ͳ��һ����ĸ��� 
		int ans=min(sum1,sum0);
		//�ҵ���������Сֵ 
		if(ans%2==0){
			cout<<"NET"<<endl;
		}
		else{
			cout<<"DA"<<endl;
		}
	}
	return 0;
} 
