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
int f[1010];
int minn=5000;
queue<int> q;
string s,t;
int sum;

signed main(){
	n=read(); m=read();
	cin>>s>>t;
	for(int i=0;i<t.size()-s.size()+1;++i){
		sum=0;
		for(int j=0;j<s.size();++j){
			if(s[j]!='?'&&s[j]!=t[i+j]){
				sum++;
			}
		}
		if(sum<minn){
			minn=sum;
			while(!q.empty()) q.pop();
			for(int j=0;j<s.size();++j){
				if(s[j]!='?'&&s[j]!=t[i+j]){
					q.push(j+1);
				}
			}
		}
	}
	cout<<minn<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	return 0;
}
