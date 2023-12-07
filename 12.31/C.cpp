#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;
int x,y;
//1*k+m==now; now

signed main(){
	for(int i=1;i<=100;++i){
		for(int j=1;j<=100;++j){
			if(i%j==(i/j)){
				cout<<i<<" "<<j<<endl;
			}
		}
	}
//	for(int i=1;i<=100;++i){
//		int now_min=i;
//		int sum=0;
//		for(int j=1;j<=i;++j){
//			for(int k=1;k<=j;++k){
//				if(i%j==(i/j)){
//				sum++;
//			}
//			}
//		}
//		cout<<sum<<endl;
//	}
	t=read();
	while(t--){
		x=read(); y=read();
		if(x==1||y==1){
			cout<<0<<endl;
			continue;
		}
		
	}
	
}
