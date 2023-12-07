#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

const int maxn=1010;
int kmp[maxn],lenth1,lenth2;
char s1[maxn],s2[maxn];
int cnt,sum;


signed main(){
	while(cin>>s1+1){
		if(s1[1]=='#') break;
		cin>>s2+1;
    	lenth1=strlen(s1+1);
    	lenth2=strlen(s2+1);
    	cnt=0,sum=0;
    	memset(kmp,0,sizeof(kmp));
    	int ans=0;
    	for(int i=2;i<=lenth2;i++){
        	while(cnt&&s2[i]!=s2[cnt+1]) cnt=kmp[cnt];
        	if(s2[cnt+1]==s2[i]) cnt++;
        	kmp[i]=cnt;
   		}
   		for(int i=1;i<=lenth1;i++){
        	while(sum>0&&s2[sum+1]!=s1[i]) sum=kmp[sum];
        	if(s2[sum+1]==s1[i]) sum++;
    	    if(sum==lenth2) {
    	    	ans++;
    	    	i+=lenth2-1;
         	   sum=kmp[sum];
        	}
    	}
    	cout<<ans<<endl;
	}
	return 0;
}
