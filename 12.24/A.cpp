#include<bits/stdc++.h>

using namespace std;

int n;

signed main(){
    cin>>n;
    cout<<"AGC0";
    if(n>=42){
        cout<<n+1;
    }
    else if(n>=10){
        cout<<n;
    }
    else{
        cout<<"0"<<n;
    }
    return 0;
}