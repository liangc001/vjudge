#include <bits/stdc++.h>
using namespace std;

int n,m;

struct MO{
	char na[11];
	int num;
	int sum;
}a[100010];
int cnt;

inline bool cmp(MO x,MO y){
	if(x.sum==y.sum&&x.num==y.num) return strcmp(x.na,y.na)<0?1:0;
	else if(x.num==y.num) return x.sum<y.sum;
	else return x.num>y.num;
}

signed main(){
	cin>>n>>m;
	while(cin>>a[++cnt].na){
		a[cnt].num=0; a[cnt].sum=0;
		for(int i=1;i<=n;++i){
			char s[110];
			scanf("%s",s);
			int k=0,f=0;
			bool flag=0;
			if(s[0]=='-'||s[0]=='0'){
				continue;
			}
			else{
				a[cnt].num++;
				for(int j=0;j<strlen(s);++j){
					if(s[j]=='('){
						flag=1;
						continue;
					}
					if(s[j]==')') continue;
					if(flag==1){
						f=f*10+s[j]-48;
					}
					else if(flag==0){
						k=k*10+s[j]-48;
					}
				}
				a[cnt].sum+=k+f*m;
			}
		}
	}
	sort(a+1,a+1+cnt,cmp);
	for(int i=1;i<=cnt;++i){
		printf("%-10s %2d %4d\n",a[i].na,a[i].num,a[i].sum);
	}
	return 0;
}
