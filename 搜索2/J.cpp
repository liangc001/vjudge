#include<iostream>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
#define inf 0x7fffffff
using namespace std;

int mp[50][50];
int n,m;
int bx,by;
int ex,ey;
int mx[5]={0,0,1,-1};
int my[5]={1,-1,0,0};
int ans=inf;
bool f;

inline void dfs(int x,int y,int tim){
    if(tim>=10) return;
    for(int i=0;i<4;++i){
        if(!mp[x+mx[i]][y+my[i]]){
            int nx=x;
            int ny=y;
            while(!mp[nx+mx[i]][ny+my[i]]){
                nx=nx+mx[i];
                ny=ny+my[i];
                if(nx==ex&&ny==ey){
                    ans=min(ans,tim+1);
                    f=1;
                    return;
                }
                if(nx<1||nx>n||ny<1||ny>m) break;
            }
            if(nx>=1&&nx<=n&&ny>=1&&ny<=m){
                if(tim+1<10){
                    mp[nx+mx[i]][ny+my[i]]=0;
                    dfs(nx,ny,tim+1);
                    mp[nx+mx[i]][ny+my[i]]=1;
                }
            }
        }
    }
}

signed main(){
    ios::sync_with_stdio(0);
    while(cin>>m>>n){
        if(n==0&&m==0) break;
        memset(mp,0,sizeof(mp));
        ans=inf; f=0;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){
                cin>>mp[i][j];
                if(mp[i][j]==2){
                    bx=i; by=j;
                    mp[i][j]=0;
                }
                else if(mp[i][j]==3){
                    ex=i; ey=j;
                    mp[i][j]=0;
                }
            }
        }
        dfs(bx,by,0);
        if(f==0) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}