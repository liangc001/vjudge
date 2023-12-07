#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}


signed main(){
	int t=read();
	while(t--){
		string s;
		cin>>s;
		bool f1=0,f2=0,f3=0,f4=0;
		for(int i=0;i<s.size();++i){
			if(s[i]>='a'&&s[i]<='z') f2=1;
			else if(s[i]>='A'&&s[i]<='Z') f1=1;
			else if(s[i]>='0'&&s[i]<='9') f3=1;
			else f4=1;
		}
		if(f1+f2+f3+f4>=3&&s.size()>=8&&s.size()<=16){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
