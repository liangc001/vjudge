#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

string s;
int ye1[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int ye2[15]={0,31,29,31,30,31,30,31,31,30,31,30,31};

signed main(){
	while(cin>>s){
		int  flag=0;
		int ans=0;
		int nian=0,yue=0,ri=0;
		for(int i=0;i<s.size();++i){
			if(s[i]=='/'){
				flag++;
				continue;
			}
			if(flag==0){
				nian=nian*10+(s[i]-48);
			}
			else if(flag==1){
				yue=yue*10+(s[i]-48);
			}
			else if(flag==2){
				ri=ri*10+(s[i]-48);
			}
		}
		if((nian%4==0&&nian%100!=0)||(nian%400==0)){
			for(int i=1;i<yue;++i){
				ans+=ye2[i];
			}
		}
		else{
			for(int i=1;i<yue;++i){
				ans+=ye1[i];
			}
		}
		cout<<ans+ri<<endl;
	}
	return 0;
}
