#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi acos(-1.0)

inline int read()
{
    int x=0,k=1; char c=getchar();
    while(c<'0'||c>'9'){if(c=='-')k=-1;c=getchar();}
    while(c>='0'&&c<='9')x=(x<<3)+(x<<1)+(c^48),c=getchar();
    return x*k;
}
const int maxn=2e8+10;
const int mod=425;
int n,k; 
signed main(){ 
	int t=read();
	for(int i=1;i<=t;i++){
		n=read();
		bool f=1;
		for(int j=1;j<=n;j++){
			k=read();
			if(k==0||k%3!=0)
			f=0;
		}
		if(f) printf("Case #%lld: Yes\n",i);
		else printf("Case #%lld: No\n",i);
	}
}
