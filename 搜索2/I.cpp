#include<iostream>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;

int my[10]={0,-2,-2,-1,-1,1,1,2,2},mx[10]={0,-1,1,-2,2,-2,2,-1,1};

bool vis[30][30];
int n,m;
struct NODE{
    int x,y;
}ans[500];
int all;
int t,cnt;
bool flag=0;

inline void dfs(int x,int y,int tim){
    if(flag==1)return;
    ans[tim].x=x; ans[tim].y=y;
    if(tim==all){
        flag=1; return;
    }
    for(int i=1;i<=8;++i){
        int nx=x+mx[i];
        int ny=y+my[i];
        if(nx>=1&&nx<=n&&ny>=1&&ny<=m){
            if(vis[nx][ny]==1) continue;
            vis[nx][ny]=1;
            dfs(nx,ny,tim+1);
            vis[nx][ny]=0;
        }
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin>>t;
    while(t--){
        cnt++;
        cin>>n>>m;
        flag=0;
        memset(vis,0,sizeof(vis));
        all=n*m;
        vis[1][1]=1;
        dfs(1,1,1);
        cout<<"Scenario #"<<cnt<<":"<<endl;
        if(flag==1){
            for(int i=1;i<=all;++i){
                cout<<(char)(ans[i].y+'A'-1)<<ans[i].x;
            }
            cout<<endl;
        }
        else{
            cout<<"impossible"<<endl;
        }
        cout<<endl;
    }
    return 0;
}