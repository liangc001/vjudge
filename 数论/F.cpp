#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int p,e,i,d;
int cnt;

signed main(){
	while(cin>>p>>e>>i>>d){
		cnt++;
		if(p==-1&&e==-1&&i==-1&&d==-1){
			break;
		}
		int n=(5544*p+14421*e+1288*i+21252-d)%21252;
		cout<<"Case "<<cnt<<": the next triple peak occurs in "<<(n==0?21252:n)<<" days."<<endl;
	}
	return 0;
}
