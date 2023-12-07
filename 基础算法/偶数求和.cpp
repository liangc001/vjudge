#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n,m;

signed main(){
	while(cin>>n>>m){
		int sum=0;
		int cnt=0;
		for(int i=2;i<=n*2;i+=2){
			sum+=i;
			cnt++;
			if(cnt==m||i==2*n){
				cout<<sum/cnt;
				if(i!=2*n) cout<<" ";
				cnt=0;
				sum=0;
			}
		}
		cout<<endl;
	}
	return 0;
}
