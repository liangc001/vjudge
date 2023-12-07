#include<bits/stdc++.h>

using namespace std;

int n,k;
int ans;

signed main(){
	cin>>n>>k;
	queue<int> q;
	q.push(n);
	while(!q.empty()){
		int now=q.front(); q.pop();
		if((now-k)%2==0&&now>=k+2){
			int tes=(now-k)/2;
			q.push(tes);
			q.push(tes+k);
		}
		else{
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
