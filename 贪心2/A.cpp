#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;
int n;
string s;

signed main(){
	t=read();
	while(t--){
		n=read();
		cin>>s;
		int r=0;
		int l=0;
		int ans=0;
		for(int i=0;i<s.size();++i){
			if(s[i]==')'){
				r++;
			}
			else if(s[i]=='('){
				l++;
			}
			if(r>l){
				l=r;
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
