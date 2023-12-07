#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 100010
string s;
char mi[maxn];
stack<char> ks;

signed main(){
	while(cin>>s){
	for(int i=s.size()-1;i>=0;--i){
		if(i==s.size()-1){
			mi[i]=s[i];
		}
		else mi[i]=min(mi[i+1],s[i]);
	}
	while(!ks.empty()) ks.pop();
	for(int i=0;i<s.size();++i){
		if(ks.size()==0){
			ks.push(s[i]);
		}
		else{
			while(!ks.empty()){
				char now=ks.top(); 
				if(now<=mi[i]){
					cout<<now; ks.pop();
				}
				else break;
			}
			ks.push(s[i]);
		}
	}
	while(!ks.empty()){
		cout<<ks.top();
		ks.pop();
	}
	cout<<endl;
}
return 0;
}
