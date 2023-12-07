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
int n;
int a[50];

signed main(){
	t=read();
	while(t--){
		n=read();
		int num1=0,num2=0;
		for(int i=0;i<n;++i){
			a[i]=read();
			if(i%2==1&&a[i]%2==0){
				num1++;
			}
			if(i%2==0&&a[i]%2==1){
				num2++;
			}
		}
		if(num1==num2){
			cout<<num1<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}
