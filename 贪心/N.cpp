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
		char f;
		int ans=0;
		f=s[0];
		for(int i=0;i<s.size();++i){
			if(s[i]==f) continue;
			else{
				if(s[i]=='1'){
					ans++; f='1';
				}
				else{
					f='0';
				}
			}
		}
		if(f=='0') ans++;
		cout<<min(2,ans)<<endl;
	}
	return 0;
}
