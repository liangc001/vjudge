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
const int maxn=1e7+10;
int n,t;
signed main(){ 
	t=read();for(int k=1;k<=t;k++){
		n=read();
		printf("Case #%lld: %lld\n",k,n/3);
	}
}
