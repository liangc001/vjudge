#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n;
char s[110];

signed main(){
	n=read();
	while(1){
		gets(s);
		int suma=0,sume=0,sumi=0,sumo=0,sumu=0;
		for(int i=0;i<strlen(s);++i){
			if(s[i]=='a') suma++;
			if(s[i]=='e') sume++;
			if(s[i]=='i') sumi++;
			if(s[i]=='o') sumo++;
			if(s[i]=='u') sumu++;
		}
		cout<<"a:"<<suma<<endl;
		cout<<"e:"<<sume<<endl;
		cout<<"i:"<<sumi<<endl;
		cout<<"o:"<<sumo<<endl;
		cout<<"u:"<<sumu<<endl;
		if(n!=1) cout<<endl;
		n--;
		if(n==0) break;
	}
	return 0;
}
