#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

double n;
double k;
string s;
double de,sc;

signed main(){
	cin>>n;
	while(1){
		cin>>k; n--;
		double as=0;
		double sum=0;
		bool flag=0;
		for(int i=1;i<=k;++i){
			cin>>s;
			cin>>de>>sc;
			if(sc<60){
				flag=1;
			}
			sum=sum+de*sc;
			as=as+de;
		}
		if(flag==1) {
			
				cout<<"Sorry!"<<endl; 
				
		if(n!=0) cout<<endl;
				if(n==0){
			break;
		}
				continue;
		}
		as=sum/as;
		printf("%.2lf\n",as);
		if(n!=0) cout<<endl;
		if(n==0){
			break;
		}
	}
	return 0;
}
