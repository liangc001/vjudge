#include <bits/stdc++.h>
#define int long long
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

char s1[1000010],s2[1000010];

signed main(){
	while(cin>>s1>>s2){
		bool p1=0,p2=0;
		for(int i=0;i<strlen(s1);++i){
			if(s1[i]=='.'){
				p1=1; break;
			}
		}
		for(int i=0;i<strlen(s2);++i){
			if(s2[i]=='.'){
				p2=1; break;
			}
		}
		if(p1==1){
			int len1=strlen(s1);
			while(s1[len1-1]=='0'){
				s1[len1-1]='\0'; len1--;
			}
			if(s1[len1-1]=='.'){
				s1[len1-1]='\0';
			}
		}
		if(p2==1){
			int len2=strlen(s2);
			while(s2[len2-1]=='0'){
				s2[len2-1]='\0'; len2--;
			}
			if(s2[len2-1]=='.'){
				s2[len2-1]='\0';
			}
		}
		if(strcmp(s1,s2)==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
