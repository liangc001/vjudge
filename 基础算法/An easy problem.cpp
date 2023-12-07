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
map<char,int> mp;

inline void init(){
	int cnt=-1;
	for(int i='a';i<='z';++i){
		mp[(char)i]=cnt;
		cnt--;
	}
	cnt=1;
	for(int i='A';i<='Z';++i){
		mp[(char)i]=cnt;
		cnt++;
	}
}

signed main(){
	t=read();
	init();
	while(t--){
		char x;
		int y;
		cin>>x>>y;
		cout<<mp[x]+y<<endl;
	}
	return 0;
}
