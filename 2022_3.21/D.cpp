#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 1000010
string s;
int nex[maxn];
int ans[maxn];
int len;

inline void get(){
	int now=0;
	s=' '+s;
	len=s.size();
	for(int i=2;i<len;++i){
		while(now&&s[now+1]!=s[i]) now=nex[now];
		if(s[now+1]==s[i]) now++;
		nex[i]=now;
	}
	now=nex[len-1];
	while(now){
		ans[now]++; now=nex[now];
	}
	for(int i=1;i<=len/2;++i){
		ans[i]=ans[i-1]+ans[i];
	}
}

signed main(){
	cin>>s;
	get();
	int t=read();
	len=len-1;
	while(t--){
		int a=read();
		int tes=min(a-1,len-a);
		printf("%d\n",ans[tes]); 
	}
	return 0;
}
