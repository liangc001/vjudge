#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

char a[110];

signed main(){
	while(gets(a)){
		bool flag=0;
		for(int i=0;i<strlen(a);++i){
			if(flag==0&&a[i]<='z'&&a[i]>='a'){
//				cout<<(char)(a[i]+32);
				printf("%c",a[i]-32);
				flag=1;
				continue;
			}
			if(flag==1&&a[i]==' '){
				flag=0;
			}
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}
