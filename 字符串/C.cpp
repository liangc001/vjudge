#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxm 100010
#define maxn 1000010
int n;
string s;
int kmp[maxn];
int cnt;
string ans;

inline void K(string sn){
	sn=' '+sn;
	kmp[0]=kmp[1]=0;
	cnt=0;
	for(int i=2;i<sn.size();++i){
		while(cnt&&sn[i]!=sn[cnt+1]) cnt=kmp[cnt];
		if(sn[cnt+1]==sn[i]) cnt++;
		kmp[i]=cnt;
	}
}

//Iwantorderpizza
//Iwantorderpizza

signed main(){
	n=read();
	for(int i=1;i<=n;++i){
		cin>>s;
		int len=min(ans.size(),s.size());
		string now=s+"*"+ans.substr(ans.size()-len,len);
		K(now);
		for(int j=kmp[now.size()];j<s.size();++j){
			ans+=s[j];
		}
	}
	cout<<ans;
	return 0;
}
