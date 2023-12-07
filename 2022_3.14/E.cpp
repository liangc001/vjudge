#include <bits/stdc++.h>
#define double long double
using namespace std;

const double err = 1e-11;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

double ans[110];
double a,b;
int n;
int cnt;

bool cmp(double a,double b){
	if(a+err<b){
		return 1;
	}
	else return 0;
}

signed main(){
	int t=read();
	while(t--){
		cnt++; memset(ans,0,sizeof(ans));
		int an=0;
		scanf("%d",&n);
		for(int i=1;i<=n;++i){
			string s,s1,s2;
			cin>>s;
			bool flag=0;
			for(int j=0;j<s.size();++j){
				if(s[j]==':'){
					flag=1; continue;
				}
				if(flag==0){
					s1+=s[j];
				}
				else{
					s2+=s[j];
				}
			}
			a=atof(s1.c_str());
			b=atof(s2.c_str());
			ans[i]=1.0/(1.0+(b/a));
		}
		sort(ans+1,ans+1+n,cmp);
		double t=0.0;
		for(int i=1;i<=n;++i){
			t+=ans[i];
			if(t+err<1.0){
				an++;
			}
			else{
				break;
			}
		}
		cout<<"Case #"<<cnt<<": ";
		cout<<an<<endl;
	}
	return 0;
}
