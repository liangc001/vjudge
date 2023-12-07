//初始魔力 n
//有m秒 从第一秒开始游戏
//花费x个魔力召唤一个水元素
//花费一秒每次回复min(p+y,n)点魔力

#include<bits/stdc++.h>

using namespace std;

inline int read(){
    int x=0,t=1; char ch=getchar();
    while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
    if(ch=='-') t=-1,ch=getchar();
    while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
    return x*t;
}

int t;
int n,m,x,y;
int f[10010][2];
//f[0]是现在的n，f[1]是现在的ans

signed main(){
    t=read();
    while(t--){
        n=read(); m=read(); x=read(); y=read();
        for(int i=0;i<=m;++i){
            f[i][0]=f[i][1]=0;
        }
        if(x<=y){
            cout<<m<<endl;
            continue;
        }
        f[0][0]=n;
        for(int i=1;i<=m;++i){
            if(f[i-1][0]>=x){
                f[i][1]=f[i-1][1]+1;
                f[i][0]=f[i-1][0]-x+y;
            }
            for(int j=i-1;j>=1;--j){
                int now_n=min(f[j][0]-y+x+(i-j)*y,n);
                if(now_n>=x){
                    if(f[i][1]<f[j-1][1]+1){
                        f[i][1]=f[j-1][1]+1;
                        f[i][0]=now_n-x+y;
                    }
                }
            }
        }
        cout<<f[m][1]<<endl;
    }
    return 0;
}