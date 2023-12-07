#include <bits/stdc++.h>
using namespace std;
#define int long long

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 1000010
int n;
int kmp[maxn];
string s;
signed main(){
	n=read();
	cin>>s;
	s=' '+s;
	int now=0;
	for(int i=2;i<s.size();++i){
		while(now&&s[now+1]!=s[i]) now=kmp[now];
		if(s[now+1]==s[i]) now++;
		kmp[i]=now;
	}
	cout<<n-kmp[n]<<endl;
	return 0;
}
