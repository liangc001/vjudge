#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

char x[1010];
char s[1010];
queue<int> q;

signed main(){
	int tt=read();
	while(tt--){
		int n=read();
		int ans=0;
		cin>>s;
		for(int i=0;i<n;++i) x[i]=s[i];
		sort(x,x+n);
		for(int i=0;i<n;++i){
			if(s[i]!=x[i]){
				ans++; q.push(i+1);
			}
		}
		if(ans==0){
			cout<<ans<<endl; continue;
		}
		else{
			cout<<1<<endl;
			cout<<ans<<" ";
			while(!q.empty()){
				cout<<q.front();
				if(q.size()!=1) cout<<" ";
				q.pop();
			}
			cout<<endl;
		}
	}
	return 0;
}
