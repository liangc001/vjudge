#include <bits/stdc++.h>
using namespace std;
#define MAX 0x7fffffff
#define pi acos(-1.0)
#define int long long
//int mon[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
const int mod = 1e9+7;
const int maxn = 1e3+10;
int n,t,b;
int num[maxn],cost[maxn];
signed main() {
    scanf("%lld",&t);while(t--){
    	scanf("%lld%lld",&n,&b);
    	for(int i=1;i<=n;i++)scanf("%lld",&num[i]);
    	for(int i=1;i<n;i++)scanf("%lld",&cost[i]);
    	int sum=0;bool f=1;
    	for(int i=1;i<n;i++){
    		sum+=num[i];
    		if(sum<cost[i]*b){
    			f=0;
    			break;
			}
			sum-=cost[i]*b;
		}
		if(sum+num[n]<b)f=0;
		if(f) printf("Yes\n");
		else printf("No\n");
	}
}
