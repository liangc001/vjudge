#include <bits/stdc++.h>
using namespace std;

int n;
int k,ans=0;
stack<int> q;

int main(){
	cin>>n;
	for(register int i=0;i<n;i++){
		cin>>k;
		while(q.size()>0&&q.top()==k+1){ans++;q.pop();}
		if(q.size()>0&&q.top()==k-1) ans++;
		else q.push(k);
 	}
	cout<<ans;
	return 0;
}

