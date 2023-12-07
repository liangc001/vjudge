#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n;
string s;

signed main(){
	n=read();
	while(n--){
		cin>>s;
		cout<<"6";
		for(int i=6;i<s.size();++i){
			cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}
