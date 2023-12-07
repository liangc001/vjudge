#include <bits/stdc++.h>
#define int long long
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 200010
int t;
int n;
int a[maxn];
priority_queue<int , vector<int> , greater<int> > q1;
priority_queue<int , vector<int> , less<int> > q2;
int num[maxn];
int ans;

signed main(){
	t=read();
	while(t--){
		ans=0;
		for(int i=0;i<=n;++i){
			num[i]=0;
		}
		while(!q1.empty()) q1.pop();
		while(!q2.empty()) q2.pop();
		n=read();
		for(int i=1;i<=n;++i){
			a[i]=read();
			num[a[i]]++;
			q1.push(a[i]);
		}
		cout<<num[0]<<" ";
		for(int i=1;i<=n;++i){
			while(!q1.empty()&&q1.top()<i){
				q2.push(q1.top()); q1.pop();
			}
			if(q2.empty()){
				for(int j=i;j<=n;++j){
					cout<<-1<<" ";
				} break;
			}
			else{
				ans+=(i-1)-q2.top(); q2.pop();
				cout<<ans+num[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
