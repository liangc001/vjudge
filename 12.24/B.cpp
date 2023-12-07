#include<bits/stdc++.h>

using namespace std;

char s[1010],s1[1010];
int cnt=0;
int f1=0,f2=0;

signed main(){
    cin>>s;
    for(int i=1;i<=110;++i){
        if(i%3==0){
            s1[cnt++]='o';
        }
        else{
            s1[cnt++]='x';
        }
    }
    bool f=0;
    for(int i=0;i<3;++i){
        f=0;
        for(int j=0;j<strlen(s);++j){
            if(s[j]!=s1[j+i]){
                f=1; break;
            }
        }
        if(f==0){
            break;
        }
    }
    if(f==1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    return 0;
}