#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

priority_queue<int> q;

signed main(){
	int t=read();
	while(t--){
		while(!q.empty()) q.pop();
		int n=read();
		for(int i=1;i<=n;++i){
			int x=read();
			q.push(x);
		}
		int last=q.top(); q.pop();
		bool flag=0;
		while(!q.empty()){
			if(abs(q.top()-last)>1){
				flag=1; break;
			}
			else last=q.top(); q.pop(); 
		}
		if(flag==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
