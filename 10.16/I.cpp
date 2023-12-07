#include <bits/stdc++.h>
using namespace std;

#define maxn 100010
int n;
int x[maxn];
queue<int> q;
int ans;
signed main(){
	cin>>n;
	for(register int i=1;i<=n;++i){
		cin>>x[i];q.push(x[i]);
	}
	while(1){
		int now=q.front();
		q.pop();
		if(q.empty()) break;
		if(now-q.front()==1){
			ans++;
		}
		else if(q.front()-now==1){
			ans++;
			q.pop();
			q.push(now);
		}
	}
	cout<<ans;
	return 0;
}
