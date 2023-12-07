#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

char s[10010];

signed main(){
	int t=read();
	while(t--){
		gets(s);
		int sum=0;
		for(int i=0;i<strlen(s);++i){
			if(s[i]<0){
				sum++;
			}
		}
		cout<<sum/2<<endl;
	}
	return 0;
}
