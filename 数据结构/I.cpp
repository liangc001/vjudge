#include <bits/stdc++.h>
#define int long long
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

#define maxn 500010
int n;
struct LEN{
	int id,num;
}len[maxn];
int cnt,now;
int mp[maxn];

inline bool cmp(LEN x,LEN y){
	return x.id<y.id;
}

signed main(){
	ios::sync_with_stdio(0);
	n=read();
	for(int i=1;i<=n;++i){
		len[++cnt].id=read();
		len[cnt].num=1;
		len[++cnt].id=read()+1;
		len[cnt].num=-1;
	}
	sort(len+1,len+1+cnt,cmp);
	for(int i=1;i<=cnt;++i){
		mp[now]+=len[i].id-len[i-1].id;
		now+=len[i].num;
	}
	for(int i=1;i<=n;++i){
		cout<<mp[i]<<endl;
	}
	return 0;
}
