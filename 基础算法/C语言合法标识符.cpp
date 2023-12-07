#include<bits/stdc++.h>

using namespace std;

char a[50];

int main(){
	int n;
	cin>>n; getchar();
	while(n--){
		gets(a);
		bool flag=0; 
		for(int i=0;i<strlen(a);++i){
			if(i==0){
				if(!(a[i]=='_'||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))){
					flag=1;
					break;
				}
			}
			else{
				if(!(a[i]=='_'||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9'))){
					flag=1; break;
				}
			}
		}
		if(flag==1){
			cout<<"no"<<endl;
		}
		else{
			cout<<"yes"<<endl;
		}
	}
	return 0;
}
