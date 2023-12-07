#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#define int long long

using namespace std;

int n,m;
int dp2[110],dp1[110];
int num[110];

signed main(){
    ios::sync_with_stdio(0);
    while(cin>>n>>m){
    for(int i=1;i<=n;++i){
        cin>>num[i];
        num[i]=num[i]%m;
    }
    dp1[1]=num[1]%m;
    dp2[1]=(2*num[1]-1)%m;
    for(int i=2;i<=n;++i){
        dp1[i]=(dp1[i-1]*2+num[i])%m;
        if(num[i]==1){
            dp2[i]=dp1[i];
        }
        else
        dp2[i]=(dp1[i-1]+num[i]+dp2[i-1]+num[i]+dp1[i-1])%m;
    }
    cout<<dp2[n]<<endl;
    }
    return 0;
}