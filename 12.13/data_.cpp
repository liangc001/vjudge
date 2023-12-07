#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

signed main(){
	srand(time(0));
	int t=rand()%100+1;
	cout<<t<<" ";
	int x=rand()%10+1;
	cout<<x<<endl;
	for(int i=1;i<=t;++i){
		int now=rand()%50+1;
		cout<<now<<endl;
	}
	return 0;
}
