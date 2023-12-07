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
int wo[maxn];
priority_queue<int , vector<int> , greater<int> > q1;
bool flag=0;
int ans[maxn],acnt;

signed main(){
	t=read();
	for(int i=1;i<=2*t;++i){
		char x;
		cin>>x;
		if(x=='+'){
			wo[i]=0;
		}
		else{
			wo[i]=read();
		}
	}
	for(int i=2*t;i>=1;--i){
		if(wo[i]==0){
			if(!q1.empty()){
				ans[++acnt]=q1.top(); q1.pop();
			}
			else{
				flag=1; break;
			}
		}
		else{
			if(!q1.empty()&&wo[i]>q1.top()){
				flag=1; break;
			}
			q1.push(wo[i]);
		}
	}
	if(flag==1||!q1.empty()){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
		for(int i=acnt;i>=1;--i){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
