#include<bits/stdc++.h>
using namespace std;

const int maxn=10000000+10;
int n=5000,m,l,r;
int a[maxn],vis[maxn],cnt;

signed main(){
	for(int i=2;i<=n;i++) vis[i]=1;
	for(int i=2;i<=n;i++){
		if(vis[i]==1) a[++cnt]=i;
		for(int j=1;j<=cnt&&a[j]*i<=n;j++){
			vis[a[j]*i]=0;
		} 
	}
	while(1){
		cin>>l>>r;
		if(l==0&&r==0) break;
		bool flag=0;
		for(int i=l;i<=r;++i){
			if(vis[(i*i+i+41)]==0){
				flag=1; break;
			}
		}
		if(flag==1){
			cout<<"Sorry"<<endl;
		}
		else cout<<"OK"<<endl;
	}
	return 0;
 } 
