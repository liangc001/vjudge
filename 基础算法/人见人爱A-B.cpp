#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n,m;
int a;
priority_queue<int,vector<int>,greater<int> > q1,q2,q3;

signed main(){
	while(cin>>n>>m){
		bool flag=0;
		if(n==0&&m==0) break;
		while(!q1.empty()&&!q2.empty()&&!q3.empty()){
			q1.pop(); q2.pop(); q3.pop();
		}
		for(int i=1;i<=n;++i){
			a=read(); q1.push(a);
		}
		for(int i=1;i<=m;++i){
			a=read(); q2.push(a);
		}
		while(!q1.empty()){
			while(q1.top()>q2.top()&&!q2.empty()){
				q2.pop();
			}
			if(q1.top()==q2.top()) q1.pop();
			else{
				flag=1;
				q3.push(q1.top());
				q1.pop();
			}
		}
		while(!q3.empty()){
			cout<<q3.top()<<" "; q3.pop();
		}
		if(flag==0){
			cout<<"NULL";
		}
		cout<<endl;
	}
	return 0;
}
