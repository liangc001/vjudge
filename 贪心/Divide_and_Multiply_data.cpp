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
	cout<<1<<endl;
	int n=rand()%14+1;
	cout<<n<<endl;
	for(int i=1;i<=n;++i){
		int x=rand()%15+1;
		cout<<x<<" ";
	}
	return 0;
}
