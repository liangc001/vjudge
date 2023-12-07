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

int t;
int n,k;
int a[100010],b[100010];
int f[100010];
int cnt;

struct NODE{
	int next,num;
	inline bool operator <(const NODE &a)const{
		if(next==a.next) return num<a.num;
		else return next<a.next;
	}
};
priority_queue<NODE> q;
int ans;
queue<int> q_[100010];

signed main(){
	t=read();
	while(t--){
		ans=0; cnt=0;
		while(!q.empty()) q.pop();
		for(int i=1;i<=n;++i){
			f[i]=0;
			while(!q_[i].empty()) q_[i].pop();
		}
		n=read(); k=read();
		for(int i=1;i<=n;++i){
			a[i]=read();
			b[i]=a[i];
		}
		sort(b+1,b+1+n);
		for(int i=1;i<=n;++i){
			a[i]=lower_bound(b+1,b+1+n,a[i])-b; q_[a[i]].push(i);
		}
		for(int i=1;i<=n;++i){
			q_[a[i]].push(n+1);
		}
		for(int i=1;i<=n;++i){
			if(f[a[i]]==1){
				q_[a[i]].pop();
				q.push((NODE){q_[a[i]].front(),a[i]});
				continue;
			}
			if(cnt<k){
				ans++; cnt++;
				f[a[i]]=1;
				q_[a[i]].pop();
				q.push((NODE){q_[a[i]].front(),a[i]});
			}
			else{
				ans++; f[a[i]]=1; 
				q_[a[i]].pop();
				int now=q.top().num;
				f[now]=0; q.pop();
				q.push((NODE){q_[a[i]].front(),a[i]});
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
