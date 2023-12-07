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

int k;char n[100010];
int de[100010];
int ans;
int cnt;
int sum;

signed main(){
	k=read();
	cin>>n;
	for(int i=0;i<strlen(n);++i){
		de[++cnt]=n[i]-'0';
		sum+=de[cnt];
	}
	sort(de+1,de+1+cnt);
	sum=k-sum;
	for(int i=1;i<=cnt;++i){
		if(sum<=0){
			break;
		}
		int ls=9-de[i];
		sum-=ls;
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
