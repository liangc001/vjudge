#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

string s;

signed main(){
	while(cin>>s){
		char a='a';
		for(int i=0;i<s.size();++i){
			if(s[i]>a){
				a=s[i];
			}
		}
		for(int i=0;i<s.size();++i){
			cout<<s[i];
			if(s[i]==a){
				cout<<"(max)";
			}
		}
		cout<<endl;
	}
	return 0;
}
