#include<bits/stdc++.h>
#define int long long
using namespace std;

const double phi=3.1415926535897932;
const double eps=1e-8;
#define maxn 10010
int t,n,f;
double rt[maxn];
double r;

signed main(){
    cin>>t;
    while(t--){
        r=0;
        cin>>n>>f; f++;
        for(int i=1;i<=n;++i){
            cin>>rt[i];
            rt[i]*=rt[i];
            r=max(r,rt[i]);
        }
        double l=0,mid;
        while(r-l>eps){
            mid=(l+r)/2.0;
            int sum=0;
            for(int i=1;i<=n;++i){
                sum+=(int)(rt[i]/mid);
            }
            if(sum>=f){
                l=mid;
            }
            else{
                r=mid;
            }
        }
        printf("%.4lf\n",mid*phi);
    }
    return 0;
}