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
	while(1){
		system("data.exe > in.txt");
		system("test <in.txt > test.txt");
		system("I.exe <in.txt > I.txt");
		if(system("fc I.txt test.txt")) break;
	}
	return 0;
}
