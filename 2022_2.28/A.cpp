#include<bits/stdc++.h>
#define N 55
using namespace std;
int n,m,T,vst[N],x[N],cnt;
		vector<int> a[N],b[N];
int main(){
	cin>>T;
	while(T--){
		cin>>n>>m;
		memset(vst,0,sizeof(vst));
		cnt=0;
		memset(x,0,sizeof(x));
		for(int i=1;i<=50;++i){
			a[i].clear(); b[i].clear();
		}
		for(int i=1;i<=n;i++){
			int u,v;
			cin>>u>>v;
			if(!vst[u]){
				vst[u]=1;
				x[++cnt]=u;
			}
			a[u].push_back(v);
		}
		sort(x+1,x+cnt+1);
		for(int i=1;i<=m;i++){
			int u,v;
			cin>>u>>v;
			b[u].push_back(v);
		}
		for(int i=1;i<=cnt;i++){
			set<int> s;
			set<int>::iterator it;
			for(int j=0;j<a[x[i]].size();j++){
				for(int k=0;k<b[a[x[i]][j]].size();k++){
					s.insert(b[a[x[i]][j]][k]);
				}
			}
			for(it=s.begin();it!=s.end();it++){
				cout<<x[i]<<" "<<*it<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}
