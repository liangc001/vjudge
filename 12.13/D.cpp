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

int n,x;
//priority_queue<int,vector<int>,greater<int> > q;
//priority_queue<int> qs;
int ans=0;
int f[400010];

signed main(){
	n=read();
	x=read();
	for(int i=1;i<=n;++i){
		int a=read();
//		cout<<a<<" "<<ans<<endl;
//			if(a<ans){
//				a+=((ans-a)/x)*x;
//				if(a<ans) a+=x;
//			}
//			else if(a>ans){
//				a-=((a-ans)/x)*x;
//				if(a<ans||a<0) a+=x;
//			}
//			if(a==ans){
//					qs.push(a);
//					ans++;
//					int las=0;
//					while(!q.empty()){
//						if(q.top()==ans){
//							ans++;
//							qs.push(q.top()); q.pop();
//						}
//						else if(q.top()==las||q.top()<ans){
//							q.push(q.top()+x);
//							q.pop();
//						}
//						else{
//							break;
//						}
//					}
//				}
//				else{
//					q.push(a);
//				}
		f[a%x]++;
		while(f[ans%x]!=0){
			f[ans%x]--;
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
