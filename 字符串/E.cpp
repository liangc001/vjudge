#include<bits/stdc++.h>
#define int long long
using namespace std;

#define maxn 1000010 
const int mod=1e9+7;
int n,T;
char s[maxn];
int nxt[maxn],num[maxn];
int ans;

signed main(){
	cin>>T;
    while(T--){
        ans=1;
		num[1]=1;
        scanf("%s",s+1);
		n=strlen(s+1);
		int j=0;
		for(int i=2;i<=n;i++){
        	while(j&&s[i]!=s[j+1]) j=nxt[j];
        	if(s[i]==s[j+1]) j++;
        	nxt[i]=j;num[i]=num[j]+1;
    	}
    	j=0;
    	for(int i=2;i<=n;i++){
    	    while(j&&s[i]!=s[j+1]) j=nxt[j];
        	if(s[i]==s[j+1])j++;
    	    while((j<<1)>i) j=nxt[j];
    	    ans=(ans*(num[j]+1))%mod;
    	}
        printf("%lld\n",ans);
    }
    return 0;
}
