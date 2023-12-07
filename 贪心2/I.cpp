#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int maxa;
//int ans[100];

signed main(){
	int t=read();
	while(t--){
//		memset(ans,0,sizeof(ans));
		int n=read();
		int m=read();
		int k=read();
		if(m==0){
			cout<<0<<endl;
			continue;
		}
		int num=n/k;
		m-=num;
		if(m<=0){
			cout<<m+num<<endl;
			continue;
		}
		maxa=m/(k-1)+(m%(k-1)==0?0:1);
//		while(m>0){
//			bool flag=0;
//			for(int i=1;i<=k-1;++i){
//				if(m==0){
//					flag=1;
//					break;
//				}
////				cout<<i<<endl;
//				m--;
//				ans[i]++;
//				maxa=max(maxa,ans[i]);
//			}
//			if(flag==1){
//				break;
//			}
//		}
//		cout<<"num: "<<num<<endl<<"maxa: "<<maxa<<endl;
		if(num==maxa){
			cout<<0<<endl;
		}
		else
		cout<<num-maxa<<endl;
	}
	return 0;
}
