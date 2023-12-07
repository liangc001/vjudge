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
string s;

signed main(){
	t=read();
	while(t--){
		cin>>s;
		string l=s;
		reverse(s.begin(),s.end());
		bool flag=0;
		for(int i=0;i<s.size();++i){
			if(s[i]!=l[i]){
				flag=1; break;
			}
		}
		if(flag==1){
			cout<<"no"<<endl;
		}
		else cout<<"yes"<<endl;
	}
}
