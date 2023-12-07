#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int sc;

signed main(){
	while(cin>>sc){
		if(sc<0||sc>100){
			cout<<"Score is error!"<<endl;
		}
		else if(sc>=0&&sc<=59){
			cout<<"E"<<endl;
		}
		else if(sc>=60&&sc<=69){
			cout<<"D"<<endl;
		}
		else if(sc>=70&&sc<=79){
			cout<<"C"<<endl;
		}
		else if(sc>=80&&sc<=89){
			cout<<"B"<<endl;
		}
		else{
			cout<<"A"<<endl;
		}
	}
	return 0;
}
