#include<bits/stdc++.h>
#define int long long
using namespace std;

int a,b,c,d;

signed main(){
	while(cin>>a>>b>>c>>d){
		int sum=0;
		int sum2018=b/2018-(a-1)/2018;
		int sum1=d-c+1;
		sum+=sum2018*sum1;
		int sum1009=0,sum2=0;
		sum1009=b/1009-(a-1)/1009-sum2018;
		sum2=d/2-(c-1)/2;
		sum+=sum1009*sum2;
		int sumx2=0,sumy1009=0;
		sumx2=b/2-(a-1)/2-sum2018;
		sumy1009=d/1009-(c-1)/1009;
		sum+=sumx2*sumy1009;
		int las=b-a+1-sumx2-sum1009-sum2018;
		sum+=las*(d/2018-(c-1)/2018);
		cout<<sum<<endl;
	}
	return 0;
}
