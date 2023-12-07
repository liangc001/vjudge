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

int ans[100],cnt;
int t;

bool cmp(int a,int b){
	return a>b;
}

signed main(){
	t=read();
	while(t--){
		int n=read(); cnt=0;
		for(int i=1;i<=n;++i){
			int x=read(); ans[++cnt]=x;
		}
		int sum=1;
		for(int i=1;i<=cnt;++i){
			while(ans[i]%2==0){
				ans[i]/=2; sum*=2;
			}
		}
		sort(ans+1,ans+1+cnt,cmp);
		sum*=ans[1];
		for(int i=2;i<=cnt;++i){
			sum+=ans[i];
		}
//		int sum=0;
//		for(int i=1;i<=cnt;++i){
//			if(ans[i]%2==1&&ans[i]!=1){
//				sum=ans[i]; ans[i]=0; break;
//			}
//		}
//		if(sum==0){
//			sum=ans[1]; ans[1]=0;
//		}
////		cout<<sum<<endl;
//		for(int i=1;i<=cnt;++i){
//			if(ans[i]==0) continue;
//			else if(ans[i]%2==1){
//				continue;
//			}
//			else{
//				while(ans[i]%2==0){
//					ans[i]/=2; sum*=2;
//				}
//			}
//		}
//		for(int i=1;i<=cnt;++i){
//			sum+=ans[i];
//		}
		cout<<sum<<endl;
//		cout<<<<endl;
	}
	return 0;
}
