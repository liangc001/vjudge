#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int n;
int t[100010];int num1,num2;
int las_num1,las_num2;
int ans;

signed main(){
	n=read();
	for(int i=1;i<=n;++i){
		t[i]=read();
	}
	for(int i=1;i<=n;++i){
	
		if(t[i]==1){
			num1++; if(num2)num2=0;
		}
		else{
			num2++; if(num1)num1=0;
		}
		if(t[i]==1&&t[i+1]==2){
			 las_num1=num1;
		}
		if(t[i]==2&&t[i+1]==1){
			  las_num2=num2;
		}
		if(las_num2>=num1){
			ans=max(ans,2*num1);
		}
		if(las_num1>=num2){
			ans=max(ans,2*num2);
		}
	}
	cout<<ans<<endl;
	return 0;
}
