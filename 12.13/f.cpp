#include <bits/stdc++.h>
#include<windows.h>
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
		system("data_.exe > a.txt");
		system("D.exe < a.txt > D.txt");
		system("D_.exe < a.txt > D_.txt");
		if(system("fc D.txt D_.txt")) break;
	}
	return 0;
}
