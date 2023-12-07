#include<bits/stdc++.h>

using namespace std;

string s;
int mx[5]={0,0,0,1,-1};
int my[5]={0,1,-1,0,0};
bool vis[1010][1010];

signed main(){
    ios::sync_with_stdio(0);
    cin>>s;
    int x=500,y=500;
    vis[x][y]=1;
    bool flag=0;
    for(int i=0;i<s.size();++i){
        if(s[i]=='U'){
            x++;
        }
        else if(s[i]=='L'){
            y--;
        }
        else if(s[i]=='R'){
            y++;
        }
        else{
            x--;
        }
        if(vis[x][y]){
            flag=1; break;
        }
        vis[x][y]=1;
        int cnt=0;
        for(int i=1;i<=4;++i){
            int nx=x+mx[i];
            int ny=y+my[i];
            if(vis[nx][ny]){
                cnt++;
            }
        }
        if(cnt!=1){
            flag=1; break;
        }
    }
    if(flag==1){
        cout<<"BUG"<<endl;
    }
    else{
        cout<<"OK"<<endl;
    }
    return 0;
}