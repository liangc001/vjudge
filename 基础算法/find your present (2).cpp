#include <bits/stdc++.h>
using namespace std;
#define int long long

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 1000010
int n;
int a[maxn];
map<long long,int> mp;
map<int,int> mpp;
int vis[maxn];

signed main(){
	while(cin>>n){
		if(n==0) break;
		int cnt=1;
		mp.clear(); mpp.clear();
		memset(vis,0,sizeof(vis));
		for(int i=1;i<=n;++i){
			a[i]=read();
			if(!mp[a[i]]){
				mp[a[i]]=cnt;
				mpp[cnt]=a[i];
				cnt++;
			}
			vis[mp[a[i]]]++;
		}
		for(int i=1;i<=cnt;++i){
			if(vis[i]%2==1){
				cout<<mpp[i]<<endl;
				break;
			}
		}
	}
	return 0;
}
