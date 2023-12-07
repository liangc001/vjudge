#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

char s[10];

signed main(){
	while(cin>>s){
		sort(s,s+3);
		for(int i=0;i<3;++i){
			cout<<s[i];
			if(i!=2) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
