#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}
#define maxn 1010
int n;
map<string,int> mp1;
int du[maxn];
int f[maxn][maxn];
//map<int,string> mp2;

//inline int find(int x){
//	if(x==f[x]) return x;
//	else return f[x]=find(f[x]);
//}

signed main(){
	while(1){
		cin>>n;
		if(n==0) break;
		memset(f,0,sizeof(f));
		memset(du,0,sizeof(du));
		mp1.clear(); //mp2.clear();
		string s1[maxn],s2[maxn];
		int cnt=0;
		for(int i=1;i<=n;++i){
			cin>>s1[i]>>s2[i];
			if(!mp1[s1[i]]){
				mp1[s1[i]]=++cnt;
				//mp2[cnt]=s1[i];
			}
			if(!mp1[s2[i]]){
				mp1[s2[i]]=++cnt;
				//mp2[cnt]=s2[i];
			}
			if(!f[mp1[s1[i]]][mp1[s2[i]]]){
				f[mp1[s1[i]]][mp1[s2[i]]]=1;
				du[mp1[s2[i]]]++;
			}
		}
		int flag=0;
		for(int i=1;i<=cnt;++i){
			if(du[i]==0){
				flag++;
			}
		}
		if(flag==1){
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
	}
	return 0;
}
