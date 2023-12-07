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
	srand(time(0));
	int t=rand()%100;
	string s;
	int len=t;
	for(int i=1;i<=t;++i){
		int o=rand()%26;
		s+=(char)(o+'a');
	}
	cout<<s<<endl;
	t=rand()%10;
	cout<<t<<endl;
	for(int i=1;i<=t;++i){
		int a=rand()%len+1;
		cout<<a<<endl;
	}
	return 0;
}
