#include<bits/stdc++.h>
#define int long long
using namespace std;

inline int read(){
    int x=0,t=1; char ch=getchar();
    while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
    if(ch=='-') t=-1,ch=getchar();
    while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
    return x*t;
}

#define maxn 50010
int n,m;
struct ED{
    int ha;
    int ne;
}a[5][maxn];
int las[5];

struct kk{
    int las,num;
}b[5];

bool cmp(ED x,ED y){
    return x.ha<y.ha;
}

signed main(){
    while(scanf("%d%d",&n,&m)!=-1){
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            a[i][j].ha=read();
        }
    }
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            a[i][j].ne=read();
        }
    }
    for(int i=1;i<=m;++i) b[i].las=read(),b[i].num=i;
    if(m==1){
        sort(a[1]+1,a[1]+1+n,cmp);
        for(int i=1;i<=n;++i){
            if(a[1][i].ha+b[i].las[1]<a[1][i].ne){
                printf("No\n");
                break;
            }
            else b[1].las+=a[1][i].ha;
        }
    }
    else if(m==2){

    }
    }
}