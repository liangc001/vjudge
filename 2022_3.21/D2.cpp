#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+5; 
char s[maxn];
int n;
int nxt[maxn];
int ans[maxn];
 
void getnext()//预处理模式串  
{
    nxt[0]=-1;
    int i=0,j=-1;
    while(i<n)
    {
        if(j==-1||s[i]==s[j])
        {
            i++;
            j++;
            nxt[i]=j;
        }
        else j=nxt[j];
    }
}
 
void prenext()
{
	int now=nxt[n];
	while(now)
	{
		ans[now]++; 
		now=nxt[now];
	}
	for(int i=1;i<=n/2;i++)
	{
		ans[i]+=ans[i-1];
	}
}
 
int main()
{
	scanf("%s",s);
	n=strlen(s);
	getnext();
	prenext();
	int m;
	cin>>m;
	while(m--)
	{
		int pos;
		scanf("%d",&pos);//1e6
		pos=min(pos-1,n-pos); 
		printf("%d\n",ans[pos]);
	}
}
