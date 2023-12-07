#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#define maxn 100
using namespace std;

inline int read(){
	int x=0,t=1;
	char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n,n_long[maxn];
bool vis[maxn];
int maxx=-1,n_num,tot,res,now;

bool cmp(int a,int b){return a>b;}

bool dfs(int rest_len,int begin,int k){
	if(k==res) return true;
	if(rest_len==0&&dfs(now,1,k+1)) return true;
	for(int i=begin;i<=n_num;i++){
		if(!vis[i]&&n_long[i]<=rest_len){
			vis[i]=1;
			if(dfs(rest_len-n_long[i],i+1,k)) return true;
			vis[i]=0;
			if(rest_len==n_long[i]||rest_len==now) break;
			while(n_long[i+1]==n_long[i]) i++;
		}
	}
	return false;
}

int main()
{
    while(cin>>n){
        memset(vis,0,sizeof(vis));
        maxx=-1;
        n_num=0; tot=0; res=0; now=0;
	if(n==0) break;
	for(int i=1;i<=n;i++) {
		int flag=read();
		n_long[++n_num]=flag;tot+=n_long[n_num];
	}
	sort(n_long+1,n_long+1+n_num,cmp);
	for(int i=n_long[1];i<=tot;i++){
		if(tot%i==0){
			now=i; res=tot/i;
			if(dfs(now,1,0)){
                cout<<now<<endl;
                break;
			}
		}
	}
    }
	return 0;
}