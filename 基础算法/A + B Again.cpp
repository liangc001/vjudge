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

string s1,s2;

signed main(){
	while(cin>>s1>>s2){
		int sum1=0; int sum2=0; int sum3=0;
		bool f=0; int cnt=1;
		for(int i=s1.size()-1;i>=0;--i){
			if(s1[i]=='-'){
				f=1; continue;
			}
			if(s1[i]=='+'){
				continue;
			}
			sum1=sum1+cnt*(s1[i]>='A'?s1[i]-'0'-7:s1[i]-'0');
//			cout<<(s1[i]>='A'?s1[i]-'0'-7:s1[i]-'0');
			cnt*=16;
		}
		if(f) sum1*=-1;
		f=0; cnt=1;
		for(int i=s2.size()-1;i>=0;--i){
			if(s2[i]=='-'){
				f=1; continue;
			}
			if(s2[i]=='+'){
				continue;
			}
			sum2=sum2+cnt*(s2[i]>='A'?s2[i]-'0'-7:s2[i]-'0');
			cnt*=16;
		}
		if(f) sum2*=-1;
		sum3=sum1+sum2;
		if(sum3==0){
			cout<<0<<endl;
			continue;
		}
		if(sum3<0){
			cout<<"-"; sum3*=-1;
		}
		string s;
		while(sum3){
			int now=sum3%16;
			s=(now>=10?(char)(now-10+'A'):(char)(now+'0'))+s;
			sum3/=16;
		}
		cout<<s;
		cout<<endl;
	}
	return 0;
}
