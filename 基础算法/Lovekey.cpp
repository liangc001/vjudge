#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

char s1[2100],s2[2100];
char ss1[2100],ss2[2100];
char ans[2100];
int cnt=0;

signed main(){
	while(scanf("%s %s",ss1,ss2)!=-1){
		memset(ss1,0,sizeof(ss1));
		memset(ss2,0,sizeof(ss2));
		memset(s1,0,sizeof(s1));
		memset(s2,0,sizeof(s2));
		for(int i=strlen(ss1)-1;i>=0;i--){
			s1[strlen(ss1)-1-i]=ss1[i];
		}
		for(int i=strlen(ss2);i>=0;i--){
			s2[strlen(ss2)-i-1]=ss1[i];
		}
		cnt=max(strlen(s1),strlen(s2));
		memset(ans,0,sizeof(ans));
		bool flag=0;
		for(int i=0;i<cnt;++i){
			if(!ans[i])ans[i]='A';
			if(i>=strlen(s1)) s1[i]='A';
			if(i>=strlen(s2)) s2[i]='A';
			ans[i]+=(s1[i]-'A')+(s2[i]-'A');
			if(ans[i]>'Z'){
				if(i==max(strlen(s1),strlen(s2))-1){
					ans[i]-=26; ans[i+1]='B'; flag=1;
				}
				if(i<max(strlen(s1),strlen(s2))-1){
					ans[i]-=26; ans[i+1]='B';
				}
			}
		}
		if(flag==1) cnt++;
			flag=0;
		for(int i=cnt-1;i>=0;--i){
			if(ans[i]!='A'){
				flag=1;
				cout<<(char)(ans[i]); continue;
			}
			if(flag==1)cout<<(char)(ans[i]);
		}
		if(flag==0) cout<<'A';
		cout<<endl;
	}
	return 0;
}
