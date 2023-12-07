#include<bits/stdc++.h>
#define int long long
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n;
int ans;
int num;

signed main(){
	n=read();
	for(int i=3;i<=n;i+=3){
		if(i>n) break;
		num++;
		ans+=num*2;
		ans+=n-i;
	}
    printf("%lld",ans);
    return 0;
}
