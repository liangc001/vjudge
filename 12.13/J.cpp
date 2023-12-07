#include <bits/stdc++.h>
using namespace std;

inline int read(){
	int x=0,t=1; char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if(ch=='-') t=-1,ch=getchar();
	while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
	return x*t;
}

int t;
char s[100010];
struct KO{
	int num;
	char id;
}o[28];

inline bool cmp(KO x,KO y){
	return x.id<y.id;
}

signed main(){
	t=read();
	while(t--){
		int len=read();
		int k=read();
		cin>>s;
		for(int i=0;i<len;++i){
			o[s[i]-'a'].id=a[i];
			o[s[i]-'a'].num++;
		}
		sort(o+1,o+1+28,cmp);
		int end=0;
		for(int i=1;i<=28;++i){
			if(o[i].num==0){
				end=i; break;
			}
		}
		for(int i=1;i<=end;++i){
			if(o[i].num%k!=0){
				int las=o[i].num%k;
				for(int j=i+1;j<=end;++j){
					if(o[j].id>o[i].id&&k-o[j].num%k!=0){
						int now=k-o[j].num%k;
						o[j].num+=now;
						las-=now;
					}
				}
			}
		}
	}
}
