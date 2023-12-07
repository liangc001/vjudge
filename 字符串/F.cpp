#include <bits/stdc++.h>
#define int long long
#define maxn 1000010
using namespace std;

int size,nxt[maxn];
char s[maxn];
int ans;

signed main(){
	cin>>size>>(s+1);
	int now=0;
	for(int i=2;i<=size;++i){
		while(now&&s[now+1]!=s[i]) now=nxt[now];
		if(s[now+1]==s[i]) now++;
		nxt[i]=now;
	}
	for (register int i=2,j=2; i<=size; i++,j=i){
		while(nxt[j]) j=nxt[j];
		if(nxt[i]) nxt[i]=j;
		ans+=i-j;
	}
	cout<<ans<<endl;
	return 0;
}
